--- src/3rdparty/chromium/base/process/process_metrics_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/process/process_metrics_posix.cc
@@ -19,6 +19,8 @@
 
 #if defined(OS_MACOSX)
 #include <malloc/malloc.h>
+#elif defined(OS_BSD)
+#include <stdlib.h>
 #else
 #include <malloc.h>
 #endif
