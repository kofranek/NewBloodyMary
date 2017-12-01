within NewBloodyMary_testing.OSA;
function sO2of "calculation of oxygen hemoglobin saturation"
  input Real pO2T "Po2 at given temperature in kPa";
  input Real pHT "pH at given temperature";
  input Real pCO2T "pCO2 at given temperature in kPa";
  input Real cDPG "2'3 DPG koncentration in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemoglobin";
  input Real TPt "temperature in?C";
  output Real returnValue "oxygen hemoglobin saturation";
protected
  Real MpCOa;
  Real MpCOb;
  Real sCOc;
  Boolean doit;
  Real a;
  Real Epsilon =  0.000001;
algorithm
  a := aFrom(pHT, pCO2T, FMetHb, FHbF, cDPG);
  sCOc := sCO(FCOHb, FMetHb);
  if sCOc > 0 then
     MpCOa := pO2fr(sCOc, a, TPt, 0, FMetHb);
  else MpCOa := 0;
  end if;
  MpCOb := MpCOa;
  doit := false;
  while (not doit) loop
      MpCOb := 0.6*MpCOa + 0.4*MpCOb;
      MpCOa := MpCOof(pO2T + MpCOb, a, TPt, FCOHb, FMetHb);
      doit := (abs(MpCOa - MpCOb) < Epsilon);
  end while;
  returnValue := sO2fr(pO2T + MpCOa, a, TPt, FCOHb, FMetHb);
end sO2of;
