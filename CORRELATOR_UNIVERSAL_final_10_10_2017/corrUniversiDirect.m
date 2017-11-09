function [arr_pos_corr_out,arr_UW_IDs_out,arr_vals_corr_out,data_out] = corrUniversiDirect(file_str,format_type,UWs_param_for_corr,max_iq_len_packet,min_num_packet,N_sps_inp)

% UWs_param_for_corr = struct('num_UWs_corr',num_UWs_corr_now,'UWs_bits_corr',{UWs_bits_corr(ind_UWs_for_corr_now)},'arr_pos_UW_bits_corr',{arr_pos_UW_bits_corr(ind_UWs_for_corr_now)},'ind_mod_cr_UW_corr',ind_mod_cr_UW_corr(ind_UWs_for_corr_now),'arr_rolloff',arr_rolloff(ind_UWs_for_corr_now),'arr_UW_IDs',arr_UW_IDs(ind_UWs_for_corr_now),'arr_min_len_2sps_packet',arr_min_len_2sps_packet(ind_UWs_for_corr_now),'arr_thr_NORM_corr',arr_thr_NORM_corr(ind_UWs_for_corr_now));

if nargin == 5
    N_sps_inp = 4;
end

%% Open file
fid_corr = fopen(file_str,'r');% format_type = 'int16';

% file size
fseek(fid_corr,0,'eof'); filesize = ftell(fid_corr); frewind(fid_corr);
byte_num = byteNumType(format_type);

N_r_IQperBlock = 5e5; % num iq per block reading

number_of_blocks_all_file = ceil(filesize/(N_r_IQperBlock*byte_num));

if nargin < 5
    number_of_blocks = number_of_blocks_all_file;
else
    % calculating required number of data in format_type (iq)
    max_iq_read = ceil(min_num_packet*max_iq_len_packet); %N_sps_inp = 4;
    if max_iq_read > N_r_IQperBlock
        number_of_blocks = ceil(max_iq_read/N_r_IQperBlock);
        if number_of_blocks_all_file/number_of_blocks < 1 % TODO check
            disp('Warning! File record is small!');
            N_r_IQperBlock = max_iq_read;
            number_of_blocks = ceil(filesize/(N_r_IQperBlock*byte_num));
        end
    else
        N_r_IQperBlock = max_iq_read;
        number_of_blocks = 1;
    end
    
    if number_of_blocks > number_of_blocks_all_file
        disp(['Attention! File record is less than required for for max_iq_len_packet = ' int2str(max_iq_len_packet)]);
        number_of_blocks = number_of_blocks_all_file;
    end
    
end
number_of_blocks_str = int2str(number_of_blocks);

N_sps_corr = 2;
decim = fix(N_sps_inp/N_sps_corr);

% memory allocation
start_UW_samp_pos_corr = cell(UWs_param_for_corr.num_UWs_corr,1);
UW_mod_flt_cnj_nrm_arr = start_UW_samp_pos_corr;
len_buff = zeros(UWs_param_for_corr.num_UWs_corr,1);
arr_num_part_corr = len_buff;
arr_num_samples_per_part_corr = arr_num_part_corr;

% UWs creating
for ind_UW_cr = 1:UWs_param_for_corr.num_UWs_corr
    
    num_p = 1;
    len_p = 1;
    arr_len_part_tmp = zeros(256,1);
    for k = 1:length(UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr})-1
        
        if (UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr}(k+1)-UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr}(k))>1
            arr_len_part_tmp(num_p) = len_p;
            num_p = num_p + 1;
            len_p = 1;
        else
            len_p = len_p + 1;
        end
        
    end
    arr_len_part_tmp(num_p) = len_p;
    arr_num_part_corr(ind_UW_cr) = num_p;
    arr_num_samples_per_part_corr(ind_UW_cr) = len_p*N_sps_corr;
    
    for k = 1:1:length(UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr}) % TODO
        start_UW_samp_pos_corr{ind_UW_cr}((k-1)*N_sps_corr+1:k*N_sps_corr) = [(UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr}(k)+1)*N_sps_corr-1; (UWs_param_for_corr.arr_pos_UW_bits_corr{ind_UW_cr}(k)+1)*N_sps_corr]; % Todo cycle universal
    end
    
    len_buff(ind_UW_cr) = start_UW_samp_pos_corr{ind_UW_cr}(end); % todo up table
    
    [~, UW_mod_flt_cnj_nrm_tmp] = main(UWs_param_for_corr.UWs_bits_corr{ind_UW_cr},UWs_param_for_corr.ind_mod_cr_UW_corr(ind_UW_cr),N_sps_corr,UWs_param_for_corr.arr_rolloff(ind_UW_cr),arr_len_part_tmp(1:num_p));
    
    UW_mod_flt_cnj_nrm_arr{ind_UW_cr} = UW_mod_flt_cnj_nrm_tmp;
