Combination of https://github.com/pypa/installer/commit/8b72cf945bfa and
https://github.com/pypa/installer/commit/b5f03f151f0e.
See https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=294631 and
https://github.com/pypa/installer/issues/325.

--- src/installer/destinations.py.orig	2026-03-28 15:38:56 UTC
+++ src/installer/destinations.py
@@ -136,8 +136,18 @@ class SchemeDictionaryDestination(WheelDestination):
     """Silently overwrite existing files."""
 
     def _path_with_destdir(self, scheme: Scheme, path: str) -> Path:
-        target_dir = Path(self.scheme_dict[scheme]).resolve()
-        file = (target_dir / path).resolve()
+        # See https://docs.python.org/3/library/zipfile.html#zipfile.Path:
+        #  When handling untrusted archives,
+        #  consider resolving filenames using os.path.abspath()
+        #  and checking against the target directory with os.path.commonpath().
+        #
+        # Attention: Path.absolute() is not sufficient because it does not
+        #  normalize, i.e. does not remove "..".
+        #
+        # We want to avoid Path.resolve() because it is significantly slower
+        # than os.path.abspath()!
+        target_dir = Path(os.path.abspath(self.scheme_dict[scheme]))  # noqa: PTH100
+        file = Path(os.path.abspath(target_dir / path))  # noqa: PTH100
 
         if not file.is_relative_to(target_dir):
             raise ValueError(
