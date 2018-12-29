--- src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc
@@ -26,6 +26,10 @@
 #include <sys/sysctl.h>  // NOLINT, for sysctl
 #endif
 
+#if V8_OS-NETBSD
+#include <lwp.h>	// for _lwp_self
+#endif
+
 #if defined(ANDROID) && !defined(V8_ANDROID_LOG_STDOUT)
 #define LOG_TAG "v8"
 #include <android/log.h>  // NOLINT
@@ -496,6 +500,12 @@ int OS::GetCurrentThreadId() {
   return static_cast<int>(syscall(__NR_gettid));
 #elif V8_OS_ANDROID
   return static_cast<int>(gettid());
+#elif V8_OS_DRAGONFLYBSD || defined(__DragonFly__)
+  return static_cast<int>(lwp_gettid());
+#elif V8_OS_FREEBSD
+  return static_cast<int>(pthread_getthreadid_np());
+#elif V8_OS_NETBSD
+  return static_cast<int>(_lwp_self());
 #elif V8_OS_AIX
   return static_cast<int>(thread_self());
 #elif V8_OS_FUCHSIA
