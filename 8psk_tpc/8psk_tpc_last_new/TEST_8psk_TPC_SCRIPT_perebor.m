
clear;
fclose all;
%% lof out
log_dir = 'out_log';
if ~isdir(log_dir)
    mkdir(log_dir);
end
path_name_log_str = [log_dir '\8psk_tpc_perebor_test_log.txt'];
delete(path_name_log_str);
%%
load out_burst_complex_test_8psk;

% out_burst_complex

out_burst_complex = 1i*real(out_burst_complex)+imag(out_burst_complex);

out_burst_complex = out_burst_complex/std(out_burst_complex);

out_burst_complex_without_UWs = out_burst_complex(33:end)/std(out_burst_complex(33:end));

M = 8;
ind_mod = log2(M);
data_soft_len = 4095;
data_symb_len = data_soft_len/ind_mod;
num_packet_per_burst = 80;
c_r = 5;
flag_FDMA = 1;

packet_dec_len = 3249; 
frame_dec_len = packet_dec_len*num_packet_per_burst;

% N=length(out_burst_complex_without_UWs);

pi_div_4 = pi/4;

% N = 5480;
%                 Star_=exp(1i*(0:7)*pi/4);
V=perms(0:7);
tic

% flag_decod_ = 1; flag_decod = 1sign_tmp = 1 ;k = 2; ind_perm = 17516
% ind_bad
% flag_decod_ = 1; flag_decod = 1sign_tmp = 1 ;k = 1; ind_perm = 12208
% No flags
% flag_decod_ = 1; flag_decod = 1sign_tmp = -1 ;k = 2; ind_perm = 13407

parfor ind_perm=1:40320%40320
% for ind_perm=13407%40320
%     disp(ind_perm)
    
    Star_=exp(1i*pi*V(ind_perm,:)/4)*(0.9239 + 0.3827i); % DVB_S2
    
    %Star_=exp(1i*pi*[0 1 7 6 3 2 4 5]/4)*(0.9239 + 0.3827i); % DVB_RCS2
    
    %Star_=exp(1i*pi*[0 1 3 2 7 6 4 5]/4)*(0.9239 + 0.3827i); % 1
    
    
    %Star_=exp(1i*pi*[5 4 3 2 1 0 7 6]/4)*(0.9239 + 0.3827i); % 2
    
    
    Star_ = Star_/std(Star_);
    
    %         Star=[0.923879532+0.382683432i 0.923879532-0.382683432i -0.923879532+0.382683432i -0.923879532-0.382683432i 0.382683432+0.923879532i 0.382683432-0.923879532i -0.382683432+0.923879532i -0.382683432-0.923879532i];
    %%
    
    for ind_sign = 0:1
%     for ind_sign = 0
        sign_tmp = ind_sign*2-1;
        for k = 0:3
%         for k = 2
            
            Star = Star_*exp(sign_tmp*1i*k*(pi_div_4));%*(0.9239 + 0.3827i); % DVB_RCS
            %      Star = Star_*exp(1i*k*(-pi/4));%*(0.9239 + 0.3827i); % DVB_RCS
%             out_data_soft_now = demapDecTest_mex(out_burst_complex_without_UWs,Star,N);
            %out_data_soft_now = demapDecTest(out_burst_complex_without_UWs,Star,N);
            
%             for delay = 1:1
%                 out_data_soft = out_data_soft_now(delay:end);
                
                %     out_data_soft = [1;out_data_soft];
                
                out_decoder_all = zeros(1,frame_dec_len);
                out_decoder_all_ = out_decoder_all;
                ind_bad_prev = 1000;
                ind_bad__prev = 1000;
                tmp_start_pos = 1;
                tmp_start_pos_in = 1;
                for kk = 1:num_packet_per_burst
                    tmp_end_pos_in = kk*data_symb_len;
                    out_data_soft_now = demapDecTest_mex(out_burst_complex_without_UWs(tmp_start_pos_in:tmp_end_pos_in),Star,data_symb_len);
                    tmp_start_pos_in = tmp_end_pos_in + 1;
                    
                    [flag_decod,~,decoded_bits] = tpc_decode([1;out_data_soft_now],c_r);
                    [flag_decod_,~,decoded_bits_] = tpc_decode([1;-out_data_soft_now],c_r);
                    
                    
                    if flag_FDMA
                        tmp_end_pos= kk*packet_dec_len;
                        out_decoder_all(tmp_start_pos:tmp_end_pos) = decoded_bits;
                        out_decoder_all_(tmp_start_pos:tmp_end_pos) = decoded_bits_;
                        tmp_start_pos = tmp_end_pos+1;
                        
                        bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all(1:tmp_end_pos));bit_scrm=mod(bit_scrm,2);
                        [ind_good,ind_bad] = HDLC_extract_2_mex(1-bit_scrm,0);
                        
                        if ind_good||~ind_bad
                            flag_decod = 1;
%                             break;
                        else
                            flag_decod = 0;
                        end
                        
                        
                        bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all_(1:tmp_end_pos));bit_scrm=mod(bit_scrm,2);
                        %[ind_good_,ind_bad_] = HDLC_extract_2(1-bit_scrm);
                        [ind_good_,ind_bad_] = HDLC_extract_2_mex(1-bit_scrm,0);
                        if ind_good_||~ind_bad_
                            flag_decod_ = 1;
                            %break;
                        else
                            flag_decod = 0;
                        end
                        
                        if (ind_bad>ind_bad_prev*1.2)&&(ind_bad_>ind_bad__prev*1.2)%&&~(ind_good||ind_good_) % TEST
                            break;
                        elseif  kk > 50&&(ind_bad<=ind_bad_prev)&&(ind_bad_<=ind_bad__prev)

                                fid_log = fopen(path_name_log_str,'a');
                                
                                log_str = ['flag_decod_ = ' int2str(flag_decod_) '; flag_decod = ' int2str(flag_decod)...
                                    '; sign_tmp = ' int2str(sign_tmp) '; k = ' int2str(k) '; ind_perm = ' int2str(ind_perm)...
                                    '; ind_bad = ' int2str(ind_bad) '; ind_good = ' int2str(ind_good)...
                                    '; ind_bad_ = ' int2str(ind_bad_) '; ind_good_ = ' int2str(ind_good_)];
                                fprintf(fid_log,'%s\r\n',log_str);
                                
                                disp(log_str);

                            
                        end
                        
                        ind_bad_prev = ind_bad;
                        ind_bad__prev = ind_bad_;
                        
                    end
                end
                
                
%                 if flag_decod||flag_decod_
%                     disp('flag_OK!');
% %                     keyboard();
%                 end
%             end
            
        end
    end
end
toc