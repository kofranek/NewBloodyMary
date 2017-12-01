within NewBloodyMary_testing.OSA;
function pHfr "Conversion to 37 C, calculation, conversion to T"
  input Real pCO2;
  input Real cBEox;
  input Real cHb;
  input Real T;
  input Real cAlb;
  output Real result_pH;
protected
  Real pCO237;
  Real pH37Guess=7.4;
  Real cBEoxGuess;
  Real pH0 = 7.4;
  Real T0 = 37;
  Real cAlbN = 0.66;
  Real betaHb = 7.7;
  Real betaP = 2.3;
  Real ctHbb = 43.0;
  Boolean doit;
  Real epsilon = 0.000001;
algorithm
  //pCO237:=pCO22of(pCO2, T, T0, cHb);
  pCO237 := pCO22of(pCO2, T, T0, cHb, cAlb, pH37Guess);

   cBEoxGuess:=cBaseOf(pH37Guess, pCO237, cHb, T0, cAlb);
  // Newton Raphson: We know cBase as a function of pH at constant pCO2,
  //   but cannot express pH as a function of cBase}
  doit := false;
   while not doit loop
      pH37Guess:=pH37Guess + (cBEox - cBEoxGuess)/((1-cHb/ctHbb)*
             (betaP+8*(cAlb-cAlbN) + betaHb*cHb)
             + log(10.0)*cHCO3of(pH37Guess, pCO237, T0));
      cBEoxGuess:=cBaseOf(pH37Guess, pCO237, cHb, T0,cAlb);
      doit := abs(cBEox - cBEoxGuess) < epsilon;
   end while;
  //Result:= pH2of(pH37Guess, T0, T, cHb);
  result_pH := pH2of(pH37Guess, T0, T, cHb, cAlb, pCO237);
end pHfr;
