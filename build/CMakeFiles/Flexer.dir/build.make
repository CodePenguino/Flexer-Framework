# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codepingu/Downloads/Flexer-Framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codepingu/Downloads/Flexer-Framework/build

# Include any dependencies generated for this target.
include CMakeFiles/Flexer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Flexer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Flexer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Flexer.dir/flags.make

CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o: ../src/common/array_stack.cpp
CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o -MF CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o.d -o CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/common/array_stack.cpp

CMakeFiles/Flexer.dir/src/common/array_stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/common/array_stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/common/array_stack.cpp > CMakeFiles/Flexer.dir/src/common/array_stack.cpp.i

CMakeFiles/Flexer.dir/src/common/array_stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/common/array_stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/common/array_stack.cpp -o CMakeFiles/Flexer.dir/src/common/array_stack.cpp.s

CMakeFiles/Flexer.dir/src/common/util.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/common/util.cpp.o: ../src/common/util.cpp
CMakeFiles/Flexer.dir/src/common/util.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Flexer.dir/src/common/util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/common/util.cpp.o -MF CMakeFiles/Flexer.dir/src/common/util.cpp.o.d -o CMakeFiles/Flexer.dir/src/common/util.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/common/util.cpp

CMakeFiles/Flexer.dir/src/common/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/common/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/common/util.cpp > CMakeFiles/Flexer.dir/src/common/util.cpp.i

CMakeFiles/Flexer.dir/src/common/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/common/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/common/util.cpp -o CMakeFiles/Flexer.dir/src/common/util.cpp.s

CMakeFiles/Flexer.dir/src/core/input.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/core/input.cpp.o: ../src/core/input.cpp
CMakeFiles/Flexer.dir/src/core/input.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Flexer.dir/src/core/input.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/core/input.cpp.o -MF CMakeFiles/Flexer.dir/src/core/input.cpp.o.d -o CMakeFiles/Flexer.dir/src/core/input.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/core/input.cpp

CMakeFiles/Flexer.dir/src/core/input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/core/input.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/core/input.cpp > CMakeFiles/Flexer.dir/src/core/input.cpp.i

CMakeFiles/Flexer.dir/src/core/input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/core/input.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/core/input.cpp -o CMakeFiles/Flexer.dir/src/core/input.cpp.s

CMakeFiles/Flexer.dir/src/core/time.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/core/time.cpp.o: ../src/core/time.cpp
CMakeFiles/Flexer.dir/src/core/time.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Flexer.dir/src/core/time.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/core/time.cpp.o -MF CMakeFiles/Flexer.dir/src/core/time.cpp.o.d -o CMakeFiles/Flexer.dir/src/core/time.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/core/time.cpp

CMakeFiles/Flexer.dir/src/core/time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/core/time.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/core/time.cpp > CMakeFiles/Flexer.dir/src/core/time.cpp.i

CMakeFiles/Flexer.dir/src/core/time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/core/time.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/core/time.cpp -o CMakeFiles/Flexer.dir/src/core/time.cpp.s

CMakeFiles/Flexer.dir/src/core/v3.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/core/v3.cpp.o: ../src/core/v3.cpp
CMakeFiles/Flexer.dir/src/core/v3.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Flexer.dir/src/core/v3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/core/v3.cpp.o -MF CMakeFiles/Flexer.dir/src/core/v3.cpp.o.d -o CMakeFiles/Flexer.dir/src/core/v3.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/core/v3.cpp

CMakeFiles/Flexer.dir/src/core/v3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/core/v3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/core/v3.cpp > CMakeFiles/Flexer.dir/src/core/v3.cpp.i

CMakeFiles/Flexer.dir/src/core/v3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/core/v3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/core/v3.cpp -o CMakeFiles/Flexer.dir/src/core/v3.cpp.s

CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o: ../src/ecs/components/camera_component.cpp
CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o -MF CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o.d -o CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/camera_component.cpp

CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/camera_component.cpp > CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.i

CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/camera_component.cpp -o CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.s

CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o: ../src/ecs/components/sprite_component.cpp
CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o -MF CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o.d -o CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/sprite_component.cpp

CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/sprite_component.cpp > CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.i

CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/sprite_component.cpp -o CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.s

CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o: ../src/ecs/components/transform_component.cpp
CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o -MF CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o.d -o CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/transform_component.cpp

CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/transform_component.cpp > CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.i

CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/ecs/components/transform_component.cpp -o CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.s

CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o: ../src/ecs/ecs.cpp
CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o -MF CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o.d -o CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/ecs/ecs.cpp

CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/ecs/ecs.cpp > CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.i

CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/ecs/ecs.cpp -o CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.s

CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o: ../src/ecs/types/sprite.cpp
CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o -MF CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o.d -o CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/ecs/types/sprite.cpp

CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/ecs/types/sprite.cpp > CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.i

CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/ecs/types/sprite.cpp -o CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.s

CMakeFiles/Flexer.dir/src/game/game.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/game/game.cpp.o: ../src/game/game.cpp
CMakeFiles/Flexer.dir/src/game/game.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Flexer.dir/src/game/game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/game/game.cpp.o -MF CMakeFiles/Flexer.dir/src/game/game.cpp.o.d -o CMakeFiles/Flexer.dir/src/game/game.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/game/game.cpp

