--- src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/threading_pthreads.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/threading_pthreads.cc
@@ -51,14 +51,19 @@
 #include <objc/objc-auto.h>
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include <sys/syscall.h>
 #endif
 
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
 #include <unistd.h>
 #endif
 
+#if defined(OS_BSD)
+#include <sys/signal.h>
+#include <pthread_np.h>
+#endif
+
 namespace WTF {
 
 namespace internal {
@@ -68,6 +73,8 @@ ThreadIdentifier CurrentThreadSyscall() {
   return pthread_mach_thread_np(pthread_self());
 #elif defined(OS_LINUX)
   return syscall(__NR_gettid);
+#elif defined(OS_BSD)
+  return pthread_getthreadid_np();
 #elif defined(OS_ANDROID)
   return gettid();
 #else
