--- src/3rdparty/chromium/ui/gfx/gpu_memory_buffer.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/ui/gfx/gpu_memory_buffer.cc
@@ -46,7 +46,7 @@ GpuMemoryBufferHandle CloneHandleForIPC(
       gfx::GpuMemoryBufferHandle handle;
       handle.type = gfx::NATIVE_PIXMAP;
       handle.id = source_handle.id;
-#if defined(OS_LINUX) && !defined(TOOLKIT_QT)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(TOOLKIT_QT)
       handle.native_pixmap_handle =
           gfx::CloneHandleForIPC(source_handle.native_pixmap_handle);
 #endif
