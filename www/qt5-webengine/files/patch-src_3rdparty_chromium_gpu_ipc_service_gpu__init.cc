--- src/3rdparty/chromium/gpu/ipc/service/gpu_init.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/gpu/ipc/service/gpu_init.cc
@@ -74,7 +74,7 @@ bool CollectGraphicsInfo(GPUInfo* gpu_info,
   return success;
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(IS_CHROMECAST)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(IS_CHROMECAST) && !defined(OS_BSD)
 bool CanAccessNvidiaDeviceFile() {
   bool res = true;
   base::AssertBlockingAllowed();
@@ -110,7 +110,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   // crash during feature collection.
   gpu::SetKeysForCrashLogging(gpu_info_);
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(OS_BSD)
   if (gpu_info_.gpu.vendor_id == 0x10de &&  // NVIDIA
       gpu_info_.gpu.driver_vendor == "NVIDIA" && !CanAccessNvidiaDeviceFile())
     return false;
@@ -194,7 +194,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   sandbox_helper_->PreSandboxStartup();
 
   bool attempted_startsandbox = false;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
   // On Chrome OS ARM Mali, GPU driver userspace creates threads when
   // initializing a GL context, so start the sandbox early.
   // TODO(zmo): Need to collect OS version before this.
