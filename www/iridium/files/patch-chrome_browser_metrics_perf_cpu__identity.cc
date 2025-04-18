--- chrome/browser/metrics/perf/cpu_identity.cc.orig	2025-04-16 18:18:42 UTC
+++ chrome/browser/metrics/perf/cpu_identity.cc
@@ -145,7 +145,7 @@ CPUIdentity GetCPUIdentity() {
   result.release =
 #if BUILDFLAG(IS_CHROMEOS)
       base::SysInfo::KernelVersion();
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       base::SysInfo::OperatingSystemVersion();
 #else
 #error "Unsupported configuration"
