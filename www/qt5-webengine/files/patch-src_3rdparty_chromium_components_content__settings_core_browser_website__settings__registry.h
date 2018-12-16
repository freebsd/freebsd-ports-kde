--- src/3rdparty/chromium/components/content_settings/core/browser/website_settings_registry.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/components/content_settings/core/browser/website_settings_registry.h
@@ -37,10 +37,11 @@ class WebsiteSettingsRegistry {
     PLATFORM_ANDROID = 1 << 4,
     PLATFORM_IOS = 1 << 5,
     PLATFORM_FUCHSIA = 1 << 6,
+    PLATFORM_BSD = 1 << 7
 
     // Settings only applied to win, mac, linux, chromeos, and fuchsia.
     DESKTOP = PLATFORM_WINDOWS | PLATFORM_LINUX | PLATFORM_CHROMEOS |
-              PLATFORM_MAC | PLATFORM_FUCHSIA,
+              PLATFORM_MAC | PLATFORM_FUCHSIA | PLATFORM_BSD,
 
     // Settings applied to all platforms, including win, mac, linux, chromeos,
     // android, ios, and fuchsia.
