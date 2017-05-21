--- krusader/VFS/krpermhandler.h.orig	2016-10-22 23:30:11.000000000 +1000
+++ krusader/VFS/krpermhandler.h	2016-12-29 16:17:41.250816000 +1000
@@ -39,6 +39,10 @@
 
 #include <KIO/Global>
 
+#include <time.h>
+#include <stdlib.h>
+#include <unistd.h>
+
 #define NO_PERM      0
 #define UNKNOWN_PERM 1
 #define ALLOWED_PERM 2
