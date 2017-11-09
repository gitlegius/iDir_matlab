/*
 * HDLC_extract_2.c
 *
 * Code generation for function 'HDLC_extract_2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "HDLC_extract_2_emxutil.h"
#include "seq_search.h"
#include "HDLC_extract_2_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 10, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRSInfo b_emlrtRSI = { 31, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRSInfo c_emlrtRSI = { 47, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRSInfo d_emlrtRSI = { 62, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtMCInfo emlrtMCI = { 13, 5, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRTEInfo c_emlrtRTEI = { 1, 29, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRTEInfo d_emlrtRTEI = { 38, 9, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtRTEInfo e_emlrtRTEI = { 40, 9, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 5, 19, "x", "crc_gen",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\crc_gen.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 4, 7, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 6, 16, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 6, 25, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 6, 14, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 8, 12, "ind", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 8, 10, "B", "set_clean",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\set_clean.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 38, 12, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 31, 30, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 28, 17, "R", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 42, 24, "RR", "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m", 0 };

static emlrtRSInfo e_emlrtRSI = { 13, "HDLC_extract_2",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\8psk_tpc\\HDLC_extract_2.m" };

/* Function Declarations */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

real_T HDLC_extract_2(const emlrtStack *sp, const emxArray_real_T *R, real_T
                      *ind_good)
{
  real_T ind_bad;
  real_T pos;
  real_T res;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 8 };

  const mxArray *m1;
  char_T cv0[8];
  int32_T i;
  static const char_T cv1[8] = { 'N', 'o', ' ', 'f', 'l', 'a', 'g', 's' };

  real_T pos_end;
  int32_T N;
  emxArray_real_T *RR;
  emxArray_real_T *S;
  emxArray_real_T *B;
  emxArray_real_T *b_R;
  emxArray_real_T *b_RR;
  emxArray_real_T *b_B;
  emxArray_real_T *c_B;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  boolean_T a2;
  boolean_T p;
  int32_T k;
  boolean_T exitg3;
  static const int8_T iv3[8] = { 0, 1, 1, 1, 1, 1, 1, 0 };

  real_T pos_beg;
  int32_T kk;
  int32_T cs;
  boolean_T exitg2;
  static const int8_T iv4[6] = { 1, 1, 1, 1, 1, 0 };

  int32_T xs;
  int8_T reg[16];
  boolean_T exitg1;
  static const int8_T iv5[16] = { 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0
  };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  ind_bad = 1.0;

  /*  for iDirect scan modul */
  st.site = &emlrtRSI;
  seq_search(&st, R, &res, &pos);

  /*  0 1 1 1 1 1 1 0]);% 0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]); */
  /* [res,pos]=seq_search(R,[0 1 1 1 1 1 1 0  0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]); */
  if (res == 0.0) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    for (i = 0; i < 8; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(sp, 8, m1, cv0);
    emlrtAssign(&y, m1);
    st.site = &e_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  } else {
    /* R=R(pos:end); */
    /* k=0; */
    pos_end = pos - 1.0;
    N = R->size[1];

    /* ind_good=0;%packets */
    ind_bad = 0.0;

    /* packets */
    /* while k<=N-7 */
    emxInit_real_T(sp, &RR, 2, &d_emlrtRTEI, true);
    emxInit_real_T(sp, &S, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &B, 2, &c_emlrtRTEI, true);
    emxInit_real_T(sp, &b_R, 2, &c_emlrtRTEI, true);
    emxInit_real_T(sp, &b_RR, 2, &c_emlrtRTEI, true);
    emxInit_real_T(sp, &b_B, 2, &c_emlrtRTEI, true);
    emxInit_real_T(sp, &c_B, 2, &c_emlrtRTEI, true);
    while (pos_end <= (real_T)N - 8.0) {
      pos_end++;
      for (i3 = 0; i3 < 8; i3++) {
        i4 = R->size[1];
        i5 = (int32_T)(pos_end + (real_T)i3);
        emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &l_emlrtBCI, sp);
      }

      a2 = false;
      p = true;
      k = 0;
      exitg3 = false;
      while ((!exitg3) && (k < 8)) {
        if (!(R->data[(int32_T)(pos_end + (real_T)k) - 1] == iv3[k])) {
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
          i3 = 0;
          i4 = 0;
        } else {
          i3 = R->size[1];
          i4 = (int32_T)pos_end;
          i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &k_emlrtBCI, sp) - 1;
          i4 = R->size[1];
          i5 = R->size[1];
          i4 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &k_emlrtBCI, sp);
        }

        i5 = b_R->size[0] * b_R->size[1];
        b_R->size[0] = 1;
        b_R->size[1] = i4 - i3;
        emxEnsureCapacity(sp, (emxArray__common *)b_R, i5, (int32_T)sizeof
                          (real_T), &c_emlrtRTEI);
        i = i4 - i3;
        for (i4 = 0; i4 < i; i4++) {
          b_R->data[b_R->size[0] * i4] = R->data[i3 + i4];
        }

        st.site = &b_emlrtRSI;
        seq_search(&st, b_R, &res, &pos);
        if (pos == -1.0) {
          pos_end = N;
        } else {
          pos_end = (pos_end + pos) - 2.0;
        }

        if (pos_beg > pos_end) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = R->size[1];
          i4 = (int32_T)pos_beg;
          i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &j_emlrtBCI, sp) - 1;
          i4 = R->size[1];
          i5 = (int32_T)pos_end;
          i4 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &j_emlrtBCI, sp);
        }

        i5 = RR->size[0] * RR->size[1];
        RR->size[0] = 1;
        RR->size[1] = i4 - i3;
        emxEnsureCapacity(sp, (emxArray__common *)RR, i5, (int32_T)sizeof(real_T),
                          &c_emlrtRTEI);
        i = i4 - i3;
        for (i5 = 0; i5 < i; i5++) {
          RR->data[RR->size[0] * i5] = R->data[i3 + i5];
        }

        i5 = S->size[0] * S->size[1];
        S->size[0] = 1;
        S->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)S, i5, (int32_T)sizeof(real_T),
                          &c_emlrtRTEI);
        kk = 0;
        while (kk <= (i4 - i3) - 6) {
          i = i4 - i3;
          for (i5 = 0; i5 < 6; i5++) {
            cs = (int32_T)((1.0 + (real_T)kk) + (real_T)i5);
            emlrtDynamicBoundsCheckFastR2012b(cs, 1, i, &m_emlrtBCI, sp);
          }

          a2 = false;
          p = true;
          k = 0;
          exitg2 = false;
          while ((!exitg2) && (k < 6)) {
            if (!(RR->data[k + kk] == iv4[k])) {
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
            i5 = S->size[0] * S->size[1];
            S->size[1] = xs + 1;
            emxEnsureCapacity(sp, (emxArray__common *)S, i5, (int32_T)sizeof
                              (real_T), &c_emlrtRTEI);
            S->data[xs] = (1.0 + (real_T)kk) + 5.0;
          }

          kk++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        if (!(S->size[1] == 0)) {
          st.site = &c_emlrtRSI;
          i5 = B->size[0] * B->size[1];
          B->size[0] = 1;
          B->size[1] = RR->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)B, i5, (int32_T)sizeof
                            (real_T), &c_emlrtRTEI);
          i = RR->size[0] * RR->size[1];
          for (i5 = 0; i5 < i; i5++) {
            B->data[i5] = RR->data[i5];
          }

          /* 16.08.01 */
          i5 = i4 - i3;
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &d_emlrtBCI, &st);
          i3 = i4 - i3;
          i4 = (int32_T)(S->data[0] - 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &d_emlrtBCI, &st);
          i3 = b_RR->size[0] * b_RR->size[1];
          b_RR->size[0] = 1;
          b_RR->size[1] = RR->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)b_RR, i3, (int32_T)sizeof
                            (real_T), &c_emlrtRTEI);
          i = RR->size[1];
          for (i3 = 0; i3 < i; i3++) {
            b_RR->data[b_RR->size[0] * i3] = RR->data[RR->size[0] * i3];
          }

          i = (int32_T)S->data[0] - 2;
          i3 = RR->size[0] * RR->size[1];
          RR->size[0] = 1;
          RR->size[1] = i + 1;
          emxEnsureCapacity(&st, (emxArray__common *)RR, i3, (int32_T)sizeof
                            (real_T), &c_emlrtRTEI);
          for (i3 = 0; i3 <= i; i3++) {
            RR->data[RR->size[0] * i3] = b_RR->data[i3];
          }

          k = 0;
          while (k <= S->size[1] - 2) {
            i3 = S->size[1];
            i4 = k + 1;
            emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &e_emlrtBCI, &st);
            i3 = S->size[1];
            i4 = (int32_T)((1.0 + (real_T)k) + 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &f_emlrtBCI, &st);
            if (S->data[k] + 1.0 > S->data[1 + k] - 1.0) {
              i3 = 1;
              i4 = 1;
            } else {
              i3 = B->size[1];
              i4 = (int32_T)S->data[k] + 1;
              i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &g_emlrtBCI, &st);
              i4 = B->size[1];
              i5 = (int32_T)S->data[1 + k] - 1;
              i4 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &g_emlrtBCI, &st)
                + 1;
            }

            xs = RR->size[1];
            cs = i4 - i3;
            i5 = RR->size[0] * RR->size[1];
            RR->size[1] = xs + cs;
            emxEnsureCapacity(&st, (emxArray__common *)RR, i5, (int32_T)sizeof
                              (real_T), &c_emlrtRTEI);
            i5 = c_B->size[0] * c_B->size[1];
            c_B->size[0] = 1;
            c_B->size[1] = i4 - i3;
            emxEnsureCapacity(&st, (emxArray__common *)c_B, i5, (int32_T)sizeof
                              (real_T), &c_emlrtRTEI);
            i = i4 - i3;
            for (i4 = 0; i4 < i; i4++) {
              c_B->data[c_B->size[0] * i4] = B->data[(i3 + i4) - 1];
            }

            for (i3 = 0; i3 < cs; i3++) {
              RR->data[xs + i3] = c_B->data[i3];
            }

            k++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          }

          i3 = S->size[1];
          i4 = S->size[1];
          emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &h_emlrtBCI, &st);
          if ((int32_T)S->data[S->size[1] - 1] + 1 > B->size[1]) {
            i3 = 1;
            i4 = 1;
          } else {
            i3 = B->size[1];
            i4 = (int32_T)S->data[S->size[1] - 1] + 1;
            i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &i_emlrtBCI, &st);
            i4 = B->size[1];
            i5 = B->size[1];
            i4 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &i_emlrtBCI, &st)
              + 1;
          }

          xs = RR->size[1];
          cs = i4 - i3;
          i5 = RR->size[0] * RR->size[1];
          RR->size[1] = xs + cs;
          emxEnsureCapacity(&st, (emxArray__common *)RR, i5, (int32_T)sizeof
                            (real_T), &c_emlrtRTEI);
          i5 = b_B->size[0] * b_B->size[1];
          b_B->size[0] = 1;
          b_B->size[1] = i4 - i3;
          emxEnsureCapacity(&st, (emxArray__common *)b_B, i5, (int32_T)sizeof
                            (real_T), &c_emlrtRTEI);
          i = i4 - i3;
          for (i4 = 0; i4 < i; i4++) {
            b_B->data[b_B->size[0] * i4] = B->data[(i3 + i4) - 1];
          }

          for (i3 = 0; i3 < cs; i3++) {
            RR->data[xs + i3] = b_B->data[i3];
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
        st.site = &d_emlrtRSI;
        for (i3 = 0; i3 < 16; i3++) {
          reg[i3] = 1;
        }

        k = 0;
        while (k <= RR->size[1] - 1) {
          i3 = RR->size[1];
          i4 = k + 1;
          emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &c_emlrtBCI, &st);
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
          if (!(reg[k] == iv5[k])) {
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

  /*  disp(['Good HDLC packets: ' num2str(ind_good)]) */
  /*  disp(['Bad HDLC packets: ' num2str(ind_bad)]) */
  /*  fclose all; */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return ind_bad;
}

/* End of code generation (HDLC_extract_2.c) */
