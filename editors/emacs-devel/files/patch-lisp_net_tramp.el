--- lisp/net/tramp.el.orig	2026-04-02 17:47:36 UTC
+++ lisp/net/tramp.el
@@ -3027,16 +3027,18 @@ BODY is the backend specific code."
 			     (format
 			      "file-name-all-completions-%s"
 			      tramp-fnac-add-trailing-slash)
-			   ;; Mark symlinked directories.  Other
-			   ;; directories are already marked.
+			   ;; Mark directories, including symlinks to
+			   ;; directories.  `file-directory-p' follows
+			   ;; symlinks, so no separate `file-symlink-p'
+			   ;; check is needed; for the tramp-sh backend
+			   ;; the result is already cached by the
+			   ;; completion script.
 			   (mapcar
 			    (lambda (x)
 			      (let ((f (file-name-concat ,directory x)))
 				(if (and tramp-fnac-add-trailing-slash
 					 (not (string-suffix-p "/" x))
-					 (file-directory-p
-					  (if (file-symlink-p f)
-					      (file-truename f) f)))
+					 (file-directory-p f))
 				    (concat x "/") x)))
 			    ;; Some storage systems do not return "." and "..".
 			    (seq-union
