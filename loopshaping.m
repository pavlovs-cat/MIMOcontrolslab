preliminaries % load uncertain plant
%% Loop Shaping
s = tf('s');
wc = 5;
Ld = eye(2)*(wc/s); %desired loopshape
A_nom=A.NominalValue
B_nom=B.NominalValue
K=10000*(s+1000)^(-2)*inv(G_nom)*Ld;
L=minreal(G_nom*K);
CL=(L)/(eye(2)+L)

W_I_Pitch=Wt;
W_I_Yaw=Wt;
sampled_plant=usample(G_unc,1)
Dsamp=(sampled_plant-G_nom)/Wt
Delta_1=Dsamp(1,1);
Delta_2=Dsamp(2,2);
%Delta_1=rand(0,1);
%Delta_2=rand(0,1);
K=[(1711*s+4910)/(s+50)  (-1557*s-5153)/(s+50)
    (2432*s+7817)/(s+50)  (921.5*s+3308)/(s+50)];