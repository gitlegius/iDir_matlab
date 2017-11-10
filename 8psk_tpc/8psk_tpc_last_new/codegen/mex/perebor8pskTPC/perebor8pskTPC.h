/*
 * perebor8pskTPC.h
 *
 * Code generation for function 'perebor8pskTPC'
 *
 */

#ifndef __PEREBOR8PSKTPC_H__
#define __PEREBOR8PSKTPC_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "perebor8pskTPC_types.h"

/* Function Declarations */
extern void perebor8pskTPC(const emlrtStack *sp, const emxArray_creal_T
  *out_burst_complex_without_UWs, real_T data_symb_len, real_T
  num_packet_per_burst, const creal_T Star_data[], const int32_T Star_size[2],
  real_T frame_dec_len, real_T packet_dec_len, real_T c_r, real_T flag_FDMA,
  boolean_T *flag_ok, real_T *ind_good, real_T *ind_bad, real_T *ind_good_,
  real_T *ind_bad_, real_T *num_iter, real_T *num_iter_);

#endif

/* End of code generation (perebor8pskTPC.h) */
