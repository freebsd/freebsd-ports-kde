--- src/3rdparty/chromium/services/catalog/public/cpp/manifest_parsing_util.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/services/catalog/public/cpp/manifest_parsing_util.cc
@@ -23,7 +23,7 @@ bool IsValidPlatformName(const std::string& name) {
 bool IsCurrentPlatform(const std::string& name) {
 #if defined(OS_WIN)
   return name == Store::kRequiredFilesKey_PlatformValue_Windows;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return name == Store::kRequiredFilesKey_PlatformValue_Linux;
 #elif defined(OS_MACOSX)
   return name == Store::kRequiredFilesKey_PlatformValue_MacOSX;
