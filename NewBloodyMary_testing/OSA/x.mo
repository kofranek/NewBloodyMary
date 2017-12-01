within NewBloodyMary_testing.OSA;
function x
 input Real pO2CO;
 input Real a;
 input Real T;
 output Real returnValue;
protected
 Real p0 =    7.0;
 Real T0 =   37.0;
 Real dbdT =   0.055;
algorithm
 returnValue := log(pO2CO/p0) - a - dbdT*(T - T0);
end x;
