--- Modules/Platform/FreeBSD-CXX.cmake.orig	2017-06-14 21:54:30 UTC
+++ Modules/Platform/FreeBSD-CXX.cmake
@@ -0,0 +1,3 @@
+if(NOT CMAKE_CXX_COMPILER_NAMES)
+  set(CMAKE_CXX_COMPILER_NAMES c++)
+endif()
