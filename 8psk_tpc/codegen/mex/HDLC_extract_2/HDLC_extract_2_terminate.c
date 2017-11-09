/*
 * HDLC_extract_2_terminate.c
 *
 * Code generation for function 'HDLC_extract_2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "HDLC_extract_2_terminate.h"

/* Function Definitions */
void HDLC_extract_2_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void HDLC_extract_2_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (HDLC_extract_2_terminate.c) */
