Generate split out debug files on FreeBSD too.

--- src/core/core_module.pro.orig	2017-04-20 22:41:02 UTC
+++ src/core/core_module.pro
@@ -65,7 +65,7 @@ CONFIG -= bsymbolic_functions
 
 qtConfig(egl): CONFIG += egl
 
-linux:qtConfig(separate_debug_info): QMAKE_POST_LINK="cd $(DESTDIR) && $(STRIP) --strip-unneeded $(TARGET)"
+unix:qtConfig(separate_debug_info): QMAKE_POST_LINK="cd $(DESTDIR) && $(STRIP) --strip-unneeded $(TARGET)"
 
 REPACK_DIR = $$OUT_PWD/$$getConfigDir()
 
