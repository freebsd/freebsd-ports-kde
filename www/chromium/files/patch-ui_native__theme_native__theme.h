--- ui/native_theme/native_theme.h.orig	2020-11-13 06:37:06 UTC
+++ ui/native_theme/native_theme.h
@@ -51,7 +51,7 @@ class NATIVE_THEME_EXPORT NativeTheme {
   // The part to be painted / sized.
   enum Part {
     kCheckbox,
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
     kFrameTopArea,
 #endif
     kInnerSpinButton,
