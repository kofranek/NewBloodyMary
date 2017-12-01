within NewBloodyMary_testing.OSA.testOSA;
model testPO2PCO2of
  Real BEox= -10;
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
  Real ctO2;
  Real ctCO2;
  Real sO2;
  Real dissO2;
  Real ceHb;
  Real ctO2calc;
  Real ctCO2calc;
  Real pHcalc;
  Real sO2calc;
  Real BEoxcalc;
algorithm

  (ctO2calc,ctCO2calc,pHcalc,sO2calc):= PO2PCO2of(pO2,pCO2,BEox,cHb,cAlb,cPi,cDPG,FCOHb,FMetHb,FHbF,temp);

  (ctO2,sO2,dissO2,ceHb):=O2total(cHb,pO2,pHcalc,pCO2,cDPG,FCOHb,FMetHb,FHbF,temp);
  ctCO2:= ctCO2Bof(pHcalc,pCO2,temp,cHb,sO2);
  BEoxcalc :=cBEoxOf(pHcalc,pCO2,cHb,temp,cAlb,cPi,sO2calc);
end testPO2PCO2of;
