--- test/mtdev-test.c.orig	2014-02-28 22:48:23.000000000 +0400
+++ test/mtdev-test.c	2015-04-03 02:57:56.890923000 +0300
@@ -28,11 +28,12 @@
 
 #include <mtdev.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <unistd.h>
 #include <fcntl.h>
 
 /* year-proof millisecond event time */
-typedef __u64 mstime_t;
+typedef uint64_t mstime_t;
 
 static int use_event(const struct input_event *ev)
 {
