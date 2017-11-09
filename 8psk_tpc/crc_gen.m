function  register1 = crc_gen (x)
N        = length (x);
register1 = ones (1,16);
for k = 1:N
   a            = x(k);
   a2           = xor(a,register1(16));
   register1     = shift(register1,a2);
   register1( 6) = xor(register1(6),register1(1));
   register1(13) = xor(register1(13),register1(1));
end

function  A = shift (A,a);
N = length (A);
for k = N:(-1):2
   A(k) = A(k-1);
end
A(1) = a;