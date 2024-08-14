# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/media/crypto
# Build directory: /home/abdelrhman/shaka-packager/build/packager/media/crypto
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[media_crypto_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/media/crypto/media_crypto_unittest" "--gtest_output=xml:/home/abdelrhman/shaka-packager/junit-reports/TEST-media_crypto_unittest.xml")
set_tests_properties([=[media_crypto_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/gtest.cmake;37;add_test;/home/abdelrhman/shaka-packager/packager/media/crypto/CMakeLists.txt;31;add_gtest;/home/abdelrhman/shaka-packager/packager/media/crypto/CMakeLists.txt;0;")
