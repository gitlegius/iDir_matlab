/*
 * sign.h
 *
 * Code generation for function 'sign'
 *
 */

#ifndef __SIGN_H__
#define __SIGN_H__

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
extern void b_sign(real_T x_data[], int32_T x_size[2]);
extern void c_sign(real_T x_data[], int32_T x_size[1]);

#endif

/* End of code generation (sign.h) */
