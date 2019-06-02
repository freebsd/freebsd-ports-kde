--- components/sync/base/get_session_name.cc.orig	2019-03-15 06:37:19 UTC
+++ components/sync/base/get_session_name.cc
@@ -17,7 +17,7 @@
 
 #if defined(OS_CHROMEOS)
 #include "chromeos/system/devicetype.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #include "components/sync/base/get_session_name_linux.h"
 #elif defined(OS_IOS)
 #include "components/sync/base/get_session_name_ios.h"
@@ -54,7 +54,7 @@ std::string GetSessionNameSynchronously() {
       session_name = "Chromebook";
       break;
   }
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   session_name = internal::GetHostname();
 #elif defined(OS_IOS)
   session_name = internal::GetComputerName();
