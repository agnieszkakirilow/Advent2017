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
CMAKE_SOURCE_DIR = C:\Projects\Advent\BST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Advent\build-BST-mingw32-Default

# Include any dependencies generated for this target.
include CMakeFiles/BST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BST.dir/flags.make

CMakeFiles/BST.dir/main.cpp.obj: CMakeFiles/BST.dir/flags.make
CMakeFiles/BST.dir/main.cpp.obj: C:/Projects/Advent/BST/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Projects\Advent\build-BST-mingw32-Default\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/BST.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\BST.dir\main.cpp.obj -c C:\Projects\Advent\BST\main.cpp

CMakeFiles/BST.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BST.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Projects\Advent\BST\main.cpp > CMakeFiles\BST.dir\main.cpp.i

CMakeFiles/BST.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BST.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Projects\Advent\BST\main.cpp -o CMakeFiles\BST.dir\main.cpp.s

CMakeFiles/BST.dir/main.cpp.obj.requires:
.PHONY : CMakeFiles/BST.dir/main.cpp.obj.requires

CMakeFiles/BST.dir/main.cpp.obj.provides: CMakeFiles/BST.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\BST.dir\build.make CMakeFiles/BST.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/BST.dir/main.cpp.obj.provides

CMakeFiles/BST.dir/main.cpp.obj.provides.build: CMakeFiles/BST.dir/main.cpp.obj

# Object files for target BST
BST_OBJECTS = \
"CMakeFiles/BST.dir/main.cpp.obj"

# External object files for target BST
BST_EXTERNAL_OBJECTS =

BST.exe: CMakeFiles/BST.dir/main.cpp.obj
BST.exe: CMakeFiles/BST.dir/build.make
BST.exe: CMakeFiles/BST.dir/objects1.rsp
BST.exe: CMakeFiles/BST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable BST.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BST.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BST.dir/build: BST.exe
.PHONY : CMakeFiles/BST.dir/build

CMakeFiles/BST.dir/requires: CMakeFiles/BST.dir/main.cpp.obj.requires
.PHONY : CMakeFiles/BST.dir/requires

CMakeFiles/BST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BST.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BST.dir/clean

CMakeFiles/BST.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Advent\BST C:\Projects\Advent\BST C:\Projects\Advent\build-BST-mingw32-Default C:\Projects\Advent\build-BST-mingw32-Default C:\Projects\Advent\build-BST-mingw32-Default\CMakeFiles\BST.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BST.dir/depend
