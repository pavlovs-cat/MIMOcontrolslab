clear all
close all
clc

%% Load Parameters & State Space
run('quanser_aero_parameters.m')
run('quanser_aero_state_space.m')

%% Find Poles & Zeros
s=tf('s')
G_nom=C*inv(s*eye(4)-A.NominalValue)*B.NominalValue+D
zeros=tzero(G_nom);
poles=eig(G_nom);
%% Uncertain Plant
G_unc=C*inv(s*eye(4)-A)*B+D
G_vec=usample(G_unc,50);
[usys,info]=ucover(G_vec,G_nom,[2,2]);
bodemag(G_vec,G_nom*(eye(2)+info.W1*info.W2));
%Wi = info.W1*info.W2
W_I_Pitch=ss(info.W1.A(1:2,1:2),info.W1.B(1:2,1),info.W1.C(1,1:2), info.W1.D(1,1))
W_I_Yaw=ss(info.W1.A(3:4,3:4),info.W1.B(3:4,2),info.W1.C(2,3:4),info.W1.D(2,2))