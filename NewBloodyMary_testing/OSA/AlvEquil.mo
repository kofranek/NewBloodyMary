within NewBloodyMary_testing.OSA;
function AlvEquil "Alveola equilibration"
  input Real VAi "inspired alveolar ventilation in l BTPS/min";
  input Real FiO2 "fraction concentration of O2 in dry nspired gas";
  input Real FiCO2 "fraction concentationo of CO2 in dry inspired gas";
  input Real temp "temperature in ?C";
  input Real PB "barometric pressure";
  input Real Q "blood perfusion";
  input Real CvO2
    "total concentration of oxygen in inflowing venous blood in l/min";
  input Real CvCO2
    "total concentration of carbon dioxide in inflowinf venous blood in l/min";
  input Real BEox
    "base excess in virtually fully oxygenated blood in mmol/l";
  input Real Hb "hemoglobin concentration in mmol/l";
  input Real cAlb "plasma albumin concentration in mmol/l";
  input Real cPi "plasma phosphate concentration in mmol/l";
  input Real cDPG "2,3 DPG - concentration in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemogobin";
  output Real VA "expired alveolar ventilation in l/min";
  output Real VO2 "rate of oxygen comsumption [l STPD/min]";
  output Real VCO2 "rate of carbon dioxide production [l STPD/min]";
  output Real CpcO2
    "O2 content in end pulmonary capillary blood [l STPD/l of blood]";
  output Real CpcCO2
    "CO2 content in pulmonary capillary blood [l STPD/l of blood]";
  output Real PAO2 "alveolar pO2 [kPa]";
  output Real PACO2 "alveolar PCO2 [kPA]";
  output Real PpcO2 "pO2 in end pulmonary capillary blood [kPa]";
  output Real PpcCO2 "pCO2 in end pulmonary capillary blood  PCO2 [kPA]";
  output Real sO2pc
    "oxyhemoglobin saturation in end pulmonary capillary blood [ratio form 0 to 1]";
  output Real pHpc "pH in end pulmonary capillary blood ";
  output Real HCO3pc
    "actual bicarbonate concentration in end pulmonary capillary blood [mmol/l]";
protected
  Real FAO2 "fraction concentration of O2 in alveoli";
  Real FACO2 "fraction concentration of CO2 in alveoli";

  Real cx1;
  Boolean done;
  Boolean doneCO2;
  Boolean doneO2;
  Real kBTPS_to_STPD;
  Real inflowCO2 "inflow CO2 in alveolo-cappillary unit in mmol/min";
  Real inflowO2 "inflow CO2 in alveolo-cappillary unit in mmol/min";
  Real outflowCO2 "outflow CO2 in alveolo-capllary unit in mmol/min";
  Real outflowO2 "outflow CO2 in alveolo-cappillary unit in mmol/min";
  Real ViCO2 "inflow CO2 in alveoli in l STPD/min";
  Real ViO2 "inflow O2 in alveoli in l STPD/min";
  Real VeCO2 "outflow CO2 from alveoli in l STPD/min";
  Real VeO2 "outflow O2 from alveoli in lSTPD/min";
  Real VCO2_STPD "CO2 excretion rate in l STPD/min";
  Real VO2_STPD "O2 consuption rate in l STPD/min";
  Real PACO2max;
  Real PACO2min;
  Real PAO2max;
  Real PAO2min;
  Real PAO2old;
  Real dPCO2 = 2;
  Real dPO2 = 2;
  Real EpsCO2;
  Real EpsO2;
  Real EpsP = 0.000001;
