#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/ruiy/store/ROI/GModule/gr-roi/lib
export PATH=/home/ruiy/store/ROI/GModule/gr-roi/build/lib:$PATH
export LD_LIBRARY_PATH=/home/ruiy/store/ROI/GModule/gr-roi/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=$PYTHONPATH
test-roi 
