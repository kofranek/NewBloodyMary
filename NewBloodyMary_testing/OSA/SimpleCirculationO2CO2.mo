within NewBloodyMary_testing.OSA;
model SimpleCirculationO2CO2

Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-8,-104},{12,-84}}),
                                                 iconTransformation(
        extent={{44,-102},{84,-62}})));
  BloodO2CO2measure ArterialBlood
    annotation (Placement(transformation(extent={{36,-76},{96,-16}})));
  AlveolocapillaryUnit alveolocapillaryUnit
    annotation (Placement(transformation(extent={{-24,34},{36,94}})));
  BloodO2CO2measure VenousBlood
    annotation (Placement(transformation(extent={{-90,-76},{-30,-16}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-74,4},{-64,14}}),   iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,82})));
  Physiolibrary.Types.RealIO.FractionInput ShuntFract annotation (Placement(
        transformation(extent={{-76,16},{-64,28}}),   iconTransformation(extent={{-120,40},
            {-100,60}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-38,68},{-26,80}}),  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,14})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{4,-4.5},{-4,4.5}},
        rotation=270,
        origin={0,-46.5}),                            iconTransformation(
          extent={{-120,-36},{-100,-16}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
        transformation(extent={{-5,-5},{5,5}},
        rotation=90,
        origin={7,-55}),                              iconTransformation(
          extent={{-120,-70},{-100,-50}})));
  PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{-26,-4},{34,36}})));
  TissuesBloodGases tissuesBloodGases
    annotation (Placement(transformation(extent={{-16,-38},{28,0}})));
initial algorithm

equation

  connect(alveolocapillaryUnit.VAi, VAi) annotation (Line(points={{-9.6,73},
          {-16.8,73},{-16.8,74},{-32,74}}, color={0,0,127}));
  connect(busConnector, VenousBlood.busConnector) annotation (Line(
      points={{2,-94},{-44,-94},{-94,-94},{-94,-71.2},{-81.6,-71.2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector, ArterialBlood.busConnector) annotation (Line(
      points={{2,-94},{16,-94},{30,-94},{30,-71.2},{44.4,-71.2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector, alveolocapillaryUnit.busConnector) annotation (Line(
      points={{2,-94},{56,-94},{106,-94},{106,39.4},{29.4,39.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));

  connect(pulmonaryShunts.CardiacOutput, Q) annotation (Line(points={{-24.5,
          18.6},{-38.475,18.6},{-38.475,9},{-69,9}},
                                              color={0,0,127}));
  connect(pulmonaryShunts.FractionShunts, ShuntFract) annotation (Line(points={{-23.6,
          26.4},{-39.16,22},{-70,22}},     color={0,0,127}));
  connect(tissuesBloodGases.O2a, pulmonaryShunts.O2a) annotation (Line(
      points={{25.8,-17.1},{34,-17.1},{34,6.8},{27.4,6.8}},
      color={255,0,0},
      thickness=1));
  connect(tissuesBloodGases.CO2a, pulmonaryShunts.CO2a) annotation (Line(
      points={{25.8,-20.9},{32,-20.9},{32,2.8},{27.4,2.8}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.CO2epc, alveolocapillaryUnit.CO2pc) annotation (Line(
      points={{15.4,11.6},{70,11.6},{70,64.6},{25.2,64.6}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.O2epc, alveolocapillaryUnit.O2pc) annotation (Line(
      points={{15.4,15.6},{62,15.6},{62,49},{24.6,49}},
      color={255,0,0},
      thickness=1));
  connect(tissuesBloodGases.VO2, VO2) annotation (Line(points={{0.28,-38},{0.28,
          -41},{0,-41},{0,-46.5}}, color={0,0,127}));
  connect(tissuesBloodGases.VCO2, VCO2) annotation (Line(points={{7.76,-38},{7.76,
          -45},{7,-45},{7,-55}}, color={0,0,127}));
  connect(ArterialBlood.O2, pulmonaryShunts.O2a) annotation (Line(
      points={{64.2,-23.8},{64.2,-4},{34,-4},{34,6.8},{27.4,6.8}},
      color={255,0,0},
      thickness=1));
  connect(ArterialBlood.CO2, pulmonaryShunts.CO2a) annotation (Line(
      points={{45.6,-23.8},{45.6,-8},{32,-8},{32,2.8},{27.4,2.8}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.PulmonaryPerfusion, alveolocapillaryUnit.Q)
    annotation (Line(points={{-6.2,11.6},{-4,11.6},{-4,40},{-44,40},{-44,
          83.8},{-4.8,83.8}},
                       color={0,0,127}));
  connect(tissuesBloodGases.CO2v, pulmonaryShunts.CO2v) annotation (Line(
      points={{-13.8,-20.9},{-34,-20.9},{-34,2.8},{-24.2,2.8}},
      color={28,108,200},
      thickness=1));
  connect(pulmonaryShunts.CO2v, alveolocapillaryUnit.CO2ven) annotation (
      Line(
      points={{-24.2,2.8},{-34,2.8},{-34,64.6},{-13.8,64.6}},
      color={28,108,200},
      thickness=1));
  connect(tissuesBloodGases.O2v, pulmonaryShunts.O2v) annotation (Line(
      points={{-13.8,-17.48},{-32,-17.48},{-32,6.8},{-24.2,6.8}},
      color={28,108,200},
      thickness=1));
  connect(pulmonaryShunts.O2v, alveolocapillaryUnit.O2ven) annotation (Line(
      points={{-24.2,6.8},{-32,6.8},{-32,49.6},{-13.8,49.6}},
      color={28,108,200},
      thickness=1));
  connect(tissuesBloodGases.O2v, VenousBlood.O2) annotation (Line(
      points={{-13.8,-17.48},{-61.8,-17.48},{-61.8,-23.8}},
      color={28,108,200},
      thickness=1));
  connect(tissuesBloodGases.CO2v, VenousBlood.CO2) annotation (Line(
      points={{-13.8,-20.9},{-34,-20.9},{-34,-6},{-80.4,-6},{-80.4,-23.8}},
      color={28,108,200},
      thickness=1));

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-100,-102},{96,-138}},
          lineColor={28,108,200},
          textString="%name"),
        Text(
          extent={{-94,78},{10,20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ShuntFract"),
        Text(
          extent={{-94,88},{-30,74}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q"),
        Text(
          extent={{-92,30},{-28,-2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VAi"),
        Text(
          extent={{-92,-10},{-28,-42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VO2"),
        Text(
          extent={{-94,-44},{-26,-78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VCO2")}), Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end SimpleCirculationO2CO2;
