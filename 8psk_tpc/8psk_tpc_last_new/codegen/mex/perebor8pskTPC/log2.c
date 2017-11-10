/*
 * log2.c
 *
 * Code generation for function 'log2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "log2.h"

/* Function Definitions */
real_T b_log2(real_T x)
{
  real_T f;
  int32_T eint;
  real_T fdbl;
  if (x == 0.0) {
    f = rtMinusInf;
  } else {
    fdbl = frexp(x, &eint);
    if (fdbl == 0.5) {
      f = (real_T)eint - 1.0;
    } else {
      f = muDoubleScalarLog(fdbl) / 0.69314718055994529 + (real_T)eint;
    }
  }

  return f;
}

/* End of code generation (log2.c) */
