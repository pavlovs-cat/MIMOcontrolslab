%Solves the H2 optimal control problem for the Quanser Aero, neglecting
%uncertainty
preliminaries
G = G_nom;J_body
wc = 5; %crossover frequency needed for performance weight
Wu = 1/25*eye(2); %control weight
Wp = makeweight(100, wc, 1/3)*eye(2); %performance weight
%not sure what sensitivity weight should be
%Wt = Wt/(s+1000)*eye(2); %add a HF pole to allow h2syn to solve
P = augw(G, Wp, Wu, Wt);
[K,CL,GAM] = h2syn(P, 2, 2)
bodemag(K)



%Check RP + RS
S2 = eye(2)-feedback(Gunc*K,eye(2));
bodemag(S2,inv(Wp))
[STABMARG,DESTABUNC,REPORT,INFO] = robuststab(S2)

D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1=usample(D1);
Delta_2=usample(D2);