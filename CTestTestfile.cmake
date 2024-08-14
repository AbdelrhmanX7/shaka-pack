# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager
# Build directory: /home/abdelrhman/shaka-packager/build/packager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[packager_test_py]=] "/usr/bin/python3.10" "packager_test.py")
set_tests_properties([=[packager_test_py]=] PROPERTIES  ENVIRONMENT "PACKAGER_SRC_DIR=/home/abdelrhman/shaka-packager;PACKAGER_BIN=/home/abdelrhman/shaka-packager/build/packager/packager;MPD_GENERATOR_BIN=/home/abdelrhman/shaka-packager/build/packager/mpd_generator;BUILD_TYPE=static" WORKING_DIRECTORY "/home/abdelrhman/shaka-packager/build/packager" _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/CMakeLists.txt;235;add_test;/home/abdelrhman/shaka-packager/packager/CMakeLists.txt;0;")
subdirs("file")
subdirs("kv_pairs")
subdirs("media")
subdirs("hls")
subdirs("mpd")
subdirs("status")
subdirs("third_party")
subdirs("tools")
subdirs("utils")
subdirs("version")
