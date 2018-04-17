--- cmake/modules/FindBoostPython.cmake.orig	2018-04-17 20:29:57 UTC
+++ cmake/modules/FindBoostPython.cmake
@@ -36,7 +36,8 @@ find_package(Boost QUIET COMPONENTS python)
 cmake_push_check_state()
 set(CMAKE_REQUIRED_FLAGS     ${CMAKE_REQUIRED_FLAGS}     ${KDE4_ENABLE_EXCEPTIONS})
 set(CMAKE_REQUIRED_INCLUDES  ${CMAKE_REQUIRED_INCLUDES}  ${Boost_INCLUDE_DIRS})
-set(CMAKE_REQUIRED_LIBRARIES ${CMAKE_REQUIRED_LIBRARIES} ${Boost_PYTHON_LIBRARY})
+# Don't mess with check_include_file_cxx
+set(CMAKE_REQUIRED_LIBRARIES "")
 
 message("==> ${Boost_PYTHON_LIBRARY} -- ${Boost_INCLUDE_DIRS}")
 
@@ -47,6 +48,9 @@ check_include_file_cxx(boost/shared_ptr.hpp HAVE_BOOST
 # If user wants to speed up configure stage, he's allowed to do this.
 # If user wants to shoot himself in the foot, he is allowed to do this, too.
 set(BoostPython_COMPILES)
+
+# Now that the header has been found, set the libraries.
+set(CMAKE_REQUIRED_LIBRARIES ${CMAKE_REQUIRED_LIBRARIES} ${Boost_PYTHON_LIBRARY})
 
 # If shared_ptr.hpp or Python library is not available, then there is
 # no point to do anything.
