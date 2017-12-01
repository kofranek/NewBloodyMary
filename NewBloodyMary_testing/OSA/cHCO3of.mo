within NewBloodyMary_testing.OSA;
function cHCO3of "calculation of plasma bicarbonate concentration"
  input Real pH "plasma pH at given temperature in mmol/l";
  input Real pCO2 "pCO2 in kPa";
  input Real T "temperature in °C";
  output Real HCO3p "plasma bicarbonate concentration in mmol/l";
algorithm
  HCO3p := pCO2*aCO2of( T)*antilg( pH - pKof( T));
end cHCO3of;
