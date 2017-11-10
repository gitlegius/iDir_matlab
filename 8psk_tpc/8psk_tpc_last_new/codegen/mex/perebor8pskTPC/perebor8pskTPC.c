/*
 * perebor8pskTPC.c
 *
 * Code generation for function 'perebor8pskTPC'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "perebor8pskTPC_emxutil.h"
#include "mod.h"
#include "HDLC_extract_2.h"
#include "filter.h"
#include "tpc_decode_light.h"
#include "demapDecTest.h"
#include "perebor8pskTPC_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo b_emlrtRSI = { 20, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo c_emlrtRSI = { 21, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo d_emlrtRSI = { 30, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo e_emlrtRSI = { 31, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo f_emlrtRSI = { 33, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRSInfo g_emlrtRSI = { 34, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 77, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 9, 1, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 10, 1, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 17, 5, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 30, 9, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 15, 1, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtDCInfo emlrtDCI = { 17, 38, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtBCInfo emlrtBCI = { -1, -1, 17, 38, "out_burst_complex_without_UWs",
  "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 17, 38, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtDCInfo b_emlrtDCI = { 26, 9, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 26, 9, "out_decoder_all",
  "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  0 };

static emlrtECInfo b_emlrtECI = { -1, 26, 9, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 30, 51, "out_decoder_all",
  "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 30, 51, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtDCInfo d_emlrtDCI = { 27, 9, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 27, 9, "out_decoder_all_",
  "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 27, 9, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 33, 51, "out_decoder_all_",
  "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 33, 51, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtDCInfo f_emlrtDCI = { 9, 27, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  1 };

static emlrtDCInfo g_emlrtDCI = { 9, 27, "perebor8pskTPC",
  "D:\\projects_matlab\\1\\iDirect\\test_corr\\iDir_matlab\\8psk_tpc\\8psk_tpc_last_new\\perebor8pskTPC.m",
  4 };

/* Function Definitions */
void perebor8pskTPC(const emlrtStack *sp, const emxArray_creal_T
                    *out_burst_complex_without_UWs, real_T data_symb_len, real_T
                    num_packet_per_burst, const creal_T Star_data[], const
                    int32_T Star_size[2], real_T frame_dec_len, real_T
                    packet_dec_len, real_T c_r, real_T flag_FDMA, real_T
                    thr_num_good, boolean_T *flag_ok, real_T *ind_good, real_T
                    *ind_bad, real_T *ind_good_, real_T *ind_bad_, real_T
                    *num_iter, real_T *num_iter_)
{
  emxArray_real_T *out_decoder_all;
  int32_T i0;
  real_T tmp_end_pos_in;
  int32_T loop_ub;
  emxArray_real_T *out_decoder_all_;
  real_T ind_bad_prev;
  real_T ind_bad__prev;
  real_T tmp_start_pos;
  real_T tmp_start_pos_in;
  int32_T kk;
  emxArray_real_T *out_data_soft_now;
  emxArray_real_T *bit_scrm;
  emxArray_real_T *decoded_bits;
  emxArray_real_T *decoded_bits_;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
  emxArray_real_T *b_bit_scrm;
  emxArray_real_T *b_out_decoder_all_;
  emxArray_real_T *r2;
  emxArray_real_T *c_bit_scrm;
  emxArray_real_T *b_out_decoder_all;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_creal_T *b_out_burst_complex_without_UWs;
  boolean_T exitg1;
  int32_T i1;
  real_T b_num_iter;
  real_T flag_decod;
  real_T b_num_iter_;
  real_T flag_decod_;
  boolean_T guard1 = false;
  int32_T i2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &out_decoder_all, 2, &b_emlrtRTEI, true);

  /* % */
  *ind_good = 0.0;
  *ind_bad = 0.0;
  *ind_bad_ = 0.0;
  *ind_good_ = 0.0;
  *num_iter = 0.0;
  *num_iter_ = 0.0;

  /* % */
  *flag_ok = false;
  i0 = out_decoder_all->size[0] * out_decoder_all->size[1];
  out_decoder_all->size[0] = 1;
  tmp_end_pos_in = emlrtNonNegativeCheckFastR2012b(frame_dec_len, &g_emlrtDCI,
    sp);
  out_decoder_all->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in,
    &f_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)out_decoder_all, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  tmp_end_pos_in = emlrtNonNegativeCheckFastR2012b(frame_dec_len, &g_emlrtDCI,
    sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in, &f_emlrtDCI, sp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    out_decoder_all->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &out_decoder_all_, 2, &c_emlrtRTEI, true);
  i0 = out_decoder_all_->size[0] * out_decoder_all_->size[1];
  out_decoder_all_->size[0] = 1;
  out_decoder_all_->size[1] = (int32_T)frame_dec_len;
  emxEnsureCapacity(sp, (emxArray__common *)out_decoder_all_, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  loop_ub = (int32_T)frame_dec_len;
  for (i0 = 0; i0 < loop_ub; i0++) {
    out_decoder_all_->data[i0] = 0.0;
  }

  ind_bad_prev = 1000.0;
  ind_bad__prev = 1000.0;
  tmp_start_pos = 1.0;
  tmp_start_pos_in = 1.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, num_packet_per_burst, mxDOUBLE_CLASS,
                                (int32_T)num_packet_per_burst, &y_emlrtRTEI, sp);
  kk = 0;
  b_emxInit_real_T(sp, &out_data_soft_now, 1, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &bit_scrm, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &decoded_bits, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &decoded_bits_, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_bit_scrm, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_out_decoder_all_, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_bit_scrm, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_out_decoder_all, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r3, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r4, 1, &emlrtRTEI, true);
  emxInit_creal_T(sp, &b_out_burst_complex_without_UWs, 1, &emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (kk <= (int32_T)num_packet_per_burst - 1)) {
    tmp_end_pos_in = (1.0 + (real_T)kk) * data_symb_len;
    if (tmp_start_pos_in > tmp_end_pos_in) {
      i0 = 1;
      i1 = 1;
    } else {
      i0 = out_burst_complex_without_UWs->size[0];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_start_pos_in, &emlrtDCI, sp);
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, sp);
      i1 = out_burst_complex_without_UWs->size[0];
      loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in, &emlrtDCI,
        sp);
      i1 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i1, &emlrtBCI, sp) + 1;
    }

    emlrtVectorVectorIndexCheckR2012b(out_burst_complex_without_UWs->size[0], 1,
      1, i1 - i0, &emlrtECI, sp);
    loop_ub = b_out_burst_complex_without_UWs->size[0];
    b_out_burst_complex_without_UWs->size[0] = i1 - i0;
    emxEnsureCapacity(sp, (emxArray__common *)b_out_burst_complex_without_UWs,
                      loop_ub, (int32_T)sizeof(creal_T), &emlrtRTEI);
    loop_ub = i1 - i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_out_burst_complex_without_UWs->data[i1] =
        out_burst_complex_without_UWs->data[(i0 + i1) - 1];
    }

    st.site = &emlrtRSI;
    demapDecTest(&st, b_out_burst_complex_without_UWs, Star_data, Star_size,
                 data_symb_len, out_data_soft_now);
    tmp_start_pos_in = tmp_end_pos_in + 1.0;
    i0 = r4->size[0];
    r4->size[0] = 1 + out_data_soft_now->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)r4, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    r4->data[0] = 1.0;
    loop_ub = out_data_soft_now->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      r4->data[i0 + 1] = out_data_soft_now->data[i0];
    }

    st.site = &b_emlrtRSI;
    tpc_decode_light(&st, r4, c_r, &flag_decod, decoded_bits, &b_num_iter);
    *num_iter = b_num_iter;
    i0 = r3->size[0];
    r3->size[0] = 1 + out_data_soft_now->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)r3, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    r3->data[0] = 1.0;
    loop_ub = out_data_soft_now->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      r3->data[i0 + 1] = -out_data_soft_now->data[i0];
    }

    st.site = &c_emlrtRSI;
    tpc_decode_light(&st, r3, c_r, &flag_decod_, decoded_bits_, &b_num_iter_);
    *num_iter_ = b_num_iter_;
    guard1 = false;
    if (flag_FDMA != 0.0) {
      tmp_end_pos_in = (1.0 + (real_T)kk) * packet_dec_len;
      if (tmp_start_pos > tmp_end_pos_in) {
        i0 = 1;
        i1 = 1;
      } else {
        i0 = out_decoder_all->size[1];
        i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_start_pos, &b_emlrtDCI, sp);
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp);
        i1 = out_decoder_all->size[1];
        loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in,
          &b_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i1, &b_emlrtBCI, sp)
          + 1;
      }

      loop_ub = i1 - i0;
      i2 = decoded_bits->size[0] * decoded_bits->size[1];
      emlrtSizeEqCheck1DFastR2012b(loop_ub, i2, &b_emlrtECI, sp);
      loop_ub = r0->size[0] * r0->size[1];
      r0->size[0] = 1;
      r0->size[1] = i1 - i0;
      emxEnsureCapacity(sp, (emxArray__common *)r0, loop_ub, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
      loop_ub = i1 - i0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        r0->data[r0->size[0] * i1] = (i0 + i1) - 1;
      }

      loop_ub = r0->size[0] * r0->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        out_decoder_all->data[r0->data[i0]] = decoded_bits->data[i0];
      }

      if (tmp_start_pos > tmp_end_pos_in) {
        i0 = 1;
        i1 = 1;
      } else {
        i0 = out_decoder_all_->size[1];
        i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_start_pos, &d_emlrtDCI, sp);
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, sp);
        i1 = out_decoder_all_->size[1];
        loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in,
          &d_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i1, &d_emlrtBCI, sp)
          + 1;
      }

      loop_ub = i1 - i0;
      i2 = decoded_bits_->size[0] * decoded_bits_->size[1];
      emlrtSizeEqCheck1DFastR2012b(loop_ub, i2, &c_emlrtECI, sp);
      loop_ub = r0->size[0] * r0->size[1];
      r0->size[0] = 1;
      r0->size[1] = i1 - i0;
      emxEnsureCapacity(sp, (emxArray__common *)r0, loop_ub, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
      loop_ub = i1 - i0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        r0->data[r0->size[0] * i1] = (i0 + i1) - 1;
      }

      loop_ub = r0->size[0] * r0->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        out_decoder_all_->data[r0->data[i0]] = decoded_bits_->data[i0];
      }

      tmp_start_pos = tmp_end_pos_in + 1.0;
      if (1.0 > tmp_end_pos_in) {
        loop_ub = 0;
      } else {
        i0 = out_decoder_all->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI, sp);
        i0 = out_decoder_all->size[1];
        i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in, &c_emlrtDCI,
          sp);
        loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, sp);
      }

      i0 = b_out_decoder_all->size[0] * b_out_decoder_all->size[1];
      b_out_decoder_all->size[0] = 1;
      b_out_decoder_all->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_out_decoder_all, i0, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_out_decoder_all->data[b_out_decoder_all->size[0] * i0] =
          out_decoder_all->data[i0];
      }

      st.site = &d_emlrtRSI;
      filter(&st, b_out_decoder_all, bit_scrm);
      i0 = c_bit_scrm->size[0] * c_bit_scrm->size[1];
      c_bit_scrm->size[0] = 1;
      c_bit_scrm->size[1] = bit_scrm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_bit_scrm, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = bit_scrm->size[0] * bit_scrm->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        c_bit_scrm->data[i0] = bit_scrm->data[i0];
      }

      b_mod(sp, c_bit_scrm, bit_scrm);
      *ind_good = 0.0;
      i0 = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = bit_scrm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = bit_scrm->size[0] * bit_scrm->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        r2->data[i0] = 1.0 - bit_scrm->data[i0];
      }

      st.site = &e_emlrtRSI;
      *ind_bad = HDLC_extract_2(&st, r2, ind_good);
      if (1.0 > tmp_end_pos_in) {
        loop_ub = 0;
      } else {
        i0 = out_decoder_all_->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &e_emlrtBCI, sp);
        i0 = out_decoder_all_->size[1];
        i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_end_pos_in, &e_emlrtDCI,
          sp);
        loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI, sp);
      }

      i0 = b_out_decoder_all_->size[0] * b_out_decoder_all_->size[1];
      b_out_decoder_all_->size[0] = 1;
      b_out_decoder_all_->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_out_decoder_all_, i0, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_out_decoder_all_->data[b_out_decoder_all_->size[0] * i0] =
          out_decoder_all_->data[i0];
      }

      st.site = &f_emlrtRSI;
      filter(&st, b_out_decoder_all_, bit_scrm);
      i0 = b_bit_scrm->size[0] * b_bit_scrm->size[1];
      b_bit_scrm->size[0] = 1;
      b_bit_scrm->size[1] = bit_scrm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_bit_scrm, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = bit_scrm->size[0] * bit_scrm->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_bit_scrm->data[i0] = bit_scrm->data[i0];
      }

      b_mod(sp, b_bit_scrm, bit_scrm);
      *ind_good_ = 0.0;
      i0 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = bit_scrm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = bit_scrm->size[0] * bit_scrm->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        r1->data[i0] = 1.0 - bit_scrm->data[i0];
      }

      st.site = &g_emlrtRSI;
      *ind_bad_ = HDLC_extract_2(&st, r1, ind_good_);
      if ((*ind_bad > ind_bad_prev * 1.2) && (*ind_bad_ > ind_bad__prev * 1.2))
      {
        /*  TEST */
        exitg1 = true;
      } else if ((1.0 + (real_T)kk > thr_num_good) && (((*ind_bad <=
                    ind_bad_prev) && (*ind_bad_ <= ind_bad__prev)) ||
                  (b_num_iter < 4.0) || (b_num_iter_ < 4.0))) {
        *flag_ok = true;

        /*  !!!!!!!!!!! */
        exitg1 = true;
      } else {
        ind_bad_prev = *ind_bad;
        ind_bad__prev = *ind_bad_;
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      kk++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_creal_T(&b_out_burst_complex_without_UWs);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_out_decoder_all);
  emxFree_real_T(&c_bit_scrm);
  emxFree_real_T(&r2);
  emxFree_real_T(&b_out_decoder_all_);
  emxFree_real_T(&b_bit_scrm);
  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&decoded_bits_);
  emxFree_real_T(&decoded_bits);
  emxFree_real_T(&bit_scrm);
  emxFree_real_T(&out_data_soft_now);
  emxFree_real_T(&out_decoder_all_);
  emxFree_real_T(&out_decoder_all);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (perebor8pskTPC.c) */
