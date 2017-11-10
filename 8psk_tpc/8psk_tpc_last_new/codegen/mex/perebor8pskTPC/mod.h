/*
 * mod.h
 *
 * Code generation for function 'mod'
 *
 */

#ifndef __MOD_H__
#define __MOD_H__

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
extern void b_eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, emxArray_real_T *z);
extern void b_mod(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *r);
extern void c_mod(const emlrtStack *sp, const real_T x_data[], const int32_T
                  x_size[1], real_T r_data[], int32_T r_size[1]);
extern void eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, emxArray_real_T *z);

#endif

/* End of code generation (mod.h) */
