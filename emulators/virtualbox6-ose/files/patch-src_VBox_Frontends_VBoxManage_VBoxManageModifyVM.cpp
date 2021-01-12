--- src/VBox/Frontends/VBoxManage/VBoxManageModifyVM.cpp.orig	2019-01-25 18:19:18.000000000 +0000
+++ src/VBox/Frontends/VBoxManage/VBoxManageModifyVM.cpp	2019-02-01 06:06:37.701231000 +0000
@@ -150,7 +150,7 @@ enum
     MODIFYVM_UARTMODE,
     MODIFYVM_UARTTYPE,
     MODIFYVM_UART,
-#if defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
+#if defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
     MODIFYVM_LPTMODE,
     MODIFYVM_LPT,
 #endif
@@ -341,7 +341,7 @@ static const RTGETOPTDEF g_aModifyVMOptions[] =
     { "--uartmode",                 MODIFYVM_UARTMODE,                  RTGETOPT_REQ_STRING | RTGETOPT_FLAG_INDEX },
     { "--uarttype",                 MODIFYVM_UARTTYPE,                  RTGETOPT_REQ_STRING | RTGETOPT_FLAG_INDEX },
     { "--uart",                     MODIFYVM_UART,                      RTGETOPT_REQ_STRING | RTGETOPT_FLAG_INDEX },
-#if defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
+#if defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
     { "--lptmode",                  MODIFYVM_LPTMODE,                   RTGETOPT_REQ_STRING | RTGETOPT_FLAG_INDEX },
     { "--lpt",                      MODIFYVM_LPT,                       RTGETOPT_REQ_STRING | RTGETOPT_FLAG_INDEX },
 #endif
@@ -2224,7 +2224,7 @@ RTEXITCODE handleModifyVM(HandlerArg *a)
                 break;
             }
 
-#if defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
+#if defined(RT_OS_FREEBSD) || defined(RT_OS_LINUX) || defined(RT_OS_WINDOWS)
             case MODIFYVM_LPTMODE:
             {
                 ComPtr<IParallelPort> lpt;
