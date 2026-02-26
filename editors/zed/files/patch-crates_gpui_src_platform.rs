--- crates/gpui/src/platform.rs.orig	2026-02-25 15:15:01 UTC
+++ crates/gpui/src/platform.rs
@@ -78,7 +78,7 @@ pub(crate) use windows::*;
 #[cfg(target_os = "windows")]
 pub(crate) use windows::*;
 
-#[cfg(all(target_os = "linux", feature = "wayland"))]
+#[cfg(all(any(target_os = "linux", target_os = "freebsd"), feature = "wayland"))]
 pub use linux::layer_shell;
 
 #[cfg(any(test, feature = "test-support"))]
@@ -1397,7 +1397,7 @@ pub enum WindowKind {
 
     /// A Wayland LayerShell window, used to draw overlays or backgrounds for applications such as
     /// docks, notifications or wallpapers.
-    #[cfg(all(target_os = "linux", feature = "wayland"))]
+    #[cfg(all(any(target_os = "linux", target_os = "freebsd"), feature = "wayland"))]
     LayerShell(layer_shell::LayerShellOptions),
 
     /// A window that appears on top of its parent window and blocks interaction with it
