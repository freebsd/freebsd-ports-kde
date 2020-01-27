--- src/plugins/tts/tts.pro.orig	2020-01-26 18:50:05 UTC
+++ src/plugins/tts/tts.pro
@@ -1,9 +1,11 @@
 TEMPLATE = subdirs
 
 QT_FOR_CONFIG += texttospeech-private
-unix {
-    qtConfig(speechd) {
-        SUBDIRS += speechdispatcher
+with_speechd {
+    unix {
+        qtConfig(speechd) {
+             SUBDIRS += speechdispatcher
+        }
     }
 }
 
@@ -15,6 +17,8 @@ uikit: SUBDIRS += ios
 
 android: SUBDIRS += android
 
-qtConfig(flite) {
-    qtHaveModule(multimedia): SUBDIRS += flite
+with_flite {
+    qtConfig(flite) {
+        qtHaveModule(multimedia): SUBDIRS += flite
+    }
 }
