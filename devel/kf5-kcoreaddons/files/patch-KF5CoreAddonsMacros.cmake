--- KF5CoreAddonsMacros.cmake.orig	2018-02-05 11:58:30 UTC
+++ KF5CoreAddonsMacros.cmake
@@ -58,13 +58,16 @@ function(kcoreaddons_desktop_to_json target desktop)
       endforeach()
     endif()
 
+    string(RANDOM _target_name_suffix)
+    set(_json_target "desktop_to_json_${_target_name_suffix}")
+    add_custom_target(${_json_target})
     add_custom_command(
-        OUTPUT ${json}
+        TARGET ${_json_target}
         COMMAND ${command}
         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
         DEPENDS ${desktop}
     )
-    set_property(TARGET ${target} APPEND PROPERTY AUTOGEN_TARGET_DEPENDS ${json})
+    set_property(TARGET ${target} APPEND PROPERTY AUTOGEN_TARGET_DEPENDS ${_json_target})
 endfunction()
 
 function(_desktop_to_json_cmake28 desktop json compat)
