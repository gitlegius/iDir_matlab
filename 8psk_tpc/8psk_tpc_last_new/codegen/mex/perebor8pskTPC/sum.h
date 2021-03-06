/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

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
extern real_T b_sum(const real_T x_data[], const int32_T x_size[1]);

#ifdef __WATCOMC__

#pragma aux b_sum value [8087];

#endif

extern real_T sum(const emlrtStack *sp, const real_T x_data[], const int32_T
                  x_size[2]);

#ifdef __WATCOMC__

#pragma aux sum value [8087];

#endif
#endif

/* End of code generation (sum.h) */
