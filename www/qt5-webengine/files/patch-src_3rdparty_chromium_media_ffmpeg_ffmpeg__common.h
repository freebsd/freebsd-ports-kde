--- src/3rdparty/chromium/media/ffmpeg/ffmpeg_common.h.orig	2017-11-08 14:13:31.000000000 -0500
+++ src/3rdparty/chromium/media/ffmpeg/ffmpeg_common.h	2017-12-20 18:54:01.787807000 -0500
@@ -25,8 +25,8 @@
 // Disable deprecated features which result in spammy compile warnings.  This
 // list of defines must mirror those in the 'defines' section of FFmpeg's
 // BUILD.gn file or the headers below will generate different structures!
-#if !defined(USE_SYSTEM_FFMPEG)
-#define FF_API_CONVERGENCE_DURATION 0
+// #if !defined(USE_SYSTEM_FFMPEG)
+// #define FF_API_CONVERGENCE_DURATION 0
 // Upstream libavcodec/utils.c still uses the deprecated
 // av_dup_packet(), causing deprecation warnings.
 // The normal fix for such things is to disable the feature as below,
@@ -34,16 +34,13 @@
 // (In this case, the fix is replacing the call with a new function.)
 // In the meantime, we directly disable those warnings in the C file.
 //#define FF_API_AVPACKET_OLD_API 0
-#endif
+// #endif
 
 // Temporarily disable possible loss of data warning.
 // TODO(scherkus): fix and upstream the compiler warnings.
 MSVC_PUSH_DISABLE_WARNING(4244);
 #include <libavcodec/avcodec.h>
 #include <libavformat/avformat.h>
-#if !defined(USE_SYSTEM_FFMPEG)
-#include <libavformat/internal.h>
-#endif
 #include <libavformat/avio.h>
 #include <libavutil/avutil.h>
 #include <libavutil/imgutils.h>
