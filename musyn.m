%preliminaries %run only first time

wc = 5; % tune this

Wu = 1/25*eye(2);
Wp = makeweight(100, wc, 1/3)*eye(2);
Wt = [W_I_Pitch, 0; 0, W_I_Yaw];

%Pmu should be 4x4 uncertain state space
Pmu = [Wp, Wp*G_unc; -eye(2), -G_unc];
    
[Kmu,CL,mubnd] = dksyn(Pmu,2,2);

Smu = inv(eye(2)+G_unc*Kmu);
bodemag(Smu.NominalValue);

mubnd % mu < 1 needed for RP
bnd = robuststab(Smu);
muRS = 1/bnd.LowerBound % mu < 1 needed for RS
