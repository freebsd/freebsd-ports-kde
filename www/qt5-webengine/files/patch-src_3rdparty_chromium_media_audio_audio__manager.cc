--- src/3rdparty/chromium/media/audio/audio_manager.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/media/audio/audio_manager.cc
@@ -94,7 +94,7 @@ class AudioManagerHelper : public base::PowerObserver 
   }
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   void set_app_name(const std::string& app_name) { app_name_ = app_name; }
   const std::string& app_name() const { return app_name_; }
 #endif
@@ -229,7 +229,7 @@ class AudioManagerHelper : public base::PowerObserver 
   std::unique_ptr<base::win::ScopedCOMInitializer> com_initializer_for_testing_;
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   std::string app_name_;
 #endif
 
@@ -313,7 +313,7 @@ void AudioManager::StartHangMonitorIfNeeded(
   GetHelper()->StartHangTimer(std::move(task_runner));
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 // static
 void AudioManager::SetGlobalAppName(const std::string& app_name) {
   GetHelper()->set_app_name(app_name);
