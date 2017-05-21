--- krArc/krarc.cpp.orig	2016-10-22 23:30:11.000000000 +1000
+++ krArc/krarc.cpp	2016-12-29 16:25:37.661503000 +1000
@@ -37,6 +37,8 @@
 #include <KIO/Job>
 #include <KIOCore/KFileItem>
 
+#include <errno.h>
+
 #define MAX_IPC_SIZE           (1024*32)
 #define TRIES_WITH_PASSWORDS   3
 
