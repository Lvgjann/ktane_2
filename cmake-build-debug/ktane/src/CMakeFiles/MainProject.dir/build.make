# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dewitt/Documents/Perso/ktane2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dewitt/Documents/Perso/ktane2/cmake-build-debug

# Include any dependencies generated for this target.
include ktane/src/CMakeFiles/MainProject.dir/depend.make

# Include the progress variables for this target.
include ktane/src/CMakeFiles/MainProject.dir/progress.make

# Include the compile flags for this target's objects.
include ktane/src/CMakeFiles/MainProject.dir/flags.make

ktane/src/CMakeFiles/MainProject.dir/main.o: ktane/src/CMakeFiles/MainProject.dir/flags.make
ktane/src/CMakeFiles/MainProject.dir/main.o: ../ktane/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dewitt/Documents/Perso/ktane2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ktane/src/CMakeFiles/MainProject.dir/main.o"
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MainProject.dir/main.o -c /home/dewitt/Documents/Perso/ktane2/ktane/src/main.cpp

ktane/src/CMakeFiles/MainProject.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainProject.dir/main.i"
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dewitt/Documents/Perso/ktane2/ktane/src/main.cpp > CMakeFiles/MainProject.dir/main.i

ktane/src/CMakeFiles/MainProject.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainProject.dir/main.s"
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dewitt/Documents/Perso/ktane2/ktane/src/main.cpp -o CMakeFiles/MainProject.dir/main.s

# Object files for target MainProject
MainProject_OBJECTS = \
"CMakeFiles/MainProject.dir/main.o"

# External object files for target MainProject
MainProject_EXTERNAL_OBJECTS =

ktane/src/MainProject: ktane/src/CMakeFiles/MainProject.dir/main.o
ktane/src/MainProject: ktane/src/CMakeFiles/MainProject.dir/build.make
ktane/src/MainProject: ktane/src/CMakeFiles/MainProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dewitt/Documents/Perso/ktane2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MainProject"
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MainProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ktane/src/CMakeFiles/MainProject.dir/build: ktane/src/MainProject

.PHONY : ktane/src/CMakeFiles/MainProject.dir/build

ktane/src/CMakeFiles/MainProject.dir/clean:
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src && $(CMAKE_COMMAND) -P CMakeFiles/MainProject.dir/cmake_clean.cmake
.PHONY : ktane/src/CMakeFiles/MainProject.dir/clean

ktane/src/CMakeFiles/MainProject.dir/depend:
	cd /home/dewitt/Documents/Perso/ktane2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dewitt/Documents/Perso/ktane2 /home/dewitt/Documents/Perso/ktane2/ktane/src /home/dewitt/Documents/Perso/ktane2/cmake-build-debug /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src /home/dewitt/Documents/Perso/ktane2/cmake-build-debug/ktane/src/CMakeFiles/MainProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ktane/src/CMakeFiles/MainProject.dir/depend

