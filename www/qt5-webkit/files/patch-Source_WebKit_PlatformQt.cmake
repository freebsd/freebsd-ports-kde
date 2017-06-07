--- Source/WebKit/PlatformQt.cmake.orig	2017-06-02 18:33:03 UTC
+++ Source/WebKit/PlatformQt.cmake
@@ -481,8 +481,9 @@ if (NOT MACOS_BUILD_FRAMEWORKS)
         BASE_NAME Qt5WebKit
         DEPS "${WEBKIT_PKGCONGIG_DEPS}"
         FILENAME_VAR WebKit_PKGCONFIG_FILENAME
+        DESCRIPTION "Qt WebKit module"
     )
-    set(ECM_PKGCONFIG_INSTALL_DIR "${LIB_INSTALL_DIR}/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
+    set(ECM_PKGCONFIG_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
     install(FILES ${WebKit_PKGCONFIG_FILENAME} DESTINATION ${ECM_PKGCONFIG_INSTALL_DIR} COMPONENT Data)
 endif ()
 
@@ -577,7 +578,7 @@ set(WebKitWidgets_SOURCES
 set(WebKitWidgets_SYSTEM_INCLUDE_DIRECTORIES
     ${Qt5Gui_INCLUDE_DIRS}
     ${Qt5Network_INCLUDE_DIRS}
-    ${Qt5Widgets_INCLUDE_DIRS}
+    {Qt5Widgets_INCLUDE_DIRS}
 )
 
 set(WebKitWidgets_LIBRARIES
@@ -671,6 +672,7 @@ if (NOT MACOS_BUILD_FRAMEWORKS)
         BASE_NAME Qt5WebKitWidgets
         DEPS "${WEBKITWIDGETS_PKGCONFIG_DEPS}"
         FILENAME_VAR WebKitWidgets_PKGCONFIG_FILENAME
+        DESCRIPTION "Qt WebKitWidgets module"
     )
     install(FILES ${WebKitWidgets_PKGCONFIG_FILENAME} DESTINATION ${ECM_PKGCONFIG_INSTALL_DIR} COMPONENT Data)
 endif ()
