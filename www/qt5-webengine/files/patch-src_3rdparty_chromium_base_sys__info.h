--- src/3rdparty/chromium/base/sys_info.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/sys_info.h
@@ -171,7 +171,7 @@ class BASE_EXPORT SysInfo {
   static int64_t AmountOfAvailablePhysicalMemoryImpl();
   static bool IsLowEndDeviceImpl();
 
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_AIX)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_AIX) || defined(OS_BSD)
   static int64_t AmountOfAvailablePhysicalMemory(
       const SystemMemoryInfoKB& meminfo);
 #endif
