within NewBloodyMary_testing.OSA;
function lg
  input Real x;
  output Real result;
algorithm
    result := (log(x))/log( 10); //it is not necessary, in Modelica exists embeded function log10
end lg;
