--- src/3rdparty/chromium/gpu/ipc/common/gpu_memory_buffer_support.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/gpu/ipc/common/gpu_memory_buffer_support.h
@@ -16,7 +16,7 @@
 #include "ui/gfx/geometry/size.h"
 #include "ui/gfx/gpu_memory_buffer.h"
 
-#if defined(OS_LINUX) || defined(USE_OZONE)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(USE_OZONE)
 namespace gfx {
 class ClientNativePixmapFactory;
 }
@@ -28,7 +28,7 @@ namespace gpu {
 class GPU_EXPORT GpuMemoryBufferSupport {
  public:
   GpuMemoryBufferSupport();
-#if defined(OS_LINUX) || defined(USE_OZONE)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(USE_OZONE)
   GpuMemoryBufferSupport(std::unique_ptr<gfx::ClientNativePixmapFactory>
                              client_native_pixmap_factory);
 #endif
@@ -42,7 +42,7 @@ class GPU_EXPORT GpuMemoryBufferSupport {
   bool IsNativeGpuMemoryBufferConfigurationSupported(gfx::BufferFormat format,
                                                      gfx::BufferUsage usage);
 
-#if defined(OS_LINUX) || defined(USE_OZONE)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(USE_OZONE)
   gfx::ClientNativePixmapFactory* client_native_pixmap_factory() {
     return client_native_pixmap_factory_.get();
   }
@@ -65,7 +65,7 @@ class GPU_EXPORT GpuMemoryBufferSupport {
       const GpuMemoryBufferImpl::DestructionCallback& callback);
 
  private:
-#if defined(OS_LINUX) || defined(USE_OZONE)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(USE_OZONE)
   std::unique_ptr<gfx::ClientNativePixmapFactory> client_native_pixmap_factory_;
 #endif
 