end


% Initialization and memory allocation for correlation searching
len_UW_all_interv_buff = max(len_buff);

% if nargin == 4
%     len_UW_all_interv_guard = len_UW_all_interv_buff;
% else
    len_UW_all_interv_guard = min(UWs_param_for_corr.arr_min_len_2sps_packet);
% end

buff_in_data = complex(zeros(1,len_UW_all_interv_buff));
arr_vals = zeros(UWs_param_for_corr.num_UWs_corr,3);

% Thr_NORM_corr = [0.7; 0.7; 0.75; 0.75; 0.75]; % TODO for adaptive
Thr_NORM_part = UWs_param_for_corr.arr_thr_NORM_corr;
arr_num_ok_part = zeros(UWs_param_for_corr.num_UWs_corr,1);
arr_num_ok_part_prev = arr_num_ok_part;
norm_buff_corr_tmp = 0;
ind_interval = len_UW_all_interv_buff;
flag_check = 0;
k_befor_block = 0;
max_corr_in_data = ceil((N_r_IQperBlock*number_of_blocks)/(len_UW_all_interv_guard*2));  % max for use by us in scanner
arr_pos_corr_mem = zeros(max_corr_in_data,1);
arr_ind_UW_mem = arr_pos_corr_mem;
arr_vals_corr_mem = zeros(3,max_corr_in_data);
ind_corr = 0;
num_block = 0;

N_r_complex = fix(N_r_IQperBlock/2);

data_out = complex(zeros(N_r_complex*number_of_blocks,1));

