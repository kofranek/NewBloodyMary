within NewBloodyMary_testing.OSA;
function cBEoxOf "Van Slyke equation"
  input Real pH "pH at given temperature";
  input Real pCO2 "pCO2 in kPA at given temperature";
  input Real cHb "hemoglobin concentration in mmol/l";
  input Real T "temperature in ?C";
  input Real cAlb "albumin concentration in mmol/l";
  input Real cPi "phosphate concentration in mmol/l";
  input Real sO2 "O2 hemoglobin saturation (as fraction)";
  output Real result_cBEox
    "BE on virtually fully oxygenated blood in mmol/l";
protected
  Real cAlbN = 0.66;
  Real T0 = 37;
  Real ctHbb = 43.0;
  Real betaHb = 2.3;
  Real betaP = 7.7;
  Real pH0 =  7.40;
  Real pCO20 = 5.33;
  Real cPiN=1.15;
  Real pHT0;
  Real pCO2T0;
algorithm
  //pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
  pCO2T0 := pCO22of(pCO2, T, T0, cHb, cAlb, pH);
  //pHT0   := pH2of(pH, T, T0, ctHb);
  pHT0 := pH2of(pH, T, T0, cHb, cAlb, pCO2);
    result_cBEox := (1-cHb/ctHbb)
               *(cHCO3of(pHT0,pCO2T0,T0) - cHCO3of(pH0, pCO20, T0)
               + (betaHb*cHb + betaP+8*(cAlb-cAlbN)+0.309*(cPi-cPiN))*(pHT0-pH0))-0.2*cHb*(1-sO2);
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end cBEoxOf;
