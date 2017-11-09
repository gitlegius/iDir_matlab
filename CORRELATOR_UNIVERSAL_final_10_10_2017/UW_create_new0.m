function [UW_mod_flt,UW_mod_flt_cnj_nrm,UW_symb] = UW_create_new0(UW_bits,ind_mod_,N_sps,rolloff,prod_coef_comp)

if nargin == 4
    prod_coef_comp = 1;
end
span = 6;
h_flt = rcosdesign(rolloff,6,N_sps,'sqrt');
len_h_flt = span*N_sps+1;
len_h_flt_div_2 = fix(len_h_flt/2);

switch ind_mod_
    case 0 %OQPSK HNS
        delay_sps = N_sps/2;
        UW_symb_re = ((2*UW_bits(1:2:end) - 1)*prod_coef_comp)/sqrt(2);
        UW_symb_im = ((2*UW_bits(2:2:end) - 1)*prod_coef_comp)/sqrt(2);
        UW_symb = UW_symb_re + 1i*UW_symb_im;
        
        UW_symb_re_ups = upsample(UW_symb_re,N_sps);
        UW_symb_im_ups  = upsample(UW_symb_im,N_sps);
        
        UW_mod_re_flt_tmp = filter(h_flt,1,[UW_symb_re_ups zeros(1,len_h_flt_div_2)]); UW_mod_re_flt = UW_mod_re_flt_tmp(len_h_flt_div_2+1:end);
        UW_mod_im_flt_tmp = filter(h_flt,1,[UW_symb_im_ups zeros(1,len_h_flt_div_2)]); UW_mod_im_flt = UW_mod_im_flt_tmp(len_h_flt_div_2+1-delay_sps:end-delay_sps);
        
        UW_mod_flt = UW_mod_re_flt + 1i*UW_mod_im_flt;
        UW_mod_flt = UW_mod_flt./abs(UW_mod_flt);
    case 1 %BPSK
        UW_symb = ((2*UW_bits - 1)*prod_coef_comp)/sqrt(2);
        UW_symb_ups = upsample(UW_symb,N_sps);
        UW_mod_flt_tmp = filter(h_flt,1,[UW_symb_ups zeros(1,len_h_flt_div_2)]); UW_mod_flt = UW_mod_flt_tmp(len_h_flt_div_2+1:end);
    case 2 %QPSK
%         UW_symb = (-2*UW_bits(1:2:end) + 1)/sqrt(2) + 1i*(-2*UW_bits(2:2:end) + 1)/sqrt(2);
        UW_symb = ((2*UW_bits(1:2:end) - 1)*prod_coef_comp)/sqrt(2) + 1i*((2*UW_bits(2:2:end) - 1)*prod_coef_comp)/sqrt(2);
        UW_symb_ups = upsample(UW_symb,N_sps);
        UW_mod_flt_tmp = filter(h_flt,1,[UW_symb_ups zeros(1,len_h_flt_div_2)]); UW_mod_flt = UW_mod_flt_tmp(len_h_flt_div_2+1:end);
    case 3 %8PSK
                
%         R = 1;
%         prod_coef_comp = pi/4;
%         kk_div_M_prod_2pi = [0 0.785398163397448 1.57079632679490 2.35619449019235 3.14159265358979 3.92699081698724 4.71238898038469 5.49778714378214]+prod_coef_comp; %((0:7)/M)*2*pi+prod_coef_comp
%         constellation =  R*exp(1i*(kk_div_M_prod_2pi));%*(0.9239 + 0.3827i);
% % constellation =  R*exp(1i*(((0:7)/8)*2*pi));
%%
% constellation = [0.923879532+0.382683432i 0.923879532-0.382683432i -0.923879532+0.382683432i -0.923879532-0.382683432i 0.382683432+0.923879532i 0.382683432-0.923879532i -0.382683432+0.923879532i -0.382683432-0.923879532i];
%         constellation=exp(i*pi*[1 0 4 5 2 7 3 6]/4);

constellation=exp(1i*pi*[0 1 7 6 3 2 4 5]/4);%*(0.9239 + 0.3827i); % DVB RCS2

constellation(abs(imag(constellation))<1e-8) = real(constellation(abs(imag(constellation))<1e-8))+0*1i;
constellation(abs(real(constellation))<1e-8) = imag(constellation(abs(real(constellation))<1e-8))*1i+0;
        %%
        
        len_symb = length(UW_bits)/3;
        UW_symb = complex(zeros(1,len_symb));
        
        for k = 1:len_symb
            bits_now = UW_bits((k-1)*3+1:k*3);
            if bits_now == [0 0 0]
                UW_symb(k) = constellation(1);
            elseif bits_now == [0 0 1]
                UW_symb(k) = constellation(8);
            elseif bits_now == [0 1 0]
                UW_symb(k) = constellation(4);
            elseif bits_now == [0 1 1]
                UW_symb(k) = constellation(5);
            elseif bits_now == [1 0 0]
                UW_symb(k) = constellation(2);
            elseif bits_now == [1 0 1]
                UW_symb(k) = constellation(7);
            elseif bits_now == [1 1 0]
                UW_symb(k) = constellation(3);
            elseif bits_now == [1 1 1]
                UW_symb(k) = constellation(6);
            end
        end
        
        UW_symb_ups = upsample(UW_symb,N_sps);
        UW_mod_flt_tmp = filter(h_flt,1,[UW_symb_ups zeros(1,len_h_flt_div_2)]); UW_mod_flt = UW_mod_flt_tmp(len_h_flt_div_2+1:end);
    otherwise
        error('type of modulation is not supported!')
end

if 0,
    diff_UW_mod_flt = zeros(1,length(UW_mod_flt)-1);
    for kk = 1:length(UW_mod_flt)-1
        diff_UW_mod_flt(kk) = UW_mod_flt(kk)*conj(UW_mod_flt(kk+1));
    end
    
    diff_UW_symb = zeros(1,length(UW_symb)-1);
    for kk = 1:length(UW_symb)-1
        diff_UW_symb(kk) = UW_symb(kk)*conj(UW_symb(kk+1));
    end
    
    UW_symb = diff_UW_symb;
    UW_mod_flt = diff_UW_mod_flt;
end
UW_mod_flt_cnj_nrm = conj(UW_mod_flt)/norm(UW_mod_flt);