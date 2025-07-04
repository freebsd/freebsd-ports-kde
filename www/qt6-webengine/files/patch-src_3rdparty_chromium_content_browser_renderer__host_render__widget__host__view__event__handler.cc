--- src/3rdparty/chromium/content/browser/renderer_host/render_widget_host_view_event_handler.cc.orig	2024-08-26 12:06:38 UTC
+++ src/3rdparty/chromium/content/browser/renderer_host/render_widget_host_view_event_handler.cc
@@ -602,7 +602,7 @@ bool RenderWidgetHostViewEventHandler::CanRendererHand
   if (event->type() == ui::EventType::kMouseExited) {
     if (mouse_locked || selection_popup)
       return false;
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Don't forward the mouse leave message which is received when the context
     // menu is displayed by the page. This confuses the page and causes state
     // changes.
