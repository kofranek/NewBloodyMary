within NewBloodyMary_testing.OSA;
function y
  input Real pO2CO;
  input Real a;
  input Real T;
  output Real returnValue;
protected
  Real y0 =   1.8747;
  Real k =   0.5342857;
algorithm
  returnValue := y0 + x(pO2CO, a, T) + h(a)*tanh(k*x(pO2CO, a, T));
end y;
