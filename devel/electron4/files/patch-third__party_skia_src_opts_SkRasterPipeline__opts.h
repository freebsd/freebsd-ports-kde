--- third_party/skia/src/opts/SkRasterPipeline_opts.h.orig	2019-03-15 06:41:36 UTC
+++ third_party/skia/src/opts/SkRasterPipeline_opts.h
@@ -657,7 +657,7 @@ SI F approx_powf(F x, F y) {
 }
 
 SI F from_half(U16 h) {
-#if defined(__aarch64__) && !defined(SK_BUILD_FOR_GOOGLE3)  // Temporary workaround for some Google3 builds.
+#if defined(JUMPER_IS_NEON) && defined(__aarch64__) && !defined(SK_BUILD_FOR_GOOGLE3)  // Temporary workaround for some Google3 builds.
     return vcvt_f32_f16(h);
 
 #elif defined(JUMPER_IS_HSW) || defined(JUMPER_IS_AVX512)
@@ -677,7 +677,7 @@ SI F from_half(U16 h) {
 }
 
 SI U16 to_half(F f) {
-#if defined(__aarch64__) && !defined(SK_BUILD_FOR_GOOGLE3)  // Temporary workaround for some Google3 builds.
+#if defined(JUMPER_IS_NEON) && defined(__aarch64__) && !defined(SK_BUILD_FOR_GOOGLE3)  // Temporary workaround for some Google3 builds.
     return vcvt_f16_f32(f);
 
 #elif defined(JUMPER_IS_HSW) || defined(JUMPER_IS_AVX512)
