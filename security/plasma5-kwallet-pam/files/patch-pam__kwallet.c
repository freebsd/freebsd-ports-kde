--- pam_kwallet.c.orig	2016-03-02 14:23:58 UTC
+++ pam_kwallet.c
@@ -31,7 +31,7 @@
 #include <sys/stat.h>
 #include <sys/syslog.h>
 #include <sys/wait.h>
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__FreeBSD__)
 #include "pam_darwin.h"
 #include <security/pam_appl.h>
 #else
