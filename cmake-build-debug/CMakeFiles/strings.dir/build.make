# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/svetocopy/CLionProjects/targem/strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strings.dir/flags.make

CMakeFiles/strings.dir/main.cpp.o: CMakeFiles/strings.dir/flags.make
CMakeFiles/strings.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strings.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strings.dir/main.cpp.o -c /Users/svetocopy/CLionProjects/targem/strings/main.cpp

CMakeFiles/strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strings.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/svetocopy/CLionProjects/targem/strings/main.cpp > CMakeFiles/strings.dir/main.cpp.i

CMakeFiles/strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strings.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/svetocopy/CLionProjects/targem/strings/main.cpp -o CMakeFiles/strings.dir/main.cpp.s

CMakeFiles/strings.dir/mystrings/line.cpp.o: CMakeFiles/strings.dir/flags.make
CMakeFiles/strings.dir/mystrings/line.cpp.o: ../mystrings/line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/strings.dir/mystrings/line.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strings.dir/mystrings/line.cpp.o -c /Users/svetocopy/CLionProjects/targem/strings/mystrings/line.cpp

CMakeFiles/strings.dir/mystrings/line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strings.dir/mystrings/line.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/svetocopy/CLionProjects/targem/strings/mystrings/line.cpp > CMakeFiles/strings.dir/mystrings/line.cpp.i

CMakeFiles/strings.dir/mystrings/line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strings.dir/mystrings/line.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/svetocopy/CLionProjects/targem/strings/mystrings/line.cpp -o CMakeFiles/strings.dir/mystrings/line.cpp.s

# Object files for target strings
strings_OBJECTS = \
"CMakeFiles/strings.dir/main.cpp.o" \
"CMakeFiles/strings.dir/mystrings/line.cpp.o"

# External object files for target strings
strings_EXTERNAL_OBJECTS =

strings: CMakeFiles/strings.dir/main.cpp.o
strings: CMakeFiles/strings.dir/mystrings/line.cpp.o
strings: CMakeFiles/strings.dir/build.make
strings: CMakeFiles/strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable strings"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strings.dir/build: strings

.PHONY : CMakeFiles/strings.dir/build

CMakeFiles/strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strings.dir/clean

CMakeFiles/strings.dir/depend:
	cd /Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/svetocopy/CLionProjects/targem/strings /Users/svetocopy/CLionProjects/targem/strings /Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug /Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug /Users/svetocopy/CLionProjects/targem/strings/cmake-build-debug/CMakeFiles/strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strings.dir/depend

