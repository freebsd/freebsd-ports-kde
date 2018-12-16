--- src/3rdparty/chromium/device/usb/usb_device_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/device/usb/usb_device_impl.cc
@@ -24,7 +24,11 @@
 #include "device/usb/usb_device_handle_impl.h"
 #include "device/usb/usb_error.h"
 #include "device/usb/usb_service.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace device {
 
