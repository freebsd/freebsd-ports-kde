--- src/3rdparty/chromium/ui/platform_window/platform_window_init_properties.h.orig	2020-03-16 14:04:24 UTC
+++ src/3rdparty/chromium/ui/platform_window/platform_window_init_properties.h
@@ -73,7 +73,7 @@ struct PlatformWindowInitProperties {
   bool remove_standard_frame = false;
   std::string workspace;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   bool prefer_dark_theme = false;
   gfx::ImageSkia* icon = nullptr;
   base::Optional<int> background_color;
