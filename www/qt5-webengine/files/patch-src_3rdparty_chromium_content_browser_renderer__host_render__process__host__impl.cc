--- src/3rdparty/chromium/content/browser/renderer_host/render_process_host_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/content/browser/renderer_host/render_process_host_impl.cc
@@ -1632,7 +1632,7 @@ bool RenderProcessHostImpl::Init() {
   renderer_prefix =
       browser_command_line.GetSwitchValueNative(switches::kRendererCmdPrefix);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   int flags = renderer_prefix.empty() ? ChildProcessHost::CHILD_ALLOW_SELF
                                       : ChildProcessHost::CHILD_NORMAL;
 #else
