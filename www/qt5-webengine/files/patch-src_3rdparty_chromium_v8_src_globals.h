--- src/3rdparty/chromium/v8/src/globals.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/v8/src/globals.h
@@ -199,7 +199,11 @@ constexpr bool kRequiresCodeRange = true;
 constexpr size_t kMaximalCodeRangeSize = 256 * MB;
 constexpr size_t kCodeRangeAreaAlignment = 256 * MB;
 #elif V8_HOST_ARCH_PPC && V8_TARGET_ARCH_PPC && V8_OS_LINUX
+#if defined(__FreeBSD__)
+const size_t kMaximalCodeRangeSize = 256 * MB;
+#else
 constexpr size_t kMaximalCodeRangeSize = 512 * MB;
+#endif
 constexpr size_t kCodeRangeAreaAlignment = 64 * KB;  // OS page on PPC Linux
 #elif V8_TARGET_ARCH_ARM64
 constexpr size_t kMaximalCodeRangeSize = 128 * MB;
