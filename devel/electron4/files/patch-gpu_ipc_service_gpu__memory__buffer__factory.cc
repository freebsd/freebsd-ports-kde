--- gpu/ipc/service/gpu_memory_buffer_factory.cc.orig	2019-03-15 06:25:45 UTC
+++ gpu/ipc/service/gpu_memory_buffer_factory.cc
@@ -12,7 +12,7 @@
 #include "gpu/ipc/service/gpu_memory_buffer_factory_io_surface.h"
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "gpu/ipc/service/gpu_memory_buffer_factory_native_pixmap.h"
 #endif
 
@@ -33,7 +33,7 @@ GpuMemoryBufferFactory::CreateNativeType() {
   return base::WrapUnique(new GpuMemoryBufferFactoryIOSurface);
 #elif defined(OS_ANDROID)
   return base::WrapUnique(new GpuMemoryBufferFactoryAndroidHardwareBuffer);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return base::WrapUnique(new GpuMemoryBufferFactoryNativePixmap);
 #elif defined(OS_WIN)
   return base::WrapUnique(new GpuMemoryBufferFactoryDXGI);
