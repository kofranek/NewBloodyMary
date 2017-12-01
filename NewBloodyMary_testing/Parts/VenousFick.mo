within NewBloodyMary_testing.Parts;
model VenousFick

  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2
    "oxygen comsumption in mmol/sec" annotation (Placement(transformation(
          extent={{-130,62},{-90,102}}),iconTransformation(extent={{-110,60},
            {-96,74}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{-136,70},{-116,90}}), iconTransformation(extent=
           {{100,66},{114,80}})));
  Physiolibrary.Types.RealIO.FractionInput RQ "respiration quotient"
    annotation (Placement(transformation(extent={{-136,30},{-96,70}}),
        iconTransformation(extent={{-110,40},{-96,54}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q
    "Blood flow rate in m3/sec" annotation (Placement(transformation(extent={{-132,-6},
            {-92,34}}),           iconTransformation(extent={{-110,18},{-96,
            32}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctO2a
    "total concentration of O2 in arterial blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-13,-13},{13,13}},
        rotation=90,
        origin={-88,-93}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-101,3})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2a
    "total concentration of CO2 in arterial blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-13,-13},{13,13}},
        rotation=90,
        origin={-42,-89}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-101,-19})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2v
    "total concentration of O2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={36,-4}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,53})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2v
    "total concentration of CO2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-64,-6}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,35})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2
    "delivery of O2 (mol/sec)" annotation (Placement(transformation(extent={{
            70,-28},{90,-8}}), iconTransformation(extent={{100,10},{112,22}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput DCO2
    "delivery of CO2 (mol/sec)" annotation (Placement(transformation(extent={{72,-6},
            {92,14}}),          iconTransformation(extent={{100,-6},{112,6}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput RO2
    "removal of O2 (mol/sec)" annotation (Placement(transformation(extent={{76,-52},
            {96,-32}}),        iconTransformation(extent={{100,-22},{112,-10}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput RCO2
    "removal of CO2 (mol/sec)" annotation (Placement(transformation(extent={{64,14},
            {84,34}}),         iconTransformation(extent={{100,-38},{112,-26}})));
  Physiolibrary.Types.RealIO.FractionOutput FextrO2 "O2 extraction ratio"
    annotation (Placement(transformation(extent={{36,-70},{56,-50}}),
        iconTransformation(extent={{100,-58},{112,-46}})));
  Physiolibrary.Types.RealIO.FractionOutput FaddCO2 "CO2 addition ratio"
    annotation (Placement(transformation(extent={{54,-84},{74,-64}}),
        iconTransformation(extent={{100,-78},{112,-66}})));

equation
  //Reapiration quatient
  RQ = VCO2 / VO2;
  //Fick equations
  VO2 = Q * (ctO2a - ctO2v);
  VCO2=Q*(ctCO2v-ctCO2a);
  //Delivery of O2 and CO2
  DO2 = Q * ctO2a;
  DCO2=Q*ctCO2a;
  //Removal of O2 and CO2
  RO2 = Q * ctO2v;
  RCO2=Q*ctCO2v;
  //O2 extraction ratio
  FextrO2 = (ctO2a - ctO2v) / ctO2a;
  //CO2 addition ratio
  FaddCO2 = (ctCO2v - ctCO2a) / ctCO2v;
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),      graphics), Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-92,70},{-72,62}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VO2"),
        Text(
          extent={{74,76},{94,68}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VCO2"),
        Text(
          extent={{-92,50},{-72,42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="RQ"),
        Text(
          extent={{-94,28},{-74,20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Q"),
        Text(
          extent={{-90,6},{-70,-2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2a"),
        Text(
          extent={{-90,-16},{-70,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2a"),
        Text(
          extent={{72,40},{90,30}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2v"),
        Text(
          extent={{74,58},{90,48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2v"),
        Text(
          extent={{74,20},{92,12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="DO2"),
        Text(
          extent={{74,4},{92,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="DCO2"),
        Text(
          extent={{74,-12},{92,-20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="RO2"),
        Text(
          extent={{74,-28},{92,-36}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="RCO2"),
        Text(
          extent={{72,-48},{94,-56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FextrO2"),
        Text(
          extent={{70,-66},{94,-78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FaddCO2"),
        Text(
          extent={{-44,86},{34,48}},
          lineColor={0,0,255},
          textString="%name")}));
end VenousFick;
