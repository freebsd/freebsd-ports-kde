Supply the version of LLVM we are intending to use via QDOC_USER_CLANG_VERSION,
a made-up CMake varible derived from LLVM_VERSION in the port Makefile, instead
of iterating through potential candidates. This avoids mismatches during the
configure stage when a user has a version of LLVM installed greater than what is
set in DEFAULT_VERSIONS.

PR: 287430

--- src/qdoc/cmake/QDocConfiguration.cmake.orig	2025-09-01 17:41:35 UTC
+++ src/qdoc/cmake/QDocConfiguration.cmake
@@ -8,6 +8,6 @@ set(QDOC_SUPPORTED_CLANG_VERSIONS
 
 # List of explicitly supported Clang versions for QDoc
 set(QDOC_SUPPORTED_CLANG_VERSIONS
-    "21.1" "20.1" "19.1" "18.1" "17.0.6"
+    ${QDOC_USER_CLANG_VERSION}
 )
 
