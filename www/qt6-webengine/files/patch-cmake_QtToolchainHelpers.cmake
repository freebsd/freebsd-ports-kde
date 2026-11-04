--- cmake/QtToolchainHelpers.cmake.orig	2026-09-27 10:44:57 UTC
+++ cmake/QtToolchainHelpers.cmake
@@ -55,6 +55,8 @@ function(get_gn_arch result arch)
         set(${result} "mips64el" PARENT_SCOPE)
     elseif(arch STREQUAL "riscv64")
         set(${result} "riscv64" PARENT_SCOPE)
+    elseif(arch STREQUAL "power64")
+        set(${result} "ppc64" PARENT_SCOPE)
     else()
         message(FATAL_ERROR "Unknown architecture: ${arch}")
     endif()
@@ -97,6 +99,8 @@ function(get_gn_os result)
         set(${result} "ios" PARENT_SCOPE)
     elseif(OHOS)
         set(${result} "ohos" PARENT_SCOPE)
+    elseif(FREEBSD)
+        set(${result} "freebsd" PARENT_SCOPE)
     else()
         message(DEBUG "Unrecognized OS")
     endif()
@@ -502,7 +506,7 @@ macro(append_compiler_linker_sdk_setup)
         )
     endif()
     get_gn_arch(cpu ${TEST_architecture_arch})
-    if(LINUX AND CMAKE_CROSSCOMPILING AND cpu STREQUAL "arm")
+    if((LINUX OR FREEBSD) AND CMAKE_CROSSCOMPILING AND cpu STREQUAL "arm")
 
         extend_gn_list_cflag(gnArgArg
             ARG arm_tune
@@ -611,7 +615,7 @@ macro(append_toolchain_setup)
         endif()
         unset(host_cpu)
         unset(target_cpu)
-    elseif(LINUX)
+    elseif(LINUX OR FREEBSD)
         get_gn_arch(cpu ${TEST_architecture_arch})
         list(APPEND gnArgArg
             custom_toolchain="${buildDir}/target_toolchain:target"
