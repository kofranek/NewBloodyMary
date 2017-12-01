within NewBloodyMary_testing.OSA;
function O2totalSI "Calculation of concentration of total oxygen"
  input Real ctHb "conentration of hemoglobin in mmol/l";
  input Real pO2 "pO2 at givent temperature in Pa";
  input Real pHp "pH in plasma at given temperature";
  input Real pCO2 "pCO2 at given temperature in Pa";
  input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemogobin";
  input Real temp "temperature in °K";
  output Real ctO2
    "concentration of total blood oxygen concentration in mmol/l";
  output Real sO2t "oxygen saturation of hemoglobin at given temperature";
  output Real dissO2t
    "koncentration of dissolved oxygen in blood in mmol/l";
  output Real ceHb "effective hemoglobin concentration in mmol/l";
algorithm

  sO2t := sO2of( pO2/1000, pHp, pCO2/1000, cDPG, FCOHb, FMetHb, FHbF, temp-273.15);
  ceHb := ceHbof(ctHb, FCOHb, FMetHb);
  dissO2t := dissO2(pO2/1000, temp-273.15);
  ctO2 := dissO2t + sO2t * ceHb;
end O2totalSI;
