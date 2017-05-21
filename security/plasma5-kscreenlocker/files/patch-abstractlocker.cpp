Modify the explanation on the crashed lock screen to our situation.
That is, to use ck-unlock-session.

--- abstractlocker.cpp.orig	2017-01-26 20:32:32 UTC
+++ abstractlocker.cpp
@@ -50,8 +50,10 @@ void BackgroundWindow::paintEvent(QPaint
     if (m_greeterFailure) {
         auto text = ki18n("The screen locker is broken and unlocking is not possible anymore.\n"
                           "In order to unlock switch to a virtual terminal (e.g. Ctrl+Alt+F2),\n"
-                          "log in and execute the command:\n\n"
-                          "loginctl unlock-sessions\n\n"
+                          "log in as root and execute the command:\n\n"
+                          "# ck-unlock-session <session-name>\n\n"
+                          "The <session-name> can be obtained by running the command:\n\n:"
+                          "# ck-unlock-session\n\n"
                           "Afterwards switch back to the running session (Ctrl+Alt+F%1).");
         text = text.subs(QString::fromLocal8Bit(qgetenv("XDG_VTNR")));
         p.setPen(Qt::white);
