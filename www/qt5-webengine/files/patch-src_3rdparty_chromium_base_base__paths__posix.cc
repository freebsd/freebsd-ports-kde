--- src/3rdparty/chromium/base/base_paths_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/base_paths_posix.cc
@@ -102,6 +102,7 @@ bool PathProviderPosix(int key, FilePath* result) {
                   << "Try running from your chromium/src directory.";
       return false;
     }
+#if !defined(OS_BSD)
     case DIR_USER_DESKTOP:
       *result = nix::GetXDGUserDirectory("DESKTOP", "Desktop");
       return true;
@@ -112,6 +113,7 @@ bool PathProviderPosix(int key, FilePath* result) {
       *result = cache_dir;
       return true;
     }
+#endif
   }
   return false;
 }
