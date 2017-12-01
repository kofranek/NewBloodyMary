within NewBloodyMary_testing.OSA;
model BEINV

  Physiolibrary.Types.RealIO.PressureInput pCO2
    "pCO2 at given temperature in Pa" annotation (Placement(transformation(
          extent={{-69,25},{-53,41}}), iconTransformation(extent={{-120,30},
            {-100,50}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
    "hemoglobin concentration in mmol/l" annotation (Placement(
        transformation(extent={{-92,-4},{-76,12}}),iconTransformation(
          extent={{-120,-10},{-100,10}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cAlb
    "albumin concentration in plasma (mmol/l)" annotation (Placement(
        transformation(extent={{-94,-18},{-76,0}}),   iconTransformation(
          extent={{-120,-36},{-100,-16}})));
  Physiolibrary.Types.RealIO.pHOutput pH "plasma pH at given temperature"
    annotation (Placement(transformation(extent={{100,-10},{120,10}}),
        iconTransformation(extent={{100,-10},{120,10}})));
  Physiolibrary.Types.RealIO.ConcentrationInput BEox "BEox in mmol/l"
    annotation (Placement(transformation(extent={{-60,51},{-42,69}}),
        iconTransformation(extent={{-120,70},{-100,90}})));
  bloodBEox vanSlykeEquation
    annotation (Placement(transformation(extent={{-36,-32},{44,40}})));
  Physiolibrary.Types.RealIO.TemperatureInput temp "temperature in Kelvins"
    annotation (Placement(transformation(extent={{-90,-68},{-74,-52}}),
        iconTransformation(extent={{-120,-108},{-100,-88}})));
  Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1
    annotation (Placement(transformation(extent={{-24,42},{32,78}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cPi
    "albumin concentration in plasma (mmol/l)" annotation (Placement(
        transformation(extent={{-88,-28},{-70,-10}}), iconTransformation(
          extent={{-120,-60},{-100,-40}})));
  Physiolibrary.Types.RealIO.FractionInput sO2 "O2 hemoglobin saturation"
    annotation (Placement(transformation(extent={{-94,-38},{-78,-22}}),
        iconTransformation(extent={{-120,-84},{-100,-64}})));
equation
  connect(temp, vanSlykeEquation.temp) annotation (Line(points={{-82,-60},{
          -68,-60},{-68,-29.12},{-40,-29.12}},
                                             color={0,0,127}));
  connect(vanSlykeEquation.pCO2, pCO2) annotation (Line(points={{-40,37.12},
          {-56,37.12},{-56,33},{-61,33}},color={0,0,127}));
  connect(inverseBlockConstraints1.u1, BEox) annotation (Line(points={{
          -26.8,60},{-51,60},{-51,60}}, color={0,0,127}));
  connect(vanSlykeEquation.BEox, inverseBlockConstraints1.u2) annotation (
      Line(points={{48,4},{60,4},{60,48},{0,48},{0,60},{-18.4,60}}, color={
          0,0,127}));
  connect(ctHb, vanSlykeEquation.ctHb)
    annotation (Line(points={{-84,4},{-62,4},{-62,12.64},{-40,12.64}},
                                               color={0,0,127}));
  connect(vanSlykeEquation.pH, inverseBlockConstraints1.y2) annotation (
      Line(points={{-40,24.88},{-92,24.88},{-92,84},{6,84},{6,60},{27.8,60}},
        color={0,0,127}));
  connect(vanSlykeEquation.cAlb, cAlb) annotation (Line(points={{-40,-0.32},
          {-60,-0.32},{-60,-9},{-85,-9}},   color={0,0,127}));
  connect(pH, inverseBlockConstraints1.y1)
    annotation (Line(points={{110,0},{70,0},{70,60},{33.4,60}},
                                                 color={0,0,127}));
  connect(vanSlykeEquation.cPi, cPi) annotation (Line(points={{-40,-10.4},{
          -54,-10.4},{-54,-19},{-79,-19}}, color={0,0,127}));
  connect(vanSlykeEquation.sO2, sO2) annotation (Line(points={{-40,-20.48},
          {-70,-20.48},{-70,-30},{-86,-30}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),      graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-84,22},{94,-12}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="BEINV")}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end BEINV;
