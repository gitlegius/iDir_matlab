/*
 * _coder_perebor8pskTPC_mex.c
 *
 * Code generation for function 'perebor8pskTPC'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_perebor8pskTPC_api.h"
#include "perebor8pskTPC_initialize.h"
#include "perebor8pskTPC_terminate.h"

/* Function Declarations */
static void perebor8pskTPC_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "perebor8pskTPC", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void perebor8pskTPC_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[7];
  const mxArray *inputs[9];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  perebor8pskTPC_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 9, mxCHAR_CLASS, 14, "perebor8pskTPC");
  } else if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 14, "perebor8pskTPC");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  perebor8pskTPC_api(inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  perebor8pskTPC_terminate();
}

void perebor8pskTPC_atexit_wrapper(void)
{
   perebor8pskTPC_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(perebor8pskTPC_atexit_wrapper);
  /* Dispatch the entry-point. */
  perebor8pskTPC_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_perebor8pskTPC_mex.c) */
