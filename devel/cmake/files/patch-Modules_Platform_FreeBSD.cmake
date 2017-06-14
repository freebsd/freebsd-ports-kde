--- Modules/Platform/FreeBSD.cmake.orig	2017-06-14 10:34:30.327651000 +0200
+++ Modules/Platform/FreeBSD.cmake	2017-06-14 10:34:42.272655000 +0200
@@ -23,4 +23,8 @@
   set(CMAKE_${type}_LINK_DYNAMIC_C_FLAGS "-Wl,-Bdynamic")
 endforeach()
 
+if(NOT CMAKE_CXX_COMPILER_NAMES)
+  set(CMAKE_CXX_COMPILER_NAMES c++)
+endif()
+
 include(Platform/UnixPaths)
