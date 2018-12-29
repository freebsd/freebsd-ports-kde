--- src/3rdparty/chromium/media/capture/video/linux/v4l2_capture_delegate.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/media/capture/video/linux/v4l2_capture_delegate.h
@@ -15,7 +15,7 @@
 #include "media/capture/video/linux/v4l2_capture_device_impl.h"
 #include "media/capture/video/video_capture_device.h"
 
-#if defined(OS_OPENBSD)
+#if defined(OS_BSD)
 #include <sys/videoio.h>
 #else
 #include <linux/videodev2.h>
