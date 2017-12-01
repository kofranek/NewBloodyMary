within NewBloodyMary_testing.OSA.testOSA;
model testAlveolarGases
  Real VAi= 4.91753;
  Real FiO2= 0.21;
  Real FiCO2 = 0.0004;
  Real temp = 37;
  Real PB= 760;
  Real VO2=11;// "rate of oxygen comsumption [mmol/min]";
  Real VCO2 = 10;// "rate of carbon dioxide production [mmol/min]"

  Real PAO2_mmHg;
  Real PACO2_mmHg;
  Real Ve_BTPS;
  Real PACO2_kPa;
  Real PAO2_kPa;

algorithm
    (PAO2_mmHg, PACO2_mmHg,Ve_BTPS):=AlveolarGases(VAi, FiO2,FiCO2,temp, PB,VO2, VCO2);
    PACO2_kPa:=PACO2_mmHg/7.50061683;
    PAO2_kPa:=PAO2_mmHg/7.50061683;
end testAlveolarGases;
