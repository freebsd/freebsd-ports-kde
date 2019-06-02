--- media/base/video_frame.cc.orig	2019-03-15 06:37:27 UTC
+++ media/base/video_frame.cc
@@ -64,7 +64,7 @@ static std::string StorageTypeToString(
       return "OWNED_MEMORY";
     case VideoFrame::STORAGE_SHMEM:
       return "SHMEM";
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     case VideoFrame::STORAGE_DMABUFS:
       return "DMABUFS";
 #endif
@@ -80,7 +80,7 @@ static std::string StorageTypeToString(
 // static
 static bool IsStorageTypeMappable(VideoFrame::StorageType storage_type) {
   return
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       // This is not strictly needed but makes explicit that, at VideoFrame
       // level, DmaBufs are not mappable from userspace.
       storage_type != VideoFrame::STORAGE_DMABUFS &&
@@ -367,7 +367,7 @@ scoped_refptr<VideoFrame> VideoFrame::WrapExternalYuva
   return frame;
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 // static
 scoped_refptr<VideoFrame> VideoFrame::WrapExternalDmabufs(
     VideoPixelFormat format,
@@ -488,7 +488,7 @@ scoped_refptr<VideoFrame> VideoFrame::WrapVideoFrame(
     wrapping_frame->data_[i] = frame->data(i);
   }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // If there are any |dmabuf_fds_| plugged in, we should duplicate them.
   if (frame->storage_type() == STORAGE_DMABUFS) {
     wrapping_frame->dmabuf_fds_ = DuplicateFDs(frame->dmabuf_fds_);
@@ -860,7 +860,7 @@ size_t VideoFrame::shared_memory_offset() const {
   return shared_memory_offset_;
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 std::vector<int> VideoFrame::DmabufFds() const {
   DCHECK_EQ(storage_type_, STORAGE_DMABUFS);
   std::vector<int> ret;
