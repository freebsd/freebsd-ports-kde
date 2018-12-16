--- src/3rdparty/chromium/components/services/font/font_service_app.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/components/services/font/font_service_app.cc
@@ -210,7 +210,8 @@ void FontServiceApp::MatchFontWithFallback(
     uint32_t charset,
     uint32_t fallbackFamilyType,
     MatchFontWithFallbackCallback callback) {
-#if BUILDFLAG(ENABLE_PLUGINS)
+// YYY
+#if BUILDFLAG(ENABLE_PLUGINS) || defined(OS_BSD)
   base::File matched_font_file;
   int font_file_descriptor = MatchFontFaceWithFallback(
       family, is_bold, is_italic, charset, fallbackFamilyType);
