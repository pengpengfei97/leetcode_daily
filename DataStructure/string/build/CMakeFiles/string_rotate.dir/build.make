# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ppf/leetcode_daily/DataStructure/string

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ppf/leetcode_daily/DataStructure/string/build

# Include any dependencies generated for this target.
include CMakeFiles/string_rotate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/string_rotate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string_rotate.dir/flags.make

CMakeFiles/string_rotate.dir/string_rotate.cpp.o: CMakeFiles/string_rotate.dir/flags.make
CMakeFiles/string_rotate.dir/string_rotate.cpp.o: ../string_rotate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ppf/leetcode_daily/DataStructure/string/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string_rotate.dir/string_rotate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string_rotate.dir/string_rotate.cpp.o -c /home/ppf/leetcode_daily/DataStructure/string/string_rotate.cpp

CMakeFiles/string_rotate.dir/string_rotate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string_rotate.dir/string_rotate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ppf/leetcode_daily/DataStructure/string/string_rotate.cpp > CMakeFiles/string_rotate.dir/string_rotate.cpp.i

CMakeFiles/string_rotate.dir/string_rotate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string_rotate.dir/string_rotate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ppf/leetcode_daily/DataStructure/string/string_rotate.cpp -o CMakeFiles/string_rotate.dir/string_rotate.cpp.s

# Object files for target string_rotate
string_rotate_OBJECTS = \
"CMakeFiles/string_rotate.dir/string_rotate.cpp.o"

# External object files for target string_rotate
string_rotate_EXTERNAL_OBJECTS =

string_rotate: CMakeFiles/string_rotate.dir/string_rotate.cpp.o
string_rotate: CMakeFiles/string_rotate.dir/build.make
string_rotate: CMakeFiles/string_rotate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ppf/leetcode_daily/DataStructure/string/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string_rotate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string_rotate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string_rotate.dir/build: string_rotate

.PHONY : CMakeFiles/string_rotate.dir/build

CMakeFiles/string_rotate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string_rotate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string_rotate.dir/clean

CMakeFiles/string_rotate.dir/depend:
	cd /home/ppf/leetcode_daily/DataStructure/string/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ppf/leetcode_daily/DataStructure/string /home/ppf/leetcode_daily/DataStructure/string /home/ppf/leetcode_daily/DataStructure/string/build /home/ppf/leetcode_daily/DataStructure/string/build /home/ppf/leetcode_daily/DataStructure/string/build/CMakeFiles/string_rotate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string_rotate.dir/depend

