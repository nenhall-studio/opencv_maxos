# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv

# Include any dependencies generated for this target.
include CMakeFiles/pix_opencv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pix_opencv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pix_opencv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pix_opencv.dir/flags.make

CMakeFiles/pix_opencv.dir/main.cpp.o: CMakeFiles/pix_opencv.dir/flags.make
CMakeFiles/pix_opencv.dir/main.cpp.o: main.cpp
CMakeFiles/pix_opencv.dir/main.cpp.o: CMakeFiles/pix_opencv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pix_opencv.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pix_opencv.dir/main.cpp.o -MF CMakeFiles/pix_opencv.dir/main.cpp.o.d -o CMakeFiles/pix_opencv.dir/main.cpp.o -c /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/main.cpp

CMakeFiles/pix_opencv.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pix_opencv.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/main.cpp > CMakeFiles/pix_opencv.dir/main.cpp.i

CMakeFiles/pix_opencv.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pix_opencv.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/main.cpp -o CMakeFiles/pix_opencv.dir/main.cpp.s

# Object files for target pix_opencv
pix_opencv_OBJECTS = \
"CMakeFiles/pix_opencv.dir/main.cpp.o"

# External object files for target pix_opencv
pix_opencv_EXTERNAL_OBJECTS =

pix_opencv: CMakeFiles/pix_opencv.dir/main.cpp.o
pix_opencv: CMakeFiles/pix_opencv.dir/build.make
pix_opencv: library/arm_64/lib/libopencv_gapi.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_highgui.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_ml.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_objdetect.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_photo.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_stitching.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_video.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_videoio.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_imgcodecs.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_dnn.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_calib3d.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_features2d.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_flann.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_imgproc.4.8.0.dylib
pix_opencv: library/arm_64/lib/libopencv_core.4.8.0.dylib
pix_opencv: CMakeFiles/pix_opencv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pix_opencv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pix_opencv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pix_opencv.dir/build: pix_opencv
.PHONY : CMakeFiles/pix_opencv.dir/build

CMakeFiles/pix_opencv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pix_opencv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pix_opencv.dir/clean

CMakeFiles/pix_opencv.dir/depend:
	cd /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv /Users/meitu/Desktop/Example/OpenCVSample/Sources/pix_opencv/CMakeFiles/pix_opencv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pix_opencv.dir/depend

