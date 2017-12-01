within NewBloodyMary_testing.OSA;
model O2CO2CirculationFlow

  AlveolocapillaryUnit alveolocapillaryUnit
    annotation (Placement(transformation(extent={{-30,26},{32,92}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-2,6},{20,28}}),   iconTransformation(
        extent={{58,-102},{98,-62}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure CaCO2measure
    annotation (Placement(transformation(extent={{42,-48},{58,-36}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure CaO2measure
    annotation (Placement(transformation(extent={{42,-28},{58,-16}})));
  PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{-26,-30},{24,16}})));
  TissuesBloodGases tissuesBloodGases
    annotation (Placement(transformation(extent={{-24,-80},{20,-38}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure CvCO2Measure
    annotation (Placement(transformation(extent={{-62,44},{-46,56}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure CvO2measure
    annotation (Placement(transformation(extent={{-62,22},{-46,34}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-40,-9},{-30,1}}),   iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,72})));
  Physiolibrary.Types.RealIO.FractionInput ShuntFract annotation (Placement(
        transformation(extent={{-40,-1},{-28,11}}),   iconTransformation(extent={{-120,30},
            {-100,50}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-30,63},{-18,75}}),  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,4})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{4,-4.5},{-4,4.5}},
        rotation=270,
        origin={-10,-92.5}),                          iconTransformation(
          extent={{-120,-46},{-100,-26}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
        transformation(extent={{-5,-5},{5,5}},
        rotation=90,
        origin={1,-93}),                              iconTransformation(
          extent={{-120,-80},{-100,-60}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CvO2 annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={-54,12}), iconTransformation(extent={{100,62},{120,82}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CvCO2 annotation (
      Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={-54,36}), iconTransformation(extent={{100,32},{120,52}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CaCO2 annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={50,-57}), iconTransformation(extent={{100,-26},{120,-6}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CaO2 annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={50,-35}), iconTransformation(extent={{100,4},{120,24}})));
equation

  connect(busConnector, alveolocapillaryUnit.busConnector) annotation (
      Line(
      points={{9,17},{25.18,17},{25.18,31.94}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolocapillaryUnit.CO2pc, pulmonaryShunts.CO2epc) annotation (
     Line(
      points={{20.84,59.66},{48,59.66},{48,-12.06},{8.5,-12.06}},
      color={255,0,0},
      thickness=1));
  connect(alveolocapillaryUnit.O2pc, pulmonaryShunts.O2epc) annotation (
      Line(
      points={{20.22,42.5},{46,42.5},{46,-7.46},{8.5,-7.46}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{-24.5,-17.58},{-40,-17.58},{-40,43.16},{-19.46,43.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.CO2v, alveolocapillaryUnit.CO2ven) annotation (
      Line(
      points={{-24.5,-22.18},{-42,-22.18},{-42,59.66},{-19.46,59.66}},
      color={0,0,255},
      thickness=1));
  connect(CvCO2Measure.q_in, alveolocapillaryUnit.CO2ven) annotation (Line(
      points={{-54,50},{-42,50},{-42,59.66},{-19.46,59.66}},
      color={0,0,255},
      thickness=1));
  connect(CvO2measure.q_in, alveolocapillaryUnit.O2ven) annotation (Line(
      points={{-54,28},{-40,28},{-40,43.16},{-19.46,43.16}},
      color={0,0,255},
      thickness=1));
  connect(tissuesBloodGases.CO2v, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{-21.8,-61.1},{-42,-61.1},{-42,59.66},{-19.46,59.66}},
      color={0,0,255},
      thickness=1));
  connect(tissuesBloodGases.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{-21.8,-57.32},{-40,-57.32},{-40,43.16},{-19.46,43.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.O2a, tissuesBloodGases.O2a) annotation (Line(
      points={{18.5,-17.58},{40,-17.58},{40,-56.9},{17.8,-56.9}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.CO2a, tissuesBloodGases.CO2a) annotation (Line(
      points={{18.5,-22.18},{38,-22.18},{38,-61.1},{17.8,-61.1}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.PulmonaryPerfusion, alveolocapillaryUnit.Q)
    annotation (Line(points={{-9.5,-12.06},{-6,-12.06},{-6,18},{-28,18},{
          -28,80.78},{-10.16,80.78}},
                         color={0,0,127}));
  connect(CaO2measure.q_in, tissuesBloodGases.O2a) annotation (Line(
      points={{50,-22},{40,-22},{40,-56.9},{17.8,-56.9}},
      color={255,0,0},
      thickness=1));
  connect(CaCO2measure.q_in, tissuesBloodGases.CO2a) annotation (Line(
      points={{50,-42},{38,-42},{38,-61.1},{17.8,-61.1}},
      color={255,0,0},
      thickness=1));
  connect(alveolocapillaryUnit.VAi, VAi) annotation (Line(points={{-15.12,
          68.9},{-16.56,68.9},{-16.56,69},{-24,69}}, color={0,0,127}));
  connect(pulmonaryShunts.FractionShunts, ShuntFract) annotation (Line(
        points={{-24,4.96},{-26,4.96},{-26,5},{-34,5}}, color={0,0,127}));
  connect(pulmonaryShunts.CardiacOutput, Q) annotation (Line(points={{
          -24.75,-4.01},{-28.375,-4.01},{-28.375,-4},{-35,-4}}, color={0,0,
          127}));
  connect(tissuesBloodGases.VO2, VO2) annotation (Line(points={{-7.72,-80},
          {-7.72,-86},{-10,-86},{-10,-92.5}}, color={0,0,127}));
  connect(VCO2, tissuesBloodGases.VCO2) annotation (Line(points={{1,-93},{1,
          -86.5},{-0.24,-86.5},{-0.24,-80}}, color={0,0,127}));
  connect(CaCO2measure.concentration, CaCO2) annotation (Line(points={{50,
          -46.8},{50,-57}},          color={0,0,127}));
  connect(CaO2measure.concentration, CaO2) annotation (Line(points={{50,
          -26.8},{50,-35}},                     color={0,0,127}));
  connect(CvO2measure.concentration, CvO2) annotation (Line(points={{-54,
          23.2},{-54,12}},          color={0,0,127}));
  connect(CvCO2Measure.concentration, CvCO2) annotation (Line(points={{-54,
          45.2},{-54,40},{-54,36}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics),
                                Icon(coordinateSystem(preserveAspectRatio=false,
                  extent={{-100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-94,74},{-2,70}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Q",
          fontSize=12,
          horizontalAlignment=TextAlignment.Left),
        Text(
          extent={{-94,68},{10,10}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ShuntFract",
          fontSize=12,
          horizontalAlignment=TextAlignment.Left),
        Text(
          extent={{-94,6},{-34,0}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VAi",
          fontSize=12,
          horizontalAlignment=TextAlignment.Left),
        Text(
          extent={{-94,-32},{-30,-38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VO2",
          fontSize=12,
          horizontalAlignment=TextAlignment.Left),
        Text(
          extent={{-94,-66},{-30,-74}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VCO2",
          fontSize=12,
          horizontalAlignment=TextAlignment.Left),
        Text(
          extent={{36,72},{94,68}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          textString="CvO2",
          horizontalAlignment=TextAlignment.Right),
        Text(
          extent={{28,42},{94,42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CvCO2",
          fontSize=12,
          horizontalAlignment=TextAlignment.Right),
        Text(
          extent={{24,-16},{94,-20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CaCO2",
          fontSize=12,
          horizontalAlignment=TextAlignment.Right),
        Text(
          extent={{34,14},{94,12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CaO2",
          fontSize=12,
          horizontalAlignment=TextAlignment.Right)}));
end O2CO2CirculationFlow;
