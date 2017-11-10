function y=scrm(x)

%D=[1 1 0 1 0 0 1 0 1 0 1 1 0 0 1];0x6959, Inmarsat, Thuraya
D = [0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0];D=D(2:end);%Предустановка: 0x4924
D=D(end:-1:1);
%D= [1 0 0 0 0 1 0 0 1 0 1 1 1 1 0 1];%Предустановка: 0x84BD
%D=D(end:-1:1);


N=length(x);
m=zeros(size(x));
for k=1:N
    m(k)=mod(D(15)+D(14),2);
    tmp=D(1:14);
    %D(1)=D(15);
    D(1)=m(k);
    D(2:15)=tmp;
end
y=mod(x+m,2);