--- src/3rdparty/chromium/base/sys_info_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/sys_info_posix.cc
@@ -38,7 +38,7 @@
 
 namespace {
 
-#if !defined(OS_OPENBSD) && !defined(OS_FUCHSIA)
+#if !defined(OS_BSD) && !defined(OS_FUCHSIA)
 int NumberOfProcessors() {
   // sysconf returns the number of "logical" (not "physical") processors on both
   // Mac and Linux.  So we get the number of max available "logical" processors.
@@ -65,7 +65,7 @@ int NumberOfProcessors() {
 base::LazyInstance<
     base::internal::LazySysInfoValue<int, NumberOfProcessors> >::Leaky
     g_lazy_number_of_processors = LAZY_INSTANCE_INITIALIZER;
-#endif  // !defined(OS_OPENBSD) && !defined(OS_FUCHSIA)
+#endif  // !defined(OS_BSD) && !defined(OS_FUCHSIA)
 
 #if !defined(OS_FUCHSIA)
 int64_t AmountOfVirtualMemory() {
@@ -133,7 +133,7 @@ bool GetDiskSpaceInfo(const base::FilePath& path,
 
 namespace base {
 
-#if !defined(OS_OPENBSD) && !defined(OS_FUCHSIA)
+#if !defined(OS_BSD) && !defined(OS_FUCHSIA)
 int SysInfo::NumberOfProcessors() {
   return g_lazy_number_of_processors.Get().value();
 }
@@ -226,6 +226,8 @@ std::string SysInfo::OperatingSystemArchitecture() {
     arch = "x86";
   } else if (arch == "amd64") {
     arch = "x86_64";
+  } else if (arch == "arm64") {
+    arch = "aarch64";
   } else if (std::string(info.sysname) == "AIX") {
     arch = "ppc64";
   }
