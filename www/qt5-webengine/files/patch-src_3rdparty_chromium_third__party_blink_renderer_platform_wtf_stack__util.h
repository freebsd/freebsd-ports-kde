--- src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.h
@@ -7,6 +7,9 @@
 
 #include <stddef.h>
 #include <stdint.h>
+#if defined(OS_BSD)
+#include <pthread_np.h>
+#endif
 #include "build/build_config.h"
 #include "third_party/blink/renderer/platform/wtf/wtf_export.h"
 
