within NewBloodyMary_testing.OSA;
function cBaseEcfOf "Van Slyke equation"
  input Real pH "pH at given temperature";
  input Real pCO2 "pCO2 at given temperature in kPa";
  input Real cHb "hemoglobin concentration in mmol/l";
  input Real T "temperature in ?C";
  input Real cAlb "concentration of albumin in mmol/l";
  output Real result_cBEcf "Extracellular fluid BE - mmo/l";
protected
  Real cAlbN = 0.66;
  Real T0 = 37;
  Real ctHbb = 43.0;
  Real betaHb = 2.3;
  Real betaP = 7.7;
  Real pH0 =  7.40;
  Real pCO20 = 5.33;
  Real fVBtoVEcf = 0.33;
  Real cHbEcf;
  Real pHT0;
  Real pCO2T0;
algorithm
    cHbEcf:=cHb*fVBtoVEcf;
  //pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
  pCO2T0 := pCO22of(pCO2, T, T0, cHbEcf, cAlb, pH);
  //pHT0   := pH2of(pH, T, T0, ctHb);
  pHT0 := pH2of(pH, T, T0, cHbEcf, cAlb, pCO2);
    result_cBEcf := (1-cHbEcf/ctHbb)
               *(cHCO3of(pHT0,pCO2T0,T0) - cHCO3of(pH0, pCO20, T0)
               + (betaHb*cHb + betaP+8*(cAlb-cAlbN))*(pHT0-pH0));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end cBaseEcfOf;
