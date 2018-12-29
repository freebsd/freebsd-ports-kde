--- src/3rdparty/chromium/third_party/blink/renderer/platform/fonts/font_cache.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/fonts/font_cache.h
@@ -217,7 +217,7 @@ class PLATFORM_EXPORT FontCache {
       const FontDescription&);
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   struct PlatformFallbackFont {
     String name;
     CString filename;
@@ -229,7 +229,7 @@ class PLATFORM_EXPORT FontCache {
   static void GetFontForCharacter(UChar32,
                                   const char* preferred_locale,
                                   PlatformFallbackFont*);
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
   scoped_refptr<SimpleFontData> FontDataFromFontPlatformData(
       const FontPlatformData*,
@@ -291,7 +291,7 @@ class PLATFORM_EXPORT FontCache {
                                const FontFaceCreationParams&,
                                CString& name);
 
-#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_FUCHSIA)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_FUCHSIA) || defined(OS_BSD)
   static AtomicString GetFamilyNameForCharacter(SkFontMgr*,
                                                 UChar32,
                                                 const FontDescription&,
