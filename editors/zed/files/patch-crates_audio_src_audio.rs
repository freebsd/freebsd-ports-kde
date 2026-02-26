--- crates/audio/src/audio.rs.orig	2026-02-26 06:18:42 UTC
+++ crates/audio/src/audio.rs
@@ -169,7 +169,7 @@ impl Audio {
                 target_os = "freebsd"
             ))]
             {
-                let source = rodio::source::Zero::<f32>::new(CHANNEL_COUNT, SAMPLE_RATE);
+                let source = rodio::source::Zero::new(CHANNEL_COUNT, SAMPLE_RATE);
                 output_handle.mixer().add(source);
             }
 
