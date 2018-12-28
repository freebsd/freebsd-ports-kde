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
@@ -84,7 +84,7 @@ bool CanAccessNvidiaDeviceFile() {
   }
   return res;
 }
-#endif  // OS_LINUX && !OS_CHROMEOS && !IS_CHROMECAST
+#endif  // OS_LINUX && !OS_CHROMEOS && !IS_CHROMECAST && !OS_BSD
 
 }  // namespace
 
@@ -110,7 +110,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   // crash during feature collection.
   gpu::SetKeysForCrashLogging(gpu_info_);
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(OS_BSD)
   if (gpu_info_.gpu.vendor_id == 0x10de &&  // NVIDIA
       gpu_info_.gpu.driver_vendor == "NVIDIA" && !CanAccessNvidiaDeviceFile())
     return false;
@@ -121,7 +121,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
     gpu_feature_info_ = gpu::ComputeGpuFeatureInfo(
         gpu_info_, gpu_preferences_, command_line, &needs_more_info);
   }
-#endif  // !OS_ANDROID && !IS_CHROMECAST
+#endif  // !OS_ANDROID && !IS_CHROMECAST && !OS_BSD
   gpu_info_.in_process_gpu = false;
 
   bool use_swiftshader = false;
@@ -194,7 +194,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   sandbox_helper_->PreSandboxStartup();
 
   bool attempted_startsandbox = false;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
   // On Chrome OS ARM Mali, GPU driver userspace creates threads when
   // initializing a GL context, so start the sandbox early.
   // TODO(zmo): Need to collect OS version before this.
@@ -203,7 +203,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
         watchdog_thread_.get(), &gpu_info_, gpu_preferences_);
     attempted_startsandbox = true;
   }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) && !defined(OS_BSD)
 
   base::TimeTicks before_initialize_one_off = base::TimeTicks::Now();
 
