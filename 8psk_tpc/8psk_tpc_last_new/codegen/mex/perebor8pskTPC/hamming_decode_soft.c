/*
 * hamming_decode_soft.c
 *
 * Code generation for function 'hamming_decode_soft'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "hamming_decode_soft.h"
#include "sum.h"
#include "mod.h"
#include "eml_error.h"
#include "filter.h"
#include "perebor8pskTPC_emxutil.h"
#include "HDLC_extract_2.h"
#include "sign.h"
#include "eml_sort.h"
#include "power.h"
#include "mean.h"
#include "sqrt.h"
#include "abs.h"
#include "tpc_decode_light.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 182, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo nb_emlrtRSI = { 175, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo ob_emlrtRSI = { 172, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo pb_emlrtRSI = { 164, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo qb_emlrtRSI = { 163, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo rb_emlrtRSI = { 161, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo sb_emlrtRSI = { 154, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo tb_emlrtRSI = { 153, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo ub_emlrtRSI = { 151, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo vb_emlrtRSI = { 191, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo wb_emlrtRSI = { 198, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo yb_emlrtRSI = { 205, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo ac_emlrtRSI = { 207, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo cc_emlrtRSI = { 216, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo dc_emlrtRSI = { 240, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo ec_emlrtRSI = { 237, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo fc_emlrtRSI = { 234, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo gc_emlrtRSI = { 21, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo hc_emlrtRSI = { 68, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo ic_emlrtRSI = { 54, "eml_xgemm",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

static emlrtRSInfo jc_emlrtRSI = { 1, "xgemm",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

static emlrtRSInfo kc_emlrtRSI = { 247, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo lc_emlrtRSI = { 37, "norm",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"
};

static emlrtRSInfo mc_emlrtRSI = { 170, "norm",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"
};

static emlrtMCInfo q_emlrtMCI = { 173, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtMCInfo r_emlrtMCI = { 173, 22, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtMCInfo s_emlrtMCI = { 184, 5, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtMCInfo t_emlrtMCI = { 173, 30, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtMCInfo u_emlrtMCI = { 177, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtMCInfo v_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo w_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 138, 33, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 172, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 232, 12, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo db_emlrtBCI = { -1, -1, 151, 25, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 151, 13, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo r_emlrtECI = { -1, 151, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 152, 28, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 152, 13, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo s_emlrtECI = { -1, 152, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 153, 21, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 153, 29, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 161, 23, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 161, 11, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo t_emlrtECI = { -1, 161, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 162, 26, "R", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 162, 11, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo u_emlrtECI = { -1, 162, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 163, 21, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 163, 23, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 187, 5, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 187, 11, "Z", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 165, 13, "s2", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 155, 13, "s1", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo v_emlrtECI = { 2, 228, 3, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtECInfo w_emlrtECI = { 2, 227, 3, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo vb_emlrtBCI = { 1, 3, 215, 15, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo x_emlrtECI = { 2, 207, 25, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtECInfo y_emlrtECI = { -1, 206, 9, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 204, 18, "Y1", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo ab_emlrtECI = { -1, 196, 1, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtECInfo bb_emlrtECI = { 2, 198, 19, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 204, 9, "Y1", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 240, 16, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 234, 14, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtECInfo cb_emlrtECI = { 2, 247, 13, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 247, 17, "B", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 238, 5, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 238, 14, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 240, 1, "Y", "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m",
  0 };

static emlrtRSInfo qd_emlrtRSI = { 184, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo rd_emlrtRSI = { 177, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

static emlrtRSInfo sd_emlrtRSI = { 103, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo fe_emlrtRSI = { 104, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo ne_emlrtRSI = { 173, "hamming_decode_soft",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\hamming_decode_soft.m"
};

/* Function Declarations */
static void drawnow(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void hamming_decode_simple(const emlrtStack *sp, real_T Y_data[], int32_T
  Y_size[2], const real_T H_data[], const int32_T H_size[2], const real_T
  S_data[], const int32_T S_size[2]);
static void plot(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                 emlrtMCInfo *location);
static void pynd(const emlrtStack *sp, real_T R_data[], int32_T R_size[2], const
                 real_T H_data[], const int32_T H_size[2], const real_T S_data[],
                 const int32_T S_size[2], real_T alpha, real_T beta);
static void shg(const emlrtStack *sp, emlrtMCInfo *location);

/* Function Definitions */
static void drawnow(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "drawnow", true, location);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m10;
  real_T *pData;
  int32_T i47;
  int32_T i;
  y = NULL;
  m10 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m10);
  i47 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i47] = u->data[u->size[0] * i];
    i47++;
  }

  emlrtAssign(&y, m10);
  return y;
}

