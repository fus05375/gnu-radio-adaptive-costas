/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_COSTAS_COSTAS_LOOP_CC_H
#define INCLUDED_COSTAS_COSTAS_LOOP_CC_H

#include <costas/api.h>
#include <gnuradio/blocks/control_loop.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace costas {

    /*!
     * \brief <+description of block+>
     * \ingroup costas
     *
     */
    class COSTAS_API costas_loop_cc 
      : virtual public sync_block,
        virtual public blocks::control_loop
    {
     public:
      typedef boost::shared_ptr<costas_loop_cc> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of costas::costas_loop_cc.
       *
       * To avoid accidental use of raw pointers, costas::costas_loop_cc's
       * constructor is in a private implementation
       * class. costas::costas_loop_cc::make is the public interface for
       * creating new instances.
       */

      static sptr make(float loop_bw, int order, bool use_snr=false);

      /*!
       * Returns the current value of the loop error.
       */
      virtual float error() const = 0;
    };

  } // namespace costas
} // namespace gr

#endif /* INCLUDED_COSTAS_COSTAS_LOOP_CC_H */

