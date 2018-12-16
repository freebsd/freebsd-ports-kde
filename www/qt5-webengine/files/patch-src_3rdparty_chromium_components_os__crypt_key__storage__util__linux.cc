--- src/3rdparty/chromium/components/os_crypt/key_storage_util_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/components/os_crypt/key_storage_util_linux.cc
@@ -49,7 +49,12 @@ SelectedLinuxBackend SelectBackend(const std::string& 
     return SelectedLinuxBackend::BASIC_TEXT;
 
   // Detect the store to use automatically.
+// YYY
+#if !defined(OS_BSD)
   const char* name = base::nix::GetDesktopEnvironmentName(desktop_env);
+#else
+  const char* name = NULL;
+#endif
   VLOG(1) << "Password storage detected desktop environment: "
           << (name ? name : "(unknown)");
   switch (desktop_env) {
