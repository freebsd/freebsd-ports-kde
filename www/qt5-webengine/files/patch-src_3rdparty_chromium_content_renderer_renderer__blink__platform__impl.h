--- src/3rdparty/chromium/content/renderer/renderer_blink_platform_impl.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/renderer/renderer_blink_platform_impl.h
@@ -29,7 +29,7 @@
 #include "third_party/blink/public/platform/modules/indexeddb/web_idb_factory.h"
 #include "third_party/blink/public/platform/modules/webdatabase/web_database.mojom.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD) // YYY
 #include "components/services/font/public/cpp/font_loader.h"  // nogncheck
 #include "third_party/skia/include/core/SkRefCnt.h"           // nogncheck
 #endif
@@ -265,7 +265,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
   std::unique_ptr<blink::WebThread> main_thread_;
   std::unique_ptr<service_manager::Connector> connector_;
 
-#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_FUCHSIA) && !defined(OS_BSD)
   class SandboxSupport;
   std::unique_ptr<SandboxSupport> sandbox_support_;
 #endif
@@ -301,7 +301,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
   blink::mojom::WebDatabaseHostPtrInfo web_database_host_info_;
   scoped_refptr<blink::mojom::ThreadSafeWebDatabaseHostPtr> web_database_host_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD) // YYY
   sk_sp<font_service::FontLoader> font_loader_;
 #endif
 
