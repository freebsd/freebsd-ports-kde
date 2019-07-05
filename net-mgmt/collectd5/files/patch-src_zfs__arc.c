--- src/zfs_arc.c.orig	2019-06-13 09:13:42 UTC
+++ src/zfs_arc.c
@@ -322,8 +322,6 @@ static int za_read(void) {
   za_read_derive(ksp, "prefetch_metadata_hits", "cache_result",
                  "prefetch_metadata-hit");
   za_read_derive(ksp, "demand_data_misses", "cache_result", "demand_data-miss");
-  za_read_derive(ksp, "demand_metadata_misses", "cache_result",
-                 "demand_metadata-miss");
   za_read_derive(ksp, "prefetch_data_misses", "cache_result",
                  "prefetch_data-miss");
   za_read_derive(ksp, "prefetch_metadata_misses", "cache_result",
