--- src/3rdparty/chromium/content/browser/utility_process_host.cc.orig	2020-03-16 14:04:24 UTC
+++ src/3rdparty/chromium/content/browser/utility_process_host.cc
@@ -56,7 +56,7 @@
 #include "services/network/network_sandbox_win.h"
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "components/services/font/public/mojom/font_service.mojom.h"  // nogncheck
 #include "content/browser/font_service.h"  // nogncheck
 #endif
@@ -217,7 +217,7 @@ UtilityProcessHost::UtilityProcessHost()
 
 UtilityProcessHost::UtilityProcessHost(std::unique_ptr<Client> client)
     : sandbox_type_(service_manager::SANDBOX_TYPE_UTILITY),
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       child_flags_(ChildProcessHost::CHILD_ALLOW_SELF),
 #else
       child_flags_(ChildProcessHost::CHILD_NORMAL),
@@ -523,7 +523,7 @@ base::Optional<std::string> UtilityProcessHost::GetSer
 
 void UtilityProcessHost::BindHostReceiver(
     mojo::GenericPendingReceiver receiver) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   if (auto font_receiver = receiver.As<font_service::mojom::FontService>()) {
     ConnectToFontService(std::move(font_receiver));
     return;
