--- src/3rdparty/chromium/base/trace_event/trace_log.cc.orig	2019-05-23 12:39:34 UTC
+++ src/3rdparty/chromium/base/trace_event/trace_log.cc
@@ -1560,7 +1560,7 @@ void TraceLog::AddMetadataEventsWhileLocked() {
     }
   }
 
-#if !defined(OS_NACL)  // NaCl shouldn't expose the process id.
+#if !defined(OS_NACL) && !defined(OS_FREEBSD)  // NaCl shouldn't expose the process id. XXX
   AddMetadataEventWhileLocked(0, "num_cpus", "number",
                               base::SysInfo::NumberOfProcessors());
 #endif
