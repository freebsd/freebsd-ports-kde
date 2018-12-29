--- src/3rdparty/chromium/content/browser/renderer_host/pepper/pepper_truetype_font_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/browser/renderer_host/pepper/pepper_truetype_font_linux.cc
@@ -76,12 +76,15 @@ int32_t PepperTrueTypeFontLinux::Initialize(
     }
   }
 
+/// YYY
+#if !defined(OS_BSD)
   fd_.reset(font_service::MatchFontFaceWithFallback(
       desc->family, desc->weight >= PP_TRUETYPEFONTWEIGHT_BOLD,
       desc->style & PP_TRUETYPEFONTSTYLE_ITALIC, desc->charset,
       PP_BROWSERFONT_TRUSTED_FAMILY_DEFAULT));
   // TODO(bbudge) Modify content API to return results of font matching and
   // fallback, so we can update |desc| to reflect that.
+#endif
   return fd_.is_valid() ? PP_OK : PP_ERROR_FAILED;
 }
 
