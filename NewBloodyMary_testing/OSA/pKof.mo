within NewBloodyMary_testing.OSA;
function pKof
 input Real T;
 output Real result;
protected
   Real pKT0 = 6.1;
   Real dpKdT = -0.0026;
   Real T0 = 37;
algorithm
   result := pKT0 + dpKdT*(T - T0);
end pKof;
