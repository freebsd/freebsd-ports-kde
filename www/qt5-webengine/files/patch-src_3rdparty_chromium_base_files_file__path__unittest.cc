--- src/3rdparty/chromium/base/files/file_path_unittest.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/files/file_path_unittest.cc
@@ -1136,7 +1136,7 @@ TEST_F(FilePathTest, FromUTF8Unsafe_And_AsUTF8Unsafe) 
       "\xEF\xBC\xA1\xEF\xBC\xA2\xEF\xBC\xA3.txt" },
   };
 
-#if !defined(SYSTEM_NATIVE_UTF8) && defined(OS_LINUX)
+#if !defined(SYSTEM_NATIVE_UTF8) && (defined(OS_LINUX) || defined(OS_BSD))
   ScopedLocale locale("en_US.UTF-8");
 #endif
 
