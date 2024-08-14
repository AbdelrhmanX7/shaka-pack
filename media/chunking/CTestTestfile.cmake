# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/media/chunking
# Build directory: /home/abdelrhman/shaka-packager/build/packager/media/chunking
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[media_chunking_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/media/chunking/media_chunking_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-media_chunking_unittest.xml")
set_tests_properties([=[media_chunking_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/media/chunking/CMakeLists.txt;29;add_gtest;/home/abdelrhman/shaka-packager/packager/media/chunking/CMakeLists.txt;0;")
