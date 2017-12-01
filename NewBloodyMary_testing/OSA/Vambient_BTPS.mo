within NewBloodyMary_testing.OSA;
function Vambient_BTPS "Convert volume from ambient volume to BTPS"
  input Real V "ambient volume in l";
 // input Real PB "barometric pressure";
  input Real tempAmb "environment temperature in ?C";
  input Real tempBody "body temperature in ?C";
 // input Real fH2O "ambient humidity (<=1, unitless)";
  output Real VBTPS "BTPS volume in l";
algorithm
  VBTPS :=V*(tempBody + 273.15)/(tempAmb + 273.15);
end Vambient_BTPS;