CMakeFiles/Flexer.dir/src/game/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/game/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/game/game.cpp > CMakeFiles/Flexer.dir/src/game/game.cpp.i

CMakeFiles/Flexer.dir/src/game/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/game/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/game/game.cpp -o CMakeFiles/Flexer.dir/src/game/game.cpp.s

CMakeFiles/Flexer.dir/src/main.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/Flexer.dir/src/main.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Flexer.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/main.cpp.o -MF CMakeFiles/Flexer.dir/src/main.cpp.o.d -o CMakeFiles/Flexer.dir/src/main.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/main.cpp

CMakeFiles/Flexer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/main.cpp > CMakeFiles/Flexer.dir/src/main.cpp.i

CMakeFiles/Flexer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/main.cpp -o CMakeFiles/Flexer.dir/src/main.cpp.s

CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o: ../src/rendering/renderer.cpp
CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o -MF CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o.d -o CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/rendering/renderer.cpp

CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/rendering/renderer.cpp > CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.i

CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/rendering/renderer.cpp -o CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.s

CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o: ../src/rendering/shader.cpp
CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o -MF CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o.d -o CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/rendering/shader.cpp

CMakeFiles/Flexer.dir/src/rendering/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/rendering/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/rendering/shader.cpp > CMakeFiles/Flexer.dir/src/rendering/shader.cpp.i

CMakeFiles/Flexer.dir/src/rendering/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/rendering/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/rendering/shader.cpp -o CMakeFiles/Flexer.dir/src/rendering/shader.cpp.s

CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o: ../src/rendering/sprite_temp.cpp
CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o -MF CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o.d -o CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/rendering/sprite_temp.cpp

CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/rendering/sprite_temp.cpp > CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.i

CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/rendering/sprite_temp.cpp -o CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.s

CMakeFiles/Flexer.dir/src/rendering/window.cpp.o: CMakeFiles/Flexer.dir/flags.make
CMakeFiles/Flexer.dir/src/rendering/window.cpp.o: ../src/rendering/window.cpp
CMakeFiles/Flexer.dir/src/rendering/window.cpp.o: CMakeFiles/Flexer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Flexer.dir/src/rendering/window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Flexer.dir/src/rendering/window.cpp.o -MF CMakeFiles/Flexer.dir/src/rendering/window.cpp.o.d -o CMakeFiles/Flexer.dir/src/rendering/window.cpp.o -c /home/codepingu/Downloads/Flexer-Framework/src/rendering/window.cpp

CMakeFiles/Flexer.dir/src/rendering/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Flexer.dir/src/rendering/window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codepingu/Downloads/Flexer-Framework/src/rendering/window.cpp > CMakeFiles/Flexer.dir/src/rendering/window.cpp.i

CMakeFiles/Flexer.dir/src/rendering/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Flexer.dir/src/rendering/window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codepingu/Downloads/Flexer-Framework/src/rendering/window.cpp -o CMakeFiles/Flexer.dir/src/rendering/window.cpp.s

# Object files for target Flexer
Flexer_OBJECTS = \
"CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o" \
"CMakeFiles/Flexer.dir/src/common/util.cpp.o" \
"CMakeFiles/Flexer.dir/src/core/input.cpp.o" \
"CMakeFiles/Flexer.dir/src/core/time.cpp.o" \
"CMakeFiles/Flexer.dir/src/core/v3.cpp.o" \
"CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o" \
"CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o" \
"CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o" \
"CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o" \
"CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o" \
"CMakeFiles/Flexer.dir/src/game/game.cpp.o" \
"CMakeFiles/Flexer.dir/src/main.cpp.o" \
"CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o" \
"CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o" \
"CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o" \
"CMakeFiles/Flexer.dir/src/rendering/window.cpp.o"

# External object files for target Flexer
Flexer_EXTERNAL_OBJECTS =

Flexer: CMakeFiles/Flexer.dir/src/common/array_stack.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/common/util.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/core/input.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/core/time.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/core/v3.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/ecs/components/camera_component.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/ecs/components/sprite_component.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/ecs/components/transform_component.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/ecs/ecs.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/ecs/types/sprite.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/game/game.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/main.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/rendering/renderer.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/rendering/shader.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/rendering/sprite_temp.cpp.o
Flexer: CMakeFiles/Flexer.dir/src/rendering/window.cpp.o
Flexer: CMakeFiles/Flexer.dir/build.make
Flexer: /usr/lib/libglfw.so.3.3
Flexer: /usr/lib/libGLEW.so
Flexer: /usr/lib/libOpenGL.so
Flexer: /usr/lib/libGLX.so
Flexer: /usr/lib/libGLU.so
Flexer: CMakeFiles/Flexer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Flexer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Flexer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Flexer.dir/build: Flexer
.PHONY : CMakeFiles/Flexer.dir/build

CMakeFiles/Flexer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Flexer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Flexer.dir/clean

CMakeFiles/Flexer.dir/depend:
	cd /home/codepingu/Downloads/Flexer-Framework/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codepingu/Downloads/Flexer-Framework /home/codepingu/Downloads/Flexer-Framework /home/codepingu/Downloads/Flexer-Framework/build /home/codepingu/Downloads/Flexer-Framework/build /home/codepingu/Downloads/Flexer-Framework/build/CMakeFiles/Flexer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Flexer.dir/depend
