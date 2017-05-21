--- resources/tomboynotes/tomboyserverauthenticatejob.cpp.orig	2017-04-10 14:03:06 UTC
+++ resources/tomboynotes/tomboyserverauthenticatejob.cpp
@@ -25,13 +25,13 @@
 
 TomboyServerAuthenticateJob::TomboyServerAuthenticateJob(KIO::AccessManager *manager, QObject *parent)
     : TomboyJobBase(manager, parent),
-      mWebView(new QWebEngineView(nullptr))
+      mWebView(new QWebView(nullptr))
 {
     // Connect the o2 authenfication signals
     connect(mO1, &O1::linkingFailed, this, &TomboyServerAuthenticateJob::onLinkingFailed);
     connect(mO1, &O1::linkingSucceeded, this, &TomboyServerAuthenticateJob::onLinkingSucceeded);
     connect(mO1, &O1::openBrowser, this, &TomboyServerAuthenticateJob::onOpenBrowser);
-    connect(mO1, &O1::closeBrowser, mWebView, &QWebEngineView::close);
+    connect(mO1, &O1::closeBrowser, mWebView, &QWebView::close);
 }
 
 TomboyServerAuthenticateJob::~TomboyServerAuthenticateJob()
