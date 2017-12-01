within NewBloodyMary_testing.OSA.testOSA;
model testBEINVof
  Real pH=7.2;
  Real newpH;
  Real BEox;
  Real newBEox;
  Real pCO2 = 8.33;
  Real cHb=8.5;
  Real cAlb = 0.66;
  Real cPi=1.15;
  Real sO2=0.5;
  Real temp = 37;
algorithm
  BEox:= cBEoxOf(pH,pCO2,cHb,temp, cAlb, cPi, sO2);
  newpH :=BEINVof(BEox,pCO2,cHb,cAlb,cPi,sO2,temp);
  newBEox:= cBEoxOf(newpH,pCO2,cHb,temp, cAlb, cPi, sO2);
end testBEINVof;
