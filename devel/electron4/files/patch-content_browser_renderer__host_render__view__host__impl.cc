--- content/browser/renderer_host/render_view_host_impl.cc.orig	2019-03-15 06:37:20 UTC
+++ content/browser/renderer_host/render_view_host_impl.cc
@@ -151,7 +151,7 @@ void GetPlatformSpecificPrefs(RendererPreferences* pre
       display::win::ScreenWin::GetSystemMetricsInDIP(SM_CYVSCROLL);
   prefs->arrow_bitmap_width_horizontal_scroll_bar_in_dips =
       display::win::ScreenWin::GetSystemMetricsInDIP(SM_CXHSCROLL);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   prefs->system_font_family_name = gfx::Font().GetFontName();
 #endif
 }
