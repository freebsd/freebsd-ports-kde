--- cmake/KwaveLibsamplerateSupport.cmake.orig	2017-06-30 19:35:10 UTC
+++ cmake/KwaveLibsamplerateSupport.cmake
@@ -28,12 +28,12 @@ INCLUDE(UsePkgConfig)
 #############################################################################
 ### check for libsamplerate headers and library                           ###
 
-PKG_CHECK_MODULES(SAMPLERATE REQUIRED samplerate>=0.1.3)
+PKG_CHECK_MODULES(SAMPLERATE REQUIRED samplerate>=0.1.3 IMPORTED_TARGET)
 IF (NOT SAMPLERATE_FOUND)
     MESSAGE(FATAL_ERROR "libsamplerate not found")
 ENDIF(NOT SAMPLERATE_FOUND)
 
-SET(SAMPLERATE_LIBS samplerate)
+SET(SAMPLERATE_LIBS PkgConfig::SAMPLERATE)
 SET(HAVE_LIBSAMPLERATE ON)
 
 MESSAGE(STATUS "Found samplerate library in ${SAMPLERATE_LIBDIR}")
