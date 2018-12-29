--- src/core/config/linux.pri.orig	2018-11-27 04:10:38 UTC
+++ src/core/config/linux.pri
@@ -162,6 +162,11 @@ host_build {
     } else {
         gn_args += use_alsa=false
     }
+    qtConfig(webengine-sndio) {
+        gn_args += use_sndio=true
+    } else {
+        gn_args += use_sndio=false
+    }
     !packagesExist(libpci): gn_args += use_libpci=false
     !packagesExist(xscrnsaver): gn_args += use_xscrnsaver=false
 
