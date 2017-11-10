/*
 * tpc_decode_light.h
 *
 * Code generation for function 'tpc_decode_light'
 *
 */

#ifndef __TPC_DECODE_LIGHT_H__
#define __TPC_DECODE_LIGHT_H__

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
extern void tpc_decode_light(const emlrtStack *sp, emxArray_real_T *in, real_T
  c_r, real_T *flag_decod, emxArray_real_T *decoded_bits, real_T *num_iter);

#endif

/* End of code generation (tpc_decode_light.h) */
