--- src/3rdparty/chromium/base/process/process_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/process/process_posix.cc
@@ -18,12 +18,19 @@
 #include "base/threading/thread_restrictions.h"
 #include "build/build_config.h"
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_BSD)
 #include <sys/event.h>
 #endif
+#if defined(OS_BSD)
+#include <sys/types.h>
+#include <sys/time.h>
+#endif
 
 namespace {
 
+const int kBackgroundPriority = 5;
+const int kForegroundPriority = 0;
+
 #if !defined(OS_NACL_NONSFI)
 
 bool WaitpidWithTimeout(base::ProcessHandle handle,
@@ -191,13 +198,13 @@ bool WaitForExitWithTimeoutImpl(base::ProcessHandle ha
   const bool exited = (parent_pid < 0);
 
   if (!exited && parent_pid != our_pid) {
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_BSD)
     // On Mac we can wait on non child processes.
-    return WaitForSingleNonChildProcess(handle, timeout);
+    /* return WaitForSingleNonChildProcess(handle, timeout); */
 #else
     // Currently on Linux we can't handle non child processes.
     NOTIMPLEMENTED();
-#endif  // OS_MACOSX
+#endif  // OS_MACOSX || OS_BSD
   }
 
   int status;
@@ -262,12 +269,10 @@ Process Process::DeprecatedGetProcessFromHandle(Proces
   return Process(handle);
 }
 
-#if !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_AIX)
 // static
 bool Process::CanBackgroundProcesses() {
-  return false;
+  return true;
 }
-#endif  // !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_AIX)
 
 // static
 void Process::TerminateCurrentProcessImmediately(int exit_code) {
@@ -351,21 +356,24 @@ bool Process::WaitForExitWithTimeout(TimeDelta timeout
 
 void Process::Exited(int exit_code) const {}
 
-#if !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_AIX)
 bool Process::IsProcessBackgrounded() const {
   // See SetProcessBackgrounded().
   DCHECK(IsValid());
-  return false;
+  return GetPriority() == kBackgroundPriority;
 }
 
-bool Process::SetProcessBackgrounded(bool value) {
-  // Not implemented for POSIX systems other than Linux and Mac. With POSIX, if
-  // we were to lower the process priority we wouldn't be able to raise it back
-  // to its initial priority.
-  NOTIMPLEMENTED();
-  return false;
+bool Process::SetProcessBackgrounded(bool background) {
+  DCHECK(IsValid());
+
+  if (!CanBackgroundProcesses())
+    return false;
+
+  int priority = background ? kBackgroundPriority : kForegroundPriority;
+  int result   = setpriority(PRIO_PROCESS, process_, priority);
+
+  DPCHECK(result == 0);
+  return result == 0;
 }
-#endif  // !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_AIX)
 
 int Process::GetPriority() const {
   DCHECK(IsValid());
