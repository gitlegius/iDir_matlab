/*
 * perebor8pskTPC_mexutil.c
 *
 * Code generation for function 'perebor8pskTPC_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "perebor8pskTPC_mexutil.h"

/* Function Definitions */
void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 1, &pArray, "message", true,
    location);
}

/* End of code generation (perebor8pskTPC_mexutil.c) */
