--- src/3rdparty/chromium/content/public/browser/content_browser_client.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/public/browser/content_browser_client.h
@@ -1023,12 +1023,12 @@ class CONTENT_EXPORT ContentBrowserClient {
 
   // Populates |mappings| with all files that need to be mapped before launching
   // a child process.
-#if (defined(OS_POSIX) && !defined(OS_MACOSX)) || defined(OS_FUCHSIA)
+#if (defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)) || defined(OS_FUCHSIA)
   virtual void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
       content::PosixFileDescriptorInfo* mappings) {}
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) || defined(OS_FUCHSIA)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX && !defined(OS_BSD)) || defined(OS_FUCHSIA)
 
 #if defined(OS_WIN)
   // This is called on the PROCESS_LAUNCHER thread before the renderer process
