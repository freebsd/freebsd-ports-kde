--- src/3rdparty/chromium/media/base/video_frame.h.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/media/base/video_frame.h
@@ -69,7 +69,7 @@ class MEDIA_EXPORT VideoFrame : public base::RefCounte
     STORAGE_UNOWNED_MEMORY = 2,  // External, non owned data pointers.
     STORAGE_OWNED_MEMORY = 3,  // VideoFrame has allocated its own data buffer.
     STORAGE_SHMEM = 4,         // Pixels are backed by Shared Memory.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(mcasas): Consider turning this type into STORAGE_NATIVE
     // based on the idea of using this same enum value for both DMA
     // buffers on Linux and CVPixelBuffers on Mac (which currently use
@@ -225,7 +225,7 @@ class MEDIA_EXPORT VideoFrame : public base::RefCounte
       uint8_t* a_data,
       base::TimeDelta timestamp);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Wraps provided dmabufs
   // (https://www.kernel.org/doc/html/latest/driver-api/dma-buf.html) with a
   // VideoFrame. The frame will take ownership of |dmabuf_fds|, and will
@@ -387,7 +387,7 @@ class MEDIA_EXPORT VideoFrame : public base::RefCounte
   // Returns the offset into the shared memory where the frame data begins.
   size_t shared_memory_offset() const;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Return a vector containing the backing DmaBufs for this frame. The number
   // of returned DmaBufs will be equal or less than the number of planes of
   // the frame. If there are less, this means that the last FD contains the
@@ -606,7 +606,7 @@ class MEDIA_EXPORT VideoFrame : public base::RefCounte
   // memory.
   size_t shared_memory_offset_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Dmabufs for the frame, used when storage is STORAGE_DMABUFS. Size is either
   // equal or less than the number of planes of the frame. If it is less, then
   // the memory area represented by the last FD contains the remaining planes.
