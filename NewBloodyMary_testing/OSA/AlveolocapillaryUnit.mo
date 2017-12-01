within NewBloodyMary_testing.OSA;
model AlveolocapillaryUnit
extends Icons.Alveolus;
  Parts.MolarInflowConnector CO2ven annotation (Placement(transformation(
          extent={{-96,76},{-84,88}}),  iconTransformation(extent={{-76,-8},
            {-56,12}})));
  Parts.MolarInflowConnector O2ven annotation (Placement(transformation(
          extent={{-96,34},{-84,46}}),    iconTransformation(extent={{-76,-58},
            {-56,-38}})));
  Parts.MolarOutflowConnector CO2pc annotation (Placement(transformation(
          extent={{60,74},{72,86}}),  iconTransformation(extent={{54,-8},{
            74,12}})));
  Parts.MolarOutflowConnector O2pc annotation (Placement(transformation(
          extent={{60,34},{72,46}}),   iconTransformation(extent={{52,-60},
            {72,-40}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-104,-106},{-82,-84}}),
                                                 iconTransformation(
        extent={{58,-102},{98,-62}})));
  AlvEq alvEq
    annotation (Placement(transformation(extent={{-52,-88},{50,18}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-74,-14},{-62,-2}}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-52,30})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-100,14},{-88,26}}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-36,66})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
        transformation(extent={{84,-38},{96,-26}}), iconTransformation(
          extent={{-8,-8},{8,8}},
        rotation=90,
        origin={8,96})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{86,-62},{96,-52}}), iconTransformation(
          extent={{8,-8},{-8,8}},
        rotation=270,
        origin={-12,96})));
  Modelica.Blocks.Math.Product O2FlowCalc
    annotation (Placement(transformation(extent={{-58,22},{-48,32}})));
  Physiolibrary.Chemical.Components.SolutePump O2BlodFlow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{-56,48},{-40,32}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
    annotation (Placement(transformation(extent={{-76,34},{-60,46}})));
  Modelica.Blocks.Math.Product CO2FlowCalc
    annotation (Placement(transformation(extent={{-60,60},{-50,70}})));
  Physiolibrary.Chemical.Components.SolutePump CO2BlodFlow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{-58,88},{-42,72}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
    annotation (Placement(transformation(extent={{-78,74},{-62,86}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump O2AirInflow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{-28,40},{-8,22}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut CO2AirOutflow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{14,74},{32,58}})));
  Physiolibrary.Types.Concentration CvenCO2( start=23);
  Physiolibrary.Types.Concentration CvenO2( start=6);
  Physiolibrary.Types.Concentration CpcO2( start=8);
  Physiolibrary.Types.Concentration CpcCO2( start=21);
