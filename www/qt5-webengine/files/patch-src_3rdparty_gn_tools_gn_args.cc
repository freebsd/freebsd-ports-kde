--- src/3rdparty/gn/tools/gn/args.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/gn/tools/gn/args.cc
@@ -296,6 +296,8 @@ void Args::SetSystemVarsLocked(Scope* dest) const {
   os = "linux";
 #elif defined(OS_AIX)
   os = "aix";
+#elif defined(OS_BSD)
+  os = "bsd";
 #else
 #error Unknown OS type.
 #endif
