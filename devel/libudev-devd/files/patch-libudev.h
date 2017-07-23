Fix the udev backend for kwin.

--- libudev.h.orig	2017-07-23 09:47:30 UTC
+++ libudev.h
@@ -3,6 +3,10 @@
 
 #include <sys/types.h>
 
+#ifdef __cplusplus
+extern "C" {
+#endif
+
 struct udev;
 struct udev_list_entry;
 struct udev_device;
@@ -102,5 +106,9 @@ struct udev_device *udev_monitor_receive_device(
     struct udev_monitor *udev_monitor);
 const char *udev_device_get_action(struct udev_device *udev_device);
 struct udev *udev_monitor_get_udev(struct udev_monitor *udev_monitor);
+
+#ifdef __cplusplus
+} /* extern "C" */
+#endif
 
 #endif /* LIBUDEV_H_ */
