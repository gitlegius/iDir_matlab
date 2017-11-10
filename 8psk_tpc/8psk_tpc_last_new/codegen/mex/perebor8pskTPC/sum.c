/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "sum.h"
#include "filter.h"
#include "combine_vector_elements.h"
#include "isequal.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo pc_emlrtRSI = { 13, "sum",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo qc_emlrtRSI = { 46, "sumprod",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo rc_emlrtRSI = { 38, "sumprod",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo sc_emlrtRSI = { 19, "sumprod",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
real_T b_sum(const real_T x_data[], const int32_T x_size[1])
{
  real_T y;
  int32_T k;
  y = x_data[0];
  for (k = 2; k <= x_size[0]; k++) {
    y += x_data[k - 1];
  }

  return y;
}

real_T sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2])
{
  emxArray_real_T b_x_data;
  boolean_T cond;
  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 37 };

  const mxArray *m8;
  char_T cv28[37];
  int32_T i;
  static const char_T cv29[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  emxArray_real_T c_x_data;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &sc_emlrtRSI;
  b_x_data.data = (real_T *)x_data;
  b_x_data.size = (int32_T *)x_size;
  b_x_data.allocatedSize = -1;
  b_x_data.numDimensions = 2;
  b_x_data.canFreeData = false;
  cond = !isequal(&b_x_data);
  b_st.site = &rc_emlrtRSI;
  if (cond) {
  } else {
    b_y = NULL;
    m8 = emlrtCreateCharArray(2, iv29);
    for (i = 0; i < 37; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 37, m8, cv28);
    emlrtAssign(&b_y, m8);
    c_st.site = &ud_emlrtRSI;
    b_error(&c_st, message(&c_st, b_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  c_x_data.data = (real_T *)x_data;
  c_x_data.size = (int32_T *)x_size;
  c_x_data.allocatedSize = -1;
  c_x_data.numDimensions = 2;
  c_x_data.canFreeData = false;
  b_st.site = &qc_emlrtRSI;
  return combine_vector_elements(&b_st, &c_x_data);
}

/* End of code generation (sum.c) */
