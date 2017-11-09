clear;
fclose all;

max_UW_interval_sec = 127e-3; % 125 ms from datasheet(I.R.) but if Fd is wrong max_UW_interval_sec is wrong too
%% Open file

%% iDx_3.2
% Intelsat 20
file_str = 'input_data\out_flt+resamp2sps_f0-8040000_Fs3599064_Fd899766_int16_fileName_Intelsat 20_Ku1_V_11033500000.bin_04-Sep-2017.bin'; format_type = 'int16'; Fs = 3599064; N_sps_inp = 4; flag_FDMA = 0; % true - FDMA(test SCPC); false - TDMA
ind_UWs_for_corr_now = 5;
%%
N_sps_corr = 2;
decim = fix(N_sps_inp/N_sps_corr);
%%
if flag_FDMA
    max_iq_len_packet = Fs*2*max_UW_interval_sec;
else
    max_iq_len_packet = 8296*4; %(~8296 iq max len inroute packet 4 - N_sps_in)
end
ind_UWs_for_corr_all = 1:5;

arr_UW_IDs = 1:5;

num_UWs_corr = length(ind_UWs_for_corr_all);

arr_thr_NORM_corr = [0.7; 0.7; 0.72; 0.72; 0.72];

UWs_bits_corr{1} = [1 1 0 1 1 0 1 0 1 1 0 1 1 1 0 0 0 0 1 0 0 0 1 0 1 1 1 0 1 0 0 0]'; %[0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 1 1 0 0 0 0 1 1 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 1 1 0 1 1 0 1 1 0 1 1 0 0 0 0 1 1 0 1 1 0 1 1 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 1 1 0 1 1 0 1 1 0];
UWs_bits_corr{2} = [0 1 1 0 1 1 1 1 1 1 1 1 0 1 0 1 1 0 0 0 0 0 1 1 1 0 0 1 1 0 0 0 1 1 1 0 1 0 0 1 0 0 0 1 1 0 1 1 0 1 0 0]';
UWs_bits_corr{3} = [0 1 0 1 1 1 1 0 0 0 1 1 0 0 1 1 1 0 0 0 0 1 0 0 0 0 0 1 1 0 0 0 1 0 0 1 1 0 1 1 1 1 1 1 0 1 1 0 0 1 0 1 0 0 0 1 1 1]';
UWs_bits_corr{4} = [0 1 0 0 1 0 1 1 0 1 0 0 0 0 1 1 1 1 0 0 0 1 1 0 1 0 1 0 0 0 0 1 0 0 0 1 0 0 1 0 1 1 1 0 0 0 0 0 1 0 0 0 1 0 1 0 1 1 1 0]';
UWs_bits_corr{5} = [0 1 0 1 0 1 0 1 1 1 0 1 1 0 0 0 0 0 1 0 1 1 1 0 0 0 0 1 1 1 0 0 1 0 1 1 0 0 0 0 0 1 0 0 0 0 1 0 0 0 1 1 0 1 1 0]';

arr_pos_UW_bits_corr{1} = [1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32]';
arr_pos_UW_bits_corr{2} = [1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52]';
arr_pos_UW_bits_corr{3} = [1 2 31 32 61 62 91 92 121 122 151 152 181 182 211 212 241 242 271 272 301 302 331 332 361 362 391 392 421 422 451 452 481 482 511 512 541 542 571 572 601 602 631 632 661 662 691 692 721 722 751 752 781 782 811 812 841 842]';
arr_pos_UW_bits_corr{4} = [1 2 3 31 32 33 61 62 63 91 92 93 121 122 123 151 152 153 181 182 183 211 212 213 241 242 243 271 272 273 301 302 303 331 332 333 361 362 363 391 392 393 421 422 423 451 452 453 481 482 483 511 512 513 541 542 543 571 572 573]';
arr_pos_UW_bits_corr{5} = [1 2 3 4 31 32 33 34 61 62 63 64 91 92 93 94 121 122 123 124 151 152 153 154 181 182 183 184 211 212 213 214 241 242 243 244 271 272 273 274 301 302 303 304 331 332 333 334 361 362 363 364 391 392 393 394]';

ind_mod_cr_UW_corr = [1; 1; 1; 1; 1];
arr_rolloff = [0.25; 0.25; 0.25; 0.25; 0.25];

%% INIT. packets param for all UWs (groups)

% length burst(packet) with UW
len_bits_packet_arr{1} = [4444; 4152; 1088; 1088; 4160; 1664; 1132; 2784; 1878; 5320; 1392; 1893; 1215; 16448; 16480; 4192]; % TODO for outroute
len_bits_packet_arr{2} = [1652; 1252; 1866; 1076; 1076; 1076; 4148];
len_bits_packet_arr{3} = [2186; 1946; 1704; 5632; 4696; 4380; 5634; 4698; 4383];
len_bits_packet_arr{4} = [1335; 1338; 1188; 3026; 2268];
len_bits_packet_arr{5} = [3140; 1848; 1392; 1236; 2364; 2103; 1965; 1839];

ind_mod_packet_arr{1} = [2; 2; 2; 2; 2; 2; 2; 2; 2; 2; 3; 3; 3; 2; 3; 3];
ind_mod_packet_arr{2} = [1; 1; 1; 1; 1; 1; 1];
ind_mod_packet_arr{3} = [1; 2; 2; 2; 2; 2; 3; 3; 3];
ind_mod_packet_arr{4} = [1; 2; 2; 2; 2];
ind_mod_packet_arr{5} = [1; 2; 3; 3; 3; 3; 3; 3];

%%
arr_len_2sps_packet = cell(1,num_UWs_corr);
arr_min_len_2sps_packet = zeros(num_UWs_corr,1);
for k = 1:num_UWs_corr
    ind_UW_cr = ind_UWs_for_corr_all(k);
    arr_len_2sps_packet{ind_UW_cr} = (len_bits_packet_arr{ind_UW_cr}./ind_mod_packet_arr{ind_UW_cr})*N_sps_corr;
    arr_min_len_2sps_packet(ind_UW_cr) = min(arr_len_2sps_packet{ind_UW_cr});% up to base table
end

disp('Correlation...')
tic

%% correlator
min_num_packet = 5; % min num packet in signal for corr.  
num_UWs_corr_now = length(ind_UWs_for_corr_now);

UWs_param_for_corr = struct('num_UWs_corr',num_UWs_corr_now,'UWs_bits_corr',{UWs_bits_corr(ind_UWs_for_corr_now)},'arr_pos_UW_bits_corr',{arr_pos_UW_bits_corr(ind_UWs_for_corr_now)},'ind_mod_cr_UW_corr',ind_mod_cr_UW_corr(ind_UWs_for_corr_now),'arr_rolloff',arr_rolloff(ind_UWs_for_corr_now),'arr_UW_IDs',arr_UW_IDs(ind_UWs_for_corr_now),'arr_min_len_2sps_packet',arr_min_len_2sps_packet(ind_UWs_for_corr_now),'arr_thr_NORM_corr',arr_thr_NORM_corr(ind_UWs_for_corr_now));

[arr_pos_corr_out,arr_UW_IDs_corr_out,arr_vals_corr_out,data_out] = corrUniversiDirect(file_str,format_type,UWs_param_for_corr,max_iq_len_packet,min_num_packet,N_sps_inp);

toc
disp('FINISH!')