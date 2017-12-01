within NewBloodyMary_testing.OSA;
function CO2totalSI "Calculation of blood total CO2 concentration"
  input Real pH "plasma pH at given temperature";
  input Real pCO2 "pCO2 at given temperatura in Pa";
  input Real T "temperature in ?C";
  input Real ctHb "Hemoglobin concentration in mmol/l";
  input Real sO2 "O2 hemoglobin saturation";
  output Real ctCO2B "Total blood CO2 concetratoin in mmol/l";
  output Real cHCO3 "plasma concentration of bicarbonate in mmol/l";
  output Real dCO2 "dissolved CO2 concentration in plasma";
protected
  Real dpHEdpHP = 0.77;
  Real dpHEdsO2 = 0.035;
  Real pHEx = 7.84;
  Real sO2x = 0.06;
  Real aCO2E0 = 0.195;
  Real ctHbE = 21;
  Real pHE0 = 7.19;
  Real pKE0 = 6.125;
  Real pHT0;
  Real pCO2T0;
  Real pKE;
  Real pHE;
  Real ctCO2E;
  Real phiEB;
  Real T0=37;
  Real cAlbN = 0.66;
  Real cAlb;
  Real pH0 = 7.40;
  Real aCO2;
  Real tCO2p;

algorithm
  // pCO2T0 := pCO22of (pCO2, T, T0, ctHb);
  cAlb := cAlbN;
  // albumin has minimal influence on total CO2 concentration
  pCO2T0 := pCO22of(pCO2 / 1000, T - 273.15, T0, ctHb, cAlb, pH);
  // pHT0 := pH2of (pH, T, T0, ctHb);
  pHT0 := pH2of(pH, T - 273.15, T0, ctHb, cAlb, pCO2);
  pHE :=   pHE0 + dpHEdpHP*(pHT0 - pH0) + dpHEdsO2*(1 - sO2);
  //or : (pHE - 6.9) = alpha*(pHP - pH0), where alpha = 0.7 + f*(1 - sO2)
  pKE := pKE0 - lg(1 + antilg(pHE - pHEx - sO2x * sO2));
  ctCO2E :=  aCO2E0*pCO2T0*(1 + antilg( pHE - pKE));
  phiEB :=  ctHb/ctHbE;
  // !! !! it is hematokrit!!!!!!!
  //tCO2p := pCO2T0 * aCO2of(T0)*(1 + antilg(pHT0-pKof(T0)));
  aCO2 := aCO2of(T0);
  cHCO3 := aCO2*pCO2T0 *antilg(pHT0-pKof(T0));
  dCO2 := aCO2*pCO2T0;
  ctCO2B := ctCO2E*phiEB + (dCO2+cHCO3)*(1 - phiEB);
  //ctCO2B :=  ctCO2E*phiEB + ctCO2Pof( pHT0, pCO2T0, T0)*(1 - phiEB);
  //ctCO2B :=  ctCO2E*phiEB + tCO2p*(1 - phiEB);
end CO2totalSI;
