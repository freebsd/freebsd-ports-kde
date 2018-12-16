--- src/3rdparty/chromium/net/base/network_interfaces_posix.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/net/base/network_interfaces_posix.cc
@@ -16,6 +16,7 @@
 namespace net {
 namespace internal {
 
+#if !defined(OS_BSD)
 // The application layer can pass |policy| defined in net_util.h to
 // request filtering out certain type of interfaces.
 bool ShouldIgnoreInterface(const std::string& name, int policy) {
@@ -29,6 +30,7 @@ bool ShouldIgnoreInterface(const std::string& name, in
 
   return false;
 }
+#endif
 
 // Check if the address is unspecified (i.e. made of zeroes) or loopback.
 bool IsLoopbackOrUnspecifiedAddress(const sockaddr* addr) {
