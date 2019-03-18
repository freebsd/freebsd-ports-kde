--- src/3rdparty/gn/util/ticks.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/gn/util/ticks.cc
@@ -11,7 +11,7 @@
 #include <windows.h>
 #elif defined(OS_MACOSX)
 #include <mach/mach_time.h>
-#elif defined(OS_LINUX) || defined(OS_AIX)
+#elif defined(OS_LINUX) || defined(OS_AIX) || defined(OS_BSD)
 #include <time.h>
 #else
 #error Port.
@@ -27,7 +27,7 @@ LARGE_INTEGER g_start;
 #elif defined(OS_MACOSX)
 mach_timebase_info_data_t g_timebase;
 uint64_t g_start;
-#elif defined(OS_LINUX) || defined(OS_AIX)
+#elif defined(OS_LINUX) || defined(OS_AIX) || defined(OS_BSD)
 uint64_t g_start;
 #else
 #error Port.
@@ -44,7 +44,7 @@ void Init() {
 #elif defined(OS_MACOSX)
   mach_timebase_info(&g_timebase);
   g_start = (mach_absolute_time() * g_timebase.numer) / g_timebase.denom;
-#elif defined(OS_LINUX) || defined(OS_AIX)
+#elif defined(OS_LINUX) || defined(OS_AIX) || defined(OS_BSD)
   struct timespec ts;
   clock_gettime(CLOCK_MONOTONIC, &ts);
   g_start = static_cast<uint64_t>(ts.tv_sec) * kNano +
@@ -74,7 +74,7 @@ Ticks TicksNow() {
 #elif defined(OS_MACOSX)
   now =
       ((mach_absolute_time() * g_timebase.numer) / g_timebase.denom) - g_start;
-#elif defined(OS_LINUX) || defined(OS_AIX)
+#elif defined(OS_LINUX) || defined(OS_AIX) || defined(OS_BSD)
   struct timespec ts;
   clock_gettime(CLOCK_MONOTONIC, &ts);
   now = (static_cast<uint64_t>(ts.tv_sec) * kNano +
