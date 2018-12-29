--- src/3rdparty/chromium/content/ppapi_plugin/ppapi_blink_platform_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/ppapi_plugin/ppapi_blink_platform_impl.cc
@@ -20,7 +20,7 @@
 
 #if defined(OS_MACOSX)
 #include "third_party/blink/public/platform/mac/web_sandbox_support.h"
-#elif defined(OS_POSIX) && !defined(OS_ANDROID)
+#elif defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include "content/child/child_process_sandbox_support_impl_linux.h"
 #include "third_party/blink/public/platform/linux/web_fallback_font.h"
 #include "third_party/blink/public/platform/linux/web_sandbox_support.h"
@@ -36,7 +36,7 @@ typedef struct CGFont* CGFontRef;
 
 namespace content {
 
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
 
 class PpapiBlinkPlatformImpl::SandboxSupport : public WebSandboxSupport {
  public:
@@ -126,7 +126,7 @@ void PpapiBlinkPlatformImpl::SandboxSupport::GetWebFon
 
 #endif
 
-#endif  // !defined(OS_ANDROID) && !defined(OS_WIN)
+#endif  // !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
 
 PpapiBlinkPlatformImpl::PpapiBlinkPlatformImpl() {
 #if defined(OS_LINUX)
@@ -144,7 +144,7 @@ PpapiBlinkPlatformImpl::~PpapiBlinkPlatformImpl() {
 }
 
 void PpapiBlinkPlatformImpl::Shutdown() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   // SandboxSupport contains a map of WebFallbackFont objects, which hold
   // WebStrings and WebVectors, which become invalidated when blink is shut
   // down. Hence, we need to clear that map now, just before blink::shutdown()
@@ -158,7 +158,7 @@ blink::WebThread* PpapiBlinkPlatformImpl::CurrentThrea
 }
 
 blink::WebSandboxSupport* PpapiBlinkPlatformImpl::GetSandboxSupport() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   return sandbox_support_.get();
 #else
   return nullptr;
