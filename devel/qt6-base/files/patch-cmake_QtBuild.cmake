--- cmake/QtBuild.cmake.orig	2020-07-02 22:21:38 UTC
+++ cmake/QtBuild.cmake
@@ -1663,6 +1663,10 @@ function(qt_internal_add_link_flags_no_undefined targe
             set(no_undefined_flag "-Wl,--no-undefined")
         endif()
 
+        if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+            set(no_undefined_flag "")
+        endif()
+
         set(CMAKE_REQUIRED_LINK_OPTIONS ${previous_CMAKE_REQUIRED_LINK_OPTIONS})
 
         if (NOT HAVE_DASH_UNDEFINED_SYMBOLS AND NOT HAVE_DASH_DASH_NO_UNDEFINED)
@@ -5706,6 +5710,8 @@ function(qt_compute_relative_rpath_base rpath install_
         set(rpath_rel_base "@loader_path")
     elseif(LINUX)
         set(rpath_rel_base "$ORIGIN")
+    elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+         set(rpath_rel_base "$ORIGIN")
     else()
         message(WARNING "No known RPATH_REL_BASE for target platform.")
         set(rpath_rel_base "NO_KNOWN_RPATH_REL_BASE")
