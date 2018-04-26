%preliminaries %run only first time

wc = 5; % tune this

%% Mu syn
wc = 5;
Wu = 1/25*eye(2);
Wp = makeweight(100, wc, 1/3)*eye(2);
%% Yigit Side
Wt=[]
InputUnc=ultidyn('D',[2 2])
Gpert = G_nom*(1+InputUnc*info.W1); 
P = [Wp; Wu ]*[eye(2) Gpert]; 
[k,clp,bnd] = dksyn(P,2,2); 
K=balred(k,6)
%% Catherine Side 
Wt = [W_I_Pitch, 0; 0, W_I_Yaw];

%Pmu should be 4x4 uncertain state space
Pmu = [Wp, Wp*G_unc; -eye(2), -G_unc];
    
[K,CL,mubnd] = dksyn(Pmu,2,2);

Smu = inv(eye(2)+G_unc*K);
bodemag(Smu.NominalValue);

mubnd % mu < 1 needed for RP
bnd = robuststab(Smu);
muRS = 1/bnd.LowerBound % mu < 1 needed for RS



D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1a=usample(D1,10);
Delta_2a=usample(D2,10);

figure()

for i=1:10
    Delta_1=Delta_1a(:,:,i,1)
    Delta_2=Delta_2a(:,:,i,1)
    simout=sim('prelim_plant')
    time=angles.Time(:,1)
    pitch=angles.Data(:,1)
    yaw=angles.Data(:,2)
    plot(time,pitch,'r')
    hold on
    plot(time,yaw,'b')
end
xlabel('time(s)')
ylabel('Angles(rad)')
title('Pitch(red) and Yaw(blue) Responses for Mu Synthesis')



