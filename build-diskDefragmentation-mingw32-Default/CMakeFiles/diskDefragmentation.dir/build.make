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
CMAKE_SOURCE_DIR = C:\Projects\Advent\diskDefragmentation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Advent\build-diskDefragmentation-mingw32-Default

# Include any dependencies generated for this target.
include CMakeFiles/diskDefragmentation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/diskDefragmentation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/diskDefragmentation.dir/flags.make

CMakeFiles/diskDefragmentation.dir/main.cpp.obj: CMakeFiles/diskDefragmentation.dir/flags.make
CMakeFiles/diskDefragmentation.dir/main.cpp.obj: C:/Projects/Advent/diskDefragmentation/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Projects\Advent\build-diskDefragmentation-mingw32-Default\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/diskDefragmentation.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\diskDefragmentation.dir\main.cpp.obj -c C:\Projects\Advent\diskDefragmentation\main.cpp

CMakeFiles/diskDefragmentation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/diskDefragmentation.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Projects\Advent\diskDefragmentation\main.cpp > CMakeFiles\diskDefragmentation.dir\main.cpp.i

CMakeFiles/diskDefragmentation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/diskDefragmentation.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Projects\Advent\diskDefragmentation\main.cpp -o CMakeFiles\diskDefragmentation.dir\main.cpp.s

CMakeFiles/diskDefragmentation.dir/main.cpp.obj.requires:
.PHONY : CMakeFiles/diskDefragmentation.dir/main.cpp.obj.requires

CMakeFiles/diskDefragmentation.dir/main.cpp.obj.provides: CMakeFiles/diskDefragmentation.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\diskDefragmentation.dir\build.make CMakeFiles/diskDefragmentation.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/diskDefragmentation.dir/main.cpp.obj.provides

CMakeFiles/diskDefragmentation.dir/main.cpp.obj.provides.build: CMakeFiles/diskDefragmentation.dir/main.cpp.obj

# Object files for target diskDefragmentation
diskDefragmentation_OBJECTS = \
"CMakeFiles/diskDefragmentation.dir/main.cpp.obj"

# External object files for target diskDefragmentation
diskDefragmentation_EXTERNAL_OBJECTS =

diskDefragmentation.exe: CMakeFiles/diskDefragmentation.dir/main.cpp.obj
diskDefragmentation.exe: CMakeFiles/diskDefragmentation.dir/build.make
diskDefragmentation.exe: CMakeFiles/diskDefragmentation.dir/objects1.rsp
diskDefragmentation.exe: CMakeFiles/diskDefragmentation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable diskDefragmentation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\diskDefragmentation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/diskDefragmentation.dir/build: diskDefragmentation.exe
.PHONY : CMakeFiles/diskDefragmentation.dir/build

CMakeFiles/diskDefragmentation.dir/requires: CMakeFiles/diskDefragmentation.dir/main.cpp.obj.requires
.PHONY : CMakeFiles/diskDefragmentation.dir/requires

CMakeFiles/diskDefragmentation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\diskDefragmentation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/diskDefragmentation.dir/clean

CMakeFiles/diskDefragmentation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Advent\diskDefragmentation C:\Projects\Advent\diskDefragmentation C:\Projects\Advent\build-diskDefragmentation-mingw32-Default C:\Projects\Advent\build-diskDefragmentation-mingw32-Default C:\Projects\Advent\build-diskDefragmentation-mingw32-Default\CMakeFiles\diskDefragmentation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/diskDefragmentation.dir/depend

