# CMake generated Testfile for 
# Source directory: /home/abdelrhman/shaka-packager/packager/mpd
# Build directory: /home/abdelrhman/shaka-packager/build/packager/mpd
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[mpd_unittest]=] "/home/abdelrhman/shaka-packager/build/packager/mpd/mpd_unittest")
set_tests_properties([=[mpd_unittest]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/abdelrhman/shaka-packager/packager/mpd/CMakeLists.txt;103;add_test;/home/abdelrhman/shaka-packager/packager/mpd/CMakeLists.txt;0;")
subdirs("base")
