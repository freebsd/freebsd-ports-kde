--- content/browser/gpu/gpu_process_host.cc.orig	2020-11-13 06:36:42 UTC
+++ content/browser/gpu/gpu_process_host.cc
@@ -1127,7 +1127,7 @@ bool GpuProcessHost::LaunchGpuProcess() {
   std::unique_ptr<base::CommandLine> cmd_line =
       std::make_unique<base::CommandLine>(base::CommandLine::NO_PROGRAM);
 #else
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   int child_flags = gpu_launcher.empty() ? ChildProcessHost::CHILD_ALLOW_SELF
                                          : ChildProcessHost::CHILD_NORMAL;
 #elif defined(OS_MAC)