static void hamming_decode_simple(const emlrtStack *sp, real_T Y_data[], int32_T
  Y_size[2], const real_T H_data[], const int32_T H_size[2], const real_T
  S_data[], const int32_T S_size[2])
{
  int32_T i52;
  int32_T i53;
  int32_T loop_ub;
  real_T a_data[127];
  int32_T i;
  real_T b_data[889];
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 21 };

  const mxArray *m16;
  char_T cv32[21];
  static const char_T cv33[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T syndrome_data[7];
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  int32_T y_size[2];
  real_T y_data[7];
  emxArray_real_T *r12;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  emxArray_real_T b_y_data;
  int32_T syndrome_size[2];
  boolean_T p;
  boolean_T b_p;
  int32_T exitg3;
  int32_T syndrome[2];
  boolean_T exitg2;
  int32_T ind;
  boolean_T exitg1;
  int32_T b_S_size[2];
  int32_T S[2];
  int32_T b_Y_size[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ======================= */
  /* syndrome=mod(Y*H',2); */
  i52 = Y_size[1];
  i53 = (int32_T)((real_T)Y_size[1] - 1.0);
  emlrtDynamicBoundsCheckFastR2012b(i53, 1, i52, &ac_emlrtBCI, sp);
  st.site = &fc_emlrtRSI;
  loop_ub = Y_size[1] - 2;
  for (i52 = 0; i52 <= loop_ub; i52++) {
    a_data[i52] = Y_data[i52];
  }

  loop_ub = H_size[0];
  for (i52 = 0; i52 < loop_ub; i52++) {
    i = H_size[1];
    for (i53 = 0; i53 < i; i53++) {
      b_data[i53 + H_size[1] * i52] = H_data[i52 + H_size[0] * i53];
    }
  }

  b_st.site = &gc_emlrtRSI;
  if (!(Y_size[1] - 1 == H_size[1])) {
    y = NULL;
    m16 = emlrtCreateCharArray(2, iv37);
    for (i = 0; i < 21; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 21, m16, cv32);
    emlrtAssign(&y, m16);
    c_st.site = &sd_emlrtRSI;
    d_st.site = &fe_emlrtRSI;
    b_error(&c_st, message(&d_st, y, &v_emlrtMCI), &w_emlrtMCI);
  }

  loop_ub = (int8_T)H_size[0];
  for (i52 = 0; i52 < loop_ub; i52++) {
    syndrome_data[i52] = 0.0;
  }

  b_st.site = &hc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  e_st.site = &jc_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  y_size[0] = 1;
  y_size[1] = (int8_T)H_size[0];
  loop_ub = (int8_T)H_size[0];
  for (i52 = 0; i52 < loop_ub; i52++) {
    y_data[i52] = 0.0;
  }

  emxInit_real_T(&e_st, &r12, 2, &p_emlrtRTEI, true);
  m_t = (ptrdiff_t)(1);
  n_t = (ptrdiff_t)(H_size[0]);
  k_t = (ptrdiff_t)(Y_size[1] - 1);
  lda_t = (ptrdiff_t)(1);
  ldb_t = (ptrdiff_t)(Y_size[1] - 1);
  ldc_t = (ptrdiff_t)(1);
  alpha1_t = (double *)(&alpha1);
  Aia0_t = (double *)(&a_data[0]);
  Bib0_t = (double *)(&b_data[0]);
  beta1_t = (double *)(&beta1);
  Cic0_t = (double *)(&y_data[0]);
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
        &ldb_t, beta1_t, Cic0_t, &ldc_t);
  b_y_data.data = (real_T *)&y_data;
  b_y_data.size = (int32_T *)&y_size;
  b_y_data.allocatedSize = 7;
  b_y_data.numDimensions = 2;
  b_y_data.canFreeData = false;
  b_mod(sp, &b_y_data, r12);
  syndrome_size[0] = 1;
  syndrome_size[1] = r12->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  for (i52 = 0; i52 < loop_ub; i52++) {
    syndrome_data[i52] = r12->data[i52];
  }

  emxFree_real_T(&r12);

  /* !!! */
  p = false;
  b_p = false;
  i = 0;
  do {
    exitg3 = 0;
    if (i < 2) {
      syndrome[0] = 1;
      syndrome[1] = H_size[0];
      if (syndrome_size[i] != syndrome[i]) {
        exitg3 = 1;
      } else {
        i++;
      }
    } else {
      b_p = true;
      exitg3 = 1;
    }
  } while (exitg3 == 0);

  if (b_p) {
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i <= syndrome_size[1] - 1)) {
      if (!(syndrome_data[i] == 0.0)) {
        b_p = false;
        exitg2 = true;
      } else {
        i++;
      }
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
    st.site = &ec_emlrtRSI;

    /* !!! */
    ind = 1;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= S_size[0] - 1)) {
      ind = 1 + i;
      i52 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i52, 1, S_size[0], &bc_emlrtBCI, &st);
      b_S_size[0] = 1;
      b_S_size[1] = S_size[1];
      for (i52 = 0; i52 < 2; i52++) {
        syndrome[i52] = syndrome_size[i52];
        S[i52] = b_S_size[i52];
      }

      emlrtSizeEqCheck2DFastR2012b(syndrome, S, &cb_emlrtECI, &st);
      b_st.site = &kc_emlrtRSI;
      y_size[0] = 1;
      y_size[1] = syndrome_size[1];
      loop_ub = syndrome_size[1];
      for (i52 = 0; i52 < loop_ub; i52++) {
        y_data[y_size[0] * i52] = syndrome_data[i52] - S_data[i + S_size[0] *
          i52];
      }

      c_st.site = &lc_emlrtRSI;
      e_st.site = &mc_emlrtRSI;
      n_t = (ptrdiff_t)(y_size[1]);
      m_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&y_data[0]);
      alpha1 = dnrm2(&n_t, alpha1_t, &m_t);
      if (alpha1 < 0.001) {
        exitg1 = true;
      } else {
        i++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }
    }

    i52 = Y_size[1];
    i53 = Y_size[1];
    Y_data[emlrtDynamicBoundsCheckFastR2012b(ind, 1, i52, &cc_emlrtBCI, sp) - 1]
      = 1.0 - Y_data[emlrtDynamicBoundsCheckFastR2012b(ind, 1, i53, &dc_emlrtBCI,
      sp) - 1];
  }

  i52 = Y_size[1];
  i53 = (int32_T)((real_T)Y_size[1] - 1.0);
  emlrtDynamicBoundsCheckFastR2012b(i53, 1, i52, &yb_emlrtBCI, sp);
  loop_ub = Y_size[1] - 2;
  b_Y_size[0] = 1;
  b_Y_size[1] = loop_ub + 1;
  for (i52 = 0; i52 <= loop_ub; i52++) {
    a_data[i52] = Y_data[i52];
  }

  st.site = &dc_emlrtRSI;
  alpha1 = sum(&st, a_data, b_Y_size);
  i52 = Y_size[1];
  i53 = Y_size[1];
  Y_data[emlrtDynamicBoundsCheckFastR2012b(i53, 1, i52, &ec_emlrtBCI, sp) - 1] =
    alpha1 - muDoubleScalarFloor(alpha1 / 2.0) * 2.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void plot(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                 emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "plot", true, location);
}

