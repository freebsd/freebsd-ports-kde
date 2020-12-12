--- cmake/QtBuild.cmake.orig	2020-12-11 22:15:40 UTC
+++ cmake/QtBuild.cmake
@@ -198,7 +198,8 @@ function(qt_internal_set_up_global_paths)
     if(QT_CONFIG_INSTALL_DIR)
         string(APPEND QT_CONFIG_INSTALL_DIR "/")
     endif()
-    string(APPEND QT_CONFIG_INSTALL_DIR ${__config_path_part})
+    string(APPEND QT_CONFIG_INSTALL_DIR "lib/cmake")
+    message("====>  build: ${QT_CONFIG_BUILD_DIR}, install: ${QT_CONFIG_INSTALL_DIR}")
 
     set(QT_BUILD_DIR "${QT_BUILD_DIR}" PARENT_SCOPE)
     set(QT_INSTALL_DIR "${QT_INSTALL_DIR}" PARENT_SCOPE)
