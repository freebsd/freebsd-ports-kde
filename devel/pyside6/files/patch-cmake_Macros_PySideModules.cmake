--- cmake/Macros/PySideModules.cmake.orig	2020-12-13 21:04:51 UTC
+++ cmake/Macros/PySideModules.cmake
@@ -127,6 +127,7 @@ macro(create_pyside_module)
                         COMMAND Shiboken6::shiboken6 ${GENERATOR_EXTRA_FLAGS}
                         "${pyside6_BINARY_DIR}/${module_NAME}_global.h"
                         --include-paths=${shiboken_include_dirs}
+                        --include-paths="${CMAKE_INSTALL_PREFIX}/include"
                         ${shiboken_framework_include_dirs_option}
                         --typesystem-paths=${pyside_binary_dir}${PATH_SEP}${pyside6_SOURCE_DIR}${PATH_SEP}${${module_TYPESYSTEM_PATH}}
                         --output-directory=${CMAKE_CURRENT_BINARY_DIR}
