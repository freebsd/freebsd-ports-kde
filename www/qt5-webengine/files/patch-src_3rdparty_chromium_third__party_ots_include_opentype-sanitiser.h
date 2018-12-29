--- src/3rdparty/chromium/third_party/ots/include/opentype-sanitiser.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/third_party/ots/include/opentype-sanitiser.h
@@ -22,6 +22,7 @@ typedef unsigned __int64 uint64_t;
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #define ots_ntohl(x) ntohl (x)
 #define ots_ntohs(x) ntohs (x)
 #define ots_htonl(x) htonl (x)
