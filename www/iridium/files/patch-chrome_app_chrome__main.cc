--- chrome/app/chrome_main.cc.orig	2019-04-10 10:50:03 UTC
+++ chrome/app/chrome_main.cc
@@ -110,11 +110,11 @@ int ChromeMain(int argc, const char** argv) {
 #endif
 
   // Chrome-specific process modes.
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_BSD)
   if (command_line->HasSwitch(switches::kHeadless)) {
     return headless::HeadlessShellMain(params);
   }
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_BSD)
 
   int rv = content::ContentMain(params);
 
