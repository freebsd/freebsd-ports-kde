--- src/3rdparty/chromium/gpu/command_buffer/service/shared_image/shared_image_manager.cc.orig	2024-10-22 08:31:56 UTC
+++ src/3rdparty/chromium/gpu/command_buffer/service/shared_image/shared_image_manager.cc
@@ -603,7 +603,7 @@ bool SharedImageManager::SupportsScanoutImages() {
   return true;
 #elif BUILDFLAG(IS_ANDROID)
   return base::AndroidHardwareBufferCompat::IsSupportAvailable();
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   return ui::OzonePlatform::GetInstance()
       ->GetPlatformRuntimeProperties()
       .supports_native_pixmaps;
