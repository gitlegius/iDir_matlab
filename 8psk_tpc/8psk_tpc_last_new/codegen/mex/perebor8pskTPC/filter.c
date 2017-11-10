/*
 * filter.c
 *
 * Code generation for function 'filter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "filter.h"
#include "perebor8pskTPC_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo gd_emlrtRSI = { 140, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRSInfo hd_emlrtRSI = { 144, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRSInfo id_emlrtRSI = { 167, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtMCInfo x_emlrtMCI = { 47, 9, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtMCInfo y_emlrtMCI = { 44, 19, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 115, 1, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 1, 19, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRSInfo td_emlrtRSI = { 44, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

static emlrtRSInfo ge_emlrtRSI = { 47, "filter",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"
};

/* Function Definitions */
void filter(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b2;
  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 36 };

  const mxArray *m9;
  char_T cv30[36];
  int32_T i;
  static const char_T cv31[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  uint32_T uv3[2];
  int32_T nx;
  int32_T jend;
  int32_T k;
  static const int8_T iv31[21] = { 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1 };

  boolean_T b_k;
  real_T dbuffer;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  double * yiy0_t;
  double * xix0_t;
  real_T b_dbuffer[21];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    b2 = true;
  } else {
    b2 = false;
  }

  if (b2) {
  } else {
    b_y = NULL;
    m9 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 36; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m9, cv30);
    emlrtAssign(&b_y, m9);
    st.site = &td_emlrtRSI;
    b_st.site = &ge_emlrtRSI;
    b_error(&st, message(&b_st, b_y, &x_emlrtMCI), &y_emlrtMCI);
  }

  for (i = 0; i < 2; i++) {
    uv3[i] = (uint32_T)x->size[i];
  }

  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)uv3[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  nx = x->size[1];
  if (x->size[1] >= 42) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i = y->size[0] * y->size[1];
    y->size[1] = (int32_T)uv3[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    jend = (int32_T)uv3[1];
    for (i = 0; i < jend; i++) {
      y->data[i] = 0.0;
    }

    for (k = 0; k < 21; k++) {
      i = nx - k;
      if ((iv31[k] == 0) || (i < 23)) {
        jend = (k + nx) - k;
        st.site = &gd_emlrtRSI;
        if (k + 1 > jend) {
          b_k = false;
        } else {
          b_k = (jend > 2147483646);
        }

        if (b_k) {
          c_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = k; i + 1 <= jend; i++) {
          y->data[i] += (real_T)iv31[k] * x->data[i - k];
        }
      } else {
        st.site = &hd_emlrtRSI;
        dbuffer = iv31[k];
        n_t = (ptrdiff_t)(i);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        a_t = (double *)(&dbuffer);
        yiy0_t = (double *)(&y->data[k]);
        xix0_t = (double *)(&x->data[0]);
        daxpy(&n_t, a_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  } else {
    memset(&b_dbuffer[1], 0, 20U * sizeof(real_T));
    st.site = &id_emlrtRSI;
    for (i = 0; i + 1 <= nx; i++) {
      for (k = 0; k < 20; k++) {
        b_dbuffer[k] = b_dbuffer[k + 1];
      }

      b_dbuffer[20] = 0.0;
      for (k = 0; k < 21; k++) {
        dbuffer = b_dbuffer[k] + x->data[i] * (real_T)iv31[k];
        b_dbuffer[k] = dbuffer;
      }

      y->data[i] = b_dbuffer[0];
    }
  }
}

/* End of code generation (filter.c) */
