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
CMAKE_SOURCE_DIR = /home/mujonoga/Programowanie/SDL/Simple_NN_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mujonoga/Programowanie/SDL/Simple_NN_Project/out

# Include any dependencies generated for this target.
include CMakeFiles/TEST.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TEST.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TEST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST.dir/flags.make

CMakeFiles/TEST.dir/main.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/main.cpp.o: ../main.cpp
CMakeFiles/TEST.dir/main.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TEST.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/main.cpp.o -MF CMakeFiles/TEST.dir/main.cpp.o.d -o CMakeFiles/TEST.dir/main.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/main.cpp

CMakeFiles/TEST.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/main.cpp > CMakeFiles/TEST.dir/main.cpp.i

CMakeFiles/TEST.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/main.cpp -o CMakeFiles/TEST.dir/main.cpp.s

CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o: ../src/ImguiMenu.cpp
CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o -MF CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o.d -o CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/ImguiMenu.cpp

CMakeFiles/TEST.dir/src/ImguiMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/ImguiMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/ImguiMenu.cpp > CMakeFiles/TEST.dir/src/ImguiMenu.cpp.i

CMakeFiles/TEST.dir/src/ImguiMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/ImguiMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/ImguiMenu.cpp -o CMakeFiles/TEST.dir/src/ImguiMenu.cpp.s

CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o: ../src/NeuralNetwork/layer.cpp
CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o -MF CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o.d -o CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/layer.cpp

CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/layer.cpp > CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.i

CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/layer.cpp -o CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.s

CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o: ../src/NeuralNetwork/neuralNetwork.cpp
CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o -MF CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o.d -o CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/neuralNetwork.cpp

CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/neuralNetwork.cpp > CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.i

CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/NeuralNetwork/neuralNetwork.cpp -o CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.s

CMakeFiles/TEST.dir/src/cleaner.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/cleaner.cpp.o: ../src/cleaner.cpp
CMakeFiles/TEST.dir/src/cleaner.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TEST.dir/src/cleaner.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/cleaner.cpp.o -MF CMakeFiles/TEST.dir/src/cleaner.cpp.o.d -o CMakeFiles/TEST.dir/src/cleaner.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/cleaner.cpp

CMakeFiles/TEST.dir/src/cleaner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/cleaner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/cleaner.cpp > CMakeFiles/TEST.dir/src/cleaner.cpp.i

CMakeFiles/TEST.dir/src/cleaner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/cleaner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/cleaner.cpp -o CMakeFiles/TEST.dir/src/cleaner.cpp.s

CMakeFiles/TEST.dir/src/dataPoint.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/dataPoint.cpp.o: ../src/dataPoint.cpp
CMakeFiles/TEST.dir/src/dataPoint.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/TEST.dir/src/dataPoint.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/dataPoint.cpp.o -MF CMakeFiles/TEST.dir/src/dataPoint.cpp.o.d -o CMakeFiles/TEST.dir/src/dataPoint.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/dataPoint.cpp

CMakeFiles/TEST.dir/src/dataPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/dataPoint.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/dataPoint.cpp > CMakeFiles/TEST.dir/src/dataPoint.cpp.i

CMakeFiles/TEST.dir/src/dataPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/dataPoint.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/dataPoint.cpp -o CMakeFiles/TEST.dir/src/dataPoint.cpp.s

CMakeFiles/TEST.dir/src/media.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/media.cpp.o: ../src/media.cpp
CMakeFiles/TEST.dir/src/media.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/TEST.dir/src/media.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/media.cpp.o -MF CMakeFiles/TEST.dir/src/media.cpp.o.d -o CMakeFiles/TEST.dir/src/media.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/media.cpp

CMakeFiles/TEST.dir/src/media.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/media.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/media.cpp > CMakeFiles/TEST.dir/src/media.cpp.i

CMakeFiles/TEST.dir/src/media.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/media.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/media.cpp -o CMakeFiles/TEST.dir/src/media.cpp.s

CMakeFiles/TEST.dir/src/mediaController.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/mediaController.cpp.o: ../src/mediaController.cpp
CMakeFiles/TEST.dir/src/mediaController.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/TEST.dir/src/mediaController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/mediaController.cpp.o -MF CMakeFiles/TEST.dir/src/mediaController.cpp.o.d -o CMakeFiles/TEST.dir/src/mediaController.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/mediaController.cpp

CMakeFiles/TEST.dir/src/mediaController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/mediaController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/mediaController.cpp > CMakeFiles/TEST.dir/src/mediaController.cpp.i

CMakeFiles/TEST.dir/src/mediaController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/mediaController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/mediaController.cpp -o CMakeFiles/TEST.dir/src/mediaController.cpp.s

CMakeFiles/TEST.dir/src/screenGeometry.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/screenGeometry.cpp.o: ../src/screenGeometry.cpp
CMakeFiles/TEST.dir/src/screenGeometry.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/TEST.dir/src/screenGeometry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/screenGeometry.cpp.o -MF CMakeFiles/TEST.dir/src/screenGeometry.cpp.o.d -o CMakeFiles/TEST.dir/src/screenGeometry.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenGeometry.cpp

CMakeFiles/TEST.dir/src/screenGeometry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/screenGeometry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenGeometry.cpp > CMakeFiles/TEST.dir/src/screenGeometry.cpp.i

