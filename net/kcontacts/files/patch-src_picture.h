Revert 
https://phabricator.kde.org/R174:9d982d73268d5dacc5728ba78c439275a56d4677
as it breaks libkgapi.

--- src/picture.h.orig	2017-04-09 08:41:16 UTC
+++ src/picture.h
@@ -26,8 +26,7 @@
 #include <QtCore/QDataStream>
 #include <QtCore/QString>
 #include <QtCore/QSharedDataPointer>
-
-class QImage;
+#include <QImage>
 
 namespace KContacts
 {
