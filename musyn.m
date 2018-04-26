preliminaries

%% Mu syn
wc = 5;
Wu = 1/25*eye(2);
Wp = makeweight(100, wc, 1/3)*eye(2);
Wt=[]
InputUnc=ultidyn('D',[2 2])
Gpert = G_nom*(1+InputUnc*info.W1); 
P = [Wp; Wu ]*[eye(2) Gpert]; 
[k,clp,bnd] = dksyn(P,2,2); 
K=balred(k,6)