--- src/tool_operate.c.orig	2019-09-10 17:47:19 UTC
+++ src/tool_operate.c
@@ -960,20 +960,7 @@ static CURLcode create_transfers(struct 
             DEBUGASSERT(!outs->filename);
           }
 
-          if(config->resume_from_current) {
-            /* We're told to continue from where we are now. Get the size
-               of the file as it is now and open it for append instead */
-            struct_stat fileinfo;
-            /* VMS -- Danger, the filesize is only valid for stream files */
-            if(0 == stat(per->outfile, &fileinfo))
-              /* set offset to current file size: */
-              config->resume_from = fileinfo.st_size;
-            else
-              /* let offset be 0 */
-              config->resume_from = 0;
-          }
-
-          if(config->resume_from) {
+          if(config->resume_from || config->resume_from_current) {
 #ifdef __VMS
             /* open file for output, forcing VMS output format into stream
                mode which is needed for stat() call above to always work. */
@@ -981,7 +968,8 @@ static CURLcode create_transfers(struct 
                                "ctx=stm", "rfm=stmlf", "rat=cr", "mrs=0");
 #else
             /* open file for output: */
-            FILE *file = fopen(per->outfile, config->resume_from?"ab":"wb");
+            /* (always open for appending, it has no effect on new files) */
+            FILE *file = fopen(per->outfile, "ab");
 #endif
             if(!file) {
               helpf(global->errors, "Can't open '%s'!\n", per->outfile);
@@ -990,6 +978,19 @@ static CURLcode create_transfers(struct 
             }
             outs->fopened = TRUE;
             outs->stream = file;
+
+            if(config->resume_from_current) {
+              /* We're told to continue from where we are now. Get the size
+                 of the file as it is now */
+              struct_stat fileinfo;
+              if(0 == fstat(fileno(outs->stream), &fileinfo))
+                /* set offset to current file size: */
+                config->resume_from = fileinfo.st_size;
+              else
+                /* let offset be 0 */
+                config->resume_from = 0;
+            }
+
             outs->init = config->resume_from;
           }
           else {
