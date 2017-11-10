function x=set_clean(B,ind)
%16.08.01
if ~isempty(ind)
    x=B(1:ind(1)-1);
    for k=1:length(ind)-1
        x=[x B(ind(k)+1:ind(k+1)-1)];
    end
    x=[x B(ind(end)+1:end)];
else
    x=B;
end
