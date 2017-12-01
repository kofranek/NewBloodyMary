within NewBloodyMary_testing.OSA;
function aFrom
  input Real pH;
  input Real pCO2;
  input Real MetHb;
  input Real HbF;
  input Real cDPG;
  output Real returnValue;
protected
  Real dadpH =   -0.88;
  Real dadlnpCO2 =   0.048;
  Real dadxMetHb =   -0.7;
  Real dadxHbF =   -0.25;
  Real dadcDPG0 =   0.3;
  Real pH0 =   7.40;
  Real pCO20 =   5.33;
  Real dadcDPGxHbF =   -0.1;
  Real cDPG0 =   5.0;
algorithm
  returnValue:= dadpH*(pH - pH0)
      + dadlnpCO2*log(pCO2/pCO20)
      + dadxMetHb*MetHb
      + dadxHbF*HbF
      + (dadcDPG0 + dadcDPGxHbF*HbF)*(cDPG/cDPG0 - 1.0);
end aFrom;
