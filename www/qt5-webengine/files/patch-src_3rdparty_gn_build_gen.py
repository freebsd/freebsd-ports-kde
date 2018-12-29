--- src/3rdparty/gn/build/gen.py.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/gn/build/gen.py
@@ -41,6 +41,8 @@ class Platform(object):
       self._platform = 'aix'
     elif self._platform.startswith('fuchsia'):
       self._platform = 'fuchsia'
+    elif self._platform.startswith('freebsd'):
+      self._platform = 'linux'
 
   @staticmethod
   def known_platforms():
