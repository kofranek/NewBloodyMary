within NewBloodyMary_testing.OSA.testOSA;
model testO2CO2of
  Real BEox= 0;
  Real pCO2 = 8.33;
  Real pO2 = 13.3;
  Real cHb=8.5;
  Real cAlb = 0.66;
  Real cPi=1.15;
  Real temp = 37;
  Real FCOHb = 0.005;
  Real FMetHb =  0.005;
  Real FHbF = 0.005;
  Real cDPG =  5.3;
  Real CO2;
  Real O2;
  Real sO2;
  Real pH;
  Real PO2calc;
  Real PCO2calc;
  Real pHcalc;
  Real sO2calc;
algorithm
  (O2,CO2,pH,sO2) := PO2PCO2of(pO2,pCO2,BEox,cHb,cAlb,cPi,cDPG,FCOHb,FMetHb,FHbF,temp);
  (PO2calc,PCO2calc,pHcalc,sO2calc):=O2CO2of( O2,CO2,BEox,cHb,cAlb,cPi,cDPG,FCOHb, FMetHb,FHbF,temp);
end testO2CO2of;
