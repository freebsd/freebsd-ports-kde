--- src/3rdparty/chromium/chrome/browser/ui/webui/settings_utils_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/chrome/browser/ui/webui/settings_utils_linux.cc
@@ -44,6 +44,8 @@ const char* const kKDE5ProxyConfigCommand[] = {"kcmshe
 // supported desktop environment.
 constexpr char kLinuxProxyConfigUrl[] = "about:linux-proxy-config";
 
+// YYY
+#if !defined(OS_BSD)
 // Show the proxy config URL in the given tab.
 void ShowLinuxProxyConfigUrl(int render_process_id, int render_view_id) {
   DCHECK_CURRENTLY_ON(BrowserThread::UI);
@@ -60,6 +62,7 @@ void ShowLinuxProxyConfigUrl(int render_process_id, in
   if (web_contents)
     web_contents->OpenURL(params);
 }
+#endif
 
 // Start the given proxy configuration utility.
 bool StartProxyConfigUtil(const char* const command[]) {
@@ -85,6 +88,8 @@ bool StartProxyConfigUtil(const char* const command[])
   return true;
 }
 
+// YYY
+#if !defined(OS_BSD)
 // Detect, and if possible, start the appropriate proxy config utility. On
 // failure to do so, show the Linux proxy config URL in a new tab instead.
 void DetectAndStartProxyConfigUtil(int render_process_id,
@@ -134,6 +139,7 @@ void DetectAndStartProxyConfigUtil(int render_process_
                           base::BindOnce(&ShowLinuxProxyConfigUrl,
                                          render_process_id, render_view_id));
 }
+#endif
 
 }  // namespace
 
