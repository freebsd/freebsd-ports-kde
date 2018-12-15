--- src/3rdparty/chromium/content/gpu/gpu_sandbox_hook_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/gpu/gpu_sandbox_hook_linux.cc
@@ -68,7 +68,7 @@ inline bool UseLibV4L2() {
 #endif
 }
 
-constexpr int dlopen_flag = RTLD_NOW | RTLD_GLOBAL | RTLD_NODELETE;
+constexpr int dlopen_flag = RTLD_NOW | RTLD_GLOBAL;
 
 void AddV4L2GpuWhitelist(
     std::vector<BrokerFilePermission>* permissions,
