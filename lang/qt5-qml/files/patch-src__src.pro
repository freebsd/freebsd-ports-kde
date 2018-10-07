Only enter the directories we want to build, otherwise we might fail due to
missing dependencies.
--- src/src.pro.orig	2018-10-01 23:20:01 UTC
+++ src/src.pro
@@ -6,30 +6,6 @@ QT_FOR_CONFIG += qml qml-private quick-private
 SUBDIRS += \
     qml
 
-qtHaveModule(gui):qtConfig(qml-animation) {
-    SUBDIRS += \
-        quick \
-        quickshapes
-
-    qtConfig(testlib): \
-        SUBDIRS += qmltest
-
-    qtConfig(quick-particles): \
-        SUBDIRS += particles
-    qtHaveModule(widgets): SUBDIRS += quickwidgets
-}
-
-SUBDIRS += \
-    plugins \
-    imports
-
 qtConfig(qml-devtools): SUBDIRS += qmldevtools
 
 qmldevtools.depends = qml
-
-qtConfig(qml-network) {
-    QT_FOR_CONFIG += network
-    qtConfig(thread):qtConfig(localserver):qtConfig(qml-debug): SUBDIRS += qmldebug
-}
-
-DISTFILES += sync.profile configure.json
