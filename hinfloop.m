preliminaries
%%
% use conventional loopshaping to get initial value for K
s = tf('s');
wc = 3;
Ld = eye(2)*(wc/s); %desired loopshape
K_l=minreal((1/(s/10+1))^2*(Ld));
%L=minreal(10*(1/(s/100+1))^2*(Ld))
% L=minreal(10*s*(1/(s/1000+1))^2*(Ld))

%Use Hinf loopshaping to add RS
<<<<<<< HEAD


[Ki,cl,gam,info] =ncfsyn(G_unc,inv(G_nom),K_l);
Km=-Ki
K=balred(Km,6)
=======
[k,cl,gam,info] = loopsyn(G_unc,L);
K=balred(k,5)
%[Kinf,cl,gam,info] = ncfsyn(G_unc,K_l);
%K = Kinf;
%K=balred(K,6)
>>>>>>> c425cc235ff654e3df3fb3f2169cb5cee8203965
%%
%Check robust stability
S = eye(2)-feedback(G_unc*K,eye(2));
bodemag(S,inv(Wp))
[STABMARG,DESTABUNC,REPORT,INFO] = robuststab(S)

%Check robust performance
[perfmarg,wcu,report,info] = robustperf(S)
%%
%Generate deltas
D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1a=usample(D1,10);
Delta_2a=usample(D2,10);

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
title('Pitch(red) and Yaw(blue) Responses for Hinf Loopshaping')

