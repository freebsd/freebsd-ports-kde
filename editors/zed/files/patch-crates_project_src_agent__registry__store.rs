--- crates/project/src/agent_registry_store.rs.orig	2026-02-25 15:15:01 UTC
+++ crates/project/src/agent_registry_store.rs
@@ -490,6 +490,8 @@ fn current_platform_key() -> Option<&'static str> {
         "linux"
     } else if cfg!(target_os = "windows") {
         "windows"
+    } else if cfg!(target_os = "freebsd") {
+        "freebsd"
     } else {
         return None;
     };
@@ -516,6 +518,11 @@ fn current_platform_key() -> Option<&'static str> {
         "windows" => match arch {
             "aarch64" => "windows-aarch64",
             "x86_64" => "windows-x86_64",
+            _ => return None,
+        },
+        "freebsd" => match arch {
+            "aarch64" => "freebsd-aarch64",
+            "x86_64" => "freebsd-x86_64",
             _ => return None,
         },
         _ => return None,
