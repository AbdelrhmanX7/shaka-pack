# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/media/formats/webm
# Build directory: /home/abdelrhman/shaka-packager/build/packager/media/formats/webm
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[webm_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/media/formats/webm/webm_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-webm_unittest.xml")
set_tests_properties([=[webm_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/media/formats/webm/CMakeLists.txt;57;add_gtest;/home/abdelrhman/shaka-packager/packager/media/formats/webm/CMakeLists.txt;0;")
