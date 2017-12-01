within NewBloodyMary_testing.OSA.testOSA;
model testSimpleCirculationO2CO2

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-71,34},{-63,40}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-71,-6},{-62,0}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-71,20},{-62,28}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-70,8},{-61,16}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-69,-76},{-61,-70}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb(k=0.005)
    annotation (Placement(transformation(extent={{-71,-20},{-63,-12}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-69,-34},{-62,-26}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-69,-50},{-61,-44}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-70,68},{-63,74}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-71,57},{-63,63}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{-71,46},{-63,52}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "m3/s") = 8.19588e-05)
    annotation (Placement(transformation(extent={{5,70},{13,76}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-11,88},{-3,96}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-69,77},{-61,83}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{-14,58},{-4,66}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{-14,44},{-4,52}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{-9,76},{-1,84}})));
  SimpleCirculationO2CO2 simpleCirculationO2CO2
    annotation (Placement(transformation(extent={{36,46},{84,92}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{22,-30},{44,-8}}), iconTransformation(
        extent={{58,-102},{98,-62}})));
equation

  connect(Q.y, simpleCirculationO2CO2.Q) annotation (Line(points={{-2,92},
          {16,92},{16,87.86},{33.6,87.86}}, color={0,0,127}));
  connect(ShFract.y, simpleCirculationO2CO2.ShuntFract) annotation (Line(
        points={{0,80},{33.6,80},{33.6,80.5}}, color={0,0,127}));
  connect(VO2.y, simpleCirculationO2CO2.VO2) annotation (Line(points={{-2.75,
          62},{8,62},{8,63.02},{33.6,63.02}},                    color={0,
          0,127}));
  connect(VCO2.y, simpleCirculationO2CO2.VCO2) annotation (Line(points={{-2.75,
          48},{8,48},{8,50},{8,54},{8,55.2},{33.6,55.2}},        color={0,
          0,127}));
  connect(PB.y, busConnector.PB) annotation (Line(points={{-60,80},{-40,
          80},{-20,80},{-20,62},{-20,-19},{33,-19}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(temperature.y, busConnector.T) annotation (Line(points={{
          -62.125,71},{-20,71},{-20,-19},{33,-19}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiO2.y, busConnector.FiO2) annotation (Line(points={{-62,60},{
          -42,60},{-20,60},{-20,-19},{33,-19}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiCO2.y, busConnector.FiCO2) annotation (Line(points={{-62,49},
          {-42,49},{-42,48},{-20,48},{-20,-19},{33,-19}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox.y, busConnector.BEox) annotation (Line(points={{-62,37},{
          -42,37},{-42,38},{-20,38},{-20,-19},{33,-19}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cAlb.y, busConnector.ctAlb) annotation (Line(points={{-60.875,
          24},{-20,24},{-20,-19},{33,-19}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, busConnector.ctPi) annotation (Line(points={{-59.875,12},
          {-40,12},{-20,12},{-20,-19},{33,-19}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, busConnector.ctHb) annotation (Line(points={{-60.875,-3},
          {-20,-3},{-20,-19},{33,-19}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fMetHb.y, busConnector.FMetHb) annotation (Line(points={{-62,
          -16},{-20,-16},{-20,-19},{33,-19}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fCOHb.y, busConnector.FCOHb) annotation (Line(points={{-61.125,
          -30},{-42,-30},{-20,-30},{-20,-19},{33,-19}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fHbF.y, busConnector.FHbF) annotation (Line(points={{-60,-47},{
          -42,-47},{-42,-48},{-20,-48},{-20,-19},{33,-19}}, color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, busConnector.cDPG) annotation (Line(points={{-60,-73},{
          -42,-73},{-42,-72},{-20,-72},{-20,-19},{33,-19}}, color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, simpleCirculationO2CO2.busConnector) annotation (
      Line(
      points={{33,-19},{92,-19},{92,50.14},{75.36,50.14}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(VAi.y, simpleCirculationO2CO2.VAi) annotation (Line(points={{14,
          73},{24,73},{24,72.22},{33.6,72.22}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})), Icon(coordinateSystem(preserveAspectRatio=
           false, extent={{-100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,170},
          fillPattern=FillPattern.Solid), Text(
          extent={{-78,70},{56,-4}},
          lineColor={28,108,200},
          fillColor={255,255,170},
          fillPattern=FillPattern.Solid,
          textString="Test SimpleCirculationO2CO2")}));
end testSimpleCirculationO2CO2;
