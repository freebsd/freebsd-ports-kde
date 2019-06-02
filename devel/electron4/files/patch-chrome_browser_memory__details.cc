--- chrome/browser/memory_details.cc.orig	2019-03-15 06:37:03 UTC
+++ chrome/browser/memory_details.cc
@@ -36,7 +36,7 @@
 #include "services/resource_coordinator/public/cpp/memory_instrumentation/memory_instrumentation.h"
 #include "ui/base/l10n/l10n_util.h"
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include "services/service_manager/zygote/zygote_host_linux.h"
 #endif
 
@@ -341,7 +341,7 @@ void MemoryDetails::CollectChildInfoOnUIThread() {
       process.titles.push_back(title);
     }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
     if (service_manager::ZygoteHost::GetInstance()->IsZygotePid(process.pid)) {
       process.process_type = content::PROCESS_TYPE_ZYGOTE;
     }
