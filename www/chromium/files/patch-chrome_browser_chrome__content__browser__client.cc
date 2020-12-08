--- chrome/browser/chrome_content_browser_client.cc.orig	2020-11-13 06:36:36 UTC
+++ chrome/browser/chrome_content_browser_client.cc
@@ -424,7 +424,7 @@
 #include "components/user_manager/user.h"
 #include "components/user_manager/user_manager.h"
 #include "services/service_manager/public/mojom/interface_provider_spec.mojom.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #include "chrome/browser/chrome_browser_main_linux.h"
 #elif defined(OS_ANDROID)
 #include "base/android/application_status_listener.h"
@@ -482,7 +482,7 @@
 #endif  //  !defined(OS_ANDROID)
 
 #if defined(OS_WIN) || defined(OS_MAC) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_navigation_throttle.h"
 #endif
 
@@ -514,7 +514,7 @@
 #include "chrome/browser/ui/views/chrome_browser_main_extra_parts_views.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/ui/views/chrome_browser_main_extra_parts_views_linux.h"
 #endif
 
@@ -833,11 +833,13 @@ breakpad::CrashHandlerHostLinux* CreateCrashHandlerHos
 }
 
 int GetCrashSignalFD(const base::CommandLine& command_line) {
+#if !defined(OS_BSD)
   if (crash_reporter::IsCrashpadEnabled()) {
     int fd;
     pid_t pid;
     return crash_reporter::GetHandlerSocket(&fd, &pid) ? fd : -1;
   }
+#endif
 
   // Extensions have the same process type as renderers.
   if (command_line.HasSwitch(extensions::switches::kExtensionProcess)) {
@@ -1354,7 +1356,7 @@ ChromeContentBrowserClient::CreateBrowserMainParts(
 #elif defined(OS_CHROMEOS)
   main_parts = std::make_unique<chromeos::ChromeBrowserMainPartsChromeos>(
       parameters, startup_data_);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   main_parts =
       std::make_unique<ChromeBrowserMainPartsLinux>(parameters, startup_data_);
 #elif defined(OS_ANDROID)
@@ -1380,7 +1382,7 @@ ChromeContentBrowserClient::CreateBrowserMainParts(
     // Construct additional browser parts. Stages are called in the order in
     // which they are added.
 #if defined(TOOLKIT_VIEWS)
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   main_parts->AddParts(
       std::make_unique<ChromeBrowserMainExtraPartsViewsLinux>());
 #else
@@ -2134,7 +2136,7 @@ void ChromeContentBrowserClient::AppendExtraCommandLin
     command_line->AppendSwitchASCII(switches::kMetricsClientID,
                                     client_info->client_id);
   }
-#elif defined(OS_POSIX)
+#elif defined(OS_POSIX) && !defined(OS_BSD)
 #if defined(OS_ANDROID)
   bool enable_crash_reporter = true;
 #else
@@ -3728,7 +3730,7 @@ void ChromeContentBrowserClient::GetAdditionalFileSyst
   }
 }
 
-#if defined(OS_POSIX) && !defined(OS_MAC)
+#if defined(OS_POSIX) && !defined(OS_MAC) && !defined(OS_BSD)
 void ChromeContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
@@ -3763,7 +3765,7 @@ void ChromeContentBrowserClient::GetAdditionalMappedFi
     mappings->Share(kCrashDumpSignal, crash_signal_fd);
   }
 }
-#endif  // defined(OS_POSIX) && !defined(OS_MAC)
+#endif  // defined(OS_POSIX) && !defined(OS_MAC) && !defined(OS_BSD)
 
 #if defined(OS_WIN)
 base::string16 ChromeContentBrowserClient::GetAppContainerSidForSandboxType(
@@ -3852,7 +3854,7 @@ bool ChromeContentBrowserClient::IsRendererCodeIntegri
 
 void ChromeContentBrowserClient::WillStartServiceManager() {
 #if defined(OS_WIN) || defined(OS_MAC) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   if (startup_data_) {
     auto* chrome_feature_list_creator =
         startup_data_->chrome_feature_list_creator();
@@ -4094,7 +4096,7 @@ ChromeContentBrowserClient::CreateThrottlesForNavigati
   }
 
 #if defined(OS_WIN) || defined(OS_MAC) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   MaybeAddThrottle(browser_switcher::BrowserSwitcherNavigationThrottle::
                        MaybeCreateThrottleFor(handle),
                    &throttles);
