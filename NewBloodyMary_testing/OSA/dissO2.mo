within NewBloodyMary_testing.OSA;
function dissO2 "concentration of dissolved oxygen in blood"
  input Real pO2;
  input Real temp;
  output Real returnValue "dissolved blood oxygen in mmol/l";
algorithm
  returnValue := aO2(temp)*pO2;
end dissO2;
