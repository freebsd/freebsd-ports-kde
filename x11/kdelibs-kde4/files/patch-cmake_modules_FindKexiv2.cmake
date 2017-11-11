--- cmake/modules/FindKexiv2.cmake.orig	2015-12-16 21:19:26 UTC
+++ cmake/modules/FindKexiv2.cmake
@@ -64,7 +64,7 @@ else (KEXIV2_INCLUDE_DIR AND KEXIV2_LIBR
       # in the FIND_PATH() and FIND_LIBRARY() calls
       include(FindPkgConfig)
     
-      pkg_check_modules(_pc_KEXIV2 libkexiv2>=0.2.0)
+      pkg_check_modules(_pc_KEXIV2 libkexiv2-kde4>=0.2.0)
     
     else(NOT WIN32)
       set(_pc_KEXIV2_FOUND TRUE)
