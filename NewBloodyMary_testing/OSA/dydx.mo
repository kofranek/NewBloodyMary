within NewBloodyMary_testing.OSA;
function dydx
  input Real pO2CO;
  input Real a;
  input Real T;
  output Real returnValue;
protected
  Real k =    0.5342857;
algorithm
  returnValue :=1 + h(a)*k*(1 - (tanh(k*x(pO2CO, a, T)))^2);
end dydx;
