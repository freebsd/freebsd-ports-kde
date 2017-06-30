--- cmake/KwaveLibaudiofileSupport.cmake.orig	2017-06-05 19:06:34 UTC
+++ cmake/KwaveLibaudiofileSupport.cmake
@@ -27,7 +27,7 @@ INCLUDE(FindPkgConfig)
 INCLUDE(UsePkgConfig)
 INCLUDE(CheckTypeSize)
 
-PKG_CHECK_MODULES(LIBAUDIOFILE REQUIRED audiofile>=0.3.0)
+PKG_CHECK_MODULES(LIBAUDIOFILE REQUIRED audiofile>=0.3.0 IMPORTED_TARGET)
 IF (NOT LIBAUDIOFILE_FOUND)
     MESSAGE(FATAL_ERROR "audiofile library not found or too old")
 ENDIF(NOT LIBAUDIOFILE_FOUND)
