within NewBloodyMary_testing.Parts;
model Haemoglobin
  extends BufferInterface;
 Physiolibrary.Types.RealIO.ConcentrationInput
                                     tHb_E
    "total concentration of haemoglobin in erythrocytes"
    annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
  Physiolibrary.Types.RealIO.FractionInput
                                     sO2 "saturation of haemoglobin by O2"
    annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
  Physiolibrary.Types.RealIO.PressureInput
                                     pCO2 "partial pressure of CO2"
    annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
  parameter Real betaOxyHb = 3.1
    "buffer value for oxygenated Hb without CO2";
  parameter Real betaDeoxyHb = 3.3 "buffer value for Hb without O2 and CO2";
  parameter Real pIo=7.13 "isoelectric pH for oxygenated Hb without CO2";
  parameter Real pIr=7.32 "isoelectric pH for Hb without O2 and CO2";

  parameter Real pKzO=8.08
    "pKa for NH3+ end of oxygenated haemoglobin chain";
  parameter Real pKzR=7.14
    "pKa for NH3+ end of deoxygenated haemoglobin chain";
  parameter Real pKcO=4.62
    "10^(pH-pKcO) is the dissociation constatnt for O2HbNH2 + CO2 <-> O2HbNHCOO- + H+ ";
  parameter Real pKcR=4.62
    "10^(pH-pKcR) is the dissociation constatnt for HbNH2 + CO2 <-> HbNHCOO- + H+ ";

  parameter Real KcR=10^(-pKcR);
  parameter Real KzR=10^(-pKzR);
  parameter Real KcO=10^(-pKcO);
  parameter Real KzO=10^(-pKzO);

  Real carbaminohaemoglobin;
  Real sCO2;
  Real zOxyHb;
  Real zDeoxyHb;
  Real zOxyCarbaminoHb;
  Real zDeoxyCarbaminoHb;
  Real H=10^(-pH);
  Real aCO2;
  Real cdCO2;
  Physiolibrary.Types.RealIO.TemperatureInput
                                     T
    annotation (Placement(transformation(extent={{-120,-120},{-80,-80}})));
equation
aCO2 = 0.23 * 10^(-0.0092*(T-37));
  //solubility depends on temperature
  cdCO2 = aCO2 * pCO2 * 0.001;
  //from mmol to mol
  carbaminohaemoglobin = tHb_E * cdCO2 * ((H * H * ((1 - sO2) / (KzO * KcO) + sO2 / (KzR * KcR)) + H * ((1 - sO2) / KcO + sO2 / KcR) + cdCO2) / ((H * H / (KzR * KcR) + H / KcR + cdCO2) * (H * H / (KzO * KcO) + H / KcO + cdCO2)));
  //, where cdCO2=free disolved CO2 concentration in erythrocytes in mol/l
  sCO2 = carbaminohaemoglobin / tHb_E;

y = -tHb_E*(sO2*(1-sCO2)*zOxyHb + (1-sO2)*(1-sCO2)*zDeoxyHb + sO2*sCO2*zOxyCarbaminoHb + (1-sO2)*sCO2*zDeoxyCarbaminoHb)* Modelica.Constants.F;

zOxyHb = betaOxyHb * (pH-pIo);
zDeoxyHb = betaDeoxyHb * (pH-pIr);
zOxyCarbaminoHb = zOxyHb + (1+2*10^(pKzO-pH))/(1+10^(pKzO-pH));
  //= zOxyHb + -[O2HbNH2]/([O2HbNH2]+[O2HbNH3+]) + -2[O2HbNH3+]/([O2HbNH2]+[O2HbNH3+]), where pKZO=8.08
  zDeoxyCarbaminoHb = zDeoxyHb + (1 + 2 * 10 ^ (pKzR - pH)) / (1 + 10 ^ (pKzR - pH)); //betaOxyHb(pH) * (pH-pIO) + -[HbNH2]/([HbNH2]+[HbNH3+]) + -2[HbNH3+]/([HbNH2]+[HbNH3+]), where pKZR=7.14
  annotation (Icon(graphics={Text(
          extent={{-79,-27},{79,27}},
          lineColor={0,0,255},
          origin={73,19},
          rotation=90,
          textString="Hb")}));
end Haemoglobin;
