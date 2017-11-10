function [ind_good,ind_bad]=HDLC_extract_2(R,ind_good)

ind_bad = 1; % for iDirect scan modul

if nargin==1
    ind_good=0;
end

flag=[0 1 1 1 1 1 1 0];
[res,pos]=seq_search(R,[0 1 1 1 1 1 1 0]);% 0 1 1 1 1 1 1 0]);% 0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]);
%[res,pos]=seq_search(R,[0 1 1 1 1 1 1 0  0 1 1 1 1 1 1 0 0 1 1 1 1 1 1 0]);
if res==0
    disp('No flags');
    return;
end

%R=R(pos:end);
%k=0;
k=pos-1;

N=length(R);
%ind_good=0;%packets
ind_bad=0;%packets
%while k<=N-7
while k<=N-8
    k=k+1;
    
    if ~isequal(R(k:k+7),flag)%packet start found
        pos_beg=k;
        %disp(k)
        [res,pos]=seq_search(R(pos_beg:end),flag);
        if pos==-1
            pos_end=N;
        else
            pos_end=pos_beg+pos-2;
        end
        k=pos_end;
        RR=R(pos_beg:pos_end);
        
        S=[];
        for kk=1:length(RR)-5
            if isequal(RR(kk:kk+5),[1 1 1 1 1 0])
                S = [S kk+5];
            end
        end
        if ~isempty(S)
            RR = set_clean(RR,S);
        end
        
%         if length(RR) > 15
%             h = crc.generator('Polynomial', '0x1021', 'InitialState', '0x0000','ReflectInput', false, 'FinalXOR', '0x0000');
% %             RR = byte_reverse(RR);
%             packet_CRC = generate(h, RR(1:end-16)');
%             if isequal(packet_CRC(end-15:end)', RR(end-15:end))
%                 ind_good=ind_good+1;
%             else
%                 ind_bad=ind_bad+1;
%             end
%             
%         end
        
        reg = crc_gen (RR);
        if isequal(reg,[1 1 1 1 0 0 0 0 1 0 1 1 1 0 0 0])
            ind_good=ind_good+1;
                     
        else
            ind_bad=ind_bad+1;
        end
    else
        k=k+7;
    end
end
%disp(['Good HDLC packets: ' num2str(ind_good)])
%disp(['Bad HDLC packets: ' num2str(ind_bad)])
% fclose all;