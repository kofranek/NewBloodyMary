within NewBloodyMary_testing.OSA;
function AlveolarGases "Calculation of partial pressures of O2 and CO2"
  input Real VAi_BTPS "inspired alveolar ventilation in l BTPS/min";
  input Real FiO2 "fraction concentration of O2 in dry inspired gas";
  input Real FiCO2 "fraction concentationo of CO2 in dry inspired gas";
  input Real temp "?core body temperature in ?C";
  input Real PB "barometric pressure";
  input Real VO2 "rate of oxygen comsumption [mmol/min]";
  input Real VCO2 "rate of carbon dioxide production [mmol/min]";
  output Real PAO2 "alveolar pO2 [mmHg]";
  output Real PACO2 "alveolar PCO2 [mmHg]";
  output Real VAe_BTPS "expired alveolar ventilation in l BTPS/min";
protected
  Real VCO2_STPD "rate of carbon dioxide production in l STPD/min";
  Real VO2_STPD "rate of oxygen consumtion in l STPD/min";
  Real kBTPS_to_STPD "conversion factor form BTPS to STPD";
  Real VAi_STPD "inspired alveolar ventilation in l/min STPD";
  Real VO2i_STPD "inspired O2 in l STPD/min";
  Real VCO2i_STPD "inspired CO2 in l STPD/min";
  Real VAe_STPD "expired alveolar ventilation in l/min STPD";
  Real VO2e_STPD "exspired O2 in l STPD/min";
  Real VCO2e_STPD "exspired CO2 in l STPD/min";
  Real FeO2_D "fraction concentationo of O2 in dry expired gas";
  Real FeCO2_D "fraction concentationo of CO2 in dry expired gas";
algorithm
  //conversion of metabolic gases flow from mmol/min to l STPD/min
  VCO2_STPD := VCO2 * 0.022414;
  VO2_STPD := VO2 *  0.022414;
  //calculation of VAi_STPD
  kBTPS_to_STPD := BTPS_to_STPD(PB, temp);
  VAi_STPD := VAi_BTPS * kBTPS_to_STPD;
  //l STPD/min
  // calculation of inspired gases flow in l STPD/min
  VO2i_STPD := VAi_STPD * FiO2;
  VCO2i_STPD := VAi_STPD * FiCO2;
  //calculation of expired alveolar ventilation in l STPD/min
  VAe_STPD := VAi_STPD + VCO2_STPD - VO2_STPD;
  //calculation of expired gases flow in STPD
  VO2e_STPD := VO2i_STPD - VO2_STPD;
  VCO2e_STPD := VCO2i_STPD + VCO2_STPD;
  //calculation of FeO2 and FeCO2 in dry expired gas
  FeO2_D := VO2e_STPD / VAe_STPD;
  FeCO2_D := VCO2e_STPD/VAe_STPD;
  //calculation of expired alveolar ventilation in l BTPS/min (VAe_BTPS)
  VAe_BTPS := VAe_STPD / kBTPS_to_STPD;
  //calculation of PAO2 and PACO2 (at BTPS)
  PAO2 := FeO2_D * (PB - pH2Oof(temp));
  PACO2 := FeCO2_D*(PB - pH2Oof(temp));
end AlveolarGases;
