# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /home/negin/JetBrains.CLion.2018.1.2.Linux_www.Downloadha.com_/CLion-2018.1.2/clion-2018.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/negin/JetBrains.CLion.2018.1.2.Linux_www.Downloadha.com_/CLion-2018.1.2/clion-2018.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/negin/Documents/term_3/advanced_programming/Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/main.cpp.o -c /home/negin/Documents/term_3/advanced_programming/Game/main.cpp

CMakeFiles/Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/negin/Documents/term_3/advanced_programming/Game/main.cpp > CMakeFiles/Game.dir/main.cpp.i

CMakeFiles/Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/negin/Documents/term_3/advanced_programming/Game/main.cpp -o CMakeFiles/Game.dir/main.cpp.s

CMakeFiles/Game.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/main.cpp.o.requires

CMakeFiles/Game.dir/main.cpp.o.provides: CMakeFiles/Game.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/main.cpp.o.provides

CMakeFiles/Game.dir/main.cpp.o.provides.build: CMakeFiles/Game.dir/main.cpp.o


# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/main.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/main.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game

.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Game.dir/requires

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/negin/Documents/term_3/advanced_programming/Game /home/negin/Documents/term_3/advanced_programming/Game /home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug /home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug /home/negin/Documents/term_3/advanced_programming/Game/cmake-build-debug/CMakeFiles/Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game.dir/depend

