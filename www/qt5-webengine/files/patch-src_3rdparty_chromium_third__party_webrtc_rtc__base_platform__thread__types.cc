--- src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc
@@ -11,10 +11,19 @@
 #include "rtc_base/platform_thread_types.h"
 
 #if defined(WEBRTC_LINUX)
+#if !defined(__FreeBSD__)
 #include <sys/prctl.h>
+#endif
 #include <sys/syscall.h>
 #endif
 
+#if defined(WEBRTC_BSD)
+#include <pthread.h>
+#include <pthread_np.h>
+#include <sys/syscall.h>
+#include <sys/thr.h>
+#endif
+
 namespace rtc {
 
 PlatformThreadId CurrentThreadId() {
@@ -23,11 +32,13 @@ PlatformThreadId CurrentThreadId() {
 #elif defined(WEBRTC_POSIX)
 #if defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   return pthread_mach_thread_np(pthread_self());
+#elif defined(WEBRTC_BSD)
+  return reinterpret_cast<int>(pthread_getthreadid_np());
 #elif defined(WEBRTC_ANDROID)
   return gettid();
 #elif defined(WEBRTC_FUCHSIA)
   return zx_thread_self();
-#elif defined(WEBRTC_LINUX)
+#elif defined(WEBRTC_LINUX) && !defined(__FreeBSD__)
   return syscall(__NR_gettid);
 #else
   // Default implementation for nacl and solaris.
@@ -55,6 +66,7 @@ bool IsThreadRefEqual(const PlatformThreadRef& a, cons
 }
 
 void SetCurrentThreadName(const char* name) {
+#if !defined(__FreeBSD__)
 #if defined(WEBRTC_WIN)
   struct {
     DWORD dwType;
@@ -72,6 +84,7 @@ void SetCurrentThreadName(const char* name) {
   prctl(PR_SET_NAME, reinterpret_cast<unsigned long>(name));  // NOLINT
 #elif defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   pthread_setname_np(name);
+#endif
 #endif
 }
 
