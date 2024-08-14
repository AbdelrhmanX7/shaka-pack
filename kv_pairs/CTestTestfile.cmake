# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/kv_pairs
# Build directory: /home/abdelrhman/shaka-packager/build/packager/kv_pairs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[kv_pairs_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/kv_pairs/kv_pairs_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-kv_pairs_unittest.xml")
set_tests_properties([=[kv_pairs_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/kv_pairs/CMakeLists.txt;20;add_gtest;/home/abdelrhman/shaka-packager/packager/kv_pairs/CMakeLists.txt;0;")
