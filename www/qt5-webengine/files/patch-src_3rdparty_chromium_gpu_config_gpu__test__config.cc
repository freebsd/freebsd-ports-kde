--- src/3rdparty/chromium/gpu/config/gpu_test_config.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/gpu/config/gpu_test_config.cc
@@ -25,7 +25,7 @@ namespace {
 GPUTestConfig::OS GetCurrentOS() {
 #if defined(OS_CHROMEOS)
   return GPUTestConfig::kOsChromeOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return GPUTestConfig::kOsLinux;
 #elif defined(OS_WIN)
   int32_t major_version = 0;
@@ -253,12 +253,17 @@ bool GPUTestBotConfig::LoadCurrentConfig(const GPUInfo
     rt = false;
 #else
     GPUInfo my_gpu_info;
+#if defined(OS_FREEBSD)
+    rt = false;
+    LOG(WARNING) << "CollectGpuID not present on FreeBSD";
+#else
     if (!CollectBasicGraphicsInfo(&my_gpu_info)) {
       LOG(ERROR) << "Fail to identify GPU";
       rt = false;
     } else {
       rt = SetGPUInfo(my_gpu_info);
     }
+#endif
 #endif  // OS_ANDROID
   } else {
     rt = SetGPUInfo(*gpu_info);
