/*
 * _coder_HDLC_extract_2_api.c
 *
 * Code generation for function '_coder_HDLC_extract_2_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "_coder_HDLC_extract_2_api.h"
#include "HDLC_extract_2_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_HDLC_extract_2_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ind_good,
  const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *R, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ind_good,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ind_good), &thisId);
  emlrtDestroyArray(&ind_good);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv0[2];
  boolean_T bv0[2];
  int32_T i2;
  static const boolean_T bv1[2] = { false, true };

  int32_T iv1[2];
  for (i2 = 0; i2 < 2; i2++) {
    iv0[i2] = 1 + 1048575 * i2;
    bv0[i2] = bv1[i2];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv0, bv0, iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *R, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(R), &thisId, y);
  emlrtDestroyArray(&R);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void HDLC_extract_2_api(const mxArray * const prhs[2], const mxArray *plhs[2])
{
  emxArray_real_T *R;
  real_T ind_good;
  real_T ind_bad;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &R, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "R", R);
  ind_good = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ind_good");

  /* Invoke the target function */
  ind_bad = HDLC_extract_2(&st, R, &ind_good);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ind_good);
  plhs[1] = emlrt_marshallOut(ind_bad);
  R->canFreeData = false;
  emxFree_real_T(&R);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_HDLC_extract_2_api.c) */
