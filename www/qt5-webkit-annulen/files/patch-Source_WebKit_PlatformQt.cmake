--- Source/WebKit/PlatformQt.cmake.orig	2017-05-02 08:48:51 UTC
+++ Source/WebKit/PlatformQt.cmake
@@ -480,7 +480,7 @@ if (NOT MACOS_BUILD_FRAMEWORKS)
         DEPS "${WEBKIT_PKGCONGIG_DEPS}"
         FILENAME_VAR WebKit_PKGCONFIG_FILENAME
     )
-    set(ECM_PKGCONFIG_INSTALL_DIR "${LIB_INSTALL_DIR}/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
+    set(ECM_PKGCONFIG_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
     install(FILES ${WebKit_PKGCONFIG_FILENAME} DESTINATION ${ECM_PKGCONFIG_INSTALL_DIR} COMPONENT Data)
 endif ()
 
