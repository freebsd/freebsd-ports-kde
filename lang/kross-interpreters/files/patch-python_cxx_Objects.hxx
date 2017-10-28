--- python/cxx/Objects.hxx.orig	2017-03-08 09:19:49 UTC
+++ python/cxx/Objects.hxx
@@ -1078,7 +1078,7 @@ namespace Py
         // TMM: added this seqref ctor for use with STL algorithms
         seqref (Object& obj)
             : s(dynamic_cast< SeqBase<T>&>(obj))
-            , offset( NULL )
+            , offset( 0 )
             , the_item(s.getItem(offset))
         {}
         ~seqref()
