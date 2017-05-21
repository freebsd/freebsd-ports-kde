--- resources/tomboynotes/tomboyserverauthenticatejob.h.orig	2017-04-10 14:02:25 UTC
+++ resources/tomboynotes/tomboyserverauthenticatejob.h
@@ -22,7 +22,7 @@
 
 #include "tomboyjobbase.h"
 #include <QString>
-#include <QWebEngineView>
+#include <QWebView>
 
 class TomboyServerAuthenticateJob : public TomboyJobBase
 {
@@ -48,7 +48,7 @@ class TomboyServerAuthenticateJob : public TomboyJobBa
     void onUserRequestFinished();
     QString mUserURL;
 
-    QWebEngineView *mWebView;
+    QWebView *mWebView;
 
 };
 
