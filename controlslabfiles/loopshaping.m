preliminaries % load uncertain plant
%% Loop Shaping
s = tf('s');
wc = 5;
Ld = eye(2)*(wc/s); %desired loopshape
A_nom=A.NominalValue
B_nom=B.NominalValue
K=0.5*1/((s/30+1)^2)*inv(G_nom)*(Ld);
L=G_nom*K;


%K=[(1711*s+4910)/(s+50)  (-1557*s-5153)/(s+50)
%    (2432*s+7817)/(s+50)  (921.5*s+3308)/(s+50)];
D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1a=usample(D1,10);
Delta_2a=usample(D2,10);
%ncfsyn gkinverse

%%
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
title('Pitch(red) and Yaw(blue) Responses for Inverse Loopshaping')
Delta_1=Delta_1a(:,:,1,1)
Delta_2=Delta_2a(:,:,1,1)
%%
figure()
for i=1:10
    Delta_1=Delta_1a(:,:,i,1)
    Delta_2=Delta_2a(:,:,i,1)
    simout=sim('prelim_plant')
    time=mv.Time(:,1)
    pitch=mv.Data(:,1)
    yaw=mv.Data(:,2)
    plot(time,pitch,'r')
    hold on
    plot(time,yaw,'b')
end
xlabel('time(s)')
ylabel('Motor Voltages(V)')
title('Pitch(red) and Yaw(blue) Voltages')

