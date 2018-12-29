--- src/3rdparty/chromium/components/storage_monitor/storage_monitor.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/components/storage_monitor/storage_monitor.cc
@@ -93,6 +93,7 @@ std::vector<StorageInfo> StorageMonitor::GetAllAvailab
 
 void StorageMonitor::EnsureInitialized(base::Closure callback) {
   DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
+//#if !defined(OS_BSD) //XXX(rene) why disabled?
   if (initialized_) {
     if (!callback.is_null())
       callback.Run();
@@ -108,6 +109,7 @@ void StorageMonitor::EnsureInitialized(base::Closure c
 
   initializing_ = true;
   Init();
+//#endif
 }
 
 bool StorageMonitor::IsInitialized() const {
