# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 2.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Tool\Common\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Tool\Common\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = C:\Tool\Common\cmake\bin\cmake-gui.exe

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\Advent\myTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Advent\build-myTree-mingw32-Debug

# Include any dependencies generated for this target.
include CMakeFiles/myTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myTree.dir/flags.make

CMakeFiles/myTree.dir/main.cpp.obj: CMakeFiles/myTree.dir/flags.make
CMakeFiles/myTree.dir/main.cpp.obj: C:/Projects/Advent/myTree/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Projects\Advent\build-myTree-mingw32-Debug\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myTree.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\myTree.dir\main.cpp.obj -c C:\Projects\Advent\myTree\main.cpp

CMakeFiles/myTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTree.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Projects\Advent\myTree\main.cpp > CMakeFiles\myTree.dir\main.cpp.i

CMakeFiles/myTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTree.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Projects\Advent\myTree\main.cpp -o CMakeFiles\myTree.dir\main.cpp.s

CMakeFiles/myTree.dir/main.cpp.obj.requires:
.PHONY : CMakeFiles/myTree.dir/main.cpp.obj.requires

CMakeFiles/myTree.dir/main.cpp.obj.provides: CMakeFiles/myTree.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\myTree.dir\build.make CMakeFiles/myTree.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/myTree.dir/main.cpp.obj.provides

CMakeFiles/myTree.dir/main.cpp.obj.provides.build: CMakeFiles/myTree.dir/main.cpp.obj

# Object files for target myTree
myTree_OBJECTS = \
"CMakeFiles/myTree.dir/main.cpp.obj"

# External object files for target myTree
myTree_EXTERNAL_OBJECTS =

myTree.exe: CMakeFiles/myTree.dir/main.cpp.obj
myTree.exe: CMakeFiles/myTree.dir/build.make
myTree.exe: CMakeFiles/myTree.dir/objects1.rsp
myTree.exe: CMakeFiles/myTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable myTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\myTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myTree.dir/build: myTree.exe
.PHONY : CMakeFiles/myTree.dir/build

CMakeFiles/myTree.dir/requires: CMakeFiles/myTree.dir/main.cpp.obj.requires
.PHONY : CMakeFiles/myTree.dir/requires

CMakeFiles/myTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\myTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/myTree.dir/clean

CMakeFiles/myTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Advent\myTree C:\Projects\Advent\myTree C:\Projects\Advent\build-myTree-mingw32-Debug C:\Projects\Advent\build-myTree-mingw32-Debug C:\Projects\Advent\build-myTree-mingw32-Debug\CMakeFiles\myTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myTree.dir/depend
