--- Telegram/SourceFiles/window/main_window.cpp.orig	2019-07-07 13:34:35 UTC
+++ Telegram/SourceFiles/window/main_window.cpp
@@ -565,7 +565,7 @@ bool MainWindow::minimizeToTray() {
 }
 
 void MainWindow::reActivateWindow() {
-#if defined Q_OS_LINUX32 || defined Q_OS_LINUX64
+#if defined Q_OS_LINUX32 || defined Q_OS_LINUX64 || defined Q_OS_FREEBSD
 	const auto reActivate = [=] {
 		if (const auto w = App::wnd()) {
 			if (auto f = QApplication::focusWidget()) {
@@ -580,7 +580,7 @@ void MainWindow::reActivateWindow() {
 	};
 	crl::on_main(this, reActivate);
 	App::CallDelayed(200, this, reActivate);
-#endif // Q_OS_LINUX32 || Q_OS_LINUX64
+#endif // Q_OS_LINUX32 || Q_OS_LINUX64 || Q_OS_FREEBSD
 }
 
 void MainWindow::showRightColumn(object_ptr<TWidget> widget) {
