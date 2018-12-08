FreeBSDs make cannot handle filenames with spaces being escaped with '\ '.

--- qmake/generators/makefile.cpp.orig	2018-12-08 10:49:39 UTC
+++ qmake/generators/makefile.cpp
@@ -2868,7 +2868,7 @@ MakefileGenerator::escapeDependencyPath(const QString 
         // the make from the Android SDK.
         static const QRegExp criticalChars(QStringLiteral("([\t #])"));
 #endif
-        ret.replace(criticalChars, QStringLiteral("\\\\1"));
+        ret.replace(criticalChars, QStringLiteral("?"));
         debug_msg(2, "escapeDependencyPath: %s -> %s", path.toLatin1().constData(), ret.toLatin1().constData());
     }
     return ret;
