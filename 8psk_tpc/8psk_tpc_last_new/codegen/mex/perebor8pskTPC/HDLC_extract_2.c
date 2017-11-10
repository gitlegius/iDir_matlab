/*
 * HDLC_extract_2.c
 *
 * Code generation for function 'HDLC_extract_2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "HDLC_extract_2.h"
#include "perebor8pskTPC_emxutil.h"
#include "seq_search.h"
#include "perebor8pskTPC_mexutil.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo ld_emlrtRSI = { 10, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRSInfo md_emlrtRSI = { 31, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRSInfo nd_emlrtRSI = { 47, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRSInfo od_emlrtRSI = { 62, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtMCInfo ab_emlrtMCI = { 13, 5, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 1, 29, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 38, 9, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 40, 9, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 5, 19, "x", "crc_gen",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\crc_gen.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 4, 7, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 6, 16, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 6, 25, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 6, 14, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 8, 12, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 8, 10, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\set_clean.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 38, 12, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 31, 30, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 28, 17, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 42, 24, "RR", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m",
  0 };

static emlrtRSInfo pd_emlrtRSI = { 13, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\HDLC_extract_2.m"
};

/* Function Definitions */
real_T HDLC_extract_2(const emlrtStack *sp, const emxArray_real_T *R, real_T
                      *ind_good)
{
  real_T ind_bad;
  real_T pos;
  real_T res;
  const mxArray *y;
  static const int32_T iv38[2] = { 1, 8 };

  const mxArray *m17;
  char_T cv34[8];
  int32_T i;
  static const char_T cv35[8] = { 'N', 'o', ' ', 'f', 'l', 'a', 'g', 's' };

  real_T pos_end;
  int32_T N;
  emxArray_real_T *RR;
  emxArray_real_T *S;
  emxArray_real_T *B;
  emxArray_real_T *b_R;
  emxArray_real_T *b_RR;
  emxArray_real_T *b_B;
  emxArray_real_T *c_B;
  int32_T i55;
  int32_T i56;
  int32_T i57;
  boolean_T a2;
  boolean_T p;
  int32_T k;
  boolean_T exitg3;
  static const int8_T iv39[8] = { 0, 1, 1, 1, 1, 1, 1, 0 };

  real_T pos_beg;
  int32_T kk;
  int32_T cs;
  boolean_T exitg2;
  static const int8_T iv40[6] = { 1, 1, 1, 1, 1, 0 };

  int32_T xs;
  int8_T reg[16];
  boolean_T exitg1;
  static const int8_T iv41[16] = { 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0,
    0 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  *ind_good = 0.0;
  ind_bad = 1.0;

  /*  for iDirect scan modul */
  st.site = &ld_emlrtRSI;
  seq_search(&st, R, &res, &pos);

  /*  0 1 1 1 1 1 1 0]);% 0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]); */
  /* [res,pos]=seq_search(R,[0 1 1 1 1 1 1 0  0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]); */
  if (res == 0.0) {
    y = NULL;
    m17 = emlrtCreateCharArray(2, iv38);
    for (i = 0; i < 8; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 8, m17, cv34);
    emlrtAssign(&y, m17);
    st.site = &pd_emlrtRSI;
    disp(&st, y, &ab_emlrtMCI);
  } else {
    /* R=R(pos:end); */
    /* k=0; */
    pos_end = pos - 1.0;
    N = R->size[1];

    /* ind_good=0;%packets */
    ind_bad = 0.0;

    /* packets */
    /* while k<=N-7 */
    emxInit_real_T(sp, &RR, 2, &x_emlrtRTEI, true);
    emxInit_real_T(sp, &S, 2, &y_emlrtRTEI, true);
    emxInit_real_T(sp, &B, 2, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &b_R, 2, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &b_RR, 2, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &b_B, 2, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &c_B, 2, &w_emlrtRTEI, true);
    while (pos_end <= (real_T)N - 8.0) {
      pos_end++;
      for (i55 = 0; i55 < 8; i55++) {
        i56 = R->size[1];
        i57 = (int32_T)(pos_end + (real_T)i55);
        emlrtDynamicBoundsCheckFastR2012b(i57, 1, i56, &oc_emlrtBCI, sp);
      }

      a2 = false;
      p = true;
      k = 0;
      exitg3 = false;
      while ((!exitg3) && (k < 8)) {
        if (!(R->data[(int32_T)(pos_end + (real_T)k) - 1] == iv39[k])) {
          p = false;
          exitg3 = true;
        } else {
          k++;
        }
      }

      if (!p) {
      } else {
        a2 = true;
      }

      if (!a2) {
        /* packet start found */
        pos_beg = pos_end;

        /* disp(k) */
        if (pos_end > R->size[1]) {
          i55 = 0;
          i56 = 0;
        } else {
          i55 = R->size[1];
          i56 = (int32_T)pos_end;
          i55 = emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &nc_emlrtBCI, sp)
            - 1;
          i56 = R->size[1];
          i57 = R->size[1];
          i56 = emlrtDynamicBoundsCheckFastR2012b(i57, 1, i56, &nc_emlrtBCI, sp);
        }

        i57 = b_R->size[0] * b_R->size[1];
        b_R->size[0] = 1;
        b_R->size[1] = i56 - i55;
        emxEnsureCapacity(sp, (emxArray__common *)b_R, i57, (int32_T)sizeof
                          (real_T), &w_emlrtRTEI);
        i = i56 - i55;
        for (i56 = 0; i56 < i; i56++) {
          b_R->data[b_R->size[0] * i56] = R->data[i55 + i56];
        }

        st.site = &md_emlrtRSI;
        seq_search(&st, b_R, &res, &pos);
        if (pos == -1.0) {
          pos_end = N;
        } else {
          pos_end = (pos_end + pos) - 2.0;
        }

        if (pos_beg > pos_end) {
          i55 = 0;
          i56 = 0;
        } else {
          i55 = R->size[1];
          i56 = (int32_T)pos_beg;
          i55 = emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &mc_emlrtBCI, sp)
            - 1;
          i56 = R->size[1];
          i57 = (int32_T)pos_end;
          i56 = emlrtDynamicBoundsCheckFastR2012b(i57, 1, i56, &mc_emlrtBCI, sp);
        }

        i57 = RR->size[0] * RR->size[1];
        RR->size[0] = 1;
        RR->size[1] = i56 - i55;
        emxEnsureCapacity(sp, (emxArray__common *)RR, i57, (int32_T)sizeof
                          (real_T), &w_emlrtRTEI);
        i = i56 - i55;
        for (i57 = 0; i57 < i; i57++) {
          RR->data[RR->size[0] * i57] = R->data[i55 + i57];
        }

        i57 = S->size[0] * S->size[1];
        S->size[0] = 1;
        S->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)S, i57, (int32_T)sizeof(real_T),
                          &w_emlrtRTEI);
        kk = 0;
        while (kk <= (i56 - i55) - 6) {
          i = i56 - i55;
          for (i57 = 0; i57 < 6; i57++) {
            cs = (int32_T)((1.0 + (real_T)kk) + (real_T)i57);
            emlrtDynamicBoundsCheckFastR2012b(cs, 1, i, &pc_emlrtBCI, sp);
          }

          a2 = false;
          p = true;
          k = 0;
          exitg2 = false;
          while ((!exitg2) && (k < 6)) {
            if (!(RR->data[(int32_T)((uint32_T)k + kk)] == iv40[k])) {
              p = false;
              exitg2 = true;
            } else {
              k++;
            }
          }

          if (!p) {
          } else {
            a2 = true;
          }

          if (a2) {
            xs = S->size[1];
            i57 = S->size[0] * S->size[1];
            S->size[1] = xs + 1;
            emxEnsureCapacity(sp, (emxArray__common *)S, i57, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            S->data[xs] = (1.0 + (real_T)kk) + 5.0;
          }

          kk++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        if (!(S->size[1] == 0)) {
          st.site = &nd_emlrtRSI;
          i57 = B->size[0] * B->size[1];
          B->size[0] = 1;
          B->size[1] = RR->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)B, i57, (int32_T)sizeof
                            (real_T), &w_emlrtRTEI);
          i = RR->size[0] * RR->size[1];
          for (i57 = 0; i57 < i; i57++) {
            B->data[i57] = RR->data[i57];
          }

          /* 16.08.01 */
          i57 = i56 - i55;
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i57, &gc_emlrtBCI, &st);
          i55 = i56 - i55;
          i56 = (int32_T)(S->data[0] - 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &gc_emlrtBCI, &st);
          i = (int32_T)S->data[0] - 2;
          i55 = b_RR->size[0] * b_RR->size[1];
          b_RR->size[0] = 1;
          b_RR->size[1] = i + 1;
          emxEnsureCapacity(&st, (emxArray__common *)b_RR, i55, (int32_T)sizeof
                            (real_T), &w_emlrtRTEI);
          for (i55 = 0; i55 <= i; i55++) {
            b_RR->data[b_RR->size[0] * i55] = RR->data[i55];
          }

          i55 = RR->size[0] * RR->size[1];
          RR->size[0] = 1;
          RR->size[1] = b_RR->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)RR, i55, (int32_T)sizeof
                            (real_T), &w_emlrtRTEI);
          i = b_RR->size[1];
          for (i55 = 0; i55 < i; i55++) {
            RR->data[RR->size[0] * i55] = b_RR->data[b_RR->size[0] * i55];
          }

          k = 0;
          while (k <= S->size[1] - 2) {
            i55 = S->size[1];
            i56 = k + 1;
            emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &hc_emlrtBCI, &st);
            i55 = S->size[1];
            i56 = (int32_T)((1.0 + (real_T)k) + 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &ic_emlrtBCI, &st);
            if (S->data[k] + 1.0 > S->data[1 + k] - 1.0) {
              i55 = 1;
              i56 = 1;
            } else {
              i55 = B->size[1];
              i56 = (int32_T)((uint32_T)S->data[k] + 1U);
              i55 = emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &jc_emlrtBCI,
                &st);
              i56 = B->size[1];
              i57 = (int32_T)S->data[1 + k] - 1;
              i56 = emlrtDynamicBoundsCheckFastR2012b(i57, 1, i56, &jc_emlrtBCI,
                &st) + 1;
            }

            xs = RR->size[1];
            cs = i56 - i55;
            i57 = RR->size[0] * RR->size[1];
            RR->size[1] = xs + cs;
            emxEnsureCapacity(&st, (emxArray__common *)RR, i57, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            i57 = c_B->size[0] * c_B->size[1];
            c_B->size[0] = 1;
            c_B->size[1] = i56 - i55;
            emxEnsureCapacity(&st, (emxArray__common *)c_B, i57, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            i = i56 - i55;
            for (i56 = 0; i56 < i; i56++) {
              c_B->data[c_B->size[0] * i56] = B->data[(i55 + i56) - 1];
            }

            for (i55 = 0; i55 < cs; i55++) {
              RR->data[xs + i55] = c_B->data[i55];
            }

            k++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          }

          i55 = S->size[1];
          i56 = S->size[1];
          emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &kc_emlrtBCI, &st);
          if ((uint32_T)S->data[S->size[1] - 1] + 1U > (uint32_T)B->size[1]) {
            i55 = 1;
            i56 = 1;
          } else {
            i55 = B->size[1];
            i56 = (int32_T)((uint32_T)S->data[S->size[1] - 1] + 1U);
            i55 = emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &lc_emlrtBCI,
              &st);
            i56 = B->size[1];
            i57 = B->size[1];
            i56 = emlrtDynamicBoundsCheckFastR2012b(i57, 1, i56, &lc_emlrtBCI,
              &st) + 1;
          }

          xs = RR->size[1];
          cs = i56 - i55;
          i57 = RR->size[0] * RR->size[1];
          RR->size[1] = xs + cs;
          emxEnsureCapacity(&st, (emxArray__common *)RR, i57, (int32_T)sizeof
                            (real_T), &w_emlrtRTEI);
          i57 = b_B->size[0] * b_B->size[1];
          b_B->size[0] = 1;
          b_B->size[1] = i56 - i55;
          emxEnsureCapacity(&st, (emxArray__common *)b_B, i57, (int32_T)sizeof
                            (real_T), &w_emlrtRTEI);
          i = i56 - i55;
          for (i56 = 0; i56 < i; i56++) {
            b_B->data[b_B->size[0] * i56] = B->data[(i55 + i56) - 1];
          }

          for (i55 = 0; i55 < cs; i55++) {
            RR->data[xs + i55] = b_B->data[i55];
          }
        }

        /*          if length(RR) > 15 */
        /*              h = crc.generator('Polynomial', '0x1021', 'InitialState', '0x0000','ReflectInput', false, 'FinalXOR', '0x0000'); */
        /*  %             RR = byte_reverse(RR); */
        /*              packet_CRC = generate(h, RR(1:end-16)'); */
        /*              if isequal(packet_CRC(end-15:end)', RR(end-15:end)) */
        /*                  ind_good=ind_good+1; */
        /*              else */
        /*                  ind_bad=ind_bad+1; */
        /*              end */
        /*               */
        /*          end */
        st.site = &od_emlrtRSI;
        for (i55 = 0; i55 < 16; i55++) {
          reg[i55] = 1;
        }

        k = 0;
        while (k <= RR->size[1] - 1) {
          i55 = RR->size[1];
          i56 = k + 1;
          emlrtDynamicBoundsCheckFastR2012b(i56, 1, i55, &fc_emlrtBCI, &st);
          a2 = (((RR->data[k] != 0.0) ^ (reg[15] != 0)) != 0);
          for (i = 0; i < 15; i++) {
            reg[15 - i] = reg[14 - i];
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          }

          reg[0] = (int8_T)a2;
          reg[5] = (int8_T)(((reg[5] != 0) ^ a2) != 0);
          reg[12] = (int8_T)(((reg[12] != 0) ^ a2) != 0);
          k++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
        }

        a2 = false;
        p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 16)) {
          if (!(reg[k] == iv41[k])) {
            p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }

        if (!p) {
        } else {
          a2 = true;
        }

        if (a2) {
          (*ind_good)++;
        } else {
          ind_bad++;
        }
      } else {
        pos_end += 7.0;
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emxFree_real_T(&c_B);
    emxFree_real_T(&b_B);
    emxFree_real_T(&b_RR);
    emxFree_real_T(&b_R);
    emxFree_real_T(&B);
    emxFree_real_T(&S);
    emxFree_real_T(&RR);
  }

  /* disp(['Good HDLC packets: ' num2str(ind_good)]) */
  /* disp(['Bad HDLC packets: ' num2str(ind_bad)]) */
  /*  fclose all; */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return ind_bad;
}

/* End of code generation (HDLC_extract_2.c) */