CMakeFiles/TEST.dir/src/screenGeometry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/screenGeometry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenGeometry.cpp -o CMakeFiles/TEST.dir/src/screenGeometry.cpp.s

CMakeFiles/TEST.dir/src/screenTexture.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/src/screenTexture.cpp.o: ../src/screenTexture.cpp
CMakeFiles/TEST.dir/src/screenTexture.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/TEST.dir/src/screenTexture.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/src/screenTexture.cpp.o -MF CMakeFiles/TEST.dir/src/screenTexture.cpp.o.d -o CMakeFiles/TEST.dir/src/screenTexture.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenTexture.cpp

CMakeFiles/TEST.dir/src/screenTexture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/src/screenTexture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenTexture.cpp > CMakeFiles/TEST.dir/src/screenTexture.cpp.i

CMakeFiles/TEST.dir/src/screenTexture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/src/screenTexture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/src/screenTexture.cpp -o CMakeFiles/TEST.dir/src/screenTexture.cpp.s

CMakeFiles/TEST.dir/imgui/imgui.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui.cpp.o: ../imgui/imgui.cpp
CMakeFiles/TEST.dir/imgui/imgui.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui.cpp

CMakeFiles/TEST.dir/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui.cpp > CMakeFiles/TEST.dir/imgui/imgui.cpp.i

CMakeFiles/TEST.dir/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui.cpp -o CMakeFiles/TEST.dir/imgui/imgui.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o: ../imgui/imgui_demo.cpp
CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_demo.cpp

CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_demo.cpp > CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_demo.cpp -o CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o: ../imgui/imgui_tables.cpp
CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_tables.cpp

CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_tables.cpp > CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_tables.cpp -o CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o: ../imgui/imgui_draw.cpp
CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_draw.cpp

CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_draw.cpp > CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_draw.cpp -o CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o: ../imgui/imgui_widgets.cpp
CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_widgets.cpp

CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_widgets.cpp > CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_widgets.cpp -o CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o: ../imgui/imgui_impl_sdl2.cpp
CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdl2.cpp

CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdl2.cpp > CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdl2.cpp -o CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.s

CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o: ../imgui/imgui_impl_sdlrenderer2.cpp
CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o: CMakeFiles/TEST.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o -MF CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o.d -o CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o -c /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdlrenderer2.cpp

CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdlrenderer2.cpp > CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.i

CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mujonoga/Programowanie/SDL/Simple_NN_Project/imgui/imgui_impl_sdlrenderer2.cpp -o CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.s

# Object files for target TEST
TEST_OBJECTS = \
"CMakeFiles/TEST.dir/main.cpp.o" \
"CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o" \
"CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o" \
"CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o" \
"CMakeFiles/TEST.dir/src/cleaner.cpp.o" \
"CMakeFiles/TEST.dir/src/dataPoint.cpp.o" \
"CMakeFiles/TEST.dir/src/media.cpp.o" \
"CMakeFiles/TEST.dir/src/mediaController.cpp.o" \
"CMakeFiles/TEST.dir/src/screenGeometry.cpp.o" \
"CMakeFiles/TEST.dir/src/screenTexture.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o" \
"CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o"

# External object files for target TEST
TEST_EXTERNAL_OBJECTS =

../TEST: CMakeFiles/TEST.dir/main.cpp.o
../TEST: CMakeFiles/TEST.dir/src/ImguiMenu.cpp.o
../TEST: CMakeFiles/TEST.dir/src/NeuralNetwork/layer.cpp.o
../TEST: CMakeFiles/TEST.dir/src/NeuralNetwork/neuralNetwork.cpp.o
../TEST: CMakeFiles/TEST.dir/src/cleaner.cpp.o
../TEST: CMakeFiles/TEST.dir/src/dataPoint.cpp.o
../TEST: CMakeFiles/TEST.dir/src/media.cpp.o
../TEST: CMakeFiles/TEST.dir/src/mediaController.cpp.o
../TEST: CMakeFiles/TEST.dir/src/screenGeometry.cpp.o
../TEST: CMakeFiles/TEST.dir/src/screenTexture.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_demo.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_tables.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_draw.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_widgets.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_impl_sdl2.cpp.o
../TEST: CMakeFiles/TEST.dir/imgui/imgui_impl_sdlrenderer2.cpp.o
../TEST: CMakeFiles/TEST.dir/build.make
../TEST: /usr/lib/x86_64-linux-gnu/libSDL2_image.so
../TEST: CMakeFiles/TEST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable ../TEST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEST.dir/build: ../TEST
.PHONY : CMakeFiles/TEST.dir/build

CMakeFiles/TEST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEST.dir/clean

CMakeFiles/TEST.dir/depend:
	cd /home/mujonoga/Programowanie/SDL/Simple_NN_Project/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mujonoga/Programowanie/SDL/Simple_NN_Project /home/mujonoga/Programowanie/SDL/Simple_NN_Project /home/mujonoga/Programowanie/SDL/Simple_NN_Project/out /home/mujonoga/Programowanie/SDL/Simple_NN_Project/out /home/mujonoga/Programowanie/SDL/Simple_NN_Project/out/CMakeFiles/TEST.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEST.dir/depend

