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
include src/cminusfc/CMakeFiles/cminusfc.dir/depend.make

# Include the progress variables for this target.
include src/cminusfc/CMakeFiles/cminusfc.dir/progress.make

# Include the compile flags for this target's objects.
include src/cminusfc/CMakeFiles/cminusfc.dir/flags.make

src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.o: src/cminusfc/CMakeFiles/cminusfc.dir/flags.make
src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.o: ../src/cminusfc/cminusfc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cminusfc.dir/cminusfc.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusfc.cpp

src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cminusfc.dir/cminusfc.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusfc.cpp > CMakeFiles/cminusfc.dir/cminusfc.cpp.i

src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cminusfc.dir/cminusfc.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusfc.cpp -o CMakeFiles/cminusfc.dir/cminusfc.cpp.s

src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o: src/cminusfc/CMakeFiles/cminusfc.dir/flags.make
src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o: ../src/cminusfc/cminusf_builder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o -c /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusf_builder.cpp

src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cminusfc.dir/cminusf_builder.cpp.i"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusf_builder.cpp > CMakeFiles/cminusfc.dir/cminusf_builder.cpp.i

src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cminusfc.dir/cminusf_builder.cpp.s"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc/cminusf_builder.cpp -o CMakeFiles/cminusfc.dir/cminusf_builder.cpp.s

# Object files for target cminusfc
cminusfc_OBJECTS = \
"CMakeFiles/cminusfc.dir/cminusfc.cpp.o" \
"CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o"

# External object files for target cminusfc
cminusfc_EXTERNAL_OBJECTS =

cminusfc: src/cminusfc/CMakeFiles/cminusfc.dir/cminusfc.cpp.o
cminusfc: src/cminusfc/CMakeFiles/cminusfc.dir/cminusf_builder.cpp.o
cminusfc: src/cminusfc/CMakeFiles/cminusfc.dir/build.make
cminusfc: libOP_lib.a
cminusfc: libIR_lib.a
cminusfc: libcommon.a
cminusfc: libsyntax.a
cminusfc: src/cminusfc/CMakeFiles/cminusfc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../cminusfc"
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cminusfc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/cminusfc/CMakeFiles/cminusfc.dir/build: cminusfc

.PHONY : src/cminusfc/CMakeFiles/cminusfc.dir/build

src/cminusfc/CMakeFiles/cminusfc.dir/clean:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc && $(CMAKE_COMMAND) -P CMakeFiles/cminusfc.dir/cmake_clean.cmake
.PHONY : src/cminusfc/CMakeFiles/cminusfc.dir/clean

src/cminusfc/CMakeFiles/cminusfc.dir/depend:
	cd /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/src/cminusfc /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc /mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/cminusfc/CMakeFiles/cminusfc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cminusfc/CMakeFiles/cminusfc.dir/depend

