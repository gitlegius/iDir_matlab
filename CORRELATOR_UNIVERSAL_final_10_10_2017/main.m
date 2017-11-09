function [UW_mod_flt_tmp, UW_mod_flt_cnj_nrm_tmp,UW_symb_tmp,start_UW_part,end_UW_part,num_samples_per_part_arr] = main(uw,ind_mod,sps,rolloff,len_part_arr,prod_coef_comp)

if nargin == 5
    prod_coef_comp = 1;
end
% disp([uw mod sps rolloff]);

% default prod_coef_comp = 1 + 1i;
% example for normal UW: arr_pos_UW_part = 1;
% example for distributed UW: arr_pos_UW_part = [1 31 61 91 121 151 181 211 241 271 301 331 361 391 421 451 481 511 541 571 601 631 661 691 721 751 781 811 841];

num_part = length(len_part_arr);
num_samples_per_part_arr = fix((len_part_arr/ind_mod)*sps);
start_UW_part = (len_part_arr+1)*sps-1;
end_UW_part = start_UW_part+num_samples_per_part_arr-1;

UW_mod_flt_cnj_nrm_tmp = complex(zeros(sum(num_samples_per_part_arr),1));
UW_mod_flt_tmp = complex(zeros(sum(num_samples_per_part_arr),1));
UW_symb_tmp = complex(zeros(sum(num_samples_per_part_arr/sps),1));

len_part_arr = [0; len_part_arr];
num_samples_per_part_arr = [0; num_samples_per_part_arr];
pos_bits_end = 0; pos_samp_end = pos_bits_end; pos_symb_end = pos_samp_end;
pos_bits_end_last = 0;
pos_samp_end_last = 0;
pos_symb_end_last = 0;
for ind_part = 2:num_part+1
    
    pos_bits_end = pos_bits_end + len_part_arr(ind_part);
    pos_samp_end = pos_samp_end + num_samples_per_part_arr(ind_part);
    pos_symb_end = pos_symb_end + num_samples_per_part_arr(ind_part)/sps;
    
    [UW_mod_flt,UW_mod_flt_cnj_nrm,UW_symb] = UW_create_new0(uw(pos_bits_end_last+1:pos_bits_end).',ind_mod,sps,rolloff,prod_coef_comp);
        UW_mod_flt_tmp(pos_samp_end_last+1:pos_samp_end) = UW_mod_flt.';
        UW_mod_flt_cnj_nrm_tmp(pos_samp_end_last+1:pos_samp_end) = UW_mod_flt_cnj_nrm.';
        UW_symb_tmp(pos_symb_end_last+1:pos_symb_end) = UW_symb.';
        
        pos_bits_end_last = pos_bits_end;
        pos_samp_end_last = pos_samp_end;
        pos_symb_end_last = pos_symb_end;
        
end

% disp(UW_mod_flt_tmp);
% disp(UW_mod_flt_cnj_nrm_tmp);
end