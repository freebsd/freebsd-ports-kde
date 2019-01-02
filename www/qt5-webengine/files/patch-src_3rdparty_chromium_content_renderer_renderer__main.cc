--- src/3rdparty/chromium/content/renderer/renderer_main.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/renderer/renderer_main.cc
@@ -177,7 +177,7 @@ int RendererMain(const MainFunctionParams& parameters)
     bool need_sandbox =
         !command_line.HasSwitch(service_manager::switches::kNoSandbox);
 
-#if !defined(OS_WIN) && !defined(OS_MACOSX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_BSD)
     // Sandbox is enabled before RenderProcess initialization on all platforms,
     // except Windows and Mac.
     // TODO(markus): Check if it is OK to remove ifdefs for Windows and Mac.
@@ -187,12 +187,15 @@ int RendererMain(const MainFunctionParams& parameters)
     }
 #endif
 
+// YYY
+//#if !defined(OS_BSD)
     auto render_process = RenderProcessImpl::Create();
     RenderThreadImpl::Create(std::move(main_message_loop),
                              std::move(main_thread_scheduler));
 
     if (need_sandbox)
       run_loop = platform.EnableSandbox();
+//#endif
 
     base::HighResolutionTimerManager hi_res_timer_manager;
 