static void pynd(const emlrtStack *sp, real_T R_data[], int32_T R_size[2], const
                 real_T H_data[], const int32_T H_size[2], const real_T S_data[],
                 const int32_T S_size[2], real_T alpha, real_T beta)
{
  int32_T Y1_size[2];
  int32_T loop_ub;
  int32_T i50;
  real_T Y1_data[128];
  real_T dist[4];
  int32_T unnamed_idx_1;
  int32_T Y_size_idx_1;
  real_T Y_data[384];
  int32_T iidx_data[128];
  int32_T R[2];
  int32_T Y1[2];
  real_T b_R_data[128];
  int32_T b_R_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[128];
  emxArray_real_T b_tmp_data;
  int32_T bb_data[128];
  int32_T k;
  int32_T iv36[2];
  int32_T c_R_size[2];
  emxArray_real_T c_tmp_data;
  int32_T iidx[4];
  real_T dist_sort[4];
  real_T a;
  real_T d2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  Y1_size[0] = 1;
  Y1_size[1] = R_size[1];
  loop_ub = R_size[0] * R_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y1_data[i50] = R_data[i50];
  }

  b_sign(Y1_data, Y1_size);
  Y1_size[0] = 1;
  loop_ub = Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y1_data[i50] = (1.0 + Y1_data[i50]) / 2.0;
  }

  st.site = &vb_emlrtRSI;
  hamming_decode_simple(&st, Y1_data, Y1_size, H_data, H_size, S_data, S_size);
  for (i50 = 0; i50 < 4; i50++) {
    dist[i50] = 0.0;
  }

  unnamed_idx_1 = Y1_size[1];
  Y_size_idx_1 = Y1_size[1];
  loop_ub = 3 * Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y_data[i50] = 0.0;
  }

  loop_ub = Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    iidx_data[i50] = i50;
  }

  R[0] = 1;
  R[1] = Y1_size[1];
  emlrtSubAssignSizeCheckR2012b(R, 2, Y1_size, 2, &ab_emlrtECI, sp);
  loop_ub = Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y_data[3 * iidx_data[i50]] = Y1_data[Y1_size[0] * i50];
  }

  Y1_size[0] = 1;
  loop_ub = Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y1_data[i50] *= 2.0;
  }

  for (i50 = 0; i50 < 2; i50++) {
    R[i50] = R_size[i50];
    Y1[i50] = Y1_size[i50];
  }

  emlrtSizeEqCheck2DFastR2012b(R, Y1, &bb_emlrtECI, sp);
  b_R_size[0] = 1;
  b_R_size[1] = R_size[1];
  loop_ub = R_size[0] * R_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    b_R_data[i50] = R_data[i50] - (Y1_data[i50] - 1.0);
  }

  b_power(sp, b_R_data, b_R_size, tmp_data, tmp_size);
  b_tmp_data.data = (real_T *)&tmp_data;
  b_tmp_data.size = (int32_T *)&tmp_size;
  b_tmp_data.allocatedSize = 128;
  b_tmp_data.numDimensions = 2;
  b_tmp_data.canFreeData = false;
  st.site = &wb_emlrtRSI;
  dist[0] = mean(&st, &b_tmp_data);
  c_abs(R_data, R_size, tmp_data, tmp_size);
  eml_sort(tmp_data, tmp_size, Y1_data, Y1_size, iidx_data, R);
  loop_ub = R[0] * R[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    bb_data[i50] = iidx_data[i50];
  }

  for (k = 0; k < 3; k++) {
    Y1_size[0] = 1;
    Y1_size[1] = Y_size_idx_1;
    for (i50 = 0; i50 < Y_size_idx_1; i50++) {
      Y1_data[i50] = Y_data[3 * i50];
    }

    /* competitor */
    i50 = bb_data[k];
    emlrtDynamicBoundsCheckFastR2012b(i50, 1, Y_size_idx_1, &wb_emlrtBCI, sp);
    i50 = bb_data[k];
    Y1_data[emlrtDynamicBoundsCheckFastR2012b(i50, 1, Y_size_idx_1, &xb_emlrtBCI,
      sp) - 1] = 1.0 - Y_data[3 * (bb_data[k] - 1)];
    st.site = &yb_emlrtRSI;
    hamming_decode_simple(&st, Y1_data, Y1_size, H_data, H_size, S_data, S_size);
    for (i50 = 0; i50 < Y_size_idx_1; i50++) {
      iidx_data[i50] = i50;
    }

    iv36[0] = 1;
    iv36[1] = Y_size_idx_1;
    emlrtSubAssignSizeCheckR2012b(iv36, 2, Y1_size, 2, &y_emlrtECI, sp);
    loop_ub = Y1_size[1];
    for (i50 = 0; i50 < loop_ub; i50++) {
      Y_data[k + 3 * iidx_data[i50]] = Y1_data[Y1_size[0] * i50];
    }

    Y1_size[0] = 1;
    loop_ub = Y1_size[1];
    for (i50 = 0; i50 < loop_ub; i50++) {
      Y1_data[i50] *= 2.0;
    }

    for (i50 = 0; i50 < 2; i50++) {
      R[i50] = R_size[i50];
      Y1[i50] = Y1_size[i50];
    }

    emlrtSizeEqCheck2DFastR2012b(R, Y1, &x_emlrtECI, sp);
    c_R_size[0] = 1;
    c_R_size[1] = R_size[1];
    loop_ub = R_size[0] * R_size[1];
    for (i50 = 0; i50 < loop_ub; i50++) {
      b_R_data[i50] = R_data[i50] - (Y1_data[i50] - 1.0);
    }

    b_power(sp, b_R_data, c_R_size, tmp_data, tmp_size);
    c_tmp_data.data = (real_T *)&tmp_data;
    c_tmp_data.size = (int32_T *)&tmp_size;
    c_tmp_data.allocatedSize = 128;
    c_tmp_data.numDimensions = 2;
    c_tmp_data.canFreeData = false;
    st.site = &ac_emlrtRSI;
    dist[1 + k] = mean(&st, &c_tmp_data);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  b_eml_sort(dist, dist_sort, iidx);
  if (dist_sort[0] == dist_sort[1]) {
    Y1_size[0] = 1;
    Y1_size[1] = Y_size_idx_1;
    for (i50 = 0; i50 < unnamed_idx_1; i50++) {
      Y1_data[i50] = beta * (2.0 * Y_data[3 * i50] - 1.0);
    }

    /* R1=(sum(aa(1:num_competitor))+abs(R)-sqrt(dist_sort(1))).*d/4; */
  } else {
    emlrtDynamicBoundsCheckFastR2012b(iidx[0], 1, 3, &vb_emlrtBCI, sp);
    Y1_size[1] = Y_size_idx_1;
    for (i50 = 0; i50 < unnamed_idx_1; i50++) {
      Y1_data[i50] = Y_data[(iidx[0] + 3 * i50) - 1];
    }

    a = dist_sort[3];
    st.site = &cc_emlrtRSI;
    b_sqrt(&st, &a);
    d2 = dist_sort[0];
    st.site = &cc_emlrtRSI;
    b_sqrt(&st, &d2);
    a -= d2;
    Y1_size[0] = 1;
    for (i50 = 0; i50 < Y_size_idx_1; i50++) {
      Y1_data[i50] = a * (2.0 * Y1_data[i50] - 1.0) / 4.0;
    }

    /* R1=(dist_sort(2)-dist_sort(1))*d/4; */
  }

  /*      else */
  /*          d=2*Y-1; */
  /*          R1=beta*d; */
  for (i50 = 0; i50 < 2; i50++) {
    Y1[i50] = Y1_size[i50];
    R[i50] = R_size[i50];
  }

  emlrtSizeEqCheck2DFastR2012b(Y1, R, &w_emlrtECI, sp);
  Y1_size[0] = 1;
  loop_ub = Y1_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    Y1_data[i50] = alpha * (Y1_data[i50] - R_data[i50]);
  }

  for (i50 = 0; i50 < 2; i50++) {
    R[i50] = R_size[i50];
    Y1[i50] = Y1_size[i50];
  }

  emlrtSizeEqCheck2DFastR2012b(R, Y1, &v_emlrtECI, sp);
  R_size[0] = 1;
  loop_ub = R_size[1];
  for (i50 = 0; i50 < loop_ub; i50++) {
    R_data[R_size[0] * i50] += Y1_data[i50];
  }
}

