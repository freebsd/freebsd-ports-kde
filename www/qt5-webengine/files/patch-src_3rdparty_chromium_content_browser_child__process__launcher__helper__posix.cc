--- src/3rdparty/chromium/content/browser/child_process_launcher_helper_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/browser/child_process_launcher_helper_posix.cc
@@ -95,7 +95,7 @@ std::unique_ptr<PosixFileDescriptorInfo> CreateDefault
 
   // TODO(jcivelli): remove this "if defined" by making
   // GetAdditionalMappedFilesForChildProcess a no op on Mac.
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_BSD)
   GetContentClient()->browser()->GetAdditionalMappedFilesForChildProcess(
       *command_line, child_process_id, files_to_register.get());
 #endif
