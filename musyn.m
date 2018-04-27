preliminaries %run only first time

wc = 5; % tune this

%% Mu syn
wc = 5;
Wu = 1/25*eye(2);
Wp = makeweight(100, wc, 1/3)*eye(2);
%% Yigit Side
Wt=[]
InputUnc=ultidyn('DD',[2 2])
Gpert = G_nom*(eye(2)+InputUnc*info.W1); 

systemnames = 'Gpert Wu Wp';
inputvar = '[r{2};u{2}]';
outputvar = '[Wp;Wu;-r-Gpert]';
input_to_Gpert = '[u]';
input_to_Wu = '[u]';
input_to_Wp = '[r+Gpert]';
cleanupsysic = 'yes';  
P = sysic;

% systemnames = 'Gpert Wu Wp';
% inputvar = '[w{2};u{2}]';
% outputvar = '[[Wp Wp*Gpert];[0 Wu];[-eye(2) -Gpert]]';
% input_to_Grunc = '[u]';
% input_to_Wu = '[u]';
% input_to_Wp = '[w+Gpert]';
% cleanupsysic = 'yes';  
% P = sysic;
% P = [Wp; Wu ]*[eye(2) Gpert]; 
[k,clp,bnd] = dksyn(P,2,2); 
K=balred(k,6)
%% Catherine Side 
Wt = [W_I_Pitch, 0; 0, W_I_Yaw];

%Pmu should be 4x4 uncertain state space
Pmu = [Wp, Wp*G_unc; -eye(2), -G_unc];
    
[Kmu,CL,mubnd] = dksyn(Pmu,2,2);

Smu = inv(eye(2)+G_unc*Kmu);
bodemag(Smu.NominalValue);

mubnd % mu < 1 needed for RP
bnd = robuststab(Smu);
muRS = 1/bnd.LowerBound % mu < 1 needed for RS