while ~feof(fid_corr) && num_block < number_of_blocks
    
    num_block = num_block + 1;
    disp([int2str(num_block) ' block processing of ' number_of_blocks_str])
    
    x_read = fread(fid_corr,N_r_IQperBlock,format_type);
    z = x_read(1:2:end-1) + 1i*x_read(2:2:end);
    
    data_out((num_block-1)*N_r_complex+1:(num_block-1)*N_r_complex+length(z)) = z;
    
    for k = decim:decim:length(z)
        buff_in_data = [buff_in_data(2:end) z(k)];
        
        arr_vals(:,3) = 0;
        
        for ind_UW = 1:UWs_param_for_corr.num_UWs_corr
            num_ok_part = 0;
            
            
            UW_data_all = buff_in_data(start_UW_samp_pos_corr{ind_UW});
            
            for ind_part = 1:arr_num_part_corr(ind_UW) % TODO optimization (norm,buff,div etc.)
                
                pre_eval_part_pos_corr = (ind_part-1)*arr_num_samples_per_part_corr(ind_UW)+1:ind_part*arr_num_samples_per_part_corr(ind_UW);
                
                UW_data_part = UW_data_all(pre_eval_part_pos_corr);
                norm_buff_corr_tmp = norm(UW_data_all(pre_eval_part_pos_corr));
                
                if ~norm_buff_corr_tmp
                    break;
                end
                
                arr_vals_tmp = abs(UW_data_part*UW_mod_flt_cnj_nrm_arr{ind_UW}(pre_eval_part_pos_corr));
                
                arr_vals_norm_tmp = arr_vals_tmp/norm_buff_corr_tmp;
                if arr_vals_norm_tmp > UWs_param_for_corr.arr_thr_NORM_corr(ind_UW)
                    num_ok_part = num_ok_part + 1;
                end
                
                arr_vals(ind_UW,3) = arr_vals(ind_UW,3) + arr_vals_norm_tmp;
            end
            
            if ~norm_buff_corr_tmp
                break;
            end
            
            arr_vals(ind_UW,3) = arr_vals(ind_UW,3)/arr_num_part_corr(ind_UW);
            
            arr_num_ok_part(ind_UW) = num_ok_part/arr_num_part_corr(ind_UW);
            
        end
        
        ind_interval = ind_interval + 1;
        %% ----------------Comparison with threshold---------------
        ind_uw_thr_corr = find(arr_vals(:,2)>UWs_param_for_corr.arr_thr_NORM_corr);
        if sum(ind_uw_thr_corr)
            [~,ind_max_nbpp_tmp] = max(arr_num_samples_per_part_corr(ind_uw_thr_corr));
            ind_uw_max_corr = ind_uw_thr_corr(ind_max_nbpp_tmp);
            
            %% --------------checking rule of three points-----------------------
            if arr_vals(ind_uw_max_corr,1) > arr_vals(ind_uw_max_corr,2)
                B2 = false;
            else
                B2 = arr_vals(ind_uw_max_corr,2) > arr_vals(ind_uw_max_corr,3);
            end
            
            if B2 && arr_num_ok_part_prev(ind_uw_max_corr) > Thr_NORM_part(ind_uw_max_corr)% && (num_ok_prev > Thr_num)
                
                if flag_check == 0
                    flag_check = 1;
                    arr_vals_corr_now = arr_vals(ind_uw_max_corr,:);
                    arr_pos_corr_now = k_befor_block + (k-len_UW_all_interv_buff*decim+N_sps_inp);
                    ind_UW_now = ind_uw_max_corr;
                    %                 ind_uw_part_max == ind_uw_max_corr
                    ind_interval = 0;
                elseif arr_vals(ind_uw_max_corr,2) > arr_vals_corr_now(2)
                    arr_vals_corr_now = arr_vals(ind_uw_max_corr,:);
                    arr_pos_corr_now = k_befor_block + (k-len_UW_all_interv_buff*decim+N_sps_inp);
                    ind_UW_now = ind_uw_max_corr;
                    %                 ind_uw_part_max == ind_uw_max_corr
                    ind_interval = 0;
                end
                
            end
            
        end
        
        %% guard window (false correlation filter)
        if flag_check && ind_interval >= len_UW_all_interv_guard
            ind_corr = ind_corr + 1;
            arr_pos_corr_mem(ind_corr) = arr_pos_corr_now;
            arr_ind_UW_mem(ind_corr) = UWs_param_for_corr.arr_UW_IDs(ind_UW_now);
            arr_vals_corr_mem(:,ind_corr) = arr_vals_corr_now;
            flag_check = 0;
        end
        
        arr_vals(:,1) = arr_vals(:,2);
        arr_vals(:,2) = arr_vals(:,3);
        
        arr_num_ok_part_prev = arr_num_ok_part;
    end
    
    if 1,
        %% plot out corr
        if ind_corr > 0
            arr_pos_corr_plot = fix((arr_pos_corr_mem-k_befor_block)/decim);
            arr_vals_plot = zeros(1,length(z(1:decim:end)));
            abs_z = abs(z(1:decim:end));
            arr_vals_plot(arr_pos_corr_plot(arr_pos_corr_plot>0)) = arr_vals_corr_mem(2,(arr_pos_corr_plot>0));
            figure(1);plot(abs_z/(2*max(abs_z))); ylim([0,1]);
            hold on;
            plot(arr_vals_plot);shg
            hold off;
            drawnow;
            clear abs_z;
        end
        %%
    end
    k_befor_block = k_befor_block + length(z);
end

arr_pos_corr_out = arr_pos_corr_mem(1:ind_corr);
arr_UW_IDs_out = arr_ind_UW_mem(1:ind_corr);
arr_vals_corr_out = arr_vals_corr_mem(:,1:ind_corr);