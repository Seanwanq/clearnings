# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

# Suppress display of executed commands.
$$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub\clearnings\sourcecode\chains

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\clearnings\sourcecode\chains\build

# Include any dependencies generated for this target.
include CMakeFiles/chains1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chains1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chains1.dir/flags.make

CMakeFiles/chains1.dir/main.c.obj: CMakeFiles/chains1.dir/flags.make
CMakeFiles/chains1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\clearnings\sourcecode\chains\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/chains1.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\chains1.dir\main.c.obj -c C:\GitHub\clearnings\sourcecode\chains\main.c

CMakeFiles/chains1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chains1.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\GitHub\clearnings\sourcecode\chains\main.c > CMakeFiles\chains1.dir\main.c.i

CMakeFiles/chains1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chains1.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\GitHub\clearnings\sourcecode\chains\main.c -o CMakeFiles\chains1.dir\main.c.s

# Object files for target chains1
chains1_OBJECTS = \
"CMakeFiles/chains1.dir/main.c.obj"

# External object files for target chains1
chains1_EXTERNAL_OBJECTS =

chains1.exe: CMakeFiles/chains1.dir/main.c.obj
chains1.exe: CMakeFiles/chains1.dir/build.make
chains1.exe: CMakeFiles/chains1.dir/linklibs.rsp
chains1.exe: CMakeFiles/chains1.dir/objects1.rsp
chains1.exe: CMakeFiles/chains1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\clearnings\sourcecode\chains\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable chains1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chains1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chains1.dir/build: chains1.exe

.PHONY : CMakeFiles/chains1.dir/build

CMakeFiles/chains1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chains1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chains1.dir/clean

CMakeFiles/chains1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\clearnings\sourcecode\chains C:\GitHub\clearnings\sourcecode\chains C:\GitHub\clearnings\sourcecode\chains\build C:\GitHub\clearnings\sourcecode\chains\build C:\GitHub\clearnings\sourcecode\chains\build\CMakeFiles\chains1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chains1.dir/depend

