--- src/editor/addresseditor/webengine/addresseslocationenginepage.h.orig	2017-04-10 12:28:38 UTC
+++ src/editor/addresseditor/webengine/addresseslocationenginepage.h
@@ -22,11 +22,11 @@
 #ifndef ADDRESSESLOCATIONENGINEPAGE_H
 #define ADDRESSESLOCATIONENGINEPAGE_H
 
-#include <QWebEnginePage>
+#include <QWebPage>
 
 namespace Akonadi
 {
-class AddressesLocationEnginePage : public QWebEnginePage
+class AddressesLocationEnginePage : public QWebPage
 {
     Q_OBJECT
 public:
@@ -36,8 +36,6 @@ class AddressesLocationEnginePage : public QWebEngineP
 Q_SIGNALS:
     void urlClicked(const QUrl &url);
 
-protected:
-    bool acceptNavigationRequest(const QUrl &url, NavigationType type, bool isMainFrame) Q_DECL_OVERRIDE;
 };
 }
 
