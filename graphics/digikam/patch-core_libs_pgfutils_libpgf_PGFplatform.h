--- core/libs/pgfutils/libpgf/PGFplatform.h.orig	2018-11-02 11:23:33 UTC
+++ core/libs/pgfutils/libpgf/PGFplatform.h
@@ -485,7 +485,9 @@ __inline int MulDiv(int nNumber, int nNumerator, int n
 #define FSFromStart			SEEK_SET
 #define FSFromCurrent		SEEK_CUR
 #define FSFromEnd			SEEK_END
+#if !defined(__FreeBSD__)
 #define nullptr				NULL
+#endif
 
 //-------------------------------------------------------------------------------
 // IO Error constants
