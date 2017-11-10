/*
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "std.h"
#include "eml_error.h"
#include "filter.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 12, "std",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"
};

static emlrtMCInfo emlrtMCI = { 18, 9, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtMCInfo b_emlrtMCI = { 17, 19, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtMCInfo c_emlrtMCI = { 23, 9, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtMCInfo d_emlrtMCI = { 20, 19, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo ae_emlrtRSI = { 20, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo be_emlrtRSI = { 17, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo ie_emlrtRSI = { 23, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo je_emlrtRSI = { 18, "var",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_creal_T *varargin_1)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg1;
  int32_T i;
  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 30 };

  const mxArray *m1;
  char_T cv4[30];
  static const char_T cv5[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'v', 'a', 'r', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 36 };

  char_T cv6[36];
  static const char_T cv7[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  int32_T n;
  int32_T d;
  real_T x;
  real_T xbar_re;
  real_T xbar_im;
  real_T c_re;
  real_T c_im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  p = false;
  b_p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (k + 1 <= 1) {
        i = varargin_1->size[0];
      } else {
        i = 1;
      }

      if (i != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    for (i = 0; i < 30; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(&st, 30, m1, cv4);
    emlrtAssign(&b_y, m1);
    b_st.site = &be_emlrtRSI;
    c_st.site = &je_emlrtRSI;
    b_error(&b_st, message(&c_st, b_y, &emlrtMCI), &b_emlrtMCI);
  }

  if ((varargin_1->size[0] == 1) || (varargin_1->size[0] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    for (i = 0; i < 36; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(&st, 36, m1, cv6);
    emlrtAssign(&c_y, m1);
    b_st.site = &ae_emlrtRSI;
    c_st.site = &ie_emlrtRSI;
    b_error(&b_st, message(&c_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  n = varargin_1->size[0] - 2;
  if (varargin_1->size[0] > 1) {
    d = varargin_1->size[0] - 1;
  } else {
    d = varargin_1->size[0];
  }

  if (varargin_1->size[0] == 0) {
    x = 0.0;
  } else {
    i = 0;
    xbar_re = varargin_1->data[0].re;
    xbar_im = varargin_1->data[0].im;
    for (k = 0; k <= n; k++) {
      i++;
      xbar_re += varargin_1->data[i].re;
      xbar_im += varargin_1->data[i].im;
    }

    i = varargin_1->size[0];
    if (xbar_im == 0.0) {
      xbar_re /= (real_T)i;
      xbar_im = 0.0;
    } else if (xbar_re == 0.0) {
      xbar_re = 0.0;
      xbar_im /= (real_T)i;
    } else {
      xbar_re /= (real_T)i;
      xbar_im /= (real_T)i;
    }

    i = 0;
    c_re = varargin_1->data[0].re - xbar_re;
    c_im = varargin_1->data[0].im - xbar_im;
    x = c_re * c_re + c_im * c_im;
    for (k = 0; k <= n; k++) {
      i++;
      c_re = varargin_1->data[i].re - xbar_re;
      c_im = varargin_1->data[i].im - xbar_im;
      x += c_re * c_re + c_im * c_im;
    }

    x /= (real_T)d;
  }

  st.site = &o_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &p_emlrtRSI;
    eml_error(&b_st);
  }

  return muDoubleScalarSqrt(x);
}

/* End of code generation (std.c) */
