/*
 * eml_sort.c
 *
 * Code generation for function 'eml_sort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "eml_sort.h"

/* Function Declarations */
static void eml_sort_idx(const real_T x_data[], const int32_T x_size[1], int32_T
  idx_data[], int32_T idx_size[1]);

/* Function Definitions */
static void eml_sort_idx(const real_T x_data[], const int32_T x_size[1], int32_T
  idx_data[], int32_T idx_size[1])
{
  int32_T n;
  int32_T k;
  boolean_T p;
  int32_T i;
  int32_T idx0_data[128];
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T b_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  n = x_size[0];
  idx_size[0] = (uint8_T)x_size[0];
  for (k = 1; k <= n; k++) {
    idx_data[k - 1] = k;
  }

  for (k = 1; k <= n - 1; k += 2) {
    if ((x_data[k - 1] <= x_data[k]) || muDoubleScalarIsNaN(x_data[k])) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
    } else {
      idx_data[k - 1] = k + 1;
      idx_data[k] = k;
    }
  }

  k = x_size[0];
  for (i = 0; i < k; i++) {
    idx0_data[i] = 1;
  }

  i = 2;
  while (i < n) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < n + 1; pEnd = qEnd + i) {
      b_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > n + 1) {
        qEnd = n + 1;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if ((x_data[idx_data[b_p - 1] - 1] <= x_data[idx_data[q] - 1]) ||
            muDoubleScalarIsNaN(x_data[idx_data[q] - 1])) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          idx0_data[k] = idx_data[b_p - 1];
          b_p++;
          if (b_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              idx0_data[k] = idx_data[q];
              q++;
            }
          }
        } else {
          idx0_data[k] = idx_data[q];
          q++;
          if (q + 1 == qEnd) {
            while (b_p < pEnd) {
              k++;
              idx0_data[k] = idx_data[b_p - 1];
              b_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx_data[(j + k) - 1] = idx0_data[k];
      }

      j = qEnd;
    }

    i = i2;
  }
}

void b_eml_sort(const real_T x[4], real_T y[4], int32_T idx[4])
{
  int32_T k;
  boolean_T p;
  int8_T idx0[4];
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T b_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  for (k = 0; k < 4; k++) {
    idx[k] = k + 1;
  }

  for (k = 0; k < 4; k += 2) {
    if ((x[k] <= x[k + 1]) || muDoubleScalarIsNaN(x[k + 1])) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }

  for (i = 0; i < 4; i++) {
    idx0[i] = 1;
  }

  i = 2;
  while (i < 4) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < 5; pEnd = qEnd + i) {
      b_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if ((x[idx[b_p - 1] - 1] <= x[idx[q] - 1]) || muDoubleScalarIsNaN
            (x[idx[q] - 1])) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          idx0[k] = (int8_T)idx[b_p - 1];
          b_p++;
          if (b_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              idx0[k] = (int8_T)idx[q];
              q++;
            }
          }
        } else {
          idx0[k] = (int8_T)idx[q];
          q++;
          if (q + 1 == qEnd) {
            while (b_p < pEnd) {
              k++;
              idx0[k] = (int8_T)idx[b_p - 1];
              b_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx[(j + k) - 1] = idx0[k];
      }

      j = qEnd;
    }

    i = i2;
  }

  for (k = 0; k < 4; k++) {
    y[k] = x[idx[k] - 1];
  }
}

void eml_sort(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
              int32_T y_size[2], int32_T idx_data[], int32_T idx_size[2])
{
  int32_T vlen;
  real_T vwork_data[128];
  int32_T vwork_size[1];
  uint8_T uv2[2];
  int32_T ix;
  int32_T k;
  int32_T iidx_size[1];
  int32_T iidx_data[128];
  vlen = x_size[1] - 1;
  vwork_size[0] = (uint8_T)x_size[1];
  for (ix = 0; ix < 2; ix++) {
    y_size[ix] = x_size[ix];
    uv2[ix] = (uint8_T)x_size[ix];
  }

  idx_size[0] = 1;
  idx_size[1] = uv2[1];
  ix = 0;
  for (k = 0; k <= vlen; k++) {
    vwork_data[k] = x_data[ix];
    ix++;
  }

  eml_sort_idx(vwork_data, vwork_size, iidx_data, iidx_size);
  ix = 0;
  for (k = 0; k <= vlen; k++) {
    y_data[ix] = vwork_data[iidx_data[k] - 1];
    idx_data[ix] = iidx_data[k];
    ix++;
  }
}

/* End of code generation (eml_sort.c) */
