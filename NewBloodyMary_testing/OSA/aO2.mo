within NewBloodyMary_testing.OSA;
function aO2
 input Real temp;
 output Real returnValue;
algorithm
  returnValue := exp(log(0.0105) - 0.0115*(temp - 37.0) + 0.5*0.00042*(temp - 37.0)^2);
end aO2;
