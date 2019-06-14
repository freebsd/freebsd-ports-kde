--- mojo/core/options_validation_unittest.cc.orig	2019-03-19 09:06:10 UTC
+++ mojo/core/options_validation_unittest.cc
@@ -18,7 +18,7 @@ namespace {
 
 using TestOptionsFlags = uint32_t;
 
-static_assert(MOJO_ALIGNOF(int64_t) == 8, "int64_t has weird alignment");
+static_assert(MOJO_ALIGNOF(int64_t) <= 8, "int64_t has weird alignment");
 struct MOJO_ALIGNAS(8) TestOptions {
   uint32_t struct_size;
   TestOptionsFlags flags;
