/*
 * _coder_HDLC_extract_2_mex.c
 *
 * Code generation for function 'HDLC_extract_2'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_HDLC_extract_2_api.h"
#include "HDLC_extract_2_initialize.h"
#include "HDLC_extract_2_terminate.h"

/* Function Declarations */
static void HDLC_extract_2_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "HDLC_extract_2", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void HDLC_extract_2_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[2];
  const mxArray *inputs[2];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  HDLC_extract_2_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 14, "HDLC_extract_2");
  } else if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 14, "HDLC_extract_2");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  HDLC_extract_2_api(inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  HDLC_extract_2_terminate();
}

void HDLC_extract_2_atexit_wrapper(void)
{
   HDLC_extract_2_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(HDLC_extract_2_atexit_wrapper);
  /* Dispatch the entry-point. */
  HDLC_extract_2_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_HDLC_extract_2_mex.c) */
