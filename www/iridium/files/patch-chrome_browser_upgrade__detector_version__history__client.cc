--- chrome/browser/upgrade_detector/version_history_client.cc.orig	2025-04-16 18:18:42 UTC
+++ chrome/browser/upgrade_detector/version_history_client.cc
@@ -50,7 +50,7 @@ GURL GetVersionReleasesUrl(base::Version version) {
 #define CURRENT_PLATFORM "win"
 #endif
 
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 #define CURRENT_PLATFORM "linux"
 