equation
  CvenCO2=CO2ven.conc;
  CvenO2 = O2ven.conc;
  CpcO2=O2pc.conc;
  CpcCO2=CO2pc.conc;

  connect(busConnector.FiO2, alvEq.FiO2) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,5.28},{-55.06,5.28}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FiCO2, alvEq.FiCO2) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-1.08},{-55.06,-1.08}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(VAi, alvEq.VAi) annotation (Line(points={{-68,-8},{-55.06,-8},{
          -55.06,-7.44}}, color={0,0,127}));
  connect(alvEq.VCO2, VCO2) annotation (Line(points={{54.08,-49.84},{80.04,
          -49.84},{80.04,-57},{91,-57}}, color={0,0,127}));
  connect(alvEq.Q, Q) annotation (Line(points={{-55.06,-13.8},{-82,-13.8},{
          -82,20},{-94,20}}, color={0,0,127}));
  connect(O2FlowCalc.u2, Q) annotation (Line(points={{-59,24},{-74,24},{-74,
          20},{-94,20}}, color={0,0,127}));
  connect(O2FlowCalc.u1, concentrationMeasure.concentration) annotation (
      Line(points={{-59,30},{-68,30},{-68,35.2}}, color={0,0,127}));
  connect(concentrationMeasure.q_in, O2ven) annotation (Line(
      points={{-68,40},{-90,40}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure.q_in, O2BlodFlow.q_in) annotation (Line(
      points={{-68,40},{-62,40},{-56,40}},
      color={107,45,134},
      thickness=1));
  connect(O2BlodFlow.q_out, O2pc) annotation (Line(
      points={{-40,40},{66,40}},
      color={107,45,134},
      thickness=1));
  connect(O2FlowCalc.y, O2BlodFlow.soluteFlow) annotation (Line(points={{
          -47.5,27},{-44.8,27},{-44.8,36.8}}, color={0,0,127}));
  connect(concentrationMeasure1.q_in, CO2ven) annotation (Line(
      points={{-70,80},{-90,80},{-90,82}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure1.q_in, CO2BlodFlow.q_in) annotation (Line(
      points={{-70,80},{-64,80},{-58,80}},
      color={107,45,134},
      thickness=1));
  connect(CO2FlowCalc.u1, concentrationMeasure1.concentration) annotation (
      Line(points={{-61,68},{-70,68},{-70,75.2}}, color={0,0,127}));
  connect(CO2FlowCalc.u2, Q) annotation (Line(points={{-61,62},{-82,62},{
          -82,20},{-94,20}}, color={0,0,127}));
  connect(CO2FlowCalc.y, CO2BlodFlow.soluteFlow) annotation (Line(points={{
          -49.5,65},{-46.8,65},{-46.8,76.8}}, color={0,0,127}));
  connect(CO2BlodFlow.q_out, CO2pc) annotation (Line(
      points={{-42,80},{66,80}},
      color={107,45,134},
      thickness=1));
  connect(alvEq.CvO2, concentrationMeasure.concentration) annotation (Line(
        points={{-55.06,-26.52},{-86,-26.52},{-86,16},{-68,16},{-68,35.2}},
        color={0,0,127}));
  connect(alvEq.CvCO2, concentrationMeasure1.concentration) annotation (
      Line(points={{-55.06,-32.88},{-98,-32.88},{-98,68},{-70,68},{-70,75.2}},
        color={0,0,127}));
  connect(O2AirInflow.q_out, O2pc) annotation (Line(
      points={{-8,31},{0,31},{0,40},{66,40}},
      color={107,45,134},
      thickness=1));
  connect(CO2AirOutflow.q_in, CO2pc) annotation (Line(
      points={{14,66},{0,66},{0,80},{66,80}},
      color={107,45,134},
      thickness=1));
  connect(CO2AirOutflow.soluteFlow, VCO2) annotation (Line(points={{26.6,
          62.8},{26.6,52},{96,52},{96,-44},{80,-44},{80,-48},{80,-47.84},{
          80,-57},{91,-57}}, color={0,0,127}));
  connect(O2AirInflow.soluteFlow, VO2) annotation (Line(points={{-14,27.4},
          {-14,22},{80,22},{80,-32},{90,-32}}, color={0,0,127}));
  connect(alvEq.VO2, VO2) annotation (Line(points={{54.08,-40.3},{80,-40.3},
          {80,-32},{90,-32}}, color={0,0,127}));
  connect(busConnector.BEox, alvEq.BEox) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-20.16},{-55.06,-20.16}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, alvEq.ctHb) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-39.24},{-55.06,-39.24}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctAlb, alvEq.ctAlb) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-45.6},{-55.06,-45.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPi, alvEq.ctPi) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-51.96},{-55.06,-51.96}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.cDPG, alvEq.cDPG) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-58.32},{-55.06,-58.32}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FMetHb, alvEq.FMetHb) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-64.68},{-55.06,-64.68}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FCOHb, alvEq.FCOHb) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-71.04},{-55.06,-71.04}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FHbF, alvEq.FHbF) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-77.4},{-55.06,-77.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.T, alvEq.T) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,-83.76},{-55.06,-83.76}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.PB, alvEq.PB) annotation (Line(
      points={{-93,-95},{-78,-95},{-78,11.64},{-55.06,11.64}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Text(
          extent={{-55,10},{-14,-6}},
          lineColor={0,0,0},
          lineThickness=1,
          fontSize=18,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Left,
          textString="CO2"),
        Text(
          extent={{-55,-40},{-14,-56}},
          lineColor={0,0,0},
          lineThickness=1,
          fontSize=18,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Left,
          textString="O2"),
        Text(
          extent={{12,10},{53,-6}},
          lineColor={0,0,0},
          lineThickness=1,
          fontSize=18,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Right,
          textString="CO2"),
        Text(
          extent={{9,-40},{50,-56}},
          lineColor={0,0,0},
          lineThickness=1,
          fontSize=18,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Right,
          textString="O2")}),                  Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end AlveolocapillaryUnit;
