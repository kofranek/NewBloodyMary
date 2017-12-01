within NewBloodyMary_testing.OSA;
function O2CO2of
  input Real tO2 "blood total O2 concentration in mmol/l";
  input Real tCO2 "blood total CO2 concentration in mmol/l";
  input Real BEox "Base Excess in virtually oxyganated blood in mmol/l";
  input Real cHb "concentration of hemoglobin in mmol/l";
  input Real cAlb "albumin concentration in plasma in mmol/l";
  input Real cPi "phospahate concentration in plasma in mmol/l";
  input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemiglobin";
  input Real FHbF "substance fraction of fetal hemogobin";
  input Real temp "temperature in ?C";
  output Real pO2 "pO2 in kPa";
  output Real pCO2 "pCO2 in kPa";
  output Real pH "plasma pH";
  output Real sO2 "O2 hemoglobin saturation";

protected
   Real epsPO2 = 0.000001;
   Real epsPCO2 = 0.000001;
   Real epsAPO2 = 0.00001;
   Real DPO2;
   Real AO2;
   Real CO2;
   Real O2;
   Real DCO2;
   Real DO2;
   Real DPCO2;
   Real pCO2mean;
   Real pCO2low;
   Real pCO2high;
   Real DCO2low;
   Real DCO2mean;
   Real pO2mean;
   Real pO2low;
   Real pO2high;
   Real DO2low;
   Real DO2mean;
algorithm
  //initialisation
  pCO2 := 5.33;
  pO2 := 13.3;
  sO2 := 0.9591382375911204;
  DPO2 := 2;
  //main iteration loop
  while abs(DPO2) > epsAPO2 loop
    AO2 := pO2;
    pH := BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
    CO2 := ctCO2Bof(pH, pCO2, temp, cHb, sO2);
    DCO2 := tCO2 - CO2;
    DPCO2 := 1;
    if DCO2 > 0 then
      pCO2low := pCO2;
      while DCO2 > 0 loop
        pCO2 := pCO2 + DPCO2;
        pH := BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
        CO2 := ctCO2Bof(pH, pCO2, temp, cHb, sO2);
        DCO2 := tCO2 - CO2;
      end while;
      pCO2high := pCO2;
    else
      pCO2high := pCO2;
      while DCO2 < 0 loop
        pCO2 := pCO2 - DPCO2;
        if pCO2 < 0 then
          pCO2 := 0.0001;
        end if;
        pH := BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
        CO2 := ctCO2Bof(pH, pCO2, temp, cHb, sO2);
        DCO2 := tCO2 - CO2;
      end while;
      pCO2low := pCO2;
    end if;
    while abs(pCO2high - pCO2low) > epsPCO2 loop
      pCO2mean := (pCO2low + pCO2high) / 2;
      pH := BEINVof(BEox, pCO2low, cHb, cAlb, cPi, sO2, temp);
      CO2 := ctCO2Bof(pH, pCO2low, temp, cHb, sO2);
      DCO2low := tCO2 - CO2;
      pH := BEINVof(BEox, pCO2mean, cHb, cAlb, cPi, sO2, temp);
      CO2 := ctCO2Bof(pH, pCO2mean, temp, cHb, sO2);
      DCO2mean := tCO2 - CO2;
      if DCO2low * DCO2mean > 0 then
        pCO2low := pCO2mean;
      else
        pCO2high := pCO2mean;
      end if;
    end while;
    pCO2 := (pCO2low + pCO2high) / 2;
    sO2 := sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
    O2 := ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
    DO2 := tO2 - O2;
    if DO2 > 0 then
      pO2low := pO2;
      while DO2 > 0 loop
        pO2 := pO2 + DPO2;
        sO2 := sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
        O2 := ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
        DO2 := tO2 - O2;
      end while;
      pO2high := pO2;
    else
      pO2high := pO2;
      while DO2 < 0 loop
        pO2 := pO2 - DPO2;
        if pO2 < 0.001 then
          pO2 := 0.001;
        end if;
        sO2 := sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
        O2 := ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
        DO2 := tO2 - O2;
      end while;
      pO2low := pO2;
    end if;
    while abs(pO2high - pO2low) > epsPO2 loop
      pO2mean := (pO2low + pO2high) / 2;
      sO2 := sO2of(pO2low, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
      O2 := ctO2Bof(cHb, pO2low, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
      DO2low := tO2 - O2;
      sO2 := sO2of(pO2mean, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
      O2 := ctO2Bof(cHb, pO2mean, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
      DO2mean := tO2 - O2;
      if DO2low * DO2mean > 0 then
        pO2low := pO2mean;
      else
        pO2high := pO2mean;
      end if;
    end while;
    pO2 := (pO2high + pO2high) / 2;
    sO2 := sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
    DPO2 := abs(pO2 - AO2);
  end while;
  //pCO2 and pH iteration calculation
  //iteration of PO2 and SO2
  //connection of pCO2 and pO2 iteration loops
end O2CO2of;
