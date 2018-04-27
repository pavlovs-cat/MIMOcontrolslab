preliminaries %run only first time


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
K=minreal(balred(k,6)*(s/4785.4+1)/(s/200+1));

%%
Smu = inv(eye(2)+G_unc*K);
bodemag(Smu.NominalValue);

mubnd % mu < 1 needed for RP
bnd = robuststab(Smu);
muRS = 1/bnd.LowerBound % mu < 1 needed for RS


%%
D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1=usample(D1,1);
Delta_2=usample(D2,1);
%%
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



