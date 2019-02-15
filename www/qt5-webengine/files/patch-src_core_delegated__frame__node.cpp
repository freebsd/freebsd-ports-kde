--- src/core/delegated_frame_node.cpp.orig	2019-02-14 22:50:48.793477000 +0100
+++ src/core/delegated_frame_node.cpp	2019-02-14 23:07:49.940323000 +0100
@@ -121,6 +121,12 @@
 #define GL_LINE_LOOP                      0x0002
 #endif
 
+#ifndef QT_NO_OPENGL
+QT_BEGIN_NAMESPACE
+Q_GUI_EXPORT QOpenGLContext *qt_gl_global_share_context();
+QT_END_NAMESPACE
+#endif
+
 namespace QtWebEngineCore {
 #ifndef QT_NO_OPENGL
 class MailboxTexture : public QSGTexture, protected QOpenGLFunctions {
@@ -1275,7 +1281,7 @@
         deleteChromiumSync(&sync);
     }
 
-#if defined(USE_OZONE)
+#if defined(USE_OZONE) && !defined(QT_NO_OPENGL)
     // Workaround when context is not shared QTBUG-48969
     // Make slow copy between two contexts.
     if (!m_contextShared) {
