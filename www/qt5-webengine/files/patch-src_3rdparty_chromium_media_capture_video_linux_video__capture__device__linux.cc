--- src/3rdparty/chromium/media/capture/video/linux/video_capture_device_linux.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/media/capture/video/linux/video_capture_device_linux.cc
@@ -23,12 +23,14 @@
 
 namespace media {
 
+#if !defined(OS_FREEBSD)
 // Translates Video4Linux pixel formats to Chromium pixel formats.
 // static
 VideoPixelFormat VideoCaptureDeviceLinux::V4l2FourCcToChromiumPixelFormat(
     uint32_t v4l2_fourcc) {
   return V4L2CaptureDelegate::V4l2FourCcToChromiumPixelFormat(v4l2_fourcc);
 }
+#endif // !defined(OS_FREEBSD)
 
 // Gets a list of usable Four CC formats prioritized.
 // static
@@ -51,6 +53,7 @@ VideoCaptureDeviceLinux::~VideoCaptureDeviceLinux() {
   v4l2_thread_.Stop();
 }
 
+#if !defined(OS_FREEBSD)
 void VideoCaptureDeviceLinux::AllocateAndStart(
     const VideoCaptureParams& params,
     std::unique_ptr<VideoCaptureDevice::Client> client) {
@@ -80,7 +83,13 @@ void VideoCaptureDeviceLinux::AllocateAndStart(
     v4l2_thread_.task_runner()->PostTask(FROM_HERE, request);
   photo_requests_queue_.clear();
 }
+#else // !defined(OS_FREEBSD)
+void VideoCaptureDeviceLinux::AllocateAndStart(
+    const VideoCaptureParams& params,
+    std::unique_ptr<VideoCaptureDevice::Client> client) {}
+#endif // !defined(OS_FREEBSD)
 
+#if !defined(OS_FREEBSD)
 void VideoCaptureDeviceLinux::StopAndDeAllocate() {
   if (!v4l2_thread_.IsRunning())
     return;  // Wrong state.
@@ -92,6 +101,9 @@ void VideoCaptureDeviceLinux::StopAndDeAllocate() {
 
   capture_impl_ = nullptr;
 }
+#else // !defined(OS_FREEBSD)
+void VideoCaptureDeviceLinux::StopAndDeAllocate() {}
+#endif // !defined(OS_FREEBSD)
 
 void VideoCaptureDeviceLinux::TakePhoto(TakePhotoCallback callback) {
   DCHECK(capture_impl_);
@@ -132,6 +144,7 @@ void VideoCaptureDeviceLinux::SetPhotoOptions(
   v4l2_thread_.task_runner()->PostTask(FROM_HERE, std::move(functor));
 }
 
+#if !defined(OS_FREEBSD)
 void VideoCaptureDeviceLinux::SetRotation(int rotation) {
   if (v4l2_thread_.IsRunning()) {
     v4l2_thread_.task_runner()->PostTask(
@@ -139,6 +152,9 @@ void VideoCaptureDeviceLinux::SetRotation(int rotation
                               capture_impl_->GetWeakPtr(), rotation));
   }
 }
+#else // !defined(OS_FREEBSD)
+void VideoCaptureDeviceLinux::SetRotation(int rotation) {}
+#endif // !defined(OS_FREEBSD)
 
 // static
 int VideoCaptureDeviceLinux::TranslatePowerLineFrequencyToV4L2(
