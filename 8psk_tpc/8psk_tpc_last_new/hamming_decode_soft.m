% function [Z,flag_good,num_iter]=hamming_decode_soft(R,H,S)
% flag_view=1;
% flag_good=0;
% [r,N]=size(H);
% ALPHA=[0   0.2 0.3 0.5 0.7 0.9 1 1 1 1 1 1 1 1 ones(1,10)];
% BETA= [0.2 0.4 0.6 0.8 1 1 1 1 1 1 1 1 1 1 1 1 ones(1,10)];
% Z=zeros(size(R));
% for num_iter=1:10
%     alpha=ALPHA(num_iter);
%     beta=BETA(num_iter);
%     %decode by columns
%     s1=ones(1,size(R,2));
%     Total = 0;
%     for k=1:size(R,2)
%         R(:,k)=pynd(R(:,k)',H,S,alpha,beta);
%         Z(:,k)=[1+sign(R(:,k))]/2;
%         syn=mod(H*Z(1:end-1,k),2);
%         if sum(syn)==0
%             s1(k)=0;
%         end       
%     end
%     Total = Total + sum(s1);
%     
%     s2=ones(1,size(R,1));
%     for k=1:size(R,1)
%         R(k,:)=pynd(R(k,:),H,S,alpha,beta);
%         Z(k,:)=[1+sign(R(k,:))]/2;
%         syn=mod(H*Z(k,1:end-1)',2);
%         if sum(syn)==0
%             s2(k)=0;
%         end
%     end
%      Total = Total + sum(s2);
%     
%     %Temporary
%     
%     if flag_view
%         R1=reshape(R,1,numel(R));
%         plot(R1,'.');pause(0.02);shg
%         grid;
%         axis([0 64 -2.5 2.5]);
%     end
%     sum(s1);
%     sum(s1) + sum(s2);
%     if sum(s1)==0 && sum(s2)==0
%         flag_good=1;
%         break
%     end
%     
% end
% if sum(s1)+sum(s2)==2
%     keyboard
% end
% %Z=[1+sign(R(1:N-r,1:N-r))]/2;%tmp
% Z=Z(1:N-r,1:N-r);
% 
% function R=pynd(R,H,S,alpha,beta)
% Y_=[1+sign(R)]/2;
% Y=hamming_decode_simple(Y_,H,S);
% num_competitor=3;
% %num_competitor=0;
% 
% dist=zeros(1,num_competitor+1);
% if num_competitor
%     dist(1)=mean((R-(2*Y-1)).^2);    
%     [~, bb]=sort(abs(R));
%     for k=1:num_competitor
%         %Y1=Y(1,:);%competitor
%         Y1=Y_;%competitor
%         iw=bb(k);
%         Y1(iw)=1-Y1(iw);
%         Y1=hamming_decode_simple(Y1,H,S);
%         Y=[Y;Y1];
%         dist(k+1)=mean((R-(2*Y1-1)).^2);
%     end
%     [dist_sort, bb1]=sort(dist);
%     if dist_sort(1)==dist_sort(2)
%         d=2*Y(1,:)-1;
%         R1=beta*d;
%         %R1=(sum(aa(1:num_competitor))+abs(R)-sqrt(dist_sort(1))).*d/4;
%     else
%         d=2*Y(bb1(1),:)-1;
%         R1=(sqrt(dist_sort(end))-sqrt(dist_sort(1)))*d/4;
%         %R1=(dist_sort(2)-dist_sort(1))*d/4;
%     end
%     %     else
%     %         d=2*Y-1;
%     %         R1=beta*d;
% else%no competitor mode
%     d=2*Y-1;
%     R1=beta*d;
% end
% 
% W=R1-R;
% 
% %plot(R);hold on;plot(R+alpha*W,'k'); hold off; grid;
% 
% % sr = sign(R);
% % srw = sign(R+alpha*W);
% % err = find(sr ~= srw);
% % if(length(err)>0)
% %     err
% % end
% 
% R=R+alpha*W;
% %=======================
% function Y=hamming_decode_simple(Y,H,S)
% %syndrome=mod(Y*H',2);
% syndrome=mod(Y(1:end-1)*H',2);%!!!
% [r,~]=size(H);
% if ~isequal(syndrome,zeros(1,r))
%     [~,ind]=ismember_arr(syndrome,S);
%     Y(ind)=1-Y(ind);
%     
%     
% %     if Y(ind) == 1
% %         Y(end) = 1-Y(end);
% %     end
%         
% end
% Y(end)=mod(sum(Y(1:end-1)),2);%!!! % пробовал закоментарить, становится немного по-другому. 
% 
% function [flag,k]=ismember_arr(a,B)
% flag=0;
% if isempty(B), return;end
% for k=1:size(B,1)
%     if norm(a-B(k,:))<1e-3
%     %if norm(a-B(k,:))<1
%     %if sum(abs(a-B(k,:)))<1
%     %if sum(a-B(k,:))<1
%         flag=1;
%         return
%     end
% end


%%
function [Z,flag_good,num_iter]=hamming_decode_soft(R,H,S)
flag_view=0;
flag_good=0;
[r,N]=size(H);
ALPHA=[0   0.2 0.3 0.5 0.7 0.9 1 1 1 1 1 1 1 1 ones(1,10)];
BETA= [0.2 0.4 0.6 0.8 1 1 1 1 1 1 1 1 1 1 1 1 ones(1,10)];
Z=zeros(size(R));
for num_iter=1:10
    alpha=ALPHA(num_iter);
    beta=BETA(num_iter);
    %decode by columns
    s1=ones(1,size(R,2));
    for k=1:size(R,2)
        R(:,k)=pynd(R(:,k)',H,S,alpha,beta);
        Z(:,k)=(1+sign(R(:,k)))/2;
        syn=mod(H*Z(1:end-1,k),2);
        if sum(syn)==0
            s1(k)=0;
        end
    end
    
    s2=ones(1,size(R,1));
    for k=1:size(R,1)
        R(k,:)=pynd(R(k,:),H,S,alpha,beta);
        Z(k,:)=(1+sign(R(k,:)))/2;
        syn=mod(H*Z(k,1:end-1)',2);
        if sum(syn)==0
            s2(k)=0;
        end
    end
    
    %Temporary
    
    if flag_view
        R1=reshape(R,1,prod(size(R)));
        plot(R1,'.');drawnow;shg
    end
    if sum(s1)==0 && sum(s2)==0
        flag_good=1;
%         disp(num_iter)
        break
    end
    
end
if sum(s1)+sum(s2)==2
    %     keyboard
    disp('Attention!: sum(s1)+sum(s2)==2');
end
%Z=[1+sign(R(1:N-r,1:N-r))]/2;%tmp
Z=Z(1:N-r,1:N-r);

function R=pynd(R,H,S,alpha,beta)
Y1=(1+sign(R))/2;
Y1=hamming_decode_simple(Y1,H,S);
len_Y1 = length(Y1);
num_competitor=3;
dist=zeros(1,num_competitor+1);
Y = zeros(num_competitor,len_Y1);
Y(1,:) = Y1;
if num_competitor
    dist(1)=mean((R-(2*Y1-1)).^2);
    
    [~, bb]=sort(abs(R));
    for k=1:num_competitor
        Y1=Y(1,:);%competitor
        iw=bb(k);
        Y1(iw)=1-Y1(iw);
        Y1=hamming_decode_simple(Y1,H,S);
        Y(k,:)=Y1;
        dist(k+1)=mean((R-(2*Y1-1)).^2);
    end
    [dist_sort, bb1]=sort(dist);
    if dist_sort(1)==dist_sort(2)
        d=2*Y(1,:)-1;
        R1=beta*d;
        %R1=(sum(aa(1:num_competitor))+abs(R)-sqrt(dist_sort(1))).*d/4;
    else
        d=2*Y(bb1(1),:)-1;
        R1=(sqrt(dist_sort(end))-sqrt(dist_sort(1)))*d/4;
        %R1=(dist_sort(2)-dist_sort(1))*d/4;
    end
    %     else
    %         d=2*Y-1;
    %         R1=beta*d;
else%no competitor mode
    d=2*Y-1;
    R1=beta*d;
end

W=R1-R;
R=R+alpha*W;

%=======================

function Y=hamming_decode_simple(Y,H,S)
%syndrome=mod(Y*H',2);
syndrome=mod(Y(1:end-1)*H',2);%!!!
[r,~]=size(H);
if ~isequal(syndrome,zeros(1,r))
    [~,ind]=ismember_arr(syndrome,S);
    Y(ind)=1-Y(ind);
end
Y(end)=mod(sum(Y(1:end-1)),2);%!!!

function [flag,k]=ismember_arr(a,B)
flag=0;
if isempty(B), k=1; return;end
for k=1:size(B,1)
    if norm(a-B(k,:))<1e-3
        flag=1;
        return
    end
end

