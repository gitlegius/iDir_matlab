/*
 * sign.c
 *
 * Code generation for function 'sign'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "sign.h"

/* Function Definitions */
void b_sign(real_T x_data[], int32_T x_size[2])
{
  int32_T i50;
  int32_T k;
  i50 = x_size[1];
  for (k = 0; k < i50; k++) {
    x_data[k] = muDoubleScalarSign(x_data[k]);
  }
}

void c_sign(real_T x_data[], int32_T x_size[1])
{
  int32_T i53;
  int32_T k;
  i53 = x_size[0];
  for (k = 0; k < i53; k++) {
    x_data[k] = muDoubleScalarSign(x_data[k]);
  }
}

/* End of code generation (sign.c) */
