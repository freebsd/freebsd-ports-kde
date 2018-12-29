--- src/3rdparty/chromium/device/usb/usb_service_impl.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/device/usb/usb_service_impl.cc
@@ -27,7 +27,11 @@
 #include "device/usb/usb_device_handle.h"
 #include "device/usb/usb_error.h"
 #include "device/usb/webusb_descriptors.h"
-#include "third_party/libusb/src/libusb/libusb.h"
+#if defined(OS_FREEBSD)
+#  include <libusb.h>
+#else
+#  include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 #if defined(OS_WIN)
 #define INITGUID
@@ -239,8 +243,10 @@ UsbServiceImpl::UsbServiceImpl()
 }
 
 UsbServiceImpl::~UsbServiceImpl() {
+#if !defined(OS_FREEBSD)
   if (hotplug_enabled_)
     libusb_hotplug_deregister_callback(context_->context(), hotplug_handle_);
+#endif
 }
 
 void UsbServiceImpl::GetDevices(const GetDevicesCallback& callback) {
@@ -295,6 +301,7 @@ void UsbServiceImpl::OnUsbContext(scoped_refptr<UsbCon
 
   context_ = std::move(context);
 
+#if !defined(OS_FREEBSD)
   int rv = libusb_hotplug_register_callback(
       context_->context(),
       static_cast<libusb_hotplug_event>(LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED |
@@ -307,6 +314,7 @@ void UsbServiceImpl::OnUsbContext(scoped_refptr<UsbCon
 
   // This will call any enumeration callbacks queued while initializing.
   RefreshDevices();
+#endif // !defined(OS_FREEBSD)
 
 #if defined(OS_WIN)
   DeviceMonitorWin* device_monitor = DeviceMonitorWin::GetForAllInterfaces();
@@ -503,6 +511,7 @@ void UsbServiceImpl::RemoveDevice(scoped_refptr<UsbDev
   device->OnDisconnect();
 }
 
+#if !defined(OS_FREEBSD)
 // static
 int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb_context* context,
                                                 libusb_device* device_raw,
@@ -537,6 +546,7 @@ int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb
 
   return 0;
 }
+#endif // !defined(OS_FREEBSD)
 
 void UsbServiceImpl::OnPlatformDeviceAdded(
     ScopedLibusbDeviceRef platform_device) {
