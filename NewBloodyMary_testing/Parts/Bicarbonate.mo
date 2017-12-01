within NewBloodyMary_testing.Parts;
model Bicarbonate
  extends BufferInterface;
  Physiolibrary.Types.RealIO.PressureInput
                                     pCO2(displayUnit="mmHg") annotation (Placement(transformation(extent=
           {{-120,-20},{-80,20}}), iconTransformation(extent={{-120,-20},{-80,20}})));
  Physiolibrary.Types.RealIO.TemperatureInput
                                     T(displayUnit="degC") annotation (Placement(transformation(extent={{-120,
            -20},{-80,20}}), iconTransformation(extent={{-120,-60},{-80,-20}})));

    Real pK;
  Real aCO2;
  Physiolibrary.Types.Concentration cdCO2;

  Physiolibrary.Types.VolumeDensityOfCharge y2;
equation
  //Henderson-Hasselbalch equation:
  pK = 6.1 + (-0.0026) * (T - 310.15);
  aCO2 = 0.00023 * 10^(-0.0092*(T-310.15));
  //solubility depends on temperature
  cdCO2 = aCO2 * pCO2;
  y = -cdCO2*10^(pH-pK)* Modelica.Constants.F;
  //bicarbonate
  y2 = -cdCO2 * 10 ^ (pH - 6.35) * Modelica.Constants.F;  //bicarbonate
  annotation (Icon(graphics={Text(
          extent={{-79,-27},{79,27}},
          lineColor={0,0,255},
          origin={75,19},
          rotation=90,
          textString="HCO3")}));
end Bicarbonate;
