--- src/3rdparty/chromium/content/renderer/render_thread_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/renderer/render_thread_impl.cc
@@ -199,11 +199,13 @@
 #include "mojo/public/cpp/bindings/message_dumper.h"
 #endif
 
+#if !defined(OS_BSD)
 #if defined(OS_MACOSX)
 #include <malloc/malloc.h>
 #else
 #include <malloc.h>
 #endif
+#endif
 
 using base::ThreadRestrictions;
 using blink::WebDocument;
@@ -1451,7 +1453,7 @@ media::GpuVideoAcceleratorFactories* RenderThreadImpl:
        gpu::kGpuFeatureStatusEnabled);
   const bool enable_gpu_memory_buffers =
       !is_gpu_compositing_disabled_ &&
-#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
       !cmd_line->HasSwitch(switches::kDisableGpuMemoryBufferVideoFrames);
 #else
       cmd_line->HasSwitch(switches::kEnableGpuMemoryBufferVideoFrames);
@@ -1825,7 +1827,11 @@ bool RenderThreadImpl::GetRendererMemoryMetrics(
       blink_stats.blink_gc_total_allocated_bytes / 1024;
   std::unique_ptr<base::ProcessMetrics> metric(
       base::ProcessMetrics::CreateCurrentProcessMetrics());
+#if defined(OS_BSD)
+  size_t malloc_usage = 0;
+#else
   size_t malloc_usage = metric->GetMallocUsage();
+#endif
   memory_metrics->malloc_mb = malloc_usage / 1024 / 1024;
 
   discardable_memory::ClientDiscardableSharedMemoryManager::Statistics
