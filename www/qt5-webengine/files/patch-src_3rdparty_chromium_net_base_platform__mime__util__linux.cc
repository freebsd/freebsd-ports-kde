--- src/3rdparty/chromium/net/base/platform_mime_util_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/net/base/platform_mime_util_linux.cc
@@ -34,6 +34,7 @@ bool PlatformMimeUtil::GetPlatformMimeTypeFromExtensio
     const base::FilePath::StringType& ext,
     std::string* result) const {
   base::FilePath dummy_path("foo." + ext);
+#if !defined(OS_BSD)
   std::string out = base::nix::GetFileMimeType(dummy_path);
 
   // GetFileMimeType likes to return application/octet-stream
@@ -51,6 +52,9 @@ bool PlatformMimeUtil::GetPlatformMimeTypeFromExtensio
 
   *result = out;
   return true;
+#else
+  return false;
+#endif
 }
 
 #endif  // defined(OS_ANDROID)
