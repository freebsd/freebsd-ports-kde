--- Source/WebCore/platform/graphics/surfaces/GraphicsSurfaceToken.h.orig	2017-04-28 15:27:36 UTC
+++ Source/WebCore/platform/graphics/surfaces/GraphicsSurfaceToken.h
@@ -33,7 +33,7 @@ struct GraphicsSurfaceToken {
 
 #if OS(DARWIN)
     typedef mach_port_t BufferHandle;
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD)
     typedef uint32_t BufferHandle;
 #elif OS(WINDOWS)
     typedef HANDLE BufferHandle;
