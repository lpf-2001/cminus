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
include tests/CMakeFiles/test_ast.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_ast.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_ast.dir/flags.make

tests/CMakeFiles/test_ast.dir/test_ast.cpp.o: tests/CMakeFiles/test_ast.dir/flags.make
tests/CMakeFiles/test_ast.dir/test_ast.cpp.o: ../tests/test_ast.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_ast.dir/test_ast.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_ast.dir/test_ast.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/tests/test_ast.cpp

tests/CMakeFiles/test_ast.dir/test_ast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_ast.dir/test_ast.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/tests/test_ast.cpp > CMakeFiles/test_ast.dir/test_ast.cpp.i

tests/CMakeFiles/test_ast.dir/test_ast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_ast.dir/test_ast.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/tests/test_ast.cpp -o CMakeFiles/test_ast.dir/test_ast.cpp.s

# Object files for target test_ast
test_ast_OBJECTS = \
"CMakeFiles/test_ast.dir/test_ast.cpp.o"

# External object files for target test_ast
test_ast_EXTERNAL_OBJECTS =

test_ast: tests/CMakeFiles/test_ast.dir/test_ast.cpp.o
test_ast: tests/CMakeFiles/test_ast.dir/build.make
test_ast: libsyntax.a
test_ast: libcommon.a
test_ast: tests/CMakeFiles/test_ast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../test_ast"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_ast.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_ast.dir/build: test_ast

.PHONY : tests/CMakeFiles/test_ast.dir/build

tests/CMakeFiles/test_ast.dir/clean:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_ast.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_ast.dir/clean

tests/CMakeFiles/test_ast.dir/depend:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/tests /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/tests/CMakeFiles/test_ast.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_ast.dir/depend

