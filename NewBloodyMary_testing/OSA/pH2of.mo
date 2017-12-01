within NewBloodyMary_testing.OSA;
function pH2of
  input Real pH1;
  input Real T1;
  input Real T2;
  input Real cHb;
  input Real cAlb;
  input Real pCO21;
  output Real result;
protected
  Real betaX;
  Real dpHdT1;
  Real pH2;
  Real cHCO3;
  Real dlgpCO2dT1;
  Real pCO22;
  Real dpHdT2;
  Real dpHdTmean;
  Real cAlbN = 0.66;
algorithm
  betaX := 7.7 + 8*(cAlb - cAlbN) + 2.3*cHb;
  dpHdT1 := (-0.0026 -
     betaX*0.016*(1/(2.3*cHCO3of( pH1, pCO21, T1)) +
        1/(2.3*pCO21*aCO2of( T1))))/(1 +
     betaX*(1/(2.3*cHCO3of( pH1, pCO21, T1)) +
        1/(2.3*pCO21*aCO2of( T1))));
  pH2 := pH1 + dpHdT1*(T2 - T1);

  cHCO3 := cHCO3of( pH1, pCO21, T1);
  dlgpCO2dT1 := -0.0026 - (-0.0092) -
  dpHdT1 + (1/(2.3*cHCO3))*(betaX*dpHdT1 + betaX*0.016);
  pCO22 := antilg( lg( pCO21) + dlgpCO2dT1*(T2 - T1));

  dpHdT2 := (-0.0026 -
     betaX*0.016*(1/(2.3*cHCO3of( pH2, pCO22, T2)) +
        1/(2.3*pCO22*aCO2of( T2))))/(1 +
     betaX*(1/(2.3*cHCO3of( pH2, pCO22, T2)) +
        1/(2.3*pCO22*aCO2of( T2))));
  dpHdTmean := (dpHdT1 + dpHdT2)/2;
  result := pH1 + dpHdTmean*(T2 - T1);

end pH2of;
