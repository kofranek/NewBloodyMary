within NewBloodyMary_testing.OSA;
function sO2CO
  input Real pO2CO;
  input Real a;
  input Real T;
  output Real returnValue;
algorithm
  returnValue := antilogit(y(pO2CO, a, T));
end sO2CO;
