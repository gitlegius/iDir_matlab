/*
 * tpc_decode_light.c
 *
 * Code generation for function 'tpc_decode_light'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "tpc_decode_light.h"
#include "perebor8pskTPC_emxutil.h"
#include "eml_error.h"
#include "filter.h"
#include "hamming_decode_soft.h"
#include "error.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = { 73, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtRSInfo fb_emlrtRSI = { 68, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtRSInfo gb_emlrtRSI = { 66, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtRSInfo hb_emlrtRSI = { 49, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtMCInfo o_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo p_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 1, 54, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 66, 1, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtDCInfo m_emlrtDCI = { 5, 8, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m",
  1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 62, 4, "in", "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m",
  0 };

static emlrtECInfo q_emlrtECI = { -1, 62, 4, "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m"
};

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 73, 25, "X0", "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 73, 29, "X0", "tpc_decode_light",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\tpc_decode_light.m",
  0 };

static emlrtRSInfo wd_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo me_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m15;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 3, pArrays, "message", true,
    location);
}

void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T b_varargin_1;
  boolean_T guard1 = false;
  boolean_T b0;
  boolean_T b1;
  const mxArray *y;
  static const int32_T iv20[2] = { 1, 28 };

  const mxArray *m6;
  char_T cv20[28];
  int32_T i;
  static const char_T cv21[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (varargin_1 != varargin_1) {
    b_varargin_1 = false;
  } else {
    b_varargin_1 = true;
  }

  guard1 = false;
  if (b_varargin_1) {
    if (2.147483647E+9 < varargin_1) {
      b0 = false;
    } else {
      b0 = true;
    }

    if (b0) {
      b1 = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    b1 = false;
  }

  if (b1) {
  } else {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 28; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m6, cv20);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MIN_int32_T;
    emlrtAssign(&b_y, m6);
    c_y = NULL;
    m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MAX_int32_T;
    emlrtAssign(&c_y, m6);
    st.site = &wd_emlrtRSI;
    b_st.site = &me_emlrtRSI;
    b_error(&st, c_message(&b_st, y, b_y, c_y, &o_emlrtMCI), &p_emlrtMCI);
  }
}

void tpc_decode_light(const emlrtStack *sp, emxArray_real_T *in, real_T c_r,
                      real_T *flag_decod, emxArray_real_T *decoded_bits, real_T *
                      num_iter)
{
  int32_T i37;
  int32_T H_size[2];
  int32_T S_size[2];
  static const int8_T iv11[155] = { 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0,
    0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1,
    0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0,
    0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1,
    1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0,
    0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 1 };

  real_T H_data[889];
  static const int8_T iv12[155] = { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1,
    1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1,
    1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1,
    0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0,
    1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0,
    0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1,
    0, 1, 0, 0, 1, 0, 0, 0, 0, 1 };

  real_T S_data[889];
  int32_T a;
  int32_T b;
  int32_T len_out;
  int32_T N_plus_1;
  static const int8_T iv13[378] = { 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1,
    0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1,
    1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1,
    0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
    1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1,
    1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0,
    1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0,
    1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1,
    1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1,
    0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1,
    0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1,
    0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0,
    0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T iv14[378] = { 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0,
    1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1,
    1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1,
    1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1,
    0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1,
    0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1,
    0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0,
    1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1,
    1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0,
    1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1,
    0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0,
    1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 };

  static const int8_T iv15[889] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1,
    1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1,
    1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1,
    1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0,
    0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
    0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0,
    0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
    1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1,
    0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1,
    1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0,
    1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1,
    0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1,
    1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0,
    1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0,
    0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0,
    0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0,
    0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0,
    1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0,
    0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1,
    0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0,
    1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0,
    0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0,
    1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1,
    1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1,
    1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0,
    0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0,
    1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1,
    0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T iv16[889] = { 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1,
    1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0,
    0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0,
    1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0,
    0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0,
    1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0,
    1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1,
    0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0,
    0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1,
    1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0,
    1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1,
    1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1,
    1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0,
    1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1,
    0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0,
    1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1,
    0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0,
    1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0,
    1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0,
    0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
    1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1,
    0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0,
    0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1,
    0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
    1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0,
    1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0,
    1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  emxArray_real_T *b_in;
  int32_T i38;
  int32_T i;
  emxArray_real_T *X;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 40 };

  const mxArray *m4;
  char_T cv16[40];
  static const char_T cv17[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emxArray_real_T *X0;
  real_T b_num_iter;
  real_T b_flag_decod;
  emxArray_real_T *b_y;
  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 40 };

  emxArray_real_T *b_X0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i37 = decoded_bits->size[0] * decoded_bits->size[1];
  decoded_bits->size[0] = 0;
  decoded_bits->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)decoded_bits, i37, (int32_T)sizeof
                    (real_T), &k_emlrtRTEI);
  switch ((int32_T)emlrtIntegerCheckFastR2012b(c_r, &m_emlrtDCI, sp)) {
   case 1:
    /* '.431' % OK but not cheked */
    H_size[0] = 5;
    H_size[1] = 31;
    S_size[0] = 31;
    S_size[1] = 5;
    for (i37 = 0; i37 < 155; i37++) {
      H_data[i37] = iv11[i37];
      S_data[i37] = iv12[i37];
    }

    /*          r=5; */
    a = 21;
    b = 21;
    len_out = 441;
    N_plus_1 = 32;
    break;

   case 2:
    /* .533 (1/2) % OK */
    H_size[0] = 5;
    H_size[1] = 31;
    S_size[0] = 31;
    S_size[1] = 5;
    for (i37 = 0; i37 < 155; i37++) {
      H_data[i37] = iv11[i37];
      S_data[i37] = iv12[i37];
    }

    /*          r=5; */
    a = 26;
    b = 21;
    len_out = 546;
    N_plus_1 = 32;
    break;

   case 3:
    /* .660 (2/3) % OK */
    H_size[0] = 5;
    H_size[1] = 31;
    S_size[0] = 31;
    S_size[1] = 5;
    for (i37 = 0; i37 < 155; i37++) {
      H_data[i37] = iv11[i37];
      S_data[i37] = iv12[i37];
    }

    /*          r=5; */
    a = 26;
    b = 26;
    len_out = 676;
    N_plus_1 = 32;
    break;

   case 4:
    /* '.495' % NOT OK */
    H_size[0] = 5;
    H_size[1] = 31;
    S_size[0] = 31;
    S_size[1] = 5;
    for (i37 = 0; i37 < 155; i37++) {
      H_data[i37] = iv11[i37];
      S_data[i37] = iv12[i37];
    }

    a = 26;
    b = 26;

    /*          r=5; */
    len_out = 2028;
    N_plus_1 = 32;
    break;

   case 5:
    /* .793 (4/5) % OK */
    H_size[0] = 6;
    H_size[1] = 63;
    S_size[0] = 63;
    S_size[1] = 6;
    for (i37 = 0; i37 < 378; i37++) {
      H_data[i37] = iv13[i37];
      S_data[i37] = iv14[i37];
    }

    /*          r=6; */
    a = 57;
    b = 57;
    len_out = 3249;
    N_plus_1 = 64;
    break;

   case 8:
    /* .879 (7/8) % OK */
    H_size[0] = 7;
    H_size[1] = 127;
    S_size[0] = 127;
    S_size[1] = 7;
    for (i37 = 0; i37 < 889; i37++) {
      H_data[i37] = iv15[i37];
      S_data[i37] = iv16[i37];
    }

    /*          r=7; */
    a = 120;
    b = 120;
    len_out = 14400;
    N_plus_1 = 128;
    break;

   default:
    st.site = &hb_emlrtRSI;
    error(&st);
    break;
  }

  b_emxInit_real_T(sp, &b_in, 1, &k_emlrtRTEI, true);

  /*  N=2^r-1; */
  /*  pol = gfprimdf(r);pol=pol(end:-1:1); */
  /*  %Preparation of parity matrix */
  /*  [H,G] = hammgen(r,pol);G=[G(:,r+1:N) G(:,1:r)];%H*G'=0; */
  /*  H=[H(:,r+1:N) H(:,1:r)]; */
  /*  %Syndrome matrix */
  /*  S=[];x0=zeros(1,N);for n=1:N, x=x0;x(n)=1-x(n);syndrome=mod(x(1:N)*H',2);S=[S;syndrome];end */
  /*  N_plus_1 = N+1; */
  i37 = in->size[0];
  i38 = N_plus_1 * N_plus_1;
  i = emlrtDynamicBoundsCheckFastR2012b(i38, 1, i37, &ab_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(in->size[0], 1, 1, i, &q_emlrtECI, sp);
  i37 = b_in->size[0];
  b_in->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_in, i37, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  for (i37 = 0; i37 < i; i37++) {
    b_in->data[i37] = in->data[i37];
  }

  i37 = in->size[0];
  in->size[0] = b_in->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)in, i37, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  i = b_in->size[0];
  for (i37 = 0; i37 < i; i37++) {
    in->data[i37] = b_in->data[i37];
  }

  emxFree_real_T(&b_in);
  emxInit_real_T(sp, &X, 2, &m_emlrtRTEI, true);

  /*  in = in/std(in); */
  st.site = &gb_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  eml_assert_valid_size_arg(&c_st, N_plus_1);
  c_st.site = &lb_emlrtRSI;
  eml_assert_valid_size_arg(&c_st, N_plus_1);
  i37 = X->size[0] * X->size[1];
  X->size[0] = N_plus_1;
  X->size[1] = N_plus_1;
  emxEnsureCapacity(&st, (emxArray__common *)X, i37, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  if (in->size[0] == N_plus_1 * N_plus_1) {
  } else {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv17);
    for (i = 0; i < 40; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m4, cv16);
    emlrtAssign(&y, m4);
    b_st.site = &vd_emlrtRSI;
    d_st.site = &he_emlrtRSI;
    b_error(&b_st, message(&d_st, y, &m_emlrtMCI), &n_emlrtMCI);
  }

  b_st.site = &kb_emlrtRSI;
  for (i = 0; i + 1 <= in->size[0]; i++) {
    X->data[i] = in->data[i];
  }

  emxInit_real_T(&st, &X0, 2, &k_emlrtRTEI, true);
  st.site = &fb_emlrtRSI;
  hamming_decode_soft(&st, X, H_data, H_size, S_data, S_size, X0, &b_flag_decod,
                      &b_num_iter);
  *flag_decod = b_flag_decod;
  *num_iter = b_num_iter;
  emxFree_real_T(&X);
  if (b_flag_decod == 0.0) {
  } else {
    i37 = X0->size[0];
    emlrtDynamicBoundsCheckFastR2012b(a, 1, i37, &bb_emlrtBCI, sp);
    i37 = X0->size[1];
    emlrtDynamicBoundsCheckFastR2012b(b, 1, i37, &cb_emlrtBCI, sp);
    st.site = &eb_emlrtRSI;
    N_plus_1 = a * b;
    b_st.site = &ib_emlrtRSI;
    c_st.site = &lb_emlrtRSI;
    eml_assert_valid_size_arg(&c_st, len_out);
    if (len_out > N_plus_1) {
      b_st.site = &jb_emlrtRSI;
      b_eml_error(&b_st);
    }

    emxInit_real_T(&st, &b_y, 2, &k_emlrtRTEI, true);
    i37 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = len_out;
    emxEnsureCapacity(&st, (emxArray__common *)b_y, i37, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    if (N_plus_1 == len_out) {
    } else {
      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 40; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&st, 40, m4, cv16);
      emlrtAssign(&c_y, m4);
      b_st.site = &vd_emlrtRSI;
      d_st.site = &he_emlrtRSI;
      b_error(&b_st, message(&d_st, c_y, &m_emlrtMCI), &n_emlrtMCI);
    }

    b_st.site = &kb_emlrtRSI;
    i = 0;
    emxInit_real_T(&st, &b_X0, 2, &k_emlrtRTEI, true);
    while (i + 1 <= N_plus_1) {
      i37 = b_X0->size[0] * b_X0->size[1];
      b_X0->size[0] = a;
      b_X0->size[1] = b;
      emxEnsureCapacity(&st, (emxArray__common *)b_X0, i37, (int32_T)sizeof
                        (real_T), &k_emlrtRTEI);
      for (i37 = 0; i37 < b; i37++) {
        for (i38 = 0; i38 < a; i38++) {
          b_X0->data[i38 + b_X0->size[0] * i37] = X0->data[i38 + X0->size[0] *
            i37];
        }
      }

      b_y->data[i] = b_X0->data[i];
      i++;
    }

    emxFree_real_T(&b_X0);
    i37 = decoded_bits->size[0] * decoded_bits->size[1];
    decoded_bits->size[0] = 1;
    decoded_bits->size[1] = b_y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)decoded_bits, i37, (int32_T)sizeof
                      (real_T), &k_emlrtRTEI);
    i = b_y->size[0] * b_y->size[1];
    for (i37 = 0; i37 < i; i37++) {
      decoded_bits->data[i37] = b_y->data[i37];
    }

    emxFree_real_T(&b_y);
  }

  emxFree_real_T(&X0);

  /*  out_tmp = out; */
  /*  out(1:2:end) = out_tmp(2:2:end); */
  /*  out(2:2:end) = out_tmp(1:2:end); */
  /* % */
  /*  fid_wrb_dec = fopen('out_decod_bits.bin','a');fwrite(fid_wrb_dec,[out,zeros(1,7)],'ubit1');fclose(fid_wrb_dec); */
  /* % tmp comment */
  /*   */
  /*  bit_scrm = scrm(decoded_bits); */
  /*   */
  /*  packet_ = bit_scrm(1:8*fix(length(bit_scrm)/8)); */
  /*   */
  /*  h = crc.generator('Polynomial', '0x1021', 'InitialState', '0x0000','ReflectInput', false, 'FinalXOR', '0x0000'); */
  /*  packet_CRC = generate(h, packet_(1:end-16)'); */
  /*  if ~isequal(packet_CRC(end-15:end)', packet_(end-15:end)) */
  /*      flag_decod = false; */
  /*      return; */
  /*  end */
  /* % */
  /* crc=crc_gen_universal(packet_rev,'1021',zeros(1,16)); */
  /*  crc_ = crc_gen(packet_); */
  /*  crc = crc_gen(byte_reverse(packet_)); */
  /*  crc = crc_gen_universal(byte_reverse(packet_),'84bd',zeros(1,16)); */
  /*  cm = crc_create_struct('CRC-16-CCITT', zeros(1,16), 0, 0, zeros(1,16)); */
  /*  crc1 = crc_decalc(packet_, cm); */
  /*  if ~isequal(crc_calc(packet_(1:end-16),cm), packet_(end-15:end)) */
  /*      flag_decod = false; */
  /*      return; */
  /*  end */
  /*  % byte_reverse( */
  /*  switch r */
  /*      case 7 */
  /*          crc_ref=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]; % Unknown */
  /*      case 6 */
  /*          crc_ref=[1 1 1 0 1 0 1 0 0 0 1 0 0 1 0 1]; */
  /*      case 5 */
  /*          crc_ref=[0 1 1 1 0 1 0 1 0 1 1 1 1 0 1 0]; */
  /*  end */
  /*  if ~isequal(crc_,crc_ref) */
  /*      flag_decod=0; */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (tpc_decode_light.c) */
