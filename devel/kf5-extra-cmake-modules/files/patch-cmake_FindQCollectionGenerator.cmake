--- cmake/FindQCollectionGenerator.cmake.orig	2018-10-15 18:41:46 UTC
+++ cmake/FindQCollectionGenerator.cmake
@@ -55,9 +55,7 @@
 
 find_program(QCollectionGenerator_EXECUTABLE
     NAMES
-        qcollectiongenerator
-        qcollectiongenerator-qt4
-        qcollectiongenerator-qt5
+        qhelpgenerator
     DOC "Qt help collection generator"
 )
 
