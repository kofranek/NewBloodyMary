within NewBloodyMary_testing.OSA;
function pO2fr
  input Real sO2;
  input Real a;
  input Real T;
  input Real FCOHb;
  input Real FMetHb;
  output Real returnValue;
protected
  Real pO2CO;
  Real sO2CO;
  Real ym;
  Real yc;
  Real dydxc;
  Real p0 =    7.0;
  Real dbdT =    0.055;
  Real T0 =   37;
  Boolean doit;
  Real Epsilon =   0.000001;
algorithm
  pO2CO := exp(log(p0) + a + dbdT*(T - T0));
  sO2CO := sO2 + sCO(FCOHb, FMetHb)*(1 - sO2);
  ym := logit(sO2CO);
  doit := false;
  while not doit loop
    yc := y(pO2CO, a, T);
    dydxc := dydx(pO2CO, a, T);
    pO2CO := exp(log(pO2CO) + (ym - yc)/dydxc);
    doit := abs(ym - yc) < Epsilon;
  end while;
    returnValue := pO2CO - MpCOof(pO2CO, a, T, FCOHb, FMetHb);
end pO2fr;
