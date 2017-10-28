--- src/lib/external/media_ctrl/mediactrl.c.orig	2017-07-11 19:20:19 UTC
+++ src/lib/external/media_ctrl/mediactrl.c
@@ -24,7 +24,9 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <sys/time.h>
+#if defined(Q_OS_LINUX)
 #include <asm/types.h>
+#endif
 #include <fcntl.h>
 #include <unistd.h>
 #include <stdint.h>
