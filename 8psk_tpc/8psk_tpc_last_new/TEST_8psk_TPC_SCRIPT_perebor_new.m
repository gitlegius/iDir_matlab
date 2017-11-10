
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

pi_div_4 = pi/4;

%Star_=exp(1i*pi*[0 1 7 6 3 2 4 5]/4)*(0.9239 + 0.3827i); % DVB_RCS2
%Star_=exp(1i*pi*[0 1 3 2 7 6 4 5]/4)*(0.9239 + 0.3827i); % 1
%Star_=exp(1i*pi*[5 4 3 2 1 0 7 6]/4)*(0.9239 + 0.3827i); % 2

V=perms(0:7);
tic

parfor ind_perm=1:40320
    % for ind_perm=13407%40320
    %     disp(ind_perm)
    
    Star_=exp(1i*pi*V(ind_perm,:)/4)*(0.9239 + 0.3827i); % DVB_S2
     
    Star_ = Star_/std(Star_);
    for ind_sign = 0:1
        %     for ind_sign = 0
        sign_tmp = ind_sign*2-1;
        for k = 0:3
            %         for k = 2
            
            Star = Star_*exp(sign_tmp*1i*k*(pi_div_4));%*(0.9239 + 0.3827i); % DVB_RCS
            
            [flag_ok,ind_good,ind_bad,ind_good_,ind_bad_,num_iter,num_iter_] = perebor8pskTPC_mex(out_burst_complex_without_UWs,data_symb_len,num_packet_per_burst,Star,frame_dec_len,packet_dec_len,c_r,flag_FDMA);
            if flag_ok
                fid_log = fopen(path_name_log_str,'a');
                
                log_str = ['sign_tmp = ' int2str(sign_tmp) '; k = ' int2str(k) '; ind_perm = ' int2str(ind_perm)...
                    '; ind_bad = ' int2str(ind_bad) '; ind_good = ' int2str(ind_good)...
                    '; ind_bad_ = ' int2str(ind_bad_) '; ind_good_ = ' int2str(ind_good_)...
                    '; num_iter = ' int2str(num_iter) '; num_iter_ = ' int2str(num_iter_)];
                fprintf(fid_log,'%s\r\n',log_str);
                
                disp(log_str);
            end

        end
    end
end
toc