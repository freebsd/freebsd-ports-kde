Revert: https://github.com/qt/qtdeclarative/commit/f97e72d1da5961b5702f05653e42c9e853f75400

--- src/3rdparty/masm/stubs/wtf/Optional.h.orig	2018-10-27 18:57:21 UTC
+++ src/3rdparty/masm/stubs/wtf/Optional.h
@@ -83,6 +83,7 @@ class optional { (private)
 
 #endif
 
+#if not defined(__FreeBSD__)
 #if __cplusplus < 201402L && !defined(__cpp_lib_make_unique) && !defined(Q_CC_MSVC) && !defined(Q_CC_GHS)
 
 namespace std {
@@ -91,4 +92,5 @@ namespace std {
       { return unique_ptr<T>(new T(std::forward<Args>(args)...)); }
 }
 
+#endif
 #endif
