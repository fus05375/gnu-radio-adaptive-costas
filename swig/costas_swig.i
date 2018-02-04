/* -*- c++ -*- */

#define COSTAS_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "costas_swig_doc.i"

%{
#include "costas/costas_loop_cc.h"
%}


%include "costas/costas_loop_cc.h"
GR_SWIG_BLOCK_MAGIC2(costas, costas_loop_cc);
