--- src/3rdparty/chromium/chrome/browser/ui/webui/settings/appearance_handler.cc.orig	2025-08-15 18:30:00 UTC
+++ src/3rdparty/chromium/chrome/browser/ui/webui/settings/appearance_handler.cc
@@ -33,7 +33,7 @@ void AppearanceHandler::RegisterMessages() {
       "useDefaultTheme",
       base::BindRepeating(&AppearanceHandler::HandleUseTheme,
                           base::Unretained(this), ui::SystemTheme::kDefault));
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   web_ui()->RegisterMessageCallback(
       "useGtkTheme",
       base::BindRepeating(&AppearanceHandler::HandleUseTheme,
