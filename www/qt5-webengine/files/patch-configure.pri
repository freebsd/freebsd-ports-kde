--- configure.pri.orig	2020-03-16 14:04:24 UTC
+++ configure.pri
@@ -114,7 +114,7 @@ defineTest(qtwebengine_platformError) {
 defineTest(qtConfTest_detectPlatform) {
     QT_FOR_CONFIG += gui-private
 
-    !linux:!win32:!macos:!ios {
+    !linux:!win32:!macos:!ios:!unix: {
         qtwebengine_platformError("Unknown platform. Qt WebEngine only supports Linux, Windows, and macOS.")
     } else {
         linux:qtwebengine_isLinuxPlatformSupported() {
@@ -126,6 +126,9 @@ defineTest(qtConfTest_detectPlatform) {
         macos:qtwebengine_isMacOsPlatformSupported() {
             $${1}.platform = "macos"
         }
+        unix:qtwebengine_isLinuxPlatformSupported() {
+            $${1}.platform = "linux"
+        }
         ios:qtwebengine_isMacOsPlatformSupported() {
             $${1}.platform = "ios"
         }
@@ -166,7 +169,8 @@ defineTest(qtConfTest_detectNinja) {
     !isEmpty(ninja) {
         qtLog("Found ninja from path: $$ninja")
         qtRunLoggedCommand("$$ninja --version", version)|return(false)
-        contains(version, "1.[7-9].*"): return(true)
+	# Extend the version range for newer versions of ninja (e.g. 1.10.x).
+        contains(version, "1.[7-9].*")|contains(version, "1.10.*"): return(true)
         qtLog("Ninja version too old")
     }
     qtLog("Building own ninja")
