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
CMAKE_COMMAND = /cygdrive/c/Users/Егор/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Егор/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/MyPrograms/PolishNotation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PolishNotation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PolishNotation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PolishNotation.dir/flags.make

CMakeFiles/PolishNotation.dir/main.cpp.o: CMakeFiles/PolishNotation.dir/flags.make
CMakeFiles/PolishNotation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PolishNotation.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PolishNotation.dir/main.cpp.o -c /cygdrive/c/MyPrograms/PolishNotation/main.cpp

CMakeFiles/PolishNotation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PolishNotation.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/MyPrograms/PolishNotation/main.cpp > CMakeFiles/PolishNotation.dir/main.cpp.i

CMakeFiles/PolishNotation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PolishNotation.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/MyPrograms/PolishNotation/main.cpp -o CMakeFiles/PolishNotation.dir/main.cpp.s

CMakeFiles/PolishNotation.dir/RPN.cpp.o: CMakeFiles/PolishNotation.dir/flags.make
CMakeFiles/PolishNotation.dir/RPN.cpp.o: ../RPN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PolishNotation.dir/RPN.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PolishNotation.dir/RPN.cpp.o -c /cygdrive/c/MyPrograms/PolishNotation/RPN.cpp

CMakeFiles/PolishNotation.dir/RPN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PolishNotation.dir/RPN.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/MyPrograms/PolishNotation/RPN.cpp > CMakeFiles/PolishNotation.dir/RPN.cpp.i

CMakeFiles/PolishNotation.dir/RPN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PolishNotation.dir/RPN.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/MyPrograms/PolishNotation/RPN.cpp -o CMakeFiles/PolishNotation.dir/RPN.cpp.s

# Object files for target PolishNotation
PolishNotation_OBJECTS = \
"CMakeFiles/PolishNotation.dir/main.cpp.o" \
"CMakeFiles/PolishNotation.dir/RPN.cpp.o"

# External object files for target PolishNotation
PolishNotation_EXTERNAL_OBJECTS =

PolishNotation.exe: CMakeFiles/PolishNotation.dir/main.cpp.o
PolishNotation.exe: CMakeFiles/PolishNotation.dir/RPN.cpp.o
PolishNotation.exe: CMakeFiles/PolishNotation.dir/build.make
PolishNotation.exe: CMakeFiles/PolishNotation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable PolishNotation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PolishNotation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PolishNotation.dir/build: PolishNotation.exe

.PHONY : CMakeFiles/PolishNotation.dir/build

CMakeFiles/PolishNotation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PolishNotation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PolishNotation.dir/clean

CMakeFiles/PolishNotation.dir/depend:
	cd /cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/MyPrograms/PolishNotation /cygdrive/c/MyPrograms/PolishNotation /cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug /cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug /cygdrive/c/MyPrograms/PolishNotation/cmake-build-debug/CMakeFiles/PolishNotation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PolishNotation.dir/depend