algorithm
  //initialisation
  EpsCO2 := 0.000001;
  EpsO2 := 0.000001;
  PAO2min := 0;
  PACO2min :=0;
  PAO2max :=260;
  PACO2max :=260;

  cx1 :=(PB - pH2Oof(temp))*0.133322368;
  //cx1 = PB - pH2O_BTPS
  kBTPS_to_STPD := BTPS_to_STPD(PB, temp);
  if Q == 0 then
    VO2 := 0;
    VCO2 := 0;
    PAO2 := FiO2 * cx1;
    PACO2 := FiCO2 * cx1;
    CpcO2 := CvO2;
    CpcCO2 := CvCO2;
    VA := VAi;
    (PpcO2, PpcCO2, pHpc, sO2pc) := O2CO2of(CpcO2, CpcCO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
  else
    PAO2 := 13.99;
    PACO2 := 5.33;
    kBTPS_to_STPD := BTPS_to_STPD(PB, temp);
    ViO2 := FiO2 * VAi * kBTPS_to_STPD;
    ViCO2 := FiCO2 * VAi * kBTPS_to_STPD;
    inflowCO2 := ViCO2 / 0.022414 + CvCO2 * Q;
    inflowO2 := ViO2 / 0.022414 + CvO2 * Q;
    done := false;
    PAO2old := 0;
    while not done loop
      doneCO2 := false;
      while not doneCO2 loop
        (CpcO2, CpcCO2, pHpc, sO2pc) := PO2PCO2of(PAO2, PACO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
        VCO2 := (CvCO2 - CpcCO2) * Q;
        VO2 := (CpcO2 - CvO2) * Q;
        VCO2_STPD := VCO2 * 0.022414;
        VO2_STPD := VO2 * 0.022414;
        VA := VAi + (VCO2_STPD - VO2_STPD) / kBTPS_to_STPD;
        if VA < 0 then
          VA := 0.0;
        end if;
        FACO2 := PACO2 / cx1;
        VeCO2 := VA * FACO2 * kBTPS_to_STPD;
        outflowCO2 := VeCO2 / 0.022414 + CpcCO2 * Q;
        doneCO2 := abs(inflowCO2 - outflowCO2) < EpsCO2;
        if not doneCO2 then
          if outflowCO2 > inflowCO2 then
            PACO2max := PACO2;
          else
            PACO2min := PACO2;
          end if;
          PACO2 := (PACO2max + PACO2min) / 2;
        end if;
      end while;
      FAO2 := PAO2 / cx1;
      outflowO2 := FAO2 * VA * kBTPS_to_STPD / 0.022414 + CpcO2 * Q;
      doneO2 := abs(outflowO2 - inflowO2) < EpsO2;
      if doneO2 then
        done := true;
      else
        if outflowO2 > inflowO2 then
          PAO2max := PAO2;
        else
          PAO2min := PAO2;
        end if;
        PAO2 := (PAO2max + PAO2min) / 2;
        doneO2 := false;
        while not doneO2 loop
          (CpcO2, CpcCO2, pHpc, sO2pc) := PO2PCO2of(PAO2, PACO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
          VCO2 := (CvCO2 - CpcCO2) * Q;
          VO2 := (CpcO2 - CvO2) * Q;
          VCO2_STPD := VCO2 * 0.022414;
          VO2_STPD := VO2 * 0.022414;
          VA := VAi + (VCO2_STPD - VO2_STPD) / kBTPS_to_STPD;
          if VA < 0 then
            VA := 0.0;
          end if;
          FAO2 := PAO2 / cx1;
          VeO2 := FAO2 * VA * kBTPS_to_STPD;
          outflowO2 := VeO2 / 0.022414 + CpcO2 * Q;
          doneO2 := abs(outflowO2 - inflowO2) < EpsO2;
          if not doneO2 then
            if outflowO2 > inflowO2 then
              PAO2max := PAO2;
            else
              PAO2min := PAO2;
            end if;
            PAO2 := (PAO2max + PAO2min) / 2;
          end if;
        end while;
      end if;
      if not done then
        PAO2old := PAO2;
        PAO2min := PAO2 - dPO2;
        if PAO2min < 0 then
          PAO2min := 0;
        end if;
        PACO2min := PACO2 - dPO2;
        if PACO2min < 0 then
          PACO2min := 0;
        end if;
        PACO2max := PACO2 + dPCO2;
        PAO2max := PAO2 + dPO2;
      end if;
    end while;
  end if;
  //shunt blood flow
  //cx1 = PB - pH2O_BTPS
  //cx1 = PB - pH2O_BTPS
  //iteration calculation of pAO2 and pACO2
  //init
  //l STPD/min
  //l STPD/min
  //in mmol/min
  //in mmol,/min
  //main iteration loop of PACO2 and PAO2;
  // in mmol min
  //in mmol/min
  //l STPD
  //l STPD
  //VA in l BTPS
  // cx1=PB-PH2O_BTPS
  // l/min STPD
  //in mmol/min
  //end if not doneCO2
  // end while not DoneCO2
  // cx1=PB-PH2O_BTPS
  //in mmol/min
  //all is done
  // iteration of PAO2
  // in mmol min
  //in mmol/min
  //VA in l BTPS
  // cx1=PB-PH2O_BTPS
  //l stpd/min
  //in mmol/min
  //end while not doneO2
  //end else
  //end if
  //end while
  //end else
  //iteration of PAO2 and PACO2 done
  HCO3pc := cHCO3of(pHpc, PACO2, temp);
  PpcO2 := PAO2;
  PpcCO2 := PACO2;

end AlvEquil;
