--- crates/zed/src/zed.rs.orig	2026-04-10 01:17:11 UTC
+++ crates/zed/src/zed.rs
@@ -452,6 +452,7 @@ pub fn initialize_workspace(app_state: Arc<AppState>, 
         if let Some(specs) = window.gpu_specs() {
             log::info!("Using GPU: {:?}", specs);
             show_software_emulation_warning_if_needed(specs.clone(), window, cx);
+            #[cfg(not(target_os = "freebsd"))]
             crashes::set_gpu_info(specs);
         }
 
