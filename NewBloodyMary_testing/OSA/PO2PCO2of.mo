within NewBloodyMary_testing.OSA;
function PO2PCO2of
  input Real pO2 "pO2 in kPa";
  input Real pCO2 "pCO2 in kPa";
  input Real BEox "Base Excess in virtually oxyganated blood in mmol/l";
  input Real cHb "conentration of hemoglobin in mmol/l";
  input Real cAlb "albumin consntration in plasma in mmol/l";
  input Real cPi "phospahate concentration in plasma in mmol/l";
  input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemogobin";
  input Real temp "temperature in ?C";
  output Real ctO2 "blood total O2 concantration in mmol/l";
  output Real ctCO2 "blood total CO2 concentration in mmol/l";
  output Real pH "plasma pH";
  output Real sO2 "O2 hemoglobin saturation";
protected
  Real EpsSO2 = 0.000001;
  Real Sx;
  Boolean done;
  Real ceHb;
  Real dissO2t;
algorithm
  sO2:=1;
  done := false;
  while (not done) loop
    Sx := sO2;
    pH := BEINVof(BEox,pCO2,cHb,cAlb,cPi,sO2,temp);
    sO2 := sO2of(pO2,pH,pCO2,cDPG,FCOHb,FMetHb,FHbF,temp);
    done := abs(sO2-Sx)<EpsSO2;
  end while;
    ceHb := ceHbof(cHb, FCOHb, FMetHb);
    dissO2t := dissO2(pO2, temp);
    ctO2 := dissO2t + sO2 * ceHb;
    ctCO2 := ctCO2Bof(pH,pCO2,temp,cHb,sO2);
end PO2PCO2of;
