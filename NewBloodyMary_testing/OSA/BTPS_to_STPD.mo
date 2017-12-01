within NewBloodyMary_testing.OSA;
function BTPS_to_STPD "coefficient for conversion volume from BTPS to STPD"
  input Real PB "barometric pressure in mmHg";
  input Real temp "temperature in ?C";
  output Real coefficient_BTPS_to_STP
    "from BTPS to STPD conversion coefficient";
protected
  Real pH2O;
algorithm
  pH2O :=pH2Oof(temp);
  coefficient_BTPS_to_STP := (PB - pH2O) * 273.15 / (760 * (273.15 + temp));
end BTPS_to_STPD;
