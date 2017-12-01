within NewBloodyMary_testing.OSA;
function sO2fr
  input Real pO2CO;
  input Real a;
  input Real T;
  input Real FCOHb;
  input Real FMetHb;
  output Real returnValue;
protected
  Real sO2COc;
  Real sCOc;
algorithm
  sO2COc := sO2CO(pO2CO, a, T);
  sCOc := sCO(FCOHb, FMetHb);
  returnValue := (sO2COc - sCOc)/(1 - sCOc);
end sO2fr;
