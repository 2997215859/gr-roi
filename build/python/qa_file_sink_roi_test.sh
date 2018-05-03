#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/ruiy/store/ROI/GModule/gr-roi/python
export PATH=/home/ruiy/store/ROI/GModule/gr-roi/build/python:$PATH
export LD_LIBRARY_PATH=/home/ruiy/store/ROI/GModule/gr-roi/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/ruiy/store/ROI/GModule/gr-roi/build/swig:$PYTHONPATH
/usr/bin/python2 /home/ruiy/store/ROI/GModule/gr-roi/python/qa_file_sink_roi.py 
