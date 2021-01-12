--- src/VBox/Runtime/r3/posix/process-creation-posix.cpp.orig	2019-09-14 04:31:25.372784000 +0800
+++ src/VBox/Runtime/r3/posix/process-creation-posix.cpp	2019-09-14 05:18:04.495025000 +0800
@@ -30,7 +30,7 @@
 *********************************************************************************************************************************/
 #define LOG_GROUP RTLOGGROUP_PROCESS
 #include <iprt/cdefs.h>
-#ifdef RT_OS_LINUX
+#if defined(RT_OS_LINUX) || defined(RT_OS_FREEBSD)
 # define IPRT_WITH_DYNAMIC_CRYPT_R
 #endif
 #if (defined(RT_OS_LINUX) || defined(RT_OS_OS2)) && !defined(_GNU_SOURCE)
@@ -64,7 +64,7 @@
 # include <shadow.h>
 #endif
 
-#if defined(RT_OS_LINUX) || defined(RT_OS_OS2)
+#if defined(RT_OS_LINUX) || defined(RT_OS_OS2) || defined(RT_OS_FREEBSD)
 /* While Solaris has posix_spawn() of course we don't want to use it as
  * we need to have the child in a different process contract, no matter
  * whether it is started detached or not. */
@@ -363,7 +363,7 @@
     if (pPwd->pw_passwd && *pPwd->pw_passwd)
 # endif
     {
-# if defined(RT_OS_LINUX) || defined(RT_OS_OS2)
+# if defined(RT_OS_LINUX) || defined(RT_OS_OS2) || defined(RT_OS_FREEBSD)
 #  ifdef IPRT_WITH_DYNAMIC_CRYPT_R
         size_t const       cbCryptData = RT_MAX(sizeof(struct crypt_data) * 2, _256K);
 #  else