static void shg(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "shg", true, location);
}

void hamming_decode_soft(const emlrtStack *sp, emxArray_real_T *R, const real_T
  H_data[], const int32_T H_size[2], const real_T S_data[], const int32_T
  S_size[2], emxArray_real_T *Z, real_T *flag_good, real_T *num_iter)
{
  uint8_T x[2];
  int32_T i39;
  int32_T loop_ub;
  int32_T b_num_iter;
  emxArray_real_T *R1;
  boolean_T exitg1;
  static const real_T dv0[24] = { 0.0, 0.2, 0.3, 0.5, 0.7, 0.9, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  real_T alpha;
  static const real_T dv1[26] = { 0.2, 0.4, 0.6, 0.8, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0 };

  real_T beta;
  int32_T s1_size[2];
  int32_T unnamed_idx_1;
  real_T s1_data[128];
  int32_T k;
  int32_T i;
  int32_T tmp_data[128];
  int32_T i40;
  int32_T nx;
  int32_T tmp_size[2];
  real_T b_tmp_data[128];
  int32_T iv21[1];
  int32_T b_tmp_size[1];
  real_T c_tmp_data[128];
  int32_T iv22[1];
  real_T b_data[127];
  const mxArray *y;
  static const int32_T iv23[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv22[21];
  static const char_T cv23[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  int32_T y_size[1];
  real_T y_data[7];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  int32_T c_tmp_size[1];
  real_T d_tmp_data[7];
  int32_T s2_size[2];
  real_T s2_data[128];
  int32_T iv24[2];
  int32_T iv25[2];
  const mxArray *b_y;
  static const int32_T iv26[2] = { 1, 21 };

  int32_T b_nx;
  const mxArray *c_y;
  static const int32_T iv27[2] = { 1, 40 };

  char_T cv24[40];
  static const char_T cv25[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv28[2] = { 1, 30 };

  char_T cv26[30];
  static const char_T cv27[30] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n',
    '!', ':', ' ', 's', 'u', 'm', '(', 's', '1', ')', '+', 's', 'u', 'm', '(',
    's', '2', ')', '=', '=', '2' };

  emxArray_real_T *b_Z;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  function [Z,flag_good,num_iter]=hamming_decode_soft(R,H,S) */
  /*  flag_view=1; */
  /*  flag_good=0; */
  /*  [r,N]=size(H); */
  /*  ALPHA=[0   0.2 0.3 0.5 0.7 0.9 1 1 1 1 1 1 1 1 ones(1,10)]; */
  /*  BETA= [0.2 0.4 0.6 0.8 1 1 1 1 1 1 1 1 1 1 1 1 ones(1,10)]; */
  /*  Z=zeros(size(R)); */
  /*  for num_iter=1:10 */
  /*      alpha=ALPHA(num_iter); */
  /*      beta=BETA(num_iter); */
  /*      %decode by columns */
  /*      s1=ones(1,size(R,2)); */
  /*      Total = 0; */
  /*      for k=1:size(R,2) */
  /*          R(:,k)=pynd(R(:,k)',H,S,alpha,beta); */
  /*          Z(:,k)=[1+sign(R(:,k))]/2; */
  /*          syn=mod(H*Z(1:end-1,k),2); */
  /*          if sum(syn)==0 */
  /*              s1(k)=0; */
  /*          end        */
  /*      end */
  /*      Total = Total + sum(s1); */
  /*       */
  /*      s2=ones(1,size(R,1)); */
  /*      for k=1:size(R,1) */
  /*          R(k,:)=pynd(R(k,:),H,S,alpha,beta); */
  /*          Z(k,:)=[1+sign(R(k,:))]/2; */
  /*          syn=mod(H*Z(k,1:end-1)',2); */
  /*          if sum(syn)==0 */
  /*              s2(k)=0; */
  /*          end */
  /*      end */
  /*       Total = Total + sum(s2); */
  /*       */
  /*      %Temporary */
  /*       */
  /*      if flag_view */
  /*          R1=reshape(R,1,numel(R)); */
  /*          plot(R1,'.');pause(0.02);shg */
  /*          grid; */
  /*          axis([0 64 -2.5 2.5]); */
  /*      end */
  /*      sum(s1); */
  /*      sum(s1) + sum(s2); */
  /*      if sum(s1)==0 && sum(s2)==0 */
  /*          flag_good=1; */
  /*          break */
  /*      end */
  /*       */
  /*  end */
  /*  if sum(s1)+sum(s2)==2 */
  /*      keyboard */
  /*  end */
  /*  %Z=[1+sign(R(1:N-r,1:N-r))]/2;%tmp */
  /*  Z=Z(1:N-r,1:N-r); */
  /*   */
  /*  function R=pynd(R,H,S,alpha,beta) */
  /*  Y_=[1+sign(R)]/2; */
  /*  Y=hamming_decode_simple(Y_,H,S); */
  /*  num_competitor=3; */
  /*  %num_competitor=0; */
  /*   */
  /*  dist=zeros(1,num_competitor+1); */
  /*  if num_competitor */
  /*      dist(1)=mean((R-(2*Y-1)).^2);     */
  /*      [~, bb]=sort(abs(R)); */
  /*      for k=1:num_competitor */
  /*          %Y1=Y(1,:);%competitor */
  /*          Y1=Y_;%competitor */
  /*          iw=bb(k); */
  /*          Y1(iw)=1-Y1(iw); */
  /*          Y1=hamming_decode_simple(Y1,H,S); */
  /*          Y=[Y;Y1]; */
  /*          dist(k+1)=mean((R-(2*Y1-1)).^2); */
  /*      end */
  /*      [dist_sort, bb1]=sort(dist); */
  /*      if dist_sort(1)==dist_sort(2) */
  /*          d=2*Y(1,:)-1; */
  /*          R1=beta*d; */
  /*          %R1=(sum(aa(1:num_competitor))+abs(R)-sqrt(dist_sort(1))).*d/4; */
  /*      else */
  /*          d=2*Y(bb1(1),:)-1; */
  /*          R1=(sqrt(dist_sort(end))-sqrt(dist_sort(1)))*d/4; */
  /*          %R1=(dist_sort(2)-dist_sort(1))*d/4; */
  /*      end */
  /*      %     else */
  /*      %         d=2*Y-1; */
  /*      %         R1=beta*d; */
  /*  else%no competitor mode */
  /*      d=2*Y-1; */
  /*      R1=beta*d; */
  /*  end */
  /*   */
  /*  W=R1-R; */
  /*   */
  /*  %plot(R);hold on;plot(R+alpha*W,'k'); hold off; grid; */
  /*   */
  /*  % sr = sign(R); */
  /*  % srw = sign(R+alpha*W); */
  /*  % err = find(sr ~= srw); */
  /*  % if(length(err)>0) */
  /*  %     err */
  /*  % end */
  /*   */
  /*  R=R+alpha*W; */
  /*  %======================= */
  /*  function Y=hamming_decode_simple(Y,H,S) */
  /*  %syndrome=mod(Y*H',2); */
  /*  syndrome=mod(Y(1:end-1)*H',2);%!!! */
  /*  [r,~]=size(H); */
  /*  if ~isequal(syndrome,zeros(1,r)) */
  /*      [~,ind]=ismember_arr(syndrome,S); */
  /*      Y(ind)=1-Y(ind); */
  /*       */
  /*       */
  /*  %     if Y(ind) == 1 */
  /*  %         Y(end) = 1-Y(end); */
  /*  %     end */
  /*           */
  /*  end */
  /*  Y(end)=mod(sum(Y(1:end-1)),2);%!!! % пробовал закоментарить, становится немного по-другому.  */
  /*   */
  /*  function [flag,k]=ismember_arr(a,B) */
  /*  flag=0; */
  /*  if isempty(B), return;end */
  /*  for k=1:size(B,1) */
  /*      if norm(a-B(k,:))<1e-3 */
  /*      %if norm(a-B(k,:))<1 */
  /*      %if sum(abs(a-B(k,:)))<1 */
  /*      %if sum(a-B(k,:))<1 */
  /*          flag=1; */
  /*          return */
  /*      end */
  /*  end */
  /* % */
  *flag_good = 0.0;
  for (i39 = 0; i39 < 2; i39++) {
    x[i39] = (uint8_T)R->size[i39];
  }

  i39 = Z->size[0] * Z->size[1];
  Z->size[0] = x[0];
  emxEnsureCapacity(sp, (emxArray__common *)Z, i39, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i39 = Z->size[0] * Z->size[1];
  Z->size[1] = x[1];
  emxEnsureCapacity(sp, (emxArray__common *)Z, i39, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = x[0] * x[1];
  for (i39 = 0; i39 < loop_ub; i39++) {
    Z->data[i39] = 0.0;
  }

  *num_iter = 1.0;
  b_num_iter = 0;
  emxInit_real_T(sp, &R1, 2, &o_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (b_num_iter < 10)) {
    *num_iter = 1.0 + (real_T)b_num_iter;
    alpha = dv0[b_num_iter];
    beta = dv1[b_num_iter];

    /* decode by columns */
    s1_size[0] = 1;
    unnamed_idx_1 = R->size[1];
    s1_size[1] = unnamed_idx_1;
    loop_ub = R->size[1];
    for (i39 = 0; i39 < loop_ub; i39++) {
      s1_data[i39] = 1.0;
    }

    i39 = R->size[1];
    k = 0;
    while (k <= i39 - 1) {
      loop_ub = R->size[0];
      for (i = 0; i < loop_ub; i++) {
        tmp_data[i] = i;
      }

      i = R->size[1];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &eb_emlrtBCI, sp);
      nx = R->size[0];
      i = R->size[1];
      i40 = 1 + k;
      i = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &db_emlrtBCI, sp);
      tmp_size[0] = 1;
      tmp_size[1] = nx;
      for (i40 = 0; i40 < nx; i40++) {
        b_tmp_data[i40] = R->data[i40 + R->size[0] * (i - 1)];
      }

      st.site = &ub_emlrtRSI;
      pynd(&st, b_tmp_data, tmp_size, H_data, H_size, S_data, S_size, alpha,
           beta);
      iv21[0] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(iv21, 1, tmp_size, 2, &r_emlrtECI, sp);
      for (i = 0; i < loop_ub; i++) {
        R->data[tmp_data[i] + R->size[0] * k] = b_tmp_data[i];
      }

      loop_ub = Z->size[0];
      for (i = 0; i < loop_ub; i++) {
        tmp_data[i] = i;
      }

      i = Z->size[1];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &gb_emlrtBCI, sp);
      i = R->size[1];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &fb_emlrtBCI, sp);
      nx = R->size[0];
      b_tmp_size[0] = nx;
      for (i = 0; i < nx; i++) {
        c_tmp_data[i] = R->data[i + R->size[0] * k];
      }

      c_sign(c_tmp_data, b_tmp_size);
      nx = b_tmp_size[0];
      for (i = 0; i < nx; i++) {
        c_tmp_data[i] = (1.0 + c_tmp_data[i]) / 2.0;
      }

      iv22[0] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(iv22, 1, b_tmp_size, 1, &s_emlrtECI, sp);
      loop_ub = b_tmp_size[0];
      for (i = 0; i < loop_ub; i++) {
        Z->data[tmp_data[i] + Z->size[0] * k] = c_tmp_data[i];
      }

      i = Z->size[0];
      i40 = (int32_T)((real_T)Z->size[0] - 1.0);
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &hb_emlrtBCI, sp);
      st.site = &tb_emlrtRSI;
      loop_ub = Z->size[0] - 2;
      i = Z->size[1];
      i40 = 1 + k;
      i = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &ib_emlrtBCI, &st);
      for (i40 = 0; i40 <= loop_ub; i40++) {
        b_data[i40] = Z->data[i40 + Z->size[0] * (i - 1)];
      }

      b_st.site = &gc_emlrtRSI;
      i = Z->size[0];
      if (!(H_size[1] == i - 1)) {
        y = NULL;
        m7 = emlrtCreateCharArray(2, iv23);
        for (i = 0; i < 21; i++) {
          cv22[i] = cv23[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv22);
        emlrtAssign(&y, m7);
        c_st.site = &sd_emlrtRSI;
        e_st.site = &fe_emlrtRSI;
        b_error(&c_st, message(&e_st, y, &v_emlrtMCI), &w_emlrtMCI);
      }

      b_st.site = &hc_emlrtRSI;
      c_st.site = &ic_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      y_size[0] = (uint8_T)H_size[0];
      loop_ub = (uint8_T)H_size[0];
      for (i = 0; i < loop_ub; i++) {
        y_data[i] = 0.0;
      }

      m_t = (ptrdiff_t)(H_size[0]);
      n_t = (ptrdiff_t)(1);
      k_t = (ptrdiff_t)(H_size[1]);
      lda_t = (ptrdiff_t)(H_size[0]);
      ldb_t = (ptrdiff_t)(H_size[1]);
      ldc_t = (ptrdiff_t)(H_size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&H_data[0]);
      Bib0_t = (double *)(&b_data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&y_data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      c_mod(sp, y_data, y_size, d_tmp_data, c_tmp_size);
      st.site = &sb_emlrtRSI;
      if (b_sum(d_tmp_data, c_tmp_size) == 0.0) {
        i = 1 + k;
        s1_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, unnamed_idx_1,
          &sb_emlrtBCI, sp) - 1] = 0.0;
      }

      k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    s2_size[0] = 1;
    unnamed_idx_1 = R->size[0];
    s2_size[1] = unnamed_idx_1;
    loop_ub = R->size[0];
    for (i39 = 0; i39 < loop_ub; i39++) {
      s2_data[i39] = 1.0;
    }

    i39 = R->size[0];
    k = 0;
    while (k <= i39 - 1) {
      i = R->size[0];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &kb_emlrtBCI, sp);
      loop_ub = R->size[1];
      for (i = 0; i < loop_ub; i++) {
        tmp_data[i] = i;
      }

      nx = R->size[1];
      i = R->size[0];
      i40 = 1 + k;
      i = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &jb_emlrtBCI, sp);
      tmp_size[0] = 1;
      tmp_size[1] = nx;
      for (i40 = 0; i40 < nx; i40++) {
        b_tmp_data[i40] = R->data[(i + R->size[0] * i40) - 1];
      }

      st.site = &rb_emlrtRSI;
      pynd(&st, b_tmp_data, tmp_size, H_data, H_size, S_data, S_size, alpha,
           beta);
      iv24[0] = 1;
      iv24[1] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(iv24, 2, tmp_size, 2, &t_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (i = 0; i < loop_ub; i++) {
        R->data[k + R->size[0] * tmp_data[i]] = b_tmp_data[tmp_size[0] * i];
      }

      i = Z->size[0];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &mb_emlrtBCI, sp);
      loop_ub = Z->size[1];
      for (i = 0; i < loop_ub; i++) {
        tmp_data[i] = i;
      }

      i = R->size[0];
      i40 = k + 1;
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &lb_emlrtBCI, sp);
      nx = R->size[1];
      tmp_size[0] = 1;
      tmp_size[1] = nx;
      for (i = 0; i < nx; i++) {
        b_tmp_data[i] = R->data[k + R->size[0] * i];
      }

      b_sign(b_tmp_data, tmp_size);
      tmp_size[0] = 1;
      nx = tmp_size[1];
      for (i = 0; i < nx; i++) {
        b_tmp_data[i] = (1.0 + b_tmp_data[i]) / 2.0;
      }

      iv25[0] = 1;
      iv25[1] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(iv25, 2, tmp_size, 2, &u_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (i = 0; i < loop_ub; i++) {
        Z->data[k + Z->size[0] * tmp_data[i]] = b_tmp_data[i];
      }

      i = Z->size[1];
      i40 = (int32_T)((real_T)Z->size[1] - 1.0);
      emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &ob_emlrtBCI, sp);
      st.site = &qb_emlrtRSI;
      loop_ub = Z->size[1] - 2;
      i = Z->size[0];
      i40 = 1 + k;
      i = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i, &nb_emlrtBCI, &st);
      for (i40 = 0; i40 <= loop_ub; i40++) {
        b_data[i40] = Z->data[(i + Z->size[0] * i40) - 1];
      }

      b_st.site = &gc_emlrtRSI;
      if (!(H_size[1] == loop_ub + 1)) {
        b_y = NULL;
        m7 = emlrtCreateCharArray(2, iv26);
        for (i = 0; i < 21; i++) {
          cv22[i] = cv23[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv22);
        emlrtAssign(&b_y, m7);
        c_st.site = &sd_emlrtRSI;
        e_st.site = &fe_emlrtRSI;
        b_error(&c_st, message(&e_st, b_y, &v_emlrtMCI), &w_emlrtMCI);
      }

      b_st.site = &hc_emlrtRSI;
      c_st.site = &ic_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      y_size[0] = (uint8_T)H_size[0];
      loop_ub = (uint8_T)H_size[0];
      for (i = 0; i < loop_ub; i++) {
        y_data[i] = 0.0;
      }

      m_t = (ptrdiff_t)(H_size[0]);
      n_t = (ptrdiff_t)(1);
      k_t = (ptrdiff_t)(H_size[1]);
      lda_t = (ptrdiff_t)(H_size[0]);
      ldb_t = (ptrdiff_t)(H_size[1]);
      ldc_t = (ptrdiff_t)(H_size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&H_data[0]);
      Bib0_t = (double *)(&b_data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&y_data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      c_mod(sp, y_data, y_size, d_tmp_data, c_tmp_size);
      st.site = &pb_emlrtRSI;
      if (b_sum(d_tmp_data, c_tmp_size) == 0.0) {
        i = 1 + k;
        s2_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, unnamed_idx_1,
          &rb_emlrtBCI, sp) - 1] = 0.0;
      }

      k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    /* Temporary */
    for (i39 = 0; i39 < 2; i39++) {
      x[i39] = (uint8_T)R->size[i39];
    }

    loop_ub = x[0] * x[1];
    st.site = &ob_emlrtRSI;
    nx = R->size[0] * R->size[1];
    b_st.site = &ib_emlrtRSI;
    c_st.site = &lb_emlrtRSI;
    eml_assert_valid_size_arg(&c_st, loop_ub);
    for (i39 = 0; i39 < 2; i39++) {
      x[i39] = (uint8_T)R->size[i39];
    }

    i = x[0];
    if (x[1] > x[0]) {
      i = x[1];
    }

    if (nx < i) {
      b_nx = i;
    } else {
      b_nx = nx;
    }

    if ((int16_T)loop_ub > b_nx) {
      b_st.site = &jb_emlrtRSI;
      b_eml_error(&b_st);
    }

    i39 = R1->size[0] * R1->size[1];
    R1->size[0] = 1;
    R1->size[1] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)R1, i39, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    if (nx == loop_ub) {
    } else {
      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv27);
      for (i = 0; i < 40; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&st, 40, m7, cv24);
      emlrtAssign(&c_y, m7);
      b_st.site = &vd_emlrtRSI;
      d_st.site = &he_emlrtRSI;
      b_error(&b_st, message(&d_st, c_y, &m_emlrtMCI), &n_emlrtMCI);
    }

    b_st.site = &kb_emlrtRSI;
    for (k = 0; k + 1 <= nx; k++) {
      R1->data[k] = R->data[k];
    }

    d_y = NULL;
    m7 = emlrtCreateString1('.');
    emlrtAssign(&d_y, m7);
    st.site = &ne_emlrtRSI;
    plot(&st, emlrt_marshallOut(R1), d_y, &q_emlrtMCI);
    st.site = &ne_emlrtRSI;
    drawnow(&st, &r_emlrtMCI);
    st.site = &ne_emlrtRSI;
    shg(&st, &t_emlrtMCI);
    st.site = &nb_emlrtRSI;
    if ((sum(&st, s1_data, s1_size) == 0.0) && (sum(&st, s2_data, s2_size) ==
         0.0)) {
      *flag_good = 1.0;
      st.site = &rd_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(1.0 + (real_T)b_num_iter), &u_emlrtMCI);
      exitg1 = true;
    } else {
      b_num_iter++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&R1);
  st.site = &mb_emlrtRSI;
  if (sum(&st, s1_data, s1_size) + sum(&st, s2_data, s2_size) == 2.0) {
    /*      keyboard */
    e_y = NULL;
    m7 = emlrtCreateCharArray(2, iv28);
    for (i = 0; i < 30; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m7, cv26);
    emlrtAssign(&e_y, m7);
    st.site = &qd_emlrtRSI;
    disp(&st, e_y, &s_emlrtMCI);
  }

  emxInit_real_T(sp, &b_Z, 2, &n_emlrtRTEI, true);

  /* Z=[1+sign(R(1:N-r,1:N-r))]/2;%tmp */
  i39 = Z->size[0];
  i = H_size[1] - H_size[0];
  emlrtDynamicBoundsCheckFastR2012b(i, 1, i39, &pb_emlrtBCI, sp);
  i39 = Z->size[1];
  i = H_size[1] - H_size[0];
  emlrtDynamicBoundsCheckFastR2012b(i, 1, i39, &qb_emlrtBCI, sp);
  loop_ub = H_size[1] - H_size[0];
  nx = H_size[1] - H_size[0];
  i39 = b_Z->size[0] * b_Z->size[1];
  b_Z->size[0] = loop_ub;
  b_Z->size[1] = nx;
  emxEnsureCapacity(sp, (emxArray__common *)b_Z, i39, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  for (i39 = 0; i39 < nx; i39++) {
    for (i = 0; i < loop_ub; i++) {
      b_Z->data[i + b_Z->size[0] * i39] = Z->data[i + Z->size[0] * i39];
    }
  }

  i39 = Z->size[0] * Z->size[1];
  Z->size[0] = b_Z->size[0];
  Z->size[1] = b_Z->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Z, i39, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = b_Z->size[1];
  for (i39 = 0; i39 < loop_ub; i39++) {
    nx = b_Z->size[0];
    for (i = 0; i < nx; i++) {
      Z->data[i + Z->size[0] * i39] = b_Z->data[i + b_Z->size[0] * i39];
    }
  }

  emxFree_real_T(&b_Z);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (hamming_decode_soft.c) */
