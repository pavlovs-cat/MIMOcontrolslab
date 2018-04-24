preliminaries % load uncertain plant

s = tf('s');
wc = 5;
Ld = diag(4)*wc/s; %desired loopshape

K=inv(Gnom)*Ld;