--- style/themeconfig/ThemeConfig.cpp.orig	2019-07-30 23:05:10 UTC
+++ style/themeconfig/ThemeConfig.cpp
@@ -19,7 +19,7 @@
 #include <QFile>
 #include <QApplication>
 #include "ThemeConfig.h"
-#if defined Q_WS_X11 || defined Q_OS_LINUX
+#if defined Q_WS_X11 || defined Q_OS_LINUX || defined Q_OS_FREEBSD
 #include <QX11Info>
 #if (QT_VERSION >= QT_VERSION_CHECK(5,0,0))
 #include <X11/Xlib.h>
@@ -37,7 +37,7 @@ ThemeConfig::ThemeConfig(const QString& theme) :
 {
   /* For now, the lack of x11 means wayland.
      Later, a better method should be found. */
-#if defined Q_WS_X11 || defined Q_OS_LINUX
+#if defined Q_WS_X11 || defined Q_OS_LINUX || defined Q_OS_FREEBSD
 #if (QT_VERSION >= QT_VERSION_CHECK(5,2,0))
   isX11_ = QX11Info::isPlatformX11();
 #else
@@ -549,7 +549,7 @@ theme_spec ThemeConfig::getCompositeSpec()
 {
   bool compositing(false);
 
-#if defined Q_WS_X11 || defined Q_OS_LINUX
+#if defined Q_WS_X11 || defined Q_OS_LINUX || defined Q_OS_FREEBSD
   /* set to false if no compositing manager is running */
 #if (QT_VERSION >= QT_VERSION_CHECK(5,2,0))
   if (isX11_)
