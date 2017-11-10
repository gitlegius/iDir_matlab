/*
 * hamming_decode_soft.h
 *
 * Code generation for function 'hamming_decode_soft'
 *
 */

#ifndef __HAMMING_DECODE_SOFT_H__
#define __HAMMING_DECODE_SOFT_H__

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
extern void hamming_decode_soft(const emlrtStack *sp, emxArray_real_T *R, const
  real_T H_data[], const int32_T H_size[2], const real_T S_data[], const int32_T
  S_size[2], emxArray_real_T *Z, real_T *flag_good, real_T *num_iter);

#endif

/* End of code generation (hamming_decode_soft.h) */
