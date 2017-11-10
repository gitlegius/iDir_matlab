/*
 * demapDecTest.c
 *
 * Code generation for function 'demapDecTest'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "demapDecTest.h"
#include "perebor8pskTPC_emxutil.h"
#include "abs.h"
#include "power.h"
#include "filter.h"
#include "eml_int_forloop_overflow_check.h"
#include "mean.h"
#include "log2.h"
#include "std.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 3, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo i_emlrtRSI = { 17, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo j_emlrtRSI = { 30, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo k_emlrtRSI = { 31, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo l_emlrtRSI = { 32, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo m_emlrtRSI = { 27, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo n_emlrtRSI = { 28, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRSInfo q_emlrtRSI = { 16, "min",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo r_emlrtRSI = { 18, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo s_emlrtRSI = { 105, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo t_emlrtRSI = { 108, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo v_emlrtRSI = { 229, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo w_emlrtRSI = { 202, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo db_emlrtRSI = { 16, "max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtMCInfo e_emlrtMCI = { 41, 9, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo f_emlrtMCI = { 38, 19, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo g_emlrtMCI = { 82, 9, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo h_emlrtMCI = { 81, 19, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 16, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 91, 1, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 12, 1, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 14, 8, "d2", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 14, 5, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtDCInfo h_emlrtDCI = { 23, 8, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  1 };

static emlrtECInfo e_emlrtECI = { 2, 30, 22, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtECInfo f_emlrtECI = { 2, 31, 22, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtECInfo g_emlrtECI = { 2, 32, 22, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtECInfo h_emlrtECI = { 2, 27, 22, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtECInfo i_emlrtECI = { 2, 28, 22, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 25, 26, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 25, 35, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo j_emlrtECI = { 2, 25, 23, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 30, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo k_emlrtECI = { -1, 30, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 31, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo l_emlrtECI = { -1, 31, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo k_emlrtBCI = { -1, -1, 32, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo m_emlrtECI = { -1, 32, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 27, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo n_emlrtECI = { -1, 27, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 28, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 28, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtBCInfo n_emlrtBCI = { -1, -1, 25, 9, "LLR", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtECInfo p_emlrtECI = { -1, 25, 9, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m"
};

static emlrtDCInfo i_emlrtDCI = { 12, 13, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  1 };

static emlrtDCInfo j_emlrtDCI = { 12, 13, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  4 };

static emlrtDCInfo k_emlrtDCI = { 21, 11, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  1 };

static emlrtDCInfo l_emlrtDCI = { 21, 11, "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  4 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 27, 28, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 27, 46, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 28, 28, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 28, 46, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 30, 28, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 30, 50, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 31, 28, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 31, 50, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 32, 28, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 32, 50, "P", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 14, 47, "Star", "demapDecTest",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\demapDecTest.m",
  0 };

static emlrtRSInfo ae_emlrtRSI = { 81, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo be_emlrtRSI = { 38, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo ie_emlrtRSI = { 82, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo je_emlrtRSI = { 41, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void demapDecTest(const emlrtStack *sp, emxArray_creal_T
                  *out_burst_complex_without_UWs, const creal_T Star_data[],
                  const int32_T Star_size[2], real_T N, emxArray_real_T *LLR)
{
  real_T sigma2;
  int32_T i3;
  int32_T n;
  real_T ind_mod;
  real_T c_out_burst_complex_without_UWs;
  emxArray_real_T *d2;
  int32_T ixstop;
  emxArray_int32_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  emxArray_creal_T *b_out_burst_complex_without_UWs;
  int32_T i4;
  int32_T b_d2[2];
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 36 };

  const mxArray *m0;
  char_T cv0[36];
  int32_T i;
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 39 };

  char_T cv2[39];
  static const char_T cv3[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  uint32_T outsz[2];
  emxArray_real_T *r8;
  int32_T ix;
  int32_T iy;
  int32_T ixstart;
  boolean_T b_ix;
  int32_T c_ix;
  boolean_T exitg11;
  boolean_T b_ixstart;
  emxArray_real_T *r9;
  emxArray_real_T *c_d2;
  emxArray_real_T *d_d2;
  int32_T e_d2[2];
  emxArray_real_T *f_d2;
  int32_T i5;
  boolean_T exitg10;
  int32_T i6;
  int32_T i7;
  boolean_T c_ixstart;
  int32_T d_ixstart;
  int32_T e_ixstart;
  emxArray_real_T *g_d2;
  int32_T i8;
  boolean_T exitg9;
  int32_T i9;
  int32_T i10;
  boolean_T f_ixstart;
  int32_T g_ixstart;
  int32_T h_ixstart;
  emxArray_real_T *h_d2;
  int32_T i11;
  boolean_T exitg8;
  int32_T i12;
  int32_T i13;
  boolean_T i_ixstart;
  int32_T j_ixstart;
  int32_T k_ixstart;
  emxArray_real_T *i_d2;
  int32_T i14;
  boolean_T exitg7;
  int32_T i15;
  int32_T i16;
  boolean_T l_ixstart;
  int32_T m_ixstart;
  int32_T n_ixstart;
  emxArray_real_T *j_d2;
  int32_T i17;
  boolean_T d_ix;
  boolean_T exitg6;
  int32_T i18;
  int32_T i19;
  boolean_T o_ixstart;
  int32_T p_ixstart;
  int32_T q_ixstart;
  emxArray_real_T *k_d2;
  int32_T i20;
  boolean_T e_ix;
  boolean_T exitg5;
  int32_T i21;
  int32_T i22;
  boolean_T r_ixstart;
  int32_T s_ixstart;
  int32_T t_ixstart;
  static const int8_T iv2[4] = { 1, 2, 5, 6 };

  emxArray_real_T *l_d2;
  int32_T i23;
  boolean_T f_ix;
  boolean_T exitg4;
  int32_T i24;
  int32_T i25;
  boolean_T u_ixstart;
  int32_T v_ixstart;
  int32_T w_ixstart;
  static const int8_T iv3[4] = { 3, 4, 7, 8 };

  emxArray_real_T *m_d2;
  int32_T i26;
  boolean_T g_ix;
  boolean_T exitg3;
  int32_T i27;
  int32_T i28;
  boolean_T x_ixstart;
  int32_T y_ixstart;
  int32_T ab_ixstart;
  emxArray_real_T *n_d2;
  int32_T i29;
  boolean_T h_ix;
  boolean_T exitg2;
  int32_T i30;
  int32_T i31;
  boolean_T bb_ixstart;
  int32_T cb_ixstart;
  int32_T db_ixstart;
  emxArray_real_T *o_d2;
  int32_T i32;
  boolean_T i_ix;
  boolean_T exitg1;
  int32_T i33;
  int32_T i34;
  boolean_T eb_ixstart;
  int32_T fb_ixstart;
  int32_T gb_ixstart;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &h_emlrtRSI;
  sigma2 = b_std(&st, out_burst_complex_without_UWs);
  i3 = out_burst_complex_without_UWs->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)out_burst_complex_without_UWs, i3,
                    (int32_T)sizeof(creal_T), &f_emlrtRTEI);
  n = out_burst_complex_without_UWs->size[0];
  for (i3 = 0; i3 < n; i3++) {
    ind_mod = out_burst_complex_without_UWs->data[i3].re;
    c_out_burst_complex_without_UWs = out_burst_complex_without_UWs->data[i3].im;
    if (c_out_burst_complex_without_UWs == 0.0) {
      out_burst_complex_without_UWs->data[i3].re = ind_mod / sigma2;
      out_burst_complex_without_UWs->data[i3].im = 0.0;
    } else if (ind_mod == 0.0) {
      out_burst_complex_without_UWs->data[i3].re = 0.0;
      out_burst_complex_without_UWs->data[i3].im =
        c_out_burst_complex_without_UWs / sigma2;
    } else {
      out_burst_complex_without_UWs->data[i3].re = ind_mod / sigma2;
      out_burst_complex_without_UWs->data[i3].im =
        c_out_burst_complex_without_UWs / sigma2;
    }
  }

  emxInit_real_T(sp, &d2, 2, &h_emlrtRTEI, true);
  ind_mod = b_log2(Star_size[1]);
  sigma2 = emlrtNonNegativeCheckFastR2012b(N, &j_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(sigma2, &i_emlrtDCI, sp);
  i3 = d2->size[0] * d2->size[1];
  d2->size[0] = Star_size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d2, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  sigma2 = emlrtNonNegativeCheckFastR2012b(N, &j_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(sigma2, &i_emlrtDCI, sp);
  i3 = d2->size[0] * d2->size[1];
  d2->size[1] = (int32_T)N;
  emxEnsureCapacity(sp, (emxArray__common *)d2, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  sigma2 = emlrtNonNegativeCheckFastR2012b(N, &j_emlrtDCI, sp);
  n = Star_size[1] * (int32_T)emlrtIntegerCheckFastR2012b(sigma2, &i_emlrtDCI,
    sp);
  for (i3 = 0; i3 < n; i3++) {
    d2->data[i3] = 0.0;
  }

  ixstop = 0;
  b_emxInit_int32_T(sp, &r5, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r6, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r7, 1, &f_emlrtRTEI, true);
  emxInit_creal_T(sp, &b_out_burst_complex_without_UWs, 1, &f_emlrtRTEI, true);
  while (ixstop <= Star_size[1] - 1) {
    i3 = d2->size[0];
    i4 = ixstop + 1;
    emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &f_emlrtBCI, sp);
    n = d2->size[1];
    i3 = r5->size[0];
    r5->size[0] = n;
    emxEnsureCapacity(sp, (emxArray__common *)r5, i3, (int32_T)sizeof(int32_T),
                      &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      r5->data[i3] = i3;
    }

    i3 = 1 + ixstop;
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, Star_size[1], &y_emlrtBCI, sp);
    i3 = b_out_burst_complex_without_UWs->size[0];
    b_out_burst_complex_without_UWs->size[0] =
      out_burst_complex_without_UWs->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_out_burst_complex_without_UWs,
                      i3, (int32_T)sizeof(creal_T), &f_emlrtRTEI);
    n = out_burst_complex_without_UWs->size[0];
    for (i3 = 0; i3 < n; i3++) {
      b_out_burst_complex_without_UWs->data[i3].re =
        out_burst_complex_without_UWs->data[i3].re - Star_data[ixstop].re;
      b_out_burst_complex_without_UWs->data[i3].im =
        out_burst_complex_without_UWs->data[i3].im - Star_data[ixstop].im;
    }

    b_abs(sp, b_out_burst_complex_without_UWs, r7);
    power(sp, r7, r6);
    b_d2[0] = 1;
    b_d2[1] = r5->size[0];
    emlrtSubAssignSizeCheckR2012b(b_d2, 2, *(int32_T (*)[1])r6->size, 1,
      &d_emlrtECI, sp);
    n = r5->size[0];
    for (i3 = 0; i3 < n; i3++) {
      d2->data[ixstop + d2->size[0] * r5->data[i3]] = r6->data[i3];
    }

    ixstop++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_creal_T(&b_out_burst_complex_without_UWs);
  emxFree_real_T(&r7);
  emxFree_real_T(&r6);
  emxFree_int32_T(&r5);
  st.site = &i_emlrtRSI;
  b_st.site = &q_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  if (((d2->size[0] == 1) && (d2->size[1] == 1)) || (d2->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    for (i = 0; i < 36; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m0, cv0);
    emlrtAssign(&y, m0);
    d_st.site = &be_emlrtRSI;
    e_st.site = &je_emlrtRSI;
    b_error(&d_st, message(&e_st, y, &e_emlrtMCI), &f_emlrtMCI);
  }

  if (d2->size[0] > 0) {
  } else {
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    for (i = 0; i < 39; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m0, cv2);
    emlrtAssign(&b_y, m0);
    d_st.site = &ae_emlrtRSI;
    e_st.site = &ie_emlrtRSI;
    b_error(&d_st, message(&e_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  for (i3 = 0; i3 < 2; i3++) {
    outsz[i3] = (uint32_T)d2->size[i3];
  }

  emxInit_real_T(&c_st, &r8, 2, &f_emlrtRTEI, true);
  i3 = r8->size[0] * r8->size[1];
  r8->size[0] = 1;
  r8->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  n = d2->size[0];
  ix = 0;
  iy = -1;
  d_st.site = &s_emlrtRSI;
  if (1 > d2->size[1]) {
    overflow = false;
  } else {
    overflow = (d2->size[1] > 2147483646);
  }

  if (overflow) {
    f_st.site = &u_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (i = 1; i <= d2->size[1]; i++) {
    d_st.site = &t_emlrtRSI;
    ixstart = ix;
    ixstop = ix + n;
    sigma2 = d2->data[ix];
    if (n > 1) {
      if (muDoubleScalarIsNaN(d2->data[ix])) {
        f_st.site = &w_emlrtRSI;
        if (ix + 2 > ixstop) {
          b_ix = false;
        } else {
          b_ix = (ixstop > 2147483646);
        }

        if (b_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix + 1;
        exitg11 = false;
        while ((!exitg11) && (c_ix + 1 <= ixstop)) {
          ixstart = c_ix;
          if (!muDoubleScalarIsNaN(d2->data[c_ix])) {
            sigma2 = d2->data[c_ix];
            exitg11 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 2 > ixstop) {
          b_ixstart = false;
        } else {
          b_ixstart = (ixstop > 2147483646);
        }

        if (b_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
          if (d2->data[c_ix] < sigma2) {
            sigma2 = d2->data[c_ix];
          }
        }
      }
    }

    iy++;
    r8->data[iy] = sigma2;
    ix += n;
  }

  st.site = &i_emlrtRSI;
  sigma2 = mean(&st, r8);
  i3 = d2->size[0] * d2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d2, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  n = d2->size[0];
  ixstop = d2->size[1];
  n *= ixstop;
  for (i3 = 0; i3 < n; i3++) {
    d2->data[i3] = -d2->data[i3] / 2.0 / sigma2;
  }

  i3 = LLR->size[0];
  sigma2 = ind_mod * N;
  sigma2 = emlrtNonNegativeCheckFastR2012b(sigma2, &l_emlrtDCI, sp);
  LLR->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(sigma2, &k_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)LLR, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  sigma2 = ind_mod * N;
  sigma2 = emlrtNonNegativeCheckFastR2012b(sigma2, &l_emlrtDCI, sp);
  n = (int32_T)emlrtIntegerCheckFastR2012b(sigma2, &k_emlrtDCI, sp);
  for (i3 = 0; i3 < n; i3++) {
    LLR->data[i3] = 0.0;
  }

  /*  sigma=sqrt(sigma2); */
  emxInit_real_T(sp, &r9, 2, &f_emlrtRTEI, true);
  switch ((int32_T)emlrtIntegerCheckFastR2012b(ind_mod, &h_emlrtDCI, sp)) {
   case 1:
    emxInit_real_T(sp, &c_d2, 2, &f_emlrtRTEI, true);
    i3 = d2->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i3, &g_emlrtBCI, sp);
    i3 = d2->size[0];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i3, &h_emlrtBCI, sp);
    n = d2->size[1];
    i3 = c_d2->size[0] * c_d2->size[1];
    c_d2->size[0] = 1;
    c_d2->size[1] = n;
    emxEnsureCapacity(sp, (emxArray__common *)c_d2, i3, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      c_d2->data[c_d2->size[0] * i3] = d2->data[d2->size[0] * i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = c_d2->size[i3];
    }

    emxFree_real_T(&c_d2);
    emxInit_real_T(sp, &d_d2, 2, &f_emlrtRTEI, true);
    n = d2->size[1];
    i3 = d_d2->size[0] * d_d2->size[1];
    d_d2->size[0] = 1;
    d_d2->size[1] = n;
    emxEnsureCapacity(sp, (emxArray__common *)d_d2, i3, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      d_d2->data[d_d2->size[0] * i3] = d2->data[1 + d2->size[0] * i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = d_d2->size[i3];
    }

    emxFree_real_T(&d_d2);
    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &j_emlrtECI, sp);
    if (1 > (int32_T)(ind_mod * N)) {
      i3 = 0;
    } else {
      i3 = (int32_T)(ind_mod * N);
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i3, &n_emlrtBCI, sp);
      i3 = (int32_T)(ind_mod * N);
      i4 = (int32_T)(ind_mod * N);
      i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &n_emlrtBCI, sp);
    }

    i4 = d2->size[1];
    emlrtSizeEqCheck1DFastR2012b(i3, i4, &p_emlrtECI, sp);
    n = d2->size[1] - 1;
    for (i3 = 0; i3 <= n; i3++) {
      LLR->data[i3] = d2->data[d2->size[0] * i3] - d2->data[1 + d2->size[0] * i3];
    }
    break;

   case 2:
    st.site = &m_emlrtRSI;
    for (i3 = 0; i3 < 2; i3++) {
      i4 = d2->size[0];
      ixstop = 1 + i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &o_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &f_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = f_d2->size[0] * f_d2->size[1];
    f_d2->size[0] = 2;
    f_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)f_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 2; i4++) {
        f_d2->data[i4 + f_d2->size[0] * i3] = d2->data[i4 + d2->size[0] * i3];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)f_d2->size[i3];
    }

    emxFree_real_T(&f_d2);
    i3 = r8->size[0] * r8->size[1];
    r8->size[0] = 1;
    r8->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 2;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 1;
      i4 = ix - 2;
      if (i4 >= 0) {
        i5 = (int32_T)((uint32_T)i4 >> 1);
      } else {
        i5 = (int32_T)~(~(uint32_T)i4 >> 1);
      }

      sigma2 = d2->data[(ix - 2) % 2 + d2->size[0] * i5];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix > 2147483646) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix;
        exitg10 = false;
        while ((!exitg10) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i6 = (int32_T)((uint32_T)i4 >> 1);
          } else {
            i6 = (int32_T)~(~(uint32_T)i4 >> 1);
          }

          if (!muDoubleScalarIsNaN(d2->data[(c_ix - 1) % 2 + d2->size[0] * i6]))
          {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i7 = (int32_T)((uint32_T)i4 >> 1);
            } else {
              i7 = (int32_T)~(~(uint32_T)i4 >> 1);
            }

            sigma2 = d2->data[(c_ix - 1) % 2 + d2->size[0] * i7];
            exitg10 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          c_ixstart = false;
        } else {
          c_ixstart = (ix > 2147483646);
        }

        if (c_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            d_ixstart = (int32_T)((uint32_T)ixstart >> 1);
          } else {
            d_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
          }

          if (d2->data[ixstart % 2 + d2->size[0] * d_ixstart] > sigma2) {
            if (ixstart >= 0) {
              e_ixstart = (int32_T)((uint32_T)ixstart >> 1);
            } else {
              e_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
            }

            sigma2 = d2->data[ixstart % 2 + d2->size[0] * e_ixstart];
          }

          ixstart++;
        }
      }

      iy++;
      r8->data[iy] = sigma2;
      ix += 2;
    }

    st.site = &m_emlrtRSI;
    for (i3 = 0; i3 < 2; i3++) {
      i4 = d2->size[0];
      ixstop = 3 + i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &p_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &g_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = g_d2->size[0] * g_d2->size[1];
    g_d2->size[0] = 2;
    g_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)g_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 2; i4++) {
        g_d2->data[i4 + g_d2->size[0] * i3] = d2->data[(i4 + d2->size[0] * i3) +
          2];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)g_d2->size[i3];
    }

    emxFree_real_T(&g_d2);
    i3 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r9, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 2;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 1;
      i4 = ix - 2;
      if (i4 >= 0) {
        i8 = (int32_T)((uint32_T)i4 >> 1);
      } else {
        i8 = (int32_T)~(~(uint32_T)i4 >> 1);
      }

      sigma2 = d2->data[((ix - 2) % 2 + d2->size[0] * i8) + 2];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix > 2147483646) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix;
        exitg9 = false;
        while ((!exitg9) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i9 = (int32_T)((uint32_T)i4 >> 1);
          } else {
            i9 = (int32_T)~(~(uint32_T)i4 >> 1);
          }

          if (!muDoubleScalarIsNaN(d2->data[((c_ix - 1) % 2 + d2->size[0] * i9)
               + 2])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i10 = (int32_T)((uint32_T)i4 >> 1);
            } else {
              i10 = (int32_T)~(~(uint32_T)i4 >> 1);
            }

            sigma2 = d2->data[((c_ix - 1) % 2 + d2->size[0] * i10) + 2];
            exitg9 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          f_ixstart = false;
        } else {
          f_ixstart = (ix > 2147483646);
        }

        if (f_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            g_ixstart = (int32_T)((uint32_T)ixstart >> 1);
          } else {
            g_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
          }

          if (d2->data[(ixstart % 2 + d2->size[0] * g_ixstart) + 2] > sigma2) {
            if (ixstart >= 0) {
              h_ixstart = (int32_T)((uint32_T)ixstart >> 1);
            } else {
              h_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
            }

            sigma2 = d2->data[(ixstart % 2 + d2->size[0] * h_ixstart) + 2];
          }

          ixstart++;
        }
      }

      iy++;
      r9->data[iy] = sigma2;
      ix += 2;
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = r8->size[i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = r9->size[i3];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &h_emlrtECI, sp);
    if (1 > (int32_T)(ind_mod * N)) {
      i3 = 1;
      i4 = -1;
    } else {
      i3 = (int32_T)(ind_mod * N);
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i3, &l_emlrtBCI, sp);
      i3 = 2;
      i4 = (int32_T)(ind_mod * N);
      ixstop = (int32_T)(ind_mod * N);
      i4 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &l_emlrtBCI, sp) - 1;
    }

    i4 = div_s32_floor(sp, i4, i3) + 1;
    ixstop = r8->size[1];
    emlrtSizeEqCheck1DFastR2012b(i4, ixstop, &n_emlrtECI, sp);
    n = r8->size[1];
    for (i4 = 0; i4 < n; i4++) {
      LLR->data[i3 * i4] = r8->data[r8->size[0] * i4] - r9->data[r9->size[0] *
        i4];
    }

    st.site = &n_emlrtRSI;
    for (i3 = 0; i3 < 2; i3++) {
      i4 = d2->size[0];
      ixstop = 1 + 2 * i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &q_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &h_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = h_d2->size[0] * h_d2->size[1];
    h_d2->size[0] = 2;
    h_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)h_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 2; i4++) {
        h_d2->data[i4 + h_d2->size[0] * i3] = d2->data[2 * i4 + d2->size[0] * i3];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)h_d2->size[i3];
    }

    emxFree_real_T(&h_d2);
    i3 = r8->size[0] * r8->size[1];
    r8->size[0] = 1;
    r8->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 2;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 1;
      i4 = ix - 2;
      if (i4 >= 0) {
        i11 = (int32_T)((uint32_T)i4 >> 1);
      } else {
        i11 = (int32_T)~(~(uint32_T)i4 >> 1);
      }

      sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)((ix - 2) % 2)) +
                         d2->size[0] * i11) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix > 2147483646) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix;
        exitg8 = false;
        while ((!exitg8) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i12 = (int32_T)((uint32_T)i4 >> 1);
          } else {
            i12 = (int32_T)~(~(uint32_T)i4 >> 1);
          }

          if (!muDoubleScalarIsNaN(d2->data[((int32_T)(1.0 + 2.0 * (real_T)
                 ((c_ix - 1) % 2)) + d2->size[0] * i12) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i13 = (int32_T)((uint32_T)i4 >> 1);
            } else {
              i13 = (int32_T)~(~(uint32_T)i4 >> 1);
            }

            sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)((c_ix - 1) % 2)) +
                               d2->size[0] * i13) - 1];
            exitg8 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          i_ixstart = false;
        } else {
          i_ixstart = (ix > 2147483646);
        }

        if (i_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            j_ixstart = (int32_T)((uint32_T)ixstart >> 1);
          } else {
            j_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
          }

          if (d2->data[((int32_T)(1.0 + 2.0 * (real_T)(ixstart % 2)) + d2->size
                        [0] * j_ixstart) - 1] > sigma2) {
            if (ixstart >= 0) {
              k_ixstart = (int32_T)((uint32_T)ixstart >> 1);
            } else {
              k_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
            }

            sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)(ixstart % 2)) +
                               d2->size[0] * k_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r8->data[iy] = sigma2;
      ix += 2;
    }

    st.site = &n_emlrtRSI;
    for (i3 = 0; i3 < 2; i3++) {
      i4 = d2->size[0];
      ixstop = 2 + 2 * i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &r_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &i_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = i_d2->size[0] * i_d2->size[1];
    i_d2->size[0] = 2;
    i_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)i_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 2; i4++) {
        i_d2->data[i4 + i_d2->size[0] * i3] = d2->data[(2 * i4 + d2->size[0] *
          i3) + 1];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)i_d2->size[i3];
    }

    emxFree_real_T(&i_d2);
    i3 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r9, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 2;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 1;
      i4 = ix - 2;
      if (i4 >= 0) {
        i14 = (int32_T)((uint32_T)i4 >> 1);
      } else {
        i14 = (int32_T)~(~(uint32_T)i4 >> 1);
      }

      sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)((ix - 2) % 2)) +
                         d2->size[0] * i14) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix > 2147483646) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix;
        exitg7 = false;
        while ((!exitg7) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i15 = (int32_T)((uint32_T)i4 >> 1);
          } else {
            i15 = (int32_T)~(~(uint32_T)i4 >> 1);
          }

          if (!muDoubleScalarIsNaN(d2->data[((int32_T)(2.0 + 2.0 * (real_T)
                 ((c_ix - 1) % 2)) + d2->size[0] * i15) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i16 = (int32_T)((uint32_T)i4 >> 1);
            } else {
              i16 = (int32_T)~(~(uint32_T)i4 >> 1);
            }

            sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)((c_ix - 1) % 2)) +
                               d2->size[0] * i16) - 1];
            exitg7 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          l_ixstart = false;
        } else {
          l_ixstart = (ix > 2147483646);
        }

        if (l_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            m_ixstart = (int32_T)((uint32_T)ixstart >> 1);
          } else {
            m_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
          }

          if (d2->data[((int32_T)(2.0 + 2.0 * (real_T)(ixstart % 2)) + d2->size
                        [0] * m_ixstart) - 1] > sigma2) {
            if (ixstart >= 0) {
              n_ixstart = (int32_T)((uint32_T)ixstart >> 1);
            } else {
              n_ixstart = (int32_T)~(~(uint32_T)ixstart >> 1);
            }

            sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)(ixstart % 2)) +
                               d2->size[0] * n_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r9->data[iy] = sigma2;
      ix += 2;
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = r8->size[i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = r9->size[i3];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &i_emlrtECI, sp);
    if (2 > LLR->size[0]) {
      i3 = 0;
      i4 = 1;
      ixstop = 0;
    } else {
      i3 = 1;
      i4 = 2;
      ixstop = LLR->size[0];
      n = LLR->size[0];
      ixstop = emlrtDynamicBoundsCheckFastR2012b(n, 1, ixstop, &m_emlrtBCI, sp);
    }

    ixstop = div_s32_floor(sp, (ixstop - i3) - 1, i4) + 1;
    n = r8->size[1];
    emlrtSizeEqCheck1DFastR2012b(ixstop, n, &o_emlrtECI, sp);
    n = r8->size[1];
    for (ixstop = 0; ixstop < n; ixstop++) {
      LLR->data[i3 + i4 * ixstop] = r8->data[r8->size[0] * ixstop] - r9->data
        [r9->size[0] * ixstop];
    }
    break;

   case 3:
    st.site = &j_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = 1 + i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &s_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &j_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = j_d2->size[0] * j_d2->size[1];
    j_d2->size[0] = 4;
    j_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)j_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        j_d2->data[i4 + j_d2->size[0] * i3] = d2->data[i4 + d2->size[0] * i3];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)j_d2->size[i3];
    }

    emxFree_real_T(&j_d2);
    i3 = r8->size[0] * r8->size[1];
    r8->size[0] = 1;
    r8->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i17 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i17 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[(ix - 4) % 4 + d2->size[0] * i17];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          d_ix = false;
        } else {
          d_ix = (ix > 2147483646);
        }

        if (d_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg6 = false;
        while ((!exitg6) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i18 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i18 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[(c_ix - 1) % 4 + d2->size[0] * i18]))
          {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i19 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i19 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[(c_ix - 1) % 4 + d2->size[0] * i19];
            exitg6 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          o_ixstart = false;
        } else {
          o_ixstart = (ix > 2147483646);
        }

        if (o_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            p_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            p_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[ixstart % 4 + d2->size[0] * p_ixstart] > sigma2) {
            if (ixstart >= 0) {
              q_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              q_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[ixstart % 4 + d2->size[0] * q_ixstart];
          }

          ixstart++;
        }
      }

      iy++;
      r8->data[iy] = sigma2;
      ix += 4;
    }

    st.site = &j_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = 5 + i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &t_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &k_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = k_d2->size[0] * k_d2->size[1];
    k_d2->size[0] = 4;
    k_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)k_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        k_d2->data[i4 + k_d2->size[0] * i3] = d2->data[(i4 + d2->size[0] * i3) +
          4];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)k_d2->size[i3];
    }

    emxFree_real_T(&k_d2);
    i3 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r9, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i20 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i20 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[((ix - 4) % 4 + d2->size[0] * i20) + 4];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          e_ix = false;
        } else {
          e_ix = (ix > 2147483646);
        }

        if (e_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg5 = false;
        while ((!exitg5) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i21 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i21 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[((c_ix - 1) % 4 + d2->size[0] * i21)
               + 4])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i22 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i22 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[((c_ix - 1) % 4 + d2->size[0] * i22) + 4];
            exitg5 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          r_ixstart = false;
        } else {
          r_ixstart = (ix > 2147483646);
        }

        if (r_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            s_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            s_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[(ixstart % 4 + d2->size[0] * s_ixstart) + 4] > sigma2) {
            if (ixstart >= 0) {
              t_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              t_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[(ixstart % 4 + d2->size[0] * t_ixstart) + 4];
          }

          ixstart++;
        }
      }

      iy++;
      r9->data[iy] = sigma2;
      ix += 4;
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = r8->size[i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = r9->size[i3];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &e_emlrtECI, sp);
    if (1 > (int32_T)(ind_mod * N)) {
      i3 = 1;
      i4 = -1;
    } else {
      i3 = (int32_T)(ind_mod * N);
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i3, &i_emlrtBCI, sp);
      i3 = 3;
      i4 = (int32_T)(ind_mod * N);
      ixstop = (int32_T)(ind_mod * N);
      i4 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &i_emlrtBCI, sp) - 1;
    }

    i4 = div_s32_floor(sp, i4, i3) + 1;
    ixstop = r8->size[1];
    emlrtSizeEqCheck1DFastR2012b(i4, ixstop, &k_emlrtECI, sp);
    n = r8->size[1];
    for (i4 = 0; i4 < n; i4++) {
      LLR->data[i3 * i4] = r8->data[r8->size[0] * i4] - r9->data[r9->size[0] *
        i4];
    }

    st.site = &k_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = iv2[i3];
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &u_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &l_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = l_d2->size[0] * l_d2->size[1];
    l_d2->size[0] = 4;
    l_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)l_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        l_d2->data[i4 + l_d2->size[0] * i3] = d2->data[(iv2[i4] + d2->size[0] *
          i3) - 1];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)l_d2->size[i3];
    }

    emxFree_real_T(&l_d2);
    i3 = r8->size[0] * r8->size[1];
    r8->size[0] = 1;
    r8->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i23 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i23 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[(iv2[(ix - 4) % 4] + d2->size[0] * i23) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          f_ix = false;
        } else {
          f_ix = (ix > 2147483646);
        }

        if (f_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg4 = false;
        while ((!exitg4) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i24 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i24 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[(iv2[(c_ix - 1) % 4] + d2->size[0] *
                i24) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i25 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i25 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[(iv2[(c_ix - 1) % 4] + d2->size[0] * i25) - 1];
            exitg4 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          u_ixstart = false;
        } else {
          u_ixstart = (ix > 2147483646);
        }

        if (u_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            v_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            v_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[(iv2[ixstart % 4] + d2->size[0] * v_ixstart) - 1] >
              sigma2) {
            if (ixstart >= 0) {
              w_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              w_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[(iv2[ixstart % 4] + d2->size[0] * w_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r8->data[iy] = sigma2;
      ix += 4;
    }

    st.site = &k_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = iv3[i3];
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &v_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &m_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = m_d2->size[0] * m_d2->size[1];
    m_d2->size[0] = 4;
    m_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)m_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        m_d2->data[i4 + m_d2->size[0] * i3] = d2->data[(iv3[i4] + d2->size[0] *
          i3) - 1];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)m_d2->size[i3];
    }

    emxFree_real_T(&m_d2);
    i3 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r9, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i26 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i26 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[(iv3[(ix - 4) % 4] + d2->size[0] * i26) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          g_ix = false;
        } else {
          g_ix = (ix > 2147483646);
        }

        if (g_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg3 = false;
        while ((!exitg3) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i27 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i27 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[(iv3[(c_ix - 1) % 4] + d2->size[0] *
                i27) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i28 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i28 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[(iv3[(c_ix - 1) % 4] + d2->size[0] * i28) - 1];
            exitg3 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          x_ixstart = false;
        } else {
          x_ixstart = (ix > 2147483646);
        }

        if (x_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            y_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            y_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[(iv3[ixstart % 4] + d2->size[0] * y_ixstart) - 1] >
              sigma2) {
            if (ixstart >= 0) {
              ab_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              ab_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[(iv3[ixstart % 4] + d2->size[0] * ab_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r9->data[iy] = sigma2;
      ix += 4;
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = r8->size[i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = r9->size[i3];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &f_emlrtECI, sp);
    if (2 > LLR->size[0]) {
      i3 = 0;
      i4 = 1;
      ixstop = 0;
    } else {
      i3 = 1;
      i4 = 3;
      ixstop = LLR->size[0];
      n = LLR->size[0];
      ixstop = emlrtDynamicBoundsCheckFastR2012b(n, 1, ixstop, &j_emlrtBCI, sp);
    }

    ixstop = div_s32_floor(sp, (ixstop - i3) - 1, i4) + 1;
    n = r8->size[1];
    emlrtSizeEqCheck1DFastR2012b(ixstop, n, &l_emlrtECI, sp);
    n = r8->size[1];
    for (ixstop = 0; ixstop < n; ixstop++) {
      LLR->data[i3 + i4 * ixstop] = r8->data[r8->size[0] * ixstop] - r9->data
        [r9->size[0] * ixstop];
    }

    st.site = &l_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = 1 + 2 * i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &w_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &n_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = n_d2->size[0] * n_d2->size[1];
    n_d2->size[0] = 4;
    n_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)n_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        n_d2->data[i4 + n_d2->size[0] * i3] = d2->data[2 * i4 + d2->size[0] * i3];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)n_d2->size[i3];
    }

    emxFree_real_T(&n_d2);
    i3 = r8->size[0] * r8->size[1];
    r8->size[0] = 1;
    r8->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r8, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i29 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i29 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)((ix - 4) % 4)) +
                         d2->size[0] * i29) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          h_ix = false;
        } else {
          h_ix = (ix > 2147483646);
        }

        if (h_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg2 = false;
        while ((!exitg2) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i30 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i30 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[((int32_T)(1.0 + 2.0 * (real_T)
                 ((c_ix - 1) % 4)) + d2->size[0] * i30) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i31 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i31 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)((c_ix - 1) % 4)) +
                               d2->size[0] * i31) - 1];
            exitg2 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          bb_ixstart = false;
        } else {
          bb_ixstart = (ix > 2147483646);
        }

        if (bb_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            cb_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            cb_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[((int32_T)(1.0 + 2.0 * (real_T)(ixstart % 4)) + d2->size
                        [0] * cb_ixstart) - 1] > sigma2) {
            if (ixstart >= 0) {
              db_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              db_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[((int32_T)(1.0 + 2.0 * (real_T)(ixstart % 4)) +
                               d2->size[0] * db_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r8->data[iy] = sigma2;
      ix += 4;
    }

    st.site = &l_emlrtRSI;
    for (i3 = 0; i3 < 4; i3++) {
      i4 = d2->size[0];
      ixstop = 2 + 2 * i3;
      emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i4, &x_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &o_d2, 2, &f_emlrtRTEI, true);
    b_st.site = &db_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = d2->size[1];
    i3 = o_d2->size[0] * o_d2->size[1];
    o_d2->size[0] = 4;
    o_d2->size[1] = n;
    emxEnsureCapacity(&c_st, (emxArray__common *)o_d2, i3, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i3 = 0; i3 < n; i3++) {
      for (i4 = 0; i4 < 4; i4++) {
        o_d2->data[i4 + o_d2->size[0] * i3] = d2->data[(2 * i4 + d2->size[0] *
          i3) + 1];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      outsz[i3] = (uint32_T)o_d2->size[i3];
    }

    emxFree_real_T(&o_d2);
    i3 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)r9, i3, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    i3 = d2->size[1];
    ix = 4;
    iy = -1;
    d_st.site = &s_emlrtRSI;
    for (i = 1; i <= i3; i++) {
      d_st.site = &t_emlrtRSI;
      ixstart = ix - 3;
      i4 = ix - 4;
      if (i4 >= 0) {
        i32 = (int32_T)((uint32_T)i4 >> 2);
      } else {
        i32 = (int32_T)~(~(uint32_T)i4 >> 2);
      }

      sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)((ix - 4) % 4)) +
                         d2->size[0] * i32) - 1];
      if (muDoubleScalarIsNaN(sigma2)) {
        f_st.site = &w_emlrtRSI;
        if (ix - 2 > ix) {
          i_ix = false;
        } else {
          i_ix = (ix > 2147483646);
        }

        if (i_ix) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix - 2;
        exitg1 = false;
        while ((!exitg1) && (c_ix <= ix)) {
          ixstart = c_ix;
          i4 = c_ix - 1;
          if (i4 >= 0) {
            i33 = (int32_T)((uint32_T)i4 >> 2);
          } else {
            i33 = (int32_T)~(~(uint32_T)i4 >> 2);
          }

          if (!muDoubleScalarIsNaN(d2->data[((int32_T)(2.0 + 2.0 * (real_T)
                 ((c_ix - 1) % 4)) + d2->size[0] * i33) - 1])) {
            i4 = c_ix - 1;
            if (i4 >= 0) {
              i34 = (int32_T)((uint32_T)i4 >> 2);
            } else {
              i34 = (int32_T)~(~(uint32_T)i4 >> 2);
            }

            sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)((c_ix - 1) % 4)) +
                               d2->size[0] * i34) - 1];
            exitg1 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart < ix) {
        f_st.site = &v_emlrtRSI;
        if (ixstart + 1 > ix) {
          eb_ixstart = false;
        } else {
          eb_ixstart = (ix > 2147483646);
        }

        if (eb_ixstart) {
          g_st.site = &u_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ix) {
          if (ixstart >= 0) {
            fb_ixstart = (int32_T)((uint32_T)ixstart >> 2);
          } else {
            fb_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
          }

          if (d2->data[((int32_T)(2.0 + 2.0 * (real_T)(ixstart % 4)) + d2->size
                        [0] * fb_ixstart) - 1] > sigma2) {
            if (ixstart >= 0) {
              gb_ixstart = (int32_T)((uint32_T)ixstart >> 2);
            } else {
              gb_ixstart = (int32_T)~(~(uint32_T)ixstart >> 2);
            }

            sigma2 = d2->data[((int32_T)(2.0 + 2.0 * (real_T)(ixstart % 4)) +
                               d2->size[0] * gb_ixstart) - 1];
          }

          ixstart++;
        }
      }

      iy++;
      r9->data[iy] = sigma2;
      ix += 4;
    }

    for (i3 = 0; i3 < 2; i3++) {
      b_d2[i3] = r8->size[i3];
    }

    for (i3 = 0; i3 < 2; i3++) {
      e_d2[i3] = r9->size[i3];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d2, e_d2, &g_emlrtECI, sp);
    if (3 > LLR->size[0]) {
      i3 = 0;
      i4 = 1;
      ixstop = 0;
    } else {
      i3 = 2;
      i4 = 3;
      ixstop = LLR->size[0];
      n = LLR->size[0];
      ixstop = emlrtDynamicBoundsCheckFastR2012b(n, 1, ixstop, &k_emlrtBCI, sp);
    }

    ixstop = div_s32_floor(sp, (ixstop - i3) - 1, i4) + 1;
    n = r8->size[1];
    emlrtSizeEqCheck1DFastR2012b(ixstop, n, &m_emlrtECI, sp);
    n = r8->size[1];
    for (ixstop = 0; ixstop < n; ixstop++) {
      LLR->data[i3 + i4 * ixstop] = r8->data[r8->size[0] * ixstop] - r9->data
        [r9->size[0] * ixstop];
    }
    break;
  }

  emxFree_real_T(&r8);
  emxFree_real_T(&r9);
  emxFree_real_T(&d2);
  i3 = LLR->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)LLR, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  n = LLR->size[0];
  for (i3 = 0; i3 < n; i3++) {
    LLR->data[i3] = -LLR->data[i3];
  }

  /*  for decoders */
  /*  bits=zeros(1,3*N); */
  /*  for n=1:N */
  /*      [~,nn]=neighbour_1(out_burst_complex_without_UWs(n),Star); */
  /*      bits(3*n-2:3*n)=de2bi(nn-1,ind_mod,'left-msb'); */
  /*  end */
  /*  out_data_soft_now = (1-2*(bits).'); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (demapDecTest.c) */
