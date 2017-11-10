function [flag_ok,ind_good,ind_bad,ind_good_,ind_bad_,num_iter,num_iter_] = perebor8pskTPC(out_burst_complex_without_UWs,data_symb_len,num_packet_per_burst,Star,frame_dec_len,packet_dec_len,c_r,flag_FDMA,thr_num_good)

%%
ind_good = 0;ind_bad = ind_good; 
ind_bad_ = ind_bad; ind_good_ = ind_bad;
num_iter = ind_bad_;num_iter_ = num_iter;
%%
flag_ok = false;
out_decoder_all = zeros(1,frame_dec_len);
out_decoder_all_ = out_decoder_all;
ind_bad_prev = 1000;
ind_bad__prev = 1000;
tmp_start_pos = 1;
tmp_start_pos_in = 1;
for kk = 1:num_packet_per_burst
    tmp_end_pos_in = kk*data_symb_len;
    out_data_soft_now = demapDecTest(out_burst_complex_without_UWs(tmp_start_pos_in:tmp_end_pos_in),Star,data_symb_len);
    tmp_start_pos_in = tmp_end_pos_in + 1;
    
    [flag_decod,~,decoded_bits,num_iter] = tpc_decode_light([1;out_data_soft_now],c_r);
    [flag_decod_,~,decoded_bits_,num_iter_] = tpc_decode_light([1;-out_data_soft_now],c_r);
    
    
    if flag_FDMA
        tmp_end_pos= kk*packet_dec_len;
        out_decoder_all(tmp_start_pos:tmp_end_pos) = decoded_bits;
        out_decoder_all_(tmp_start_pos:tmp_end_pos) = decoded_bits_;
        tmp_start_pos = tmp_end_pos+1;
        
        bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all(1:tmp_end_pos));bit_scrm=mod(bit_scrm,2);
        [ind_good,ind_bad] = HDLC_extract_2(1-bit_scrm,0);
     
        bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all_(1:tmp_end_pos));bit_scrm=mod(bit_scrm,2);
        [ind_good_,ind_bad_] = HDLC_extract_2(1-bit_scrm,0);
        
        if (ind_bad>ind_bad_prev*1.2)&&(ind_bad_>ind_bad__prev*1.2) % TEST
            return;
        elseif  kk > thr_num_good&&(((ind_bad<=ind_bad_prev)&&(ind_bad_<=ind_bad__prev))||(num_iter<4||num_iter_<4))
            flag_ok = true; % !!!!!!!!!!!
            return;
            
        end
        
        ind_bad_prev = ind_bad;
        ind_bad__prev = ind_bad_;
        
    end
end