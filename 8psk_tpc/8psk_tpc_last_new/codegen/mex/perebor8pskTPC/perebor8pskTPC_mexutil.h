/*
 * perebor8pskTPC_mexutil.h
 *
 * Code generation for function 'perebor8pskTPC_mexutil'
 *
 */

#ifndef __PEREBOR8PSKTPC_MEXUTIL_H__
#define __PEREBOR8PSKTPC_MEXUTIL_H__

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
extern const mxArray *b_emlrt_marshallOut(const real_T u);
extern void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (perebor8pskTPC_mexutil.h) */
