within NewBloodyMary_testing.OSA.testOSA;
model testctCO2Bof
  Real ctCO2;
  Real ctCO2SI;
  Real cHCO3;
  Real cdCO2p;
algorithm
  ctCO2 := ctCO2Bof(7.037,5.330,37,8,0.946);

   (ctCO2SI, cHCO3,cdCO2p) := CO2totalSI(
   7.037,
   5330,
   273.15+37,
   8,
   0.946);

end testctCO2Bof;
