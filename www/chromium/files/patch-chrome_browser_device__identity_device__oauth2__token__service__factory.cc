--- chrome/browser/device_identity/device_oauth2_token_service_factory.cc.orig	2020-11-13 06:36:36 UTC
+++ chrome/browser/device_identity/device_oauth2_token_service_factory.cc
@@ -28,7 +28,7 @@ std::unique_ptr<DeviceOAuth2TokenStore> CreatePlatform
 #if defined(OS_CHROMEOS)
   return std::make_unique<chromeos::DeviceOAuth2TokenStoreChromeOS>(
       local_state);
-#elif defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX)
+#elif defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD)
   DCHECK(
       base::FeatureList::IsEnabled(policy::features::kCBCMPolicyInvalidations));
   return std::make_unique<DeviceOAuth2TokenStoreDesktop>(local_state);
