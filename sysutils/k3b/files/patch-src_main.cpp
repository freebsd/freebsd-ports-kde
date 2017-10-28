From
	https://github.com/KDE/k3b/commit/a681366f7e0d6b3f35fd35d2e525786f5a610f97

--- src/main.cpp.orig	2017-08-19 05:26:23 UTC
+++ src/main.cpp
@@ -16,7 +16,7 @@
 #include <KCoreAddons/KAboutData>
 #include <KI18n/KLocalizedString>
 #include <QtCore/QCommandLineParser>
-#ifdef __clang__
+#if defined(__clang__) && defined(LLVM_MAJOR) && (LLVM_MAJOR > 5)
 #include <sanitizer/common_interface_defs.h>
 #endif
 
@@ -135,11 +135,8 @@ int main( int argc, char* argv[] )
 
     app.init( parser );
 
-#ifdef __clang__
-    if (argc > 2)
-#if LLVM_MAJOR > 5
+#if defined(__clang__) && defined(LLVM_MAJOR) && (LLVM_MAJOR > 5)
         __sanitizer_print_memory_profile(atoi(argv[1]), atoi(argv[2]));
-#endif
 #endif
 
     return app.exec();
