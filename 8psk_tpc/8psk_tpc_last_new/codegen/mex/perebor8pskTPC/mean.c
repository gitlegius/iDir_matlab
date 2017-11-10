/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "mean.h"
#include "filter.h"
#include "combine_vector_elements.h"
#include "isequal.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 16, "mean",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo y_emlrtRSI = { 19, "mean",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo ab_emlrtRSI = { 28, "mean",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo bb_emlrtRSI = { 34, "mean",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T cond;
  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 36 };

  const mxArray *m3;
  char_T cv12[36];
  int32_T i;
  static const char_T cv13[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv9[2] = { 1, 37 };

  char_T cv14[37];
  static const char_T cv15[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *d_y;
  static const int32_T iv10[2] = { 1, 37 };

  real_T b_x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    cond = true;
  } else {
    cond = false;
  }

  st.site = &x_emlrtRSI;
  if (cond) {
  } else {
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&st, 36, m3, cv12);
    emlrtAssign(&b_y, m3);
    b_st.site = &ud_emlrtRSI;
    b_error(&b_st, message(&b_st, b_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  cond = !isequal(x);
  st.site = &y_emlrtRSI;
  if (cond) {
  } else {
    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 37; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&st, 37, m3, cv14);
    emlrtAssign(&c_y, m3);
    b_st.site = &ud_emlrtRSI;
    b_error(&b_st, message(&b_st, c_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  cond = !isequal(x);
  st.site = &ab_emlrtRSI;
  if (cond) {
  } else {
    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 37; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&st, 37, m3, cv14);
    emlrtAssign(&d_y, m3);
    b_st.site = &ud_emlrtRSI;
    b_error(&b_st, message(&b_st, d_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  st.site = &bb_emlrtRSI;
  b_x = combine_vector_elements(&st, x);
  return b_x / (real_T)x->size[1];
}

/* End of code generation (mean.c) */
