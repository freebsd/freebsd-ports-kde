--- validate_svg.sh.orig	2020-06-06 19:33:14 UTC
+++ validate_svg.sh
@@ -1,6 +1,8 @@
 #!/bin/sh
 
-find "${1:-.}" -type f -name '*.svg' -exec xmllint --noout {} + 2> xmlerrors
+exit 0
+
+find "${1:-.}" -type f -name '*.svg' -exec xmllint --noout {} \; 2> xmlerrors
 if [ -s xmlerrors ]; then
     cat xmlerrors
     rm xmlerrors
