# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/ruiy/store/ROI/GModule/gr-roi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruiy/store/ROI/GModule/gr-roi/build

# Utility rule file for roi_swig_swig_doc.

# Include the progress variables for this target.
include swig/CMakeFiles/roi_swig_swig_doc.dir/progress.make

swig/CMakeFiles/roi_swig_swig_doc: swig/roi_swig_doc.i


swig/roi_swig_doc.i: swig/roi_swig_doc_swig_docs/xml/index.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ruiy/store/ROI/GModule/gr-roi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating python docstrings for roi_swig_doc"
	cd /home/ruiy/store/ROI/GModule/gr-roi/docs/doxygen && /usr/bin/python2 -B /home/ruiy/store/ROI/GModule/gr-roi/docs/doxygen/swig_doc.py /home/ruiy/store/ROI/GModule/gr-roi/build/swig/roi_swig_doc_swig_docs/xml /home/ruiy/store/ROI/GModule/gr-roi/build/swig/roi_swig_doc.i

swig/roi_swig_doc_swig_docs/xml/index.xml: swig/_roi_swig_doc_tag
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ruiy/store/ROI/GModule/gr-roi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating doxygen xml for roi_swig_doc docs"
	cd /home/ruiy/store/ROI/GModule/gr-roi/build/swig && ./_roi_swig_doc_tag
	cd /home/ruiy/store/ROI/GModule/gr-roi/build/swig && /usr/bin/doxygen /home/ruiy/store/ROI/GModule/gr-roi/build/swig/roi_swig_doc_swig_docs/Doxyfile

roi_swig_swig_doc: swig/CMakeFiles/roi_swig_swig_doc
roi_swig_swig_doc: swig/roi_swig_doc.i
roi_swig_swig_doc: swig/roi_swig_doc_swig_docs/xml/index.xml
roi_swig_swig_doc: swig/CMakeFiles/roi_swig_swig_doc.dir/build.make

.PHONY : roi_swig_swig_doc

# Rule to build all files generated by this target.
swig/CMakeFiles/roi_swig_swig_doc.dir/build: roi_swig_swig_doc

.PHONY : swig/CMakeFiles/roi_swig_swig_doc.dir/build

swig/CMakeFiles/roi_swig_swig_doc.dir/clean:
	cd /home/ruiy/store/ROI/GModule/gr-roi/build/swig && $(CMAKE_COMMAND) -P CMakeFiles/roi_swig_swig_doc.dir/cmake_clean.cmake
.PHONY : swig/CMakeFiles/roi_swig_swig_doc.dir/clean

swig/CMakeFiles/roi_swig_swig_doc.dir/depend:
	cd /home/ruiy/store/ROI/GModule/gr-roi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruiy/store/ROI/GModule/gr-roi /home/ruiy/store/ROI/GModule/gr-roi/swig /home/ruiy/store/ROI/GModule/gr-roi/build /home/ruiy/store/ROI/GModule/gr-roi/build/swig /home/ruiy/store/ROI/GModule/gr-roi/build/swig/CMakeFiles/roi_swig_swig_doc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : swig/CMakeFiles/roi_swig_swig_doc.dir/depend
