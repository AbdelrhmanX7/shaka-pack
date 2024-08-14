# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/media/codecs
# Build directory: /home/abdelrhman/shaka-packager/build/packager/media/codecs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[media_codecs_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/media/codecs/media_codecs_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-media_codecs_unittest.xml")
set_tests_properties([=[media_codecs_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/media/codecs/CMakeLists.txt;70;add_gtest;/home/abdelrhman/shaka-packager/packager/media/codecs/CMakeLists.txt;0;")
