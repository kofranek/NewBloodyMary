within NewBloodyMary_testing.OSA;
function cBaseOf "Van Slyke equation"
  input Real pH;
  input Real pCO2;
  input Real cHb;
  input Real T;
  input Real cAlb;
  output Real result_cBEox;
protected
  Real cAlbN = 0.66;
  Real T0 = 37;
  Real ctHbb = 43.0;
  Real betaHb = 2.3;
  Real betaP = 7.7;
  Real pH0 =  7.40;
  Real pCO20 = 5.33;
  Real pHT0;
  Real pCO2T0;
algorithm
  //pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
  pCO2T0 := pCO22of(pCO2, T, T0, cHb, cAlb, pH);
  //pHT0   := pH2of(pH, T, T0, ctHb);
  pHT0 := pH2of(pH, T, T0, cHb, cAlb, pCO2);
    result_cBEox := (1-cHb/ctHbb)
               *(cHCO3of(pHT0,pCO2T0,T0) - cHCO3of(pH0, pCO20, T0)
               + (betaHb*cHb + betaP+8*(cAlb-cAlbN))*(pHT0-pH0));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end cBaseOf;
