within NewBloodyMary_testing.OSA;
function logit
  input Real x;
  output Real returnValue;
algorithm
  returnValue :=  log(x/(1 - x));
end logit;
