--- chrome/browser/net/system_network_context_manager.cc.orig	2019-03-11 22:00:53 UTC
+++ chrome/browser/net/system_network_context_manager.cc
@@ -69,12 +69,12 @@
 #include "chrome/browser/chromeos/policy/browser_policy_connector_chromeos.h"
 #endif  // defined(OS_CHROMEOS)
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
 #include "chrome/common/chrome_paths_internal.h"
 #include "chrome/common/chrome_switches.h"
 #include "chrome/grit/chromium_strings.h"
 #include "ui/base/l10n/l10n_util.h"
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
 
 namespace {
 
@@ -519,7 +519,7 @@ void SystemNetworkContextManager::OnNetworkServiceCrea
   content::GetNetworkService()->ConfigureStubHostResolver(
       stub_resolver_enabled, std::move(dns_over_https_servers));
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   const base::CommandLine& command_line =
       *base::CommandLine::ForCurrentProcess();
 
