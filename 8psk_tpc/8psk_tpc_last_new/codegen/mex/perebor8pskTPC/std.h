/*
 * std.h
 *
 * Code generation for function 'std'
 *
 */

#ifndef __STD_H__
#define __STD_H__

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
extern real_T b_std(const emlrtStack *sp, const emxArray_creal_T *varargin_1);

#ifdef __WATCOMC__

#pragma aux b_std value [8087];

#endif
#endif

/* End of code generation (std.h) */
