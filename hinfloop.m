%preliminaries

% use conventional loopshaping to get initial value for K
loopshaping
K_l = K;

%Use Hinf loopshaping to add RS
[Kinf,cl,gam,info] = loopsyn(G_unc,G_unc*K_l);