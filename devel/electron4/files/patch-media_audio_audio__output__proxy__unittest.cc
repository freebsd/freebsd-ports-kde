--- media/audio/audio_output_proxy_unittest.cc.orig	2019-03-15 06:37:27 UTC
+++ media/audio/audio_output_proxy_unittest.cc
@@ -410,7 +410,7 @@ class AudioOutputProxyTest : public testing::Test {
     // |stream| is closed at this point. Start() should reopen it again.
     EXPECT_CALL(manager(), MakeAudioOutputStream(_, _, _))
         .Times(2)
-        .WillRepeatedly(Return(reinterpret_cast<AudioOutputStream*>(NULL)));
+        .WillRepeatedly(Return(static_cast<AudioOutputStream*>(NULL)));
 
     EXPECT_CALL(callback_, OnError()).Times(2);
 
