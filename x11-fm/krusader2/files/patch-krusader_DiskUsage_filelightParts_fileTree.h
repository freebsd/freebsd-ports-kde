--- krusader/DiskUsage/filelightParts/fileTree.h.orig	2016-10-22 23:30:11.000000000 +1000
+++ krusader/DiskUsage/filelightParts/fileTree.h	2016-12-29 16:07:59.950583000 +1000
@@ -23,6 +23,10 @@
 
 #include <KIO/Global>
 
+#include <time.h>
+#include <stdlib.h>
+#include <unistd.h>
+
 // TODO these are pointlessly general purpose now, make them incredibly specific
 
 typedef KIO::filesize_t FileSize;
