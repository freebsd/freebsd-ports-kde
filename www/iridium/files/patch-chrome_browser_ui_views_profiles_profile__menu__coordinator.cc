--- chrome/browser/ui/views/profiles/profile_menu_coordinator.cc.orig	2025-04-16 18:18:42 UTC
+++ chrome/browser/ui/views/profiles/profile_menu_coordinator.cc
@@ -50,7 +50,7 @@ void ProfileMenuCoordinator::Show(bool is_source_accel
   browser.window()->NotifyFeaturePromoFeatureUsed(
       feature_engagement::kIPHProfileSwitchFeature,
       FeaturePromoFeatureUsedAction::kClosePromoIfPresent);
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   browser.window()->NotifyFeaturePromoFeatureUsed(
       feature_engagement::kIPHSupervisedUserProfileSigninFeature,
       FeaturePromoFeatureUsedAction::kClosePromoIfPresent);
