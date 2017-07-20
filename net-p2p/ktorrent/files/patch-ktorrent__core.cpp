--- ./ktorrent/core.cpp.orig	2017-07-20 01:42:58.562900000 +0200
+++ ./ktorrent/core.cpp	2017-07-20 01:44:53.535278000 +0200
@@ -52,6 +52,7 @@
 #include <groups/groupmanager.h>
 #include <groups/group.h>
 #include <dht/dht.h>
+#include <dht/dhtbase.h>
 #include <utp/utpserver.h>
 #include <net/socketmonitor.h>
 #include <torrent/jobqueue.h>
