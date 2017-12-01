within NewBloodyMary_testing.OSA;
function MpCOof
  input Real pO2CO;
  input Real a;
  input Real T;
  input Real FCOHb;
  input Real FMetHb;
  output Real returnValue;
algorithm
  returnValue := (pO2CO/sO2CO(pO2CO, a, T))*sCO(FCOHb, FMetHb);
end MpCOof;
