within ;
model BloodyMary_01
  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit="l/min")
       = 8.3333333333333e-5)
    annotation (Placement(transformation(extent={{-83,60},{-75,66}})));
  Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
    annotation (Placement(transformation(extent={{-54,10},{-46,18}})));
  Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
    annotation (Placement(transformation(extent={{-58,24},{-50,32}})));
  Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
    annotation (Placement(transformation(extent={{-50,32},{-42,40}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(displayUnit
        ="l/min") = 8.3333333333333e-5)            annotation (Placement(
        transformation(
        extent={{4,4},{-4,-4}},
        rotation=180,
        origin={-76,52})));
  inner AcidBaseBalance.Interfaces.ModelSettings
                                 modelSettings(PB=106657.909932)
    annotation (Placement(transformation(extent={{-84,76},{-64,96}})));
  AcidBaseBalance.Acidbase.OSA.AlvEq_2units_with_shunts_and_mixing alvEq_2units_with_shunts_and_mixing
    annotation (Placement(transformation(extent={{-26,4},{54,78}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-52,74},{-44,82}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=0.00018333333333333)
    annotation (Placement(transformation(extent={{-64,-54},{-56,-46}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0.00016666666666667)
    annotation (Placement(transformation(extent={{-66,-72},{-58,-64}})));
  Simplest.SimplestTissue
                 simplestTissue
    annotation (Placement(transformation(extent={{-18,-64},{36,-18}})));
equation
  connect(VAi.y,alvEq_2units_with_shunts_and_mixing. VAi) annotation (Line(
        points={{-74,63},{-48,63},{-48,57.65},{-25.3043,57.65}}, color={0,0,
          127}));
  connect(alvEq_2units_with_shunts_and_mixing.Q,CardiacOutput. y)
    annotation (Line(points={{-25.3043,54.875},{-28.6521,54.875},{-28.6521,52},
          {-71,52}},     color={0,0,127}));
  connect(alvEq_2units_with_shunts_and_mixing.Fsh,Fsh. y) annotation (Line(
        points={{-25.4783,36.6063},{-32.7391,36.6063},{-32.7391,36},{-41,36}},
        color={0,0,127}));
  connect(Fq1.y,alvEq_2units_with_shunts_and_mixing. F_q1) annotation (Line(
        points={{-49,28},{-38,28},{-38,28.2813},{-25.4783,28.2813}}, color=
          {0,0,127}));
  connect(alvEq_2units_with_shunts_and_mixing.F_VAi1,FAi1. y) annotation (
      Line(points={{-25.8261,19.0313},{-41.913,19.0313},{-41.913,14},{-45,14}},
                color={0,0,127}));
  connect(BEox.y,alvEq_2units_with_shunts_and_mixing. BEox) annotation (
      Line(points={{-43,78},{-34,78},{-34,64.125},{-26,64.125}}, color={0,0,
          127}));
  connect(simplestTissue.O2a,alvEq_2units_with_shunts_and_mixing. ctO2a)
    annotation (Line(points={{-18,-21.22},{-34,-21.22},{-34,-8},{80,-8},{80,
          34.7563},{55.5652,34.7563}}, color={0,0,127}));
  connect(simplestTissue.CO2a,alvEq_2units_with_shunts_and_mixing. ctCO2a)
    annotation (Line(points={{-18,-26.74},{-42,-26.74},{-42,-4},{72,-4},{72,
          30.5938},{55.5652,30.5938}}, color={0,0,127}));
  connect(simplestTissue.Q,CardiacOutput. y) annotation (Line(points={{-18.81,
          -41.23},{-62,-41.23},{-62,52},{-71,52}},        color={0,0,127}));
  connect(VO2.y,simplestTissue. MO2) annotation (Line(points={{-55,-50},{-38,
          -50},{-38,-49.05},{-19.35,-49.05}},     color={0,0,127}));
  connect(VCO2.y,simplestTissue. MCO2) annotation (Line(points={{-57,-68},{-40,
          -68},{-40,-56.41},{-18.81,-56.41}},     color={0,0,127}));
  connect(simplestTissue.O2v,alvEq_2units_with_shunts_and_mixing. CvO2)
    annotation (Line(points={{35.46,-21.68},{42,-21.68},{42,-2},{-72,-2},{-72,
          49.325},{-25.3043,49.325}}, color={0,0,127}));
  connect(simplestTissue.CO2v,alvEq_2units_with_shunts_and_mixing. CvCO2)
    annotation (Line(points={{35.46,-26.74},{46,-26.74},{46,2},{-68,2},{-68,
          46.55},{-25.3043,46.55}}, color={0,0,127}));
  connect(simplestTissue.BEox,alvEq_2units_with_shunts_and_mixing. BEox)
    annotation (Line(points={{-18,-32.26},{-60,-32.26},{-60,66},{-34,66},{-34,
          64.125},{-26,64.125}},     color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={170,255,170},
          fillPattern=FillPattern.Solid), Text(
          extent={{-78,32},{84,-20}},
          textColor={0,0,0},
          textString="BloodyMary_01")}),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    uses(
      Physiolibrary(version="3.0.0-alpha10"),
      AcidBaseBalance(version="1"),
      Simplest(version="2")));
end BloodyMary_01;
