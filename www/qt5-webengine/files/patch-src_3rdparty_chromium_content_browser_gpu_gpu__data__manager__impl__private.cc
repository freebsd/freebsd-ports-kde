--- src/3rdparty/chromium/content/browser/gpu/gpu_data_manager_impl_private.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/browser/gpu/gpu_data_manager_impl_private.cc
@@ -207,10 +207,13 @@ void DisplayReconfigCallback(CGDirectDisplayID display
   bool gpu_changed = false;
   if (flags & kCGDisplayAddFlag) {
     gpu::GPUInfo gpu_info;
+// YYY
+#ifndef OS_BSD
     if (gpu::CollectBasicGraphicsInfo(&gpu_info)) {
       gpu_changed = manager->UpdateActiveGpu(gpu_info.active_gpu().vendor_id,
                                              gpu_info.active_gpu().device_id);
     }
+#endif
   }
 
   if (gpu_changed)
