--- src/VBox/Devices/Graphics/DevVGA-SVGA3d-ogl.cpp.orig	2019-01-25 18:17:47 UTC
+++ src/VBox/Devices/Graphics/DevVGA-SVGA3d-ogl.cpp
@@ -1150,7 +1150,7 @@ int vmsvga3dTerminate(PVGASTATE pThis)
     RTSemEventDestroy(pState->WndRequestSem);
 #elif defined(RT_OS_DARWIN)
 
-#elif defined(RT_OS_LINUX)
+#elif defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX)
     /* signal to the thread that it is supposed to exit */
     pState->bTerminate = true;
     /* wait for it to terminate */
@@ -2850,7 +2850,7 @@ int vmsvga3dGenerateMipmaps(PVGASTATE pThis, uint32_t 
 }
 
 
-#ifdef RT_OS_LINUX
+#if defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX)
 /**
  * X11 event handling thread.
  *
@@ -2880,7 +2880,7 @@ DECLCALLBACK(int) vmsvga3dXEventThread(RTTHREAD hThrea
     }
     return VINF_SUCCESS;
 }
-#endif // RT_OS_LINUX
+#endif // RT_OS_FREEBSD || RT_OS_LINUX
 
 
 /**
@@ -3206,7 +3206,7 @@ static int vmsvga3dContextDestroyOgl(PVGASTATE pThis, 
     AssertRC(rc);
 #elif defined(RT_OS_DARWIN)
     vmsvga3dCocoaDestroyViewAndContext(pContext->cocoaView, pContext->cocoaContext);
-#elif defined(RT_OS_LINUX)
+#elif defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX)
     glXMakeCurrent(pState->display, None, NULL);
     glXDestroyContext(pState->display, pContext->glxContext);
     XDestroyWindow(pState->display, pContext->window);
