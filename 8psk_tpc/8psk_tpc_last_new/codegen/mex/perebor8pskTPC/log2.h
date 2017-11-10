/*
 * log2.h
 *
 * Code generation for function 'log2'
 *
 */

#ifndef __LOG2_H__
#define __LOG2_H__

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
extern real_T b_log2(real_T x);

#ifdef __WATCOMC__

#pragma aux b_log2 value [8087];

#endif
#endif

/* End of code generation (log2.h) */
