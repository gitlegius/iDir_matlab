/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "power.h"
#include "mod.h"
#include "perebor8pskTPC_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, 14, "power",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

/* Function Definitions */
void b_power(const emlrtStack *sp, const real_T a_data[], const int32_T a_size[2],
             real_T y_data[], int32_T y_size[2])
{
  emxArray_real_T *r10;
  emxArray_real_T b_a_data;
  int32_T loop_ub;
  int32_T i43;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r10, 2, &p_emlrtRTEI, true);
  b_a_data.data = (real_T *)a_data;
  b_a_data.size = (int32_T *)a_size;
  b_a_data.allocatedSize = -1;
  b_a_data.numDimensions = 2;
  b_a_data.canFreeData = false;
  b_eml_scalexp_alloc(sp, &b_a_data, r10);
  y_size[0] = 1;
  y_size[1] = r10->size[1];
  loop_ub = r10->size[0] * r10->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    y_data[i43] = r10->data[i43];
  }

  emxFree_real_T(&r10);
  for (loop_ub = 0; loop_ub < y_size[1]; loop_ub++) {
    y_data[loop_ub] = a_data[loop_ub] * a_data[loop_ub];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  int32_T i35;
  int32_T k;
  eml_scalexp_alloc(sp, a, y);
  i35 = y->size[0];
  for (k = 0; k < i35; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
