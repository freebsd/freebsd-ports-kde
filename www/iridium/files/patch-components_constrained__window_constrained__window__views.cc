--- components/constrained_window/constrained_window_views.cc.orig	2025-05-07 06:48:23 UTC
+++ components/constrained_window/constrained_window_views.cc
@@ -377,7 +377,7 @@ bool SupportsGlobalScreenCoordinates() {
 }
 
 bool PlatformClipsChildrenToViewport() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
