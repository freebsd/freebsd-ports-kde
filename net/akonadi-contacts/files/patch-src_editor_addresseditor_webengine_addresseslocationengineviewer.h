--- src/editor/addresseditor/webengine/addresseslocationengineviewer.h.orig	2017-04-10 12:28:38 UTC
+++ src/editor/addresseditor/webengine/addresseslocationengineviewer.h
@@ -22,12 +22,12 @@
 #ifndef AddressesLocationEngineViewer_H
 #define AddressesLocationEngineViewer_H
 
-#include <QWebEngineView>
+#include <QWebView>
 #include <KContacts/Address>
 namespace Akonadi
 {
 class AddressesLocationGrantleeFormater;
-class AddressesLocationEngineViewer : public QWebEngineView
+class AddressesLocationEngineViewer : public QWebView
 {
     Q_OBJECT
 public:
