--- src/3rdparty/chromium/tools/generate_shim_headers/generate_shim_headers.py.orig	2025-08-15 18:30:00 UTC
+++ src/3rdparty/chromium/tools/generate_shim_headers/generate_shim_headers.py
@@ -65,6 +65,9 @@ def GeneratorMain(argv):
       if options.outputs:
         yield os.path.join(target_directory, header_filename)
       if options.generate:
+        source_file = os.path.join(root, header_filename)
+        if os.path.exists(source_file):
+          os.unlink(source_file)
         header_path = os.path.join(target_directory, header_filename)
         header_dir = os.path.dirname(header_path)
         if not os.path.exists(header_dir):
