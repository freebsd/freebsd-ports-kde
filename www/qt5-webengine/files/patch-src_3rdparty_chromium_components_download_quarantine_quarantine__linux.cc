--- src/3rdparty/chromium/components/download/quarantine/quarantine_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/components/download/quarantine/quarantine_linux.cc
@@ -2,11 +2,15 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include "build/build_config.h"
+
 #include "components/download/quarantine/quarantine.h"
 
 #include <stddef.h>
 #include <sys/types.h>
+#if !defined(OS_BSD)
 #include <sys/xattr.h>
+#endif
 
 #include "base/files/file_path.h"
 #include "base/files/file_util.h"
@@ -29,17 +33,20 @@ bool SetExtendedFileAttribute(const char* path,
                               size_t value_size,
                               int flags) {
   base::AssertBlockingAllowed();
+#if !defined(OS_BSD)
   int result = setxattr(path, name, value, value_size, flags);
   if (result) {
     DPLOG(ERROR) << "Could not set extended attribute " << name << " on file "
                  << path;
     return false;
   }
+#endif // !defined(OS_BSD)
   return true;
 }
 
 std::string GetExtendedFileAttribute(const char* path, const char* name) {
   base::AssertBlockingAllowed();
+#if !defined(OS_BSD)
   ssize_t len = getxattr(path, name, nullptr, 0);
   if (len <= 0)
     return std::string();
@@ -49,6 +56,9 @@ std::string GetExtendedFileAttribute(const char* path,
   if (len < static_cast<ssize_t>(buffer.size()))
     return std::string();
   return std::string(buffer.begin(), buffer.end());
+#else
+  return std::string();
+#endif // !defined(OS_BSD)
 }
 
 }  // namespace
