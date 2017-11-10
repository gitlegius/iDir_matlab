/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "error.h"
#include "filter.h"
#include "perebor8pskTPC_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo l_emlrtMCI = { 16, 1, "error",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

static emlrtRSInfo xd_emlrtRSI = { 16, "error",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

/* Function Definitions */
void error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 24 };

  const mxArray *m5;
  char_T cv18[24];
  int32_T i;
  static const char_T cv19[24] = { 'N', 'o', 't', ' ', 's', 'u', 'p', 'p', 'o',
    'r', 't', 'e', 'd', ' ', 'c', 'o', 'd', 'e', ' ', 'r', 'a', 't', 'e', '!' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv19);
  for (i = 0; i < 24; i++) {
    cv18[i] = cv19[i];
  }

  emlrtInitCharArrayR2013a(sp, 24, m5, cv18);
  emlrtAssign(&y, m5);
  st.site = &xd_emlrtRSI;
  b_error(&st, y, &l_emlrtMCI);
}

/* End of code generation (error.c) */
