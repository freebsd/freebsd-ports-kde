------------------------------------------------------------------------
r99055 | des | 2002-06-29 04:21:58 -0700 (Sat, 29 Jun 2002) | 6 lines
Changed paths:
   M /head/crypto/openssh/session.c

Make sure the environment variables set by setusercontext() are passed on
to the child process.

Reviewed by:    ache
Sponsored by:   DARPA, NAI Labs


--- session.c.orig	2019-04-17 15:52:57.000000000 -0700
+++ session.c	2019-07-02 16:15:23.270321000 -0700
@@ -990,6 +990,9 @@ do_setup_env(struct ssh *ssh, Session *s, const char *
 	struct passwd *pw = s->pw;
 #if !defined (HAVE_LOGIN_CAP) && !defined (HAVE_CYGWIN)
 	char *path = NULL;
+#else
+	extern char **environ;
+	char **senv, **var;
 #endif
 
 	/* Initialize the environment. */
@@ -1011,6 +1014,9 @@ do_setup_env(struct ssh *ssh, Session *s, const char *
 	}
 #endif
 
+	if (getenv("TZ"))
+		child_set_env(&env, &envsize, "TZ", getenv("TZ"));
+
 #ifdef GSSAPI
 	/* Allow any GSSAPI methods that we've used to alter
 	 * the childs environment as they see fit
@@ -1028,11 +1034,21 @@ do_setup_env(struct ssh *ssh, Session *s, const char *
 	child_set_env(&env, &envsize, "LOGIN", pw->pw_name);
 #endif
 	child_set_env(&env, &envsize, "HOME", pw->pw_dir);
+	snprintf(buf, sizeof buf, "%.200s/%.50s", _PATH_MAILDIR, pw->pw_name);
+	child_set_env(&env, &envsize, "MAIL", buf);
 #ifdef HAVE_LOGIN_CAP
-	if (setusercontext(lc, pw, pw->pw_uid, LOGIN_SETPATH) < 0)
-		child_set_env(&env, &envsize, "PATH", _PATH_STDPATH);
-	else
-		child_set_env(&env, &envsize, "PATH", getenv("PATH"));
+	child_set_env(&env, &envsize, "PATH", _PATH_STDPATH);
+	child_set_env(&env, &envsize, "TERM", "su");
+	senv = environ;
+	environ = xmalloc(sizeof(char *));
+	*environ = NULL;
+	(void) setusercontext(lc, pw, pw->pw_uid,
+	    LOGIN_SETENV|LOGIN_SETPATH);
+	copy_environment_blacklist(environ, &env, &envsize, NULL);
+	for (var = environ; *var != NULL; ++var)
+		free(*var);
+	free(environ);
+	environ = senv;
 #else /* HAVE_LOGIN_CAP */
 # ifndef HAVE_CYGWIN
 	/*
@@ -1052,17 +1068,9 @@ do_setup_env(struct ssh *ssh, Session *s, const char *
 # endif /* HAVE_CYGWIN */
 #endif /* HAVE_LOGIN_CAP */
 
-	if (!options.use_pam) {
-		snprintf(buf, sizeof buf, "%.200s/%.50s",
-		    _PATH_MAILDIR, pw->pw_name);
-		child_set_env(&env, &envsize, "MAIL", buf);
-	}
-
 	/* Normal systems set SHELL by default. */
 	child_set_env(&env, &envsize, "SHELL", shell);
 
-	if (getenv("TZ"))
-		child_set_env(&env, &envsize, "TZ", getenv("TZ"));
 	if (s->term)
 		child_set_env(&env, &envsize, "TERM", s->term);
 	if (s->display)
@@ -1365,7 +1373,7 @@ do_setusercontext(struct passwd *pw)
 	if (platform_privileged_uidswap()) {
 #ifdef HAVE_LOGIN_CAP
 		if (setusercontext(lc, pw, pw->pw_uid,
-		    (LOGIN_SETALL & ~(LOGIN_SETPATH|LOGIN_SETUSER))) < 0) {
+		    (LOGIN_SETALL & ~(LOGIN_SETENV|LOGIN_SETPATH|LOGIN_SETUSER))) < 0) {
 			perror("unable to set user context");
 			exit(1);
 		}
