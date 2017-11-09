/*
 * HDLC_extract_2_initialize.c
 *
 * Code generation for function 'HDLC_extract_2_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "HDLC_extract_2_initialize.h"
#include "HDLC_extract_2_data.h"

/* Function Definitions */
void HDLC_extract_2_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (HDLC_extract_2_initialize.c) */
