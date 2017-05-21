--- plugins/sftp/mounter.cpp.orig	2016-07-16 21:38:06 UTC
+++ plugins/sftp/mounter.cpp
@@ -206,7 +206,7 @@
         toDestroy->kill();
         delete toDestroy;
         //Free mount point (won't always succeed if the path is in use)
-        KProcess::execute(QStringList() << QStringLiteral("fusermount") << QStringLiteral("-u") << m_mountPoint, 10000);
+        KProcess::execute(QStringList() << QStringLiteral("umount") << m_mountPoint, 10000);
     }
     m_started = false;
 }
