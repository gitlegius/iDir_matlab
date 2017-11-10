/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 */

#ifndef __ABS_H__
#define __ABS_H__

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
extern void b_abs(const emlrtStack *sp, const emxArray_creal_T *x,
                  emxArray_real_T *y);
extern void c_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
                  int32_T y_size[2]);

#endif

/* End of code generation (abs.h) */
