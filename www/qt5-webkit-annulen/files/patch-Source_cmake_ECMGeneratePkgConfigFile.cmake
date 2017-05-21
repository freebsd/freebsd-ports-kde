--- Source/cmake/ECMGeneratePkgConfigFile.cmake.orig	2017-04-28 15:27:36 UTC
+++ Source/cmake/ECMGeneratePkgConfigFile.cmake
@@ -156,7 +156,7 @@ Requires: ${PKGCONFIG_TARGET_DEPS}
   )
 
   if(EGPF_INSTALL)
-    set(ECM_PKGCONFIG_INSTALL_DIR "${EGPF_LIB_INSTALL_DIR}/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
+    set(ECM_PKGCONFIG_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
     install(FILES ${PKGCONFIG_FILENAME} DESTINATION ${ECM_PKGCONFIG_INSTALL_DIR})
   endif()
 endfunction()
