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
CMAKE_SOURCE_DIR = /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build

# Include any dependencies generated for this target.
include src/optimization/CMakeFiles/OP_lib.dir/depend.make

# Include the progress variables for this target.
include src/optimization/CMakeFiles/OP_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/optimization/CMakeFiles/OP_lib.dir/flags.make

src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.o: ../src/optimization/Dominators.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/Dominators.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Dominators.cpp

src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/Dominators.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Dominators.cpp > CMakeFiles/OP_lib.dir/Dominators.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/Dominators.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Dominators.cpp -o CMakeFiles/OP_lib.dir/Dominators.cpp.s

src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o: ../src/optimization/Mem2Reg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Mem2Reg.cpp

src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/Mem2Reg.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Mem2Reg.cpp > CMakeFiles/OP_lib.dir/Mem2Reg.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/Mem2Reg.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/Mem2Reg.cpp -o CMakeFiles/OP_lib.dir/Mem2Reg.cpp.s

src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.o: ../src/optimization/LoopSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/LoopSearch.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopSearch.cpp

src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/LoopSearch.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopSearch.cpp > CMakeFiles/OP_lib.dir/LoopSearch.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/LoopSearch.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopSearch.cpp -o CMakeFiles/OP_lib.dir/LoopSearch.cpp.s

src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o: ../src/optimization/ConstPropagation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ConstPropagation.cpp

src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/ConstPropagation.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ConstPropagation.cpp > CMakeFiles/OP_lib.dir/ConstPropagation.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/ConstPropagation.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ConstPropagation.cpp -o CMakeFiles/OP_lib.dir/ConstPropagation.cpp.s

src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.o: ../src/optimization/ActiveVars.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/ActiveVars.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ActiveVars.cpp

src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/ActiveVars.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ActiveVars.cpp > CMakeFiles/OP_lib.dir/ActiveVars.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/ActiveVars.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/ActiveVars.cpp -o CMakeFiles/OP_lib.dir/ActiveVars.cpp.s

src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o: src/optimization/CMakeFiles/OP_lib.dir/flags.make
src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o: ../src/optimization/LoopInvHoist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopInvHoist.cpp

src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopInvHoist.cpp > CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.i

src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization/LoopInvHoist.cpp -o CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.s

# Object files for target OP_lib
OP_lib_OBJECTS = \
"CMakeFiles/OP_lib.dir/Dominators.cpp.o" \
"CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o" \
"CMakeFiles/OP_lib.dir/LoopSearch.cpp.o" \
"CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o" \
"CMakeFiles/OP_lib.dir/ActiveVars.cpp.o" \
"CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o"

# External object files for target OP_lib
OP_lib_EXTERNAL_OBJECTS =

libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/Dominators.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/Mem2Reg.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/LoopSearch.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/ConstPropagation.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/ActiveVars.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/LoopInvHoist.cpp.o
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/build.make
libOP_lib.a: src/optimization/CMakeFiles/OP_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../libOP_lib.a"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && $(CMAKE_COMMAND) -P CMakeFiles/OP_lib.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OP_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/optimization/CMakeFiles/OP_lib.dir/build: libOP_lib.a

.PHONY : src/optimization/CMakeFiles/OP_lib.dir/build

src/optimization/CMakeFiles/OP_lib.dir/clean:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization && $(CMAKE_COMMAND) -P CMakeFiles/OP_lib.dir/cmake_clean.cmake
.PHONY : src/optimization/CMakeFiles/OP_lib.dir/clean

src/optimization/CMakeFiles/OP_lib.dir/depend:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/optimization /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/optimization/CMakeFiles/OP_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/optimization/CMakeFiles/OP_lib.dir/depend
