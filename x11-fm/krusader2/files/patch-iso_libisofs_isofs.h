--- iso/libisofs/isofs.h.orig	2016-10-22 23:30:11.000000000 +1000
+++ iso/libisofs/isofs.h	2016-12-29 16:31:12.876212000 +1000
@@ -24,6 +24,7 @@
 {
 #endif
 
+#include <time.h>
 #include <stdlib.h>
 #include "iso_fs.h"
 #include "el_torito.h"
