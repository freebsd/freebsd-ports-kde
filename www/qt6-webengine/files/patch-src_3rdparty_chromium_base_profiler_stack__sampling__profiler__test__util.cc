--- src/3rdparty/chromium/base/profiler/stack_sampling_profiler_test_util.cc.orig	2025-08-15 18:30:00 UTC
+++ src/3rdparty/chromium/base/profiler/stack_sampling_profiler_test_util.cc
@@ -50,7 +50,7 @@
 // Fortunately, it provides _alloca, which functions identically.
 #include <malloc.h>
 #define alloca _alloca
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
