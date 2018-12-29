--- src/3rdparty/chromium/third_party/blink/renderer/platform/fonts/font_platform_data.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/fonts/font_platform_data.cc
@@ -337,7 +337,7 @@ WebFontRenderStyle FontPlatformData::QuerySystemRender
     SkFontStyle font_style) {
   WebFontRenderStyle result;
 
-#if !defined(OS_ANDROID) && !defined(OS_FUCHSIA)
+#if !defined(OS_ANDROID) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
   // If the the sandbox is disabled, we can query font parameters directly.
   if (!Platform::Current()->GetSandboxSupport()) {
     gfx::FontRenderParamsQuery query;
