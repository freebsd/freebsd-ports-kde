--- deps/openssl/config/archs/linux-elf/asm/openssl-cl.gypi.orig	2019-05-28 21:32:15 UTC
+++ deps/openssl/config/archs/linux-elf/asm/openssl-cl.gypi
@@ -26,12 +26,11 @@
     ],
     'openssl_cflags_linux-elf': [
       '-Wa,--noexecstack',
-      '-Wall -O3 -fomit-frame-pointer',
+      '-Wall -O3',
       '-pthread',
-      '-Wall -O3 -fomit-frame-pointer',
     ],
     'openssl_ex_libs_linux-elf': [
-      '-ldl -pthread',
+      '',
     ],
     'openssl_cli_srcs_linux-elf': [
       'openssl/apps/asn1pars.c',
