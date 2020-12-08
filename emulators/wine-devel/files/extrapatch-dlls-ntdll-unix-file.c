--- dlls/ntdll/unix/file.c.orig	2020-11-07 09:33:27.083812000 +0000
+++ dlls/ntdll/unix/file.c	2020-11-07 09:53:55.641522000 +0000
@@ -394,6 +394,18 @@
 #define XATTR_USER_PREFIX_LEN (sizeof(XATTR_USER_PREFIX) - 1)
 #endif
 
+#ifdef HAVE_SYS_EXTATTR_H
+static inline int xattr_valid_namespace( const char *name )
+{
+    if (strncmp( XATTR_USER_PREFIX, name, XATTR_USER_PREFIX_LEN ) != 0)
+    {
+        errno = EPERM;
+        return 0;
+    }
+    return 1;
+}
+#endif
+
 static int xattr_fremove( int filedes, const char *name )
 {
 #if defined(XATTR_ADDITIONAL_OPTIONS)
