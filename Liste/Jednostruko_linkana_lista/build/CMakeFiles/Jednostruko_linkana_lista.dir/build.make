# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/asmir/Projekti/Liste/Jednostruko_linkana_lista

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build

# Include any dependencies generated for this target.
include CMakeFiles/Jednostruko_linkana_lista.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Jednostruko_linkana_lista.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Jednostruko_linkana_lista.dir/flags.make

CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o: CMakeFiles/Jednostruko_linkana_lista.dir/flags.make
CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o -c /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/main.cpp

CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/main.cpp > CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.i

CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/main.cpp -o CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.s

# Object files for target Jednostruko_linkana_lista
Jednostruko_linkana_lista_OBJECTS = \
"CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o"

# External object files for target Jednostruko_linkana_lista
Jednostruko_linkana_lista_EXTERNAL_OBJECTS =

Jednostruko_linkana_lista: CMakeFiles/Jednostruko_linkana_lista.dir/main.cpp.o
Jednostruko_linkana_lista: CMakeFiles/Jednostruko_linkana_lista.dir/build.make
Jednostruko_linkana_lista: CMakeFiles/Jednostruko_linkana_lista.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Jednostruko_linkana_lista"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Jednostruko_linkana_lista.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Jednostruko_linkana_lista.dir/build: Jednostruko_linkana_lista

.PHONY : CMakeFiles/Jednostruko_linkana_lista.dir/build

CMakeFiles/Jednostruko_linkana_lista.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Jednostruko_linkana_lista.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Jednostruko_linkana_lista.dir/clean

CMakeFiles/Jednostruko_linkana_lista.dir/depend:
	cd /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asmir/Projekti/Liste/Jednostruko_linkana_lista /home/asmir/Projekti/Liste/Jednostruko_linkana_lista /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build /home/asmir/Projekti/Liste/Jednostruko_linkana_lista/build/CMakeFiles/Jednostruko_linkana_lista.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Jednostruko_linkana_lista.dir/depend

