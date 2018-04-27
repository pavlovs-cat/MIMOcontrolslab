preliminaries
%%
% use conventional loopshaping to get initial value for K
s = tf('s');
wc = 1;
Ld = eye(2)*(wc/s); %desired loopshape
K_l=10*s*(1/(s/1000+1))^2*inv(G_nom)*(Ld);
L=minreal(10*(1/(s/1000+1))^2*(Ld))
% L=minreal(10*s*(1/(s/1000+1))^2*(Ld))

%Use Hinf loopshaping to add RS
[k,cl,gam,info] = loopsyn(G_unc,L);
K=balred(K,5)
