--- remoting/host/host_main.cc.orig	2020-11-13 06:36:46 UTC
+++ remoting/host/host_main.cc
@@ -48,9 +48,9 @@ int DesktopProcessMain();
 int FileChooserMain();
 int RdpDesktopSessionMain();
 #endif  // defined(OS_WIN)
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 int XSessionChooserMain();
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 namespace {
 
@@ -143,10 +143,10 @@ MainRoutineFn SelectMainRoutine(const std::string& pro
   } else if (process_type == kProcessTypeRdpDesktopSession) {
     main_routine = &RdpDesktopSessionMain;
 #endif  // defined(OS_WIN)
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   } else if (process_type == kProcessTypeXSessionChooser) {
     main_routine = &XSessionChooserMain;
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   }
 
   return main_routine;
