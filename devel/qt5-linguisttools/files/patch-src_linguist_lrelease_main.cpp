--- src/linguist/lrelease/main.cpp.orig	2019-09-01 11:53:23 UTC
+++ src/linguist/lrelease/main.cpp
@@ -180,7 +180,9 @@ static QStringList translationsFromProjects(const Proj
 
 static QStringList translationsFromProject(const Project &project, bool topLevel)
 {
-    QStringList result = *project.translations;
+    QStringList result;
+    if (project.translations)
+        result << *project.translations;
     result << translationsFromProjects(project.subProjects, false);
     if (topLevel && result.isEmpty()) {
         printErr(LR::tr("lrelease warning: Met no 'TRANSLATIONS' entry in project file '%1'\n")
