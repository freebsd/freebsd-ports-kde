--- setup.py.orig	2019-04-24 06:21:37 UTC
+++ setup.py
@@ -52,11 +52,12 @@ COVERAGE = bool(os.getenv('COVERAGE'))
 # Version
 ################################################################################
 
-try:
-    git_version = subprocess.check_output(['git', 'rev-parse', 'HEAD'],
-                                          cwd=TOP_DIR).decode('ascii').strip()
-except (OSError, subprocess.CalledProcessError):
-    git_version = None
+#try:
+#    git_version = subprocess.check_output(['git', 'rev-parse', 'HEAD'],
+#                                          cwd=TOP_DIR).decode('ascii').strip()
+#except (OSError, subprocess.CalledProcessError):
+#    git_version = None
+git_version = None
 
 with open(os.path.join(TOP_DIR, 'VERSION_NUMBER')) as version_file:
     VersionInfo = namedtuple('VersionInfo', ['version', 'git_version'])(
@@ -286,7 +287,7 @@ install_requires.extend([
     'protobuf',
     'numpy',
     'six',
-    'typing>=3.6.4',
+    'typing>=3.6.4; python_version < "3.5"',
     'typing-extensions>=3.6.2.1',
 ])
 
