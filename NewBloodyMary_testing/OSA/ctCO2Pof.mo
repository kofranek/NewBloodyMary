within NewBloodyMary_testing.OSA;
function ctCO2Pof
  input Real pH;
  input Real pCO2;
  input Real T;
  output Real result;
algorithm
  result := pCO2 * aCO2of(T)*(1 + antilg(pH-pKof(T)));
end ctCO2Pof;
