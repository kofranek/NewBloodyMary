within NewBloodyMary_testing.OSA;
function antilogit
  input Real x;
  output Real returnValue;
algorithm
  returnValue := exp(x)/(1.0 + exp(x));
end antilogit;
