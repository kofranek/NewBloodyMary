within NewBloodyMary_testing.OSA;
function aCO2of
  input Real T;
  output Real result;
protected
 Real aCO2T0 =   0.23;              //mM/kPa
 Real dlgaCO2dT =   -0.0092;              // lg(mM/kPa)/K
 Real T0 =  37;
algorithm
 result:= aCO2T0 * antilg(dlgaCO2dT*(T - T0));
end aCO2of;
