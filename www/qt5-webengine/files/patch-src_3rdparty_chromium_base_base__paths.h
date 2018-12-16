--- src/3rdparty/chromium/base/base_paths.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/base_paths.h
@@ -18,7 +18,7 @@
 #include "base/base_paths_android.h"
 #endif
 
-#if defined(OS_POSIX) || defined(OS_FUCHSIA)
+#if defined(OS_POSIX) || defined(OS_FUCHSIA) || defined(OS_BSD)
 #include "base/base_paths_posix.h"
 #endif
 
