--- src/editor/addresseditor/webengine/addresseslocationengineviewer.cpp.orig	2017-04-10 12:28:38 UTC
+++ src/editor/addresseditor/webengine/addresseslocationengineviewer.cpp
@@ -26,12 +26,12 @@
 #include <KMessageBox>
 #include <KLocalizedString>
 #include <QUrlQuery>
-#include <QWebEngineSettings>
+#include <QWebSettings>
 
 using namespace Akonadi;
 
 AddressesLocationEngineViewer::AddressesLocationEngineViewer(QWidget *parent)
-    : QWebEngineView(parent),
+    : QWebView(parent),
       mAddressesLocationGrantleeFormatter(new AddressesLocationGrantleeFormater(this)),
       mEditMode(false)
 {
