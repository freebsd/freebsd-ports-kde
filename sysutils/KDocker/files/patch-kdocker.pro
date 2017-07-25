--- kdocker.pro.orig	2015-05-03 23:55:39 UTC
+++ kdocker.pro
@@ -10,11 +10,11 @@ isEmpty(SYSTEMQTSA) {
 }

 DEPENDPATH += src
-INCLUDEPATH += . src  /usr/include/X11
-QMAKE_LIBDIR += /usr/X11/lib
+INCLUDEPATH += . src  $$PREFIX/include/X11
+QMAKE_LIBDIR += $$PREFIX/X11/lib
 LIBS = -lX11 -lXpm -lXmu

-INSTALL_PATH = /usr/share/kdocker
+INSTALL_PATH = $$PREFIX/share/kdocker

 #TRANSLATIONS += i18n/

@@ -34,19 +34,19 @@ DEFINES += TRANSLATIONS_PATH=\\\"$${TRANSLATIONS_PATH}
 #translations.path = $$TRANSLATIONS_PATH
 #translations.files = build/i18n

-icons.path = /usr/share/pixmaps
+icons.path = $$PREFIX/share/pixmaps
 icons.files = resources/images/kdocker.png

-desktop.path = /usr/share/applications
+desktop.path = $$PREFIX/share/applications
 desktop.files = helpers/kdocker.desktop

-appdata.path = /usr/share/appdata
+appdata.path = $$PREFIX/share/appdata
 appdata.files = helpers/appdata/kdocker.appdata.xml

-completion.path = /etc/bash_completion.d
+completion.path = $$PREFIX/etc/bash_completion.d
 completion.files = helpers/kdocker

-target.path = /usr/bin
+target.path = $$PREFIX/bin

 #INSTALLS += target icons desktop completion translations
 INSTALLS += target icons appdata desktop completion
