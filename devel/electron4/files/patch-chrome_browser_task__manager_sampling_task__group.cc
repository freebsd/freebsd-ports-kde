--- chrome/browser/task_manager/sampling/task_group.cc.orig	2019-03-15 06:37:06 UTC
+++ chrome/browser/task_manager/sampling/task_group.cc
@@ -32,9 +32,9 @@ const int kBackgroundRefreshTypesMask =
 #if defined(OS_WIN)
     REFRESH_TYPE_START_TIME | REFRESH_TYPE_CPU_TIME |
 #endif  // defined(OS_WIN)
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     REFRESH_TYPE_FD_COUNT |
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 #if BUILDFLAG(ENABLE_NACL)
     REFRESH_TYPE_NACL |
 #endif  // BUILDFLAG(ENABLE_NACL)
@@ -109,9 +109,9 @@ TaskGroup::TaskGroup(
 #if BUILDFLAG(ENABLE_NACL)
       nacl_debug_stub_port_(nacl::kGdbDebugStubPortUnknown),
 #endif  // BUILDFLAG(ENABLE_NACL)
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       open_fd_count_(-1),
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
       idle_wakeups_per_second_(-1),
       gpu_memory_has_duplicates_(false),
       is_backgrounded_(false),
@@ -125,10 +125,10 @@ TaskGroup::TaskGroup(
                    weak_ptr_factory_.GetWeakPtr()),
         base::Bind(&TaskGroup::OnIdleWakeupsRefreshDone,
                    weak_ptr_factory_.GetWeakPtr()),
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
         base::Bind(&TaskGroup::OnOpenFdCountRefreshDone,
                    weak_ptr_factory_.GetWeakPtr()),
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
         base::Bind(&TaskGroup::OnProcessPriorityDone,
                    weak_ptr_factory_.GetWeakPtr()));
 
@@ -288,14 +288,14 @@ void TaskGroup::OnRefreshNaClDebugStubPortDone(int nac
 }
 #endif  // BUILDFLAG(ENABLE_NACL)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 void TaskGroup::OnOpenFdCountRefreshDone(int open_fd_count) {
   DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
 
   open_fd_count_ = open_fd_count;
   OnBackgroundRefreshTypeFinished(REFRESH_TYPE_FD_COUNT);
 }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 void TaskGroup::OnCpuRefreshDone(double cpu_usage) {
   DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
