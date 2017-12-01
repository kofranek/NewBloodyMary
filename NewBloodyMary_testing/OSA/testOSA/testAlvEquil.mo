within NewBloodyMary_testing.OSA.testOSA;
model testAlvEquil
  Real VAi= 4;
  Real FiO2= 0.21;
  Real FiCO2 = 0.0004;
  Real temp = 37;
  Real PB= 760;
  Real Q = 5;
  Real CvO2 = 6.18;
  Real CvCO2 = 26.3;
  Real BEox= 0;
  Real Hb = 8.40;
  Real cAlb = 0.66;
  Real cPi = 1.15;
  Real cDPG = 5.3;
  Real FCOHb = 0.005;
  Real FMetHb = 0.005;
  Real FHbF = 0.005;

  Real VA "expired alveolar ventilation in l/min";
  Real VO2 "rate of oxygen comsumption [mmol/min]";
  Real VCO2 "rate of carbon dioxide production [mmol/min]";
  Real CpcO2
    "O2 content in end pulmonary capillary blood [l STPD/l of blood]";
  Real CpcCO2
    "CO2 content in pulmonary capillary blood [l STPD/l of blood]";
  Real PAO2 "alveolar pO2 [kPa]";
  Real PACO2 "alveolar PCO2 [kPA]";
  Real PpcO2 "pO2 in end pulmonary capillary blood [kPa]";
  Real PpcCO2 "pCO2 in end pulmonary capillary blood  PCO2 [kPA]";
  Real sO2pc
    "oxyhemoglobin saturation in end pulmonary capillary blood [ratio form 0 to 1]";
  Real pHpc "pH in end pulmonary capillary blood ";
  Real HCO3pc;
  Real VCO2ml "rate of oxygen comsumption [ml STPD/min]";
  Real VO2ml "rate of CO2 production [ml STPD/min]";

  Real PAO2_mmHg;
  Real PACO2_mmHg;
  Real Ve_BTPS;
  Real PACO2_kPa;
  Real PAO2_kPa;

algorithm
   (VA,VO2,VCO2,CpcO2,CpcCO2,PAO2,PACO2,PpcO2,PpcCO2,sO2pc,pHpc,HCO3pc):=AlvEquil(VAi, FiO2, FiCO2, temp, PB, Q, CvO2, CvCO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF);
    VCO2ml:=VCO2*22.414;
    VO2ml :=VO2*22.414;

    (PAO2_mmHg, PACO2_mmHg,Ve_BTPS):=AlveolarGases(VAi, FiO2,FiCO2,temp, PB,VO2, VCO2);
    PACO2_kPa:=PACO2_mmHg/7.50061683;
    PAO2_kPa:=PAO2_mmHg/7.50061683;
end testAlvEquil;
