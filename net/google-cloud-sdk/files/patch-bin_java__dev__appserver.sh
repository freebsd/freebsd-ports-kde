--- bin/java_dev_appserver.sh.orig	1980-01-01 08:00:00 UTC
+++ bin/java_dev_appserver.sh
@@ -109,7 +109,7 @@ setup_cloudsdk_python() {
       CLOUDSDK_PYTHON="$CLOUDSDK_ROOT_DIR/platform/bundledpythonunix/bin/python3"
       CLOUDSDK_PYTHON_SITEPACKAGES=1
     else
-      CLOUDSDK_PYTHON=$(order_python python3 python2 python2.7 python)
+      CLOUDSDK_PYTHON=$(order_python python3 python2 %%PYTHON_CMD%% python)
     fi
   fi
 }
