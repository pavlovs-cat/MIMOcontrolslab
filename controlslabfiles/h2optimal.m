%Solves the H2 optimal control problem for the Quanser Aero, neglecting
%uncertainty
preliminaries

G = G_nom;
J_body

%% Lets not run preliminaries every time :)
G = G_nom;J_body
wc = 10; %crossover frequency needed for performance weight
Wu = 1/25*eye(2); %control weight
Wp = makeweight(100, wc, 1/3)*eye(2); %performance weight

P = augw(G, Wp, Wu, []);
[K,CL,GAM] = h2syn(P, 2, 2)
D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1a=usample(D1);
Delta_2a=usample(D2);

Delta_1=Delta_1a(:,:,1,1)
Delta_2=Delta_2a(:,:,1,1)
%% Plotting
bodemag(K)

CL=feedback(G_unc*K,eye(2))
stabmarg=robstab(CL)
mu=1/stabmarg.LowerBound
perfmargin=robustperf(CL)
%% Another Way to check
[STABMARG,DESTABUNC,REPORT,INFO] = robuststab(Sunc2);   %NOTE:  This DID NOT work with robstab!!!
mu2 = 1/STABMARG.LowerBound

% %Check RP + RS
S2 = eye(2)-feedback(G_unc*K,eye(2));
bodemag(S2,inv(Wp))
[STABMARG,DESTABUNC,REPORT,INFO] = robuststab(S2)


