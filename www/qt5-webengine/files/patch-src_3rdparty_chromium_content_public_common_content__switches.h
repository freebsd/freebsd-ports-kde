--- src/3rdparty/chromium/content/public/common/content_switches.h.orig	2017-01-26 00:49:13 UTC
+++ src/3rdparty/chromium/content/public/common/content_switches.h
@@ -293,7 +293,7 @@ CONTENT_EXPORT extern const char kDisabl
 CONTENT_EXPORT extern const char kDisableVaapiAcceleratedVideoEncode[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 CONTENT_EXPORT extern const char kEnableSpeechDispatcher[];
 #endif
 
