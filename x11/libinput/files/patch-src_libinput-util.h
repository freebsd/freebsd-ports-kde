--- src/libinput-util.h.orig	2017-11-28 05:13:06 UTC
+++ src/libinput-util.h
@@ -39,6 +39,9 @@
 #include <string.h>
 #include <time.h>
 #include <unistd.h>
+#ifdef __FreeBSD__
+#include <xlocale.h>
+#endif
 
 #include "libinput.h"
 
