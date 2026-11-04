Add system headers, otherwise includes like 'GL/gl.h' are not found.

--- sources/pyside6/cmake/Macros/PySideModules.cmake.orig	2026-10-01 15:02:02 UTC
+++ sources/pyside6/cmake/Macros/PySideModules.cmake
@@ -243,6 +243,7 @@ macro(create_pyside_module)
         ${qt_platform_includes}
         ${qt_core_includes}
         ${qt_module_includes}
+        ${CMAKE_INSTALL_PREFIX}/include
     )
     if(module_ADDITIONAL_INCLUDE_DIRS)
         list(APPEND shiboken_include_dir_list ${${module_ADDITIONAL_INCLUDE_DIRS}})
