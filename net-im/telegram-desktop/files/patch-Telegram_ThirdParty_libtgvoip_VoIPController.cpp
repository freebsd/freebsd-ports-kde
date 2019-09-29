--- Telegram/ThirdParty/libtgvoip/VoIPController.cpp.orig	2019-07-15 12:59:17 UTC
+++ Telegram/ThirdParty/libtgvoip/VoIPController.cpp
@@ -3048,7 +3048,7 @@ static void initMachTimestart() {
 #endif
 
 double VoIPController::GetCurrentTime(){
-#if defined(__linux__)
+#if defined(__linux__) || defined(__FreeBSD__)
 	struct timespec ts;
 	clock_gettime(CLOCK_MONOTONIC, &ts);
 	return ts.tv_sec+(double)ts.tv_nsec/1000000000.0;
