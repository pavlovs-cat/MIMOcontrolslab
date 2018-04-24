%Solves the H2 optimal control problem for the Quanser Aero, neglecting
%uncertainty
preliminaries
G = G_nom;J_body
wc = 5; %crossover frequency needed for performance weight
Wu = 1/25*eye(2);
Wp = makeweight(100, wc, 1/3)*eye(2);
Wt = Wt/(s+1000)*eye(2); %add a HF pole to allow h2syn to solve
P = augw(G, Wp, Wu, Wt);
[K,CL,GAM] = h2syn(P, 2, 2)
bodemag(K)