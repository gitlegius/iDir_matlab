/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "mod.h"
#include "perebor8pskTPC_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

static emlrtRTEInfo q_emlrtRTEI = { 1, 14, "mod",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elfun\\mod.m" };

/* Function Definitions */
void b_eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  emxArray_real_T *z)
{
  uint32_T uv1[2];
  int32_T i42;
  for (i42 = 0; i42 < 2; i42++) {
    uv1[i42] = (uint32_T)varargin_1->size[i42];
  }

  i42 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i42, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);
}

void b_mod(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *r)
{
  int32_T i41;
  int32_T k;
  b_eml_scalexp_alloc(sp, x, r);
  i41 = r->size[1];
  for (k = 0; k < i41; k++) {
    r->data[k] = x->data[k] - muDoubleScalarFloor(x->data[k] / 2.0) * 2.0;
  }
}

void c_mod(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[1],
           real_T r_data[], int32_T r_size[1])
{
  emxArray_real_T *r11;
  emxArray_real_T b_x_data;
  int32_T loop_ub;
  int32_T i44;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &r11, 1, &q_emlrtRTEI, true);
  b_x_data.data = (real_T *)x_data;
  b_x_data.size = (int32_T *)x_size;
  b_x_data.allocatedSize = -1;
  b_x_data.numDimensions = 1;
  b_x_data.canFreeData = false;
  eml_scalexp_alloc(sp, &b_x_data, r11);
  r_size[0] = r11->size[0];
  loop_ub = r11->size[0];
  for (i44 = 0; i44 < loop_ub; i44++) {
    r_data[i44] = r11->data[i44];
  }

  emxFree_real_T(&r11);
  for (loop_ub = 0; loop_ub < r_size[0]; loop_ub++) {
    r_data[loop_ub] = x_data[loop_ub] - muDoubleScalarFloor(x_data[loop_ub] /
      2.0) * 2.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  emxArray_real_T *z)
{
  uint32_T unnamed_idx_0;
  int32_T i36;
  unnamed_idx_0 = (uint32_T)varargin_1->size[0];
  i36 = z->size[0];
  z->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)z, i36, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);
}

/* End of code generation (mod.c) */
