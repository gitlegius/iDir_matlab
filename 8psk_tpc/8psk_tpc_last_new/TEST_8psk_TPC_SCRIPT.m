
clear;
fclose all;

load out_burst_complex_test_8psk;

% out_burst_complex
M = 8;

% out_burst_complex = 1i*real(out_burst_complex)+imag(out_burst_complex);

out_burst_complex = out_burst_complex/std(out_burst_complex);

out_burst_complex_without_UWs = out_burst_complex(33:end)/std(out_burst_complex(33:end));

data_soft_len = 4095;
num_packet_per_burst = 80;
c_r = 5;
flag_FDMA = 1;

N=length(out_burst_complex_without_UWs);

% N = 5480;
%                 Star_=exp(1i*(0:7)*pi/4);
% Star_=exp(1i*pi*[1 0 4 5 2 7 3 6]/4)*(0.9239 + 0.3827i); % DVB_S2

Star_=exp(1i*pi*[0 1 7 6 3 2 4 5]/4)*(0.9239 + 0.3827i); % DVB_RCS2

% Star_=exp(1i*pi*[0 1 3 2 7 6 4 5]/4)*(0.9239 + 0.3827i); % 1


% Star_=exp(1i*pi*[5 4 3 2 1 0 7 6]/4)*(0.9239 + 0.3827i); % 2


Star_ = Star_/std(Star_);

%         Star=[0.923879532+0.382683432i 0.923879532-0.382683432i -0.923879532+0.382683432i -0.923879532-0.382683432i 0.382683432+0.923879532i 0.382683432-0.923879532i -0.382683432+0.923879532i -0.382683432-0.923879532i];
%%

for ind_sign = 0:1
    sign_tmp = ind_sign*2-1;
    for k = 0:16
        
        Star = Star_*exp(sign_tmp*1i*k*(pi/8));%*(0.9239 + 0.3827i); % DVB_RCS
        %      Star = Star_*exp(1i*k*(-pi/4));%*(0.9239 + 0.3827i); % DVB_RCS
        out_data_soft_now = demapDecTest_mex(out_burst_complex_without_UWs,Star,N);
        
        for delay = 1:1
            out_data_soft = out_data_soft_now(delay:end);
            
            %     out_data_soft = [1;out_data_soft];
            
            out_decoder_all = [];
            out_decoder_all_ = [];
            ind_bad_prev = 1000;
            ind_bad__prev = 1000;
            for kk = 1:num_packet_per_burst
                %                         out_data_soft_tmp = out_data_soft;
                %                         out_data_soft(1:2:end) = out_data_soft_tmp(2:2:end);
                %                         out_data_soft(2:2:end) = out_data_soft_tmp(1:2:end);
                
                [flag_decod,~,decoded_bits] = tpc_decode([1;out_data_soft((kk-1)*data_soft_len+1:kk*data_soft_len)],c_r);
                
                [flag_decod_,~,decoded_bits_] = tpc_decode([1;-out_data_soft((kk-1)*data_soft_len+1:kk*data_soft_len)],c_r);
                
                if flag_FDMA
                    out_decoder_all = [out_decoder_all,decoded_bits];
                    out_decoder_all_ = [out_decoder_all_,decoded_bits_];
                    
                    bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all);bit_scrm=mod(bit_scrm,2);
                    [ind_good,ind_bad] = HDLC_extract_2(1-bit_scrm);
                    if ind_good||~ind_bad
                        flag_decod = 1;
                        break;
                    end
                    
                    
                    bit_scrm=filter([1 0 0 1 zeros(1,16) 1],1,out_decoder_all_);bit_scrm=mod(bit_scrm,2);
                    [ind_good_,ind_bad_] = HDLC_extract_2(1-bit_scrm);
                    if ind_good_||~ind_bad_
                        flag_decod_ = 1;
                        break;
                    end
                    
                    if (ind_bad>ind_bad_prev*1.2)&&(ind_bad_>ind_bad__prev*1.2) % TEST
                        break;
                    end
                    
                    ind_bad_prev = ind_bad;
                    ind_bad__prev = ind_bad_;
                    
                end
            end
            
            
            if flag_decod||flag_decod_
                disp('flag_OK!');
                keyboard();
            end
        end
        
    end
end