--- third_party/angle/src/libANGLE/renderer/driver_utils.h.orig	2020-11-13 06:42:14 UTC
+++ third_party/angle/src/libANGLE/renderer/driver_utils.h
@@ -145,7 +145,7 @@ inline bool IsWindows()
 
 inline bool IsLinux()
 {
-#if defined(ANGLE_PLATFORM_LINUX)
+#if defined(ANGLE_PLATFORM_POSIX)
     return true;
 #else
     return false;
