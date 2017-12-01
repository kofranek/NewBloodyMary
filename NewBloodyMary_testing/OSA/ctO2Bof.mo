within NewBloodyMary_testing.OSA;
function ctO2Bof "Calculation of concentration of total oxygen"
  input Real ctHb "conentration of hemoglobin in mmol/l";
  input Real pO2 "pO2 at givent temperature in kPa";
  input Real pHp "pH in plasma at given temperature";
  input Real pCO2 "pCO2 at given temperature in kPa";
  input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemogobin";
  input Real temp "temperature in ?C";
  output Real ctO2
    "concentration of total blood oxygen concentration in mmol/l";
protected
   Real sO2t "oxygen saturation of hemoglobin at given temperature";
   Real dissO2t "koncentration of dissolved oxygen in blood in mmol/l";
   Real ceHb "effective hemoglobin concentration in mmol/l";
algorithm

  sO2t := sO2of( pO2, pHp, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
  ceHb := ceHbof(ctHb, FCOHb, FMetHb);

  dissO2t := dissO2(pO2, temp);
  ctO2 := dissO2t + sO2t * ceHb;
end ctO2Bof;
