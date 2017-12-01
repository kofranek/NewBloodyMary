within NewBloodyMary_testing.OSA;
function dissCO2 "concentration of dissolved CO2 in blood"
  //may be better calculated by ctCO2Pof
  input Real pCO2;
  input Real pH;
  input Real temp;
  input Real ctHb;
  input Real cAlb;
  output Real dCO2 "dissolved CO2 in blood mmol/l";
protected
  Real T0=37;
  Real aCO2;
  Real pCO2T0;
algorithm
  pCO2T0 :=  pCO22of( pCO2, temp, T0, ctHb, cAlb, pH);
  aCO2 := aCO2of(T0);
  dCO2 := aCO2*pCO2T0;
end dissCO2;
