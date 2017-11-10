/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "abs.h"
#include "perebor8pskTPC_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 16, 5, "abs",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

void c_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
           int32_T y_size[2])
{
  uint8_T uv1[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    uv1[k] = (uint8_T)x_size[k];
  }

  y_size[0] = 1;
  y_size[1] = uv1[1];
  for (k = 0; k < x_size[1]; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

/* End of code generation (abs.c) */
