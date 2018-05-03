/* -*- c++ -*- */

#define ROI_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "roi_swig_doc.i"

%{
#include "roi/file_source_roi.h"
#include "roi/file_sink_roi.h"
%}

%include "roi/file_source_roi.h"
GR_SWIG_BLOCK_MAGIC2(roi, file_source_roi);
%include "roi/file_sink_roi.h"
GR_SWIG_BLOCK_MAGIC2(roi, file_sink_roi);
