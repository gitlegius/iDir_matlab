function LLR = demapDecTest_1(out_burst_complex_without_UWs,Star,N)

out_burst_complex_without_UWs = out_burst_complex_without_UWs/std(out_burst_complex_without_UWs);

if nargin == 2
    N = length(out_burst_complex_without_UWs);
end

ind_mod = log2(length(Star));

Ns=length(Star);
d2=zeros(Ns,N);
for k=1:Ns
    d2(k,:)=abs(out_burst_complex_without_UWs-Star(k)).^2;
end

sigma2=mean(min(d2));

P=-d2/2/sigma2;

LLR=zeros(ind_mod*N,1);
% sigma=sqrt(sigma2);
switch ind_mod
    case 1
        LLR(1:1:end)=((P(1,:))-(P(2,:)));
    case 2
        LLR(1:2:end)=max(P([0 1]+1,:))-max(P([2 3]+1,:));
        LLR(2:2:end)=max(P([0 2]+1,:))-max(P([1 3]+1,:));
    case 3
        LLR(1:3:end)=max(P([0 1 2 3]+1,:))-max(P([4 5 6 7]+1,:));
        LLR(2:3:end)=max(P([0 1 5 7]+1,:))-max(P([2 3 4 6]+1,:));%!!!!
        LLR(3:3:end)=max(P([0 2 4 6]+1,:))-max(P([1 3 5 7]+1,:));
end

LLR = -LLR; % for decoders

% bits=zeros(1,3*N);
% for n=1:N
%     [~,nn]=neighbour_1(out_burst_complex_without_UWs(n),Star);
%     bits(3*n-2:3*n)=de2bi(nn-1,ind_mod,'left-msb');
% end
% out_data_soft_now = (1-2*(bits).');