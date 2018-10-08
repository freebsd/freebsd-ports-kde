Only enter the directories we want to build, otherwise we might fail due to
missing dependencies.

assistant/ is built in devel/qt5-assistant.

--- src/assistant/assistant.pro.orig	2018-10-02 12:16:14 UTC
+++ src/assistant/assistant.pro
@@ -2,13 +2,11 @@ TEMPLATE = subdirs
 
 SUBDIRS += \
            help \
-           assistant \
            qhelpgenerator
 
 assistant.depends = help
 qhelpgenerator.depends = help
 
 qtNomakeTools( \
-    assistant \
     qhelpgenerator \
 )
