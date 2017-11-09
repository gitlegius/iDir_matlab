/*
 * seq_search.c
 *
 * Code generation for function 'seq_search'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "seq_search.h"
#include "HDLC_extract_2_emxutil.h"
#include "isequal.h"
#include "HDLC_extract_2_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1, 28, "seq_search",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\seq_search.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 9, 15, "R", "seq_search",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\seq_search.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 19, 18, "R", "seq_search",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\seq_search.m", 0 };

/* Function Definitions */
void seq_search(const emlrtStack *sp, const emxArray_real_T *R, real_T *res,
                real_T *position)
{
  int32_T k;
  int32_T b_k;
  emxArray_real_T *b_R;
  boolean_T exitg2;
  int32_T i0;
  int32_T i1;
  int32_T loop_ub;
  static const real_T dv0[8] = { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0 };

  emxArray_real_T *c_R;
  boolean_T exitg1;
  real_T d0;
  real_T d1;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* returns number of repetitions */
  /* 23.06.01 */
  *res = 0.0;
  *position = -1.0;
  k = 1;
  b_k = 1;
  emxInit_real_T(sp, &b_R, 2, &emlrtRTEI, true);
  exitg2 = false;
  while ((!exitg2) && (b_k - 1 <= R->size[1] - 8)) {
    k = b_k;
    if (b_k > 7 + b_k) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = R->size[1];
      i0 = emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i0, &emlrtBCI, sp) - 1;
      i1 = R->size[1];
      loop_ub = 7 + b_k;
      i1 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i1, &emlrtBCI, sp);
    }

    loop_ub = b_R->size[0] * b_R->size[1];
    b_R->size[0] = 1;
    b_R->size[1] = i1 - i0;
    emxEnsureCapacity(sp, (emxArray__common *)b_R, loop_ub, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = i1 - i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_R->data[b_R->size[0] * i1] = R->data[i0 + i1];
    }

    if (isequal(b_R, dv0)) {
      *position = 1.0 + (real_T)(b_k - 1);
      *res = 1.0;

      /* 08.09.2003 */
      exitg2 = true;
    } else {
      b_k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&b_R);
  if (k != R->size[1] - 7) {
    *res = 1.0;

    /* number of repetitions */
    emxInit_real_T(sp, &c_R, 2, &emlrtRTEI, true);
    exitg1 = false;
    while ((!exitg1) && ((((real_T)k + *res * 8.0) + 8.0) - 1.0 <= R->size[1]))
    {
      d0 = (real_T)k + *res * 8.0;
      d1 = (((real_T)k + *res * 8.0) + 8.0) - 1.0;
      if (d0 > d1) {
        i0 = 0;
        i1 = 0;
      } else {
        i0 = R->size[1];
        i1 = (int32_T)d0;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp) - 1;
        i1 = R->size[1];
        loop_ub = (int32_T)d1;
        i1 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i1, &b_emlrtBCI, sp);
      }

      loop_ub = c_R->size[0] * c_R->size[1];
      c_R->size[0] = 1;
      c_R->size[1] = i1 - i0;
      emxEnsureCapacity(sp, (emxArray__common *)c_R, loop_ub, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = i1 - i0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_R->data[c_R->size[0] * i1] = R->data[i0 + i1];
      }

      if (isequal(c_R, dv0)) {
        (*res)++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      } else {
        exitg1 = true;
      }
    }

    emxFree_real_T(&c_R);
  }

  /* if k~=N-n+1 */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (seq_search.c) */
