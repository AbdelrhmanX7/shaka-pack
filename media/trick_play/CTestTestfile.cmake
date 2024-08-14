# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/media/trick_play
# Build directory: /home/abdelrhman/shaka-packager/build/packager/media/trick_play
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[media_trick_play_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/media/trick_play/media_trick_play_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-media_trick_play_unittest.xml")
set_tests_properties([=[media_trick_play_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/media/trick_play/CMakeLists.txt;24;add_gtest;/home/abdelrhman/shaka-packager/packager/media/trick_play/CMakeLists.txt;0;")
