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
CMAKE_SOURCE_DIR = C:\Projects\Advent\stream

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Advent\build-stream-mingw32-Default

# Include any dependencies generated for this target.
include CMakeFiles/stream.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stream.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stream.dir/flags.make

CMakeFiles/stream.dir/main.cpp.obj: CMakeFiles/stream.dir/flags.make
CMakeFiles/stream.dir/main.cpp.obj: C:/Projects/Advent/stream/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Projects\Advent\build-stream-mingw32-Default\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/stream.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\stream.dir\main.cpp.obj -c C:\Projects\Advent\stream\main.cpp

CMakeFiles/stream.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stream.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Projects\Advent\stream\main.cpp > CMakeFiles\stream.dir\main.cpp.i

CMakeFiles/stream.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stream.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Projects\Advent\stream\main.cpp -o CMakeFiles\stream.dir\main.cpp.s

CMakeFiles/stream.dir/main.cpp.obj.requires:
.PHONY : CMakeFiles/stream.dir/main.cpp.obj.requires

CMakeFiles/stream.dir/main.cpp.obj.provides: CMakeFiles/stream.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\stream.dir\build.make CMakeFiles/stream.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/stream.dir/main.cpp.obj.provides

CMakeFiles/stream.dir/main.cpp.obj.provides.build: CMakeFiles/stream.dir/main.cpp.obj

# Object files for target stream
stream_OBJECTS = \
"CMakeFiles/stream.dir/main.cpp.obj"

# External object files for target stream
stream_EXTERNAL_OBJECTS =

stream.exe: CMakeFiles/stream.dir/main.cpp.obj
stream.exe: CMakeFiles/stream.dir/build.make
stream.exe: CMakeFiles/stream.dir/objects1.rsp
stream.exe: CMakeFiles/stream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stream.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stream.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stream.dir/build: stream.exe
.PHONY : CMakeFiles/stream.dir/build

CMakeFiles/stream.dir/requires: CMakeFiles/stream.dir/main.cpp.obj.requires
.PHONY : CMakeFiles/stream.dir/requires

CMakeFiles/stream.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stream.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stream.dir/clean

CMakeFiles/stream.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Advent\stream C:\Projects\Advent\stream C:\Projects\Advent\build-stream-mingw32-Default C:\Projects\Advent\build-stream-mingw32-Default C:\Projects\Advent\build-stream-mingw32-Default\CMakeFiles\stream.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stream.dir/depend

