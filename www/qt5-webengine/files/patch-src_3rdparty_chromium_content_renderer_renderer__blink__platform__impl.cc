--- src/3rdparty/chromium/content/renderer/renderer_blink_platform_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/renderer/renderer_blink_platform_impl.cc
@@ -123,7 +123,7 @@
 
 #if defined(OS_POSIX)
 #include "base/file_descriptor_posix.h"
-#if !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include <map>
 #include <string>
 
@@ -203,7 +203,7 @@ gpu::ContextType ToGpuContextType(blink::Platform::Con
 
 //------------------------------------------------------------------------------
 
-#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
 class RendererBlinkPlatformImpl::SandboxSupport
     : public blink::WebSandboxSupport {
  public:
@@ -217,7 +217,7 @@ class RendererBlinkPlatformImpl::SandboxSupport
   bool LoadFont(CTFontRef src_font,
                 CGFontRef* container,
                 uint32_t* font_id) override;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD) // YYY
   void GetFallbackFontForCharacter(
       blink::WebUChar32 character,
       const char* preferred_locale,
@@ -238,7 +238,7 @@ class RendererBlinkPlatformImpl::SandboxSupport
   sk_sp<font_service::FontLoader> font_loader_;
 #endif
 };
-#endif  // !defined(OS_ANDROID) && !defined(OS_WIN)
+#endif  // !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
 
 //------------------------------------------------------------------------------
 
@@ -267,7 +267,7 @@ RendererBlinkPlatformImpl::RendererBlinkPlatformImpl(
     web_idb_factory_.reset(new WebIDBFactoryImpl(
         sync_message_filter_,
         RenderThreadImpl::current()->GetIOTaskRunner().get()));
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD) // YYY
     font_loader_ = sk_make_sp<font_service::FontLoader>(connector_.get());
     SkFontConfigInterface::SetGlobal(font_loader_);
 #endif
@@ -276,7 +276,7 @@ RendererBlinkPlatformImpl::RendererBlinkPlatformImpl(
     connector_ = service_manager::Connector::Create(&request);
   }
 
-#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
   if (g_sandbox_enabled && sandboxEnabled()) {
 #if defined(OS_MACOSX)
     sandbox_support_.reset(new RendererBlinkPlatformImpl::SandboxSupport());
@@ -304,7 +304,7 @@ RendererBlinkPlatformImpl::~RendererBlinkPlatformImpl(
 }
 
 void RendererBlinkPlatformImpl::Shutdown() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
   // SandboxSupport contains a map of WebFallbackFont objects, which hold
   // WebStrings and WebVectors, which become invalidated when blink is shut
   // down. Hence, we need to clear that map now, just before blink::shutdown()
@@ -396,7 +396,7 @@ blink::BlameContext* RendererBlinkPlatformImpl::GetTop
 }
 
 blink::WebSandboxSupport* RendererBlinkPlatformImpl::GetSandboxSupport() {
-#if defined(OS_ANDROID) || defined(OS_WIN) || defined(OS_FUCHSIA)
+#if defined(OS_ANDROID) || defined(OS_WIN) || defined(OS_FUCHSIA) || defined(OS_BSD)
   // These platforms do not require sandbox support.
   return NULL;
 #else
@@ -589,7 +589,7 @@ bool RendererBlinkPlatformImpl::SandboxSupport::LoadFo
   return content::LoadFont(src_font, out, font_id);
 }
 
-#elif defined(OS_POSIX) && !defined(OS_ANDROID)
+#elif defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 
 void RendererBlinkPlatformImpl::SandboxSupport::GetFallbackFontForCharacter(
     blink::WebUChar32 character,
