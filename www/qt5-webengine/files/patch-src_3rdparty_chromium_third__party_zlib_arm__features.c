--- src/3rdparty/chromium/third_party/zlib/arm_features.c.orig	2019-05-23 12:39:34 UTC
+++ src/3rdparty/chromium/third_party/zlib/arm_features.c
@@ -15,6 +15,10 @@ int ZLIB_INTERNAL arm_cpu_enable_pmull = 0;
 #include <pthread.h>
 #include <stdint.h>
 
+#if defined(__FreeBSD__)
+#include <machine/armreg.h>
+#include <sys/types.h>
+#else
 #if defined(ARMV8_OS_ANDROID)
 #include <cpu-features.h>
 #elif defined(ARMV8_OS_LINUX)
@@ -23,7 +27,9 @@ int ZLIB_INTERNAL arm_cpu_enable_pmull = 0;
 #else
 #error ### No ARM CPU features detection in your platform/OS
 #endif
+#endif
 
+#ifdef ARMV8_OS_LINUX
 static pthread_once_t cpu_check_inited_once = PTHREAD_ONCE_INIT;
 
 static void init_arm_features(void)
@@ -36,16 +42,26 @@ static void init_arm_features(void)
     capabilities = android_getCpuFeatures();
 #elif defined(ARMV8_OS_LINUX)
     #if defined(__aarch64__)
+	#if defined(__FreeBSD__)
+	uint64_t id_aa64isar0 = READ_SPECIALREG(ID_AA64ISAR0_EL1);
+	if (ID_AA64ISAR0_AES(id_aa64isar0) == ID_AA64ISAR0_AES_PMULL)
+	    arm_cpu_enable_pmull = 1;
+	if (ID_AA64ISAR0_CRC32(id_aa64isar0) == ID_AA64ISAR0_CRC32_BASE)
+	    arm_cpu_enable_crc32 = 1;
+	#else
         flag_crc32 = HWCAP_CRC32;
         flag_pmull = HWCAP_PMULL;
         capabilities = getauxval(AT_HWCAP);
+	#endif
     #elif defined(__ARM_NEON) || defined(__ARM_NEON__)
+	#if !defined(__FreeBSD__)
         /* The use of HWCAP2 is for getting features of newer ARMv8-A SoCs
          * while running in 32bits mode (i.e. aarch32).
          */
         flag_crc32 = HWCAP2_CRC32;
         flag_pmull = HWCAP2_PMULL;
         capabilities = getauxval(AT_HWCAP2);
+	#endif
     #endif
 #endif
 
@@ -55,10 +71,13 @@ static void init_arm_features(void)
     if (capabilities & flag_pmull)
         arm_cpu_enable_pmull = 1;
 }
+#endif
 
 void ZLIB_INTERNAL arm_check_features(void)
 {
+#ifdef ARMV8_OS_LINUX
     pthread_once(&cpu_check_inited_once, init_arm_features);
+#endif
 }
 #else
 #include <windows.h>
