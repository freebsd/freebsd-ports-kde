--- src/3rdparty/chromium/ui/gl/gl_image_native_pixmap.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/ui/gl/gl_image_native_pixmap.cc
@@ -285,7 +285,7 @@ gfx::NativePixmapHandle GLImageNativePixmap::ExportHan
     }
   }
 
-#if defined(OS_FUCHSIA)
+#if defined(OS_FUCHSIA) || defined(OS_BSD)
   // TODO(crbug.com/852011): Implement image handle export on Fuchsia.
   NOTIMPLEMENTED();
   return gfx::NativePixmapHandle();
