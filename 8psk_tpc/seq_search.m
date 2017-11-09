function  [res,position] = seq_search (R,x)
%returns number of repetitions
%23.06.01
res      = 0;
position = -1;
N        = length(R);
n        = length(x);
for k = 1:N-n+1
   if isequal(R(k:k+n-1), x)
      position = k;
      res=1;%08.09.2003
      break
   end
end

if k ~= N-n+1
   m = 1;%number of repetitions
   while k+m*n+n-1 <= N
      if isequal(R(k+m*n:k+m*n+n-1),x)
         m = m+1;
      else
         break
      end
   end
   res = m;   
end%if k~=N-n+1