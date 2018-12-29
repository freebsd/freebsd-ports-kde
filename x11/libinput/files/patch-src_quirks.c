--- src/quirks.c.orig	2018-10-03 02:48:52 UTC
+++ src/quirks.c
@@ -34,6 +34,7 @@
 #include <libudev.h>
 #include <dirent.h>
 #include <fnmatch.h>
+#include <libgen.h>
 
 #include "libinput-versionsort.h"
 #include "libinput-util.h"

