within NewBloodyMary_testing.OSA;
model bloodBEox

  Physiolibrary.Types.RealIO.PressureInput pCO2
    "pCO2 at given temperature in Pa" annotation (Placement(transformation(
          extent={{-140,62},{-100,102}}),iconTransformation(extent={{-120,82},{-100,
            102}})));
  Physiolibrary.Types.RealIO.pHInput pH "pH at given temperature" annotation (
      Placement(transformation(extent={{-140,28},{-100,68}}),
        iconTransformation(extent={{-120,48},{-100,68}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
    "hemoglobin concentration in mmol/l" annotation (Placement(transformation(
          extent={{-140,-6},{-100,34}}), iconTransformation(extent={{-120,14},{-100,
            34}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cAlb
    "albumin concentration in plasma (mmol/l)" annotation (Placement(
        transformation(extent={{-140,-42},{-100,-2}}),  iconTransformation(
          extent={{-120,-22},{-100,-2}})));
  Physiolibrary.Types.RealIO.TemperatureInput temp
    "temperature in Kelvinss"
    annotation (Placement(transformation(extent={{-142,-110},{-102,-70}}),
        iconTransformation(extent={{-120,-102},{-100,-82}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput BEox
    "Base Excess (in fully oxygenated blood) in mmol/l" annotation (Placement(
        transformation(extent={{100,-10},{120,10}}),
                                                   iconTransformation(extent={{100,-10},
            {120,10}})));

  Physiolibrary.Types.RealIO.ConcentrationInput cPi
    "Phosphate concentration in plasma (mmol/l)" annotation (Placement(
        transformation(extent={{-140,-78},{-100,-38}}), iconTransformation(
          extent={{-120,-50},{-100,-30}})));
  Physiolibrary.Types.RealIO.FractionInput sO2 "O2 hemoglobin saturation"
    annotation (Placement(transformation(extent={{-144,-146},{-104,-106}}),
        iconTransformation(extent={{-120,-78},{-100,-58}})));

algorithm
  BEox := cBEoxOf(pH,pCO2/1000,ctHb,temp-273.15,cAlb,cPi,sO2);
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                         graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-76,38},{86,-16}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="blood BEox")}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end bloodBEox;
