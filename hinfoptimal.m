preliminaries
%% Hinf Optimal
%Wt = info.W1; %Not sure what sensitivity weight should be
Wu = 1/25*eye(2); %control weight
Wt=[]
w_max = 100;
w_min = 0;
w_try = (w_max+w_min)/2;
tol = .01;

%maximize wc
while(w_max-w_min > tol)
    Wp = makeweight(100, w_try, 1/10)*eye(2); %performance weight
    P = augw(G_nom, Wp, Wu, Wt);
    [Kinf,CL,GAM] = hinfsyn(P,2,2);
    
    if GAM > 1
        w_max = w_try;
    else
        w_min = w_try;
    end
    w_try = (w_max + w_min)/2;
end
w_try
K=Kinf
%Check RP + RS
Sinf = eye(2)-feedback(G_unc*Kinf,eye(2));
bodemag(Sinf,inv(Wp))
[STABMARG,DESTABUNC,REPORT,INFO] = robuststab(Sinf)
%%
D1=ultidyn('D1',[1 1]);
D2=ultidyn('D2',[1 1]);
Delta_1=usample(D1);
Delta_2=usample(D2);