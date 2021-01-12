--- src/VBox/Devices/Graphics/DevVGA-SVGA3d-glLdr.h.orig	2019-05-13 13:30:56 UTC
+++ src/VBox/Devices/Graphics/DevVGA-SVGA3d-glLdr.h
@@ -317,7 +317,7 @@ GLPFN BOOL (WINAPI *pfn_wglMakeCurrent)(HDC, HGLRC);
 GLPFN BOOL (WINAPI *pfn_wglShareLists)(HGLRC, HGLRC);
 #define wglShareLists pfn_wglShareLists
 
-#elif defined(RT_OS_LINUX)
+#elif defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX)
 /*
  * GLX
  */
