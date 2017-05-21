--- src/editor/addresseditor/webengine/addresseslocationenginepage.cpp.orig	2017-04-10 12:29:55 UTC
+++ src/editor/addresseditor/webengine/addresseslocationenginepage.cpp
@@ -20,37 +20,32 @@
 */
 
 #include "addresseslocationenginepage.h"
-#include <QWebEngineSettings>
-#include <QWebEngineProfile>
+#include <QWebSettings>
 
 using namespace Akonadi;
 
 AddressesLocationEnginePage::AddressesLocationEnginePage(QObject *parent)
-    : QWebEnginePage(parent)
+    : QWebPage(parent)
 {
-    settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::PluginsEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::AutoLoadImages, true);
-    settings()->setAttribute(QWebEngineSettings::JavascriptCanOpenWindows, false);
-    settings()->setAttribute(QWebEngineSettings::JavascriptCanAccessClipboard, false);
-    settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::XSSAuditingEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::ErrorPageEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, false);
-    settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessFileUrls, false);
+    settings()->setAttribute(QWebSettings::JavascriptEnabled, false);
+    settings()->setAttribute(QWebSettings::PluginsEnabled, false);
+    settings()->setAttribute(QWebSettings::AutoLoadImages, true);
+    settings()->setAttribute(QWebSettings::JavascriptCanOpenWindows, false);
+    settings()->setAttribute(QWebSettings::JavascriptCanAccessClipboard, false);
+    settings()->setAttribute(QWebSettings::LocalStorageEnabled, false);
+    settings()->setAttribute(QWebSettings::XSSAuditingEnabled, false);
+    settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls, false);
+    settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls, false);
 #if QT_VERSION >= QT_VERSION_CHECK(5, 7, 0)
-    settings()->setAttribute(QWebEngineSettings::ScreenCaptureEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::WebGLEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::AutoLoadIconsForPage, false);
-    settings()->setAttribute(QWebEngineSettings::Accelerated2dCanvasEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::WebGLEnabled, false);
+    settings()->setAttribute(QWebSettings::WebGLEnabled, false);
+    settings()->setAttribute(QWebSettings::Accelerated2dCanvasEnabled, false);
+    settings()->setAttribute(QWebSettings::WebGLEnabled, false);
 #endif
 
 #if QT_VERSION >= QT_VERSION_CHECK(5, 8, 0)
-    settings()->setAttribute(QWebEngineSettings::FocusOnNavigationEnabled, false);
-    settings()->setAttribute(QWebEngineSettings::AllowRunningInsecureContent, false);
+    settings()->setAttribute(QWebSettings::FocusOnNavigationEnabled, false);
+    settings()->setAttribute(QWebSettings::AllowRunningInsecureContent, false);
 #endif
-    profile()->setPersistentCookiesPolicy(QWebEngineProfile::NoPersistentCookies);
 
 }
 
@@ -59,10 +54,3 @@ AddressesLocationEnginePage::~AddressesLocationEngineP
 
 }
 
-bool AddressesLocationEnginePage::acceptNavigationRequest(const QUrl &url, NavigationType type, bool isMainFrame)
-{
-    Q_UNUSED(type);
-    Q_UNUSED(isMainFrame);
-    Q_EMIT urlClicked(url);
-    return false;
-}
