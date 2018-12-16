--- src/3rdparty/chromium/gpu/config/gpu_info_collector.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/gpu/config/gpu_info_collector.cc
@@ -262,8 +262,10 @@ bool CollectGraphicsInfoGL(GPUInfo* gpu_info,
   gpu_info->pixel_shader_version = glsl_version;
   gpu_info->vertex_shader_version = glsl_version;
 
+#ifndef __FreeBSD__
   IdentifyActiveGPU(gpu_info);
   return true;
+#endif
 }
 
 void IdentifyActiveGPU(GPUInfo* gpu_info) {
