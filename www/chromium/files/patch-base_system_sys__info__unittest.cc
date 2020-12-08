--- base/system/sys_info_unittest.cc.orig	2020-11-16 14:01:04 UTC
+++ base/system/sys_info_unittest.cc
@@ -50,13 +50,13 @@ TEST_F(SysInfoTest, AmountOfMem) {
   EXPECT_GE(SysInfo::AmountOfVirtualMemory(), 0);
 }
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_ANDROID)
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_ANDROID) || defined(OS_BSD)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #define MAYBE_AmountOfAvailablePhysicalMemory \
   DISABLED_AmountOfAvailablePhysicalMemory
 #else
 #define MAYBE_AmountOfAvailablePhysicalMemory AmountOfAvailablePhysicalMemory
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 TEST_F(SysInfoTest, MAYBE_AmountOfAvailablePhysicalMemory) {
   // Note: info is in _K_bytes.
   SystemMemoryInfoKB info;
@@ -87,7 +87,7 @@ TEST_F(SysInfoTest, MAYBE_AmountOfAvailablePhysicalMem
   EXPECT_GT(amount, static_cast<int64_t>(info.free) * 1024);
   EXPECT_LT(amount / 1024, info.total);
 }
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_ANDROID)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_ANDROID) || defined(OS_BSDD)
 
 #if defined(OS_FUCHSIA)
 // TODO(crbug.com/851734): Implementation depends on statvfs, which is not
@@ -117,7 +117,7 @@ TEST_F(SysInfoTest, MAYBE_AmountOfTotalDiskSpace) {
   EXPECT_GT(SysInfo::AmountOfTotalDiskSpace(tmp_path), 0) << tmp_path.value();
 }
 
-#if defined(OS_WIN) || defined(OS_APPLE) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_APPLE) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS) || defined(OS_FUCHSIA)
 TEST_F(SysInfoTest, OperatingSystemVersionNumbers) {
   int32_t os_major_version = -1;
@@ -178,7 +178,7 @@ TEST_F(SysInfoTest, GetHardwareInfo) {
   EXPECT_TRUE(IsStringUTF8(hardware_info->model));
   bool empty_result_expected =
 #if defined(OS_ANDROID) || defined(OS_APPLE) || defined(OS_WIN) || \
-    defined(OS_LINUX) || defined(OS_CHROMEOS)
+    defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
       false;
 #else
       true;
