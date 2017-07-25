--- 3rdparty/qtsingleapplication/src/qtlocalpeer.cpp.orig	2015-05-03 23:55:39 UTC
+++ 3rdparty/qtsingleapplication/src/qtlocalpeer.cpp
@@ -41,6 +41,7 @@
 
 #include "qtlocalpeer.h"
 #include <QCoreApplication>
+#include <QDataStream>
 #include <QTime>
 
 #if defined(Q_OS_WIN)
