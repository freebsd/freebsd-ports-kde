--- third_party/swiftshader/src/OpenGL/libEGL/Surface.cpp.orig	2020-11-13 06:42:23 UTC
+++ third_party/swiftshader/src/OpenGL/libEGL/Surface.cpp
@@ -362,7 +362,7 @@ bool WindowSurface::checkForResize()
 
 		int windowWidth = windowAttributes.width;
 		int windowHeight = windowAttributes.height;
-	#elif defined(__linux__)
+	#elif defined(__linux__) || defined(__FreeBSD__)
 		// Non X11 linux is headless only
 		int windowWidth = 100;
 		int windowHeight = 100;
