within NewBloodyMary_testing.OSA.testOSA;
model testO2CO2CirculationFlow

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-91,34},{-83,40}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-91,-6},{-82,0}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-91,20},{-82,28}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-90,8},{-81,16}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-89,-76},{-81,-70}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb(k=0.005)
    annotation (Placement(transformation(extent={{-91,-20},{-83,-12}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-89,-34},{-82,-26}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-89,-50},{-81,-44}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-90,68},{-83,74}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-91,57},{-83,63}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k(displayUnit="1")=
      0.0004)
    annotation (Placement(transformation(extent={{-91,46},{-83,52}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "ml/min") = 6.6666666666667e-05)
    annotation (Placement(transformation(extent={{-11,58},{-3,64}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-19,76},{-11,84}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-89,77},{-81,83}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{-17,46},{-8,54}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{-29,36},{-20,44}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{-31,66},{-23,74}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-32,-30},{-10,-8}}),
                                                 iconTransformation(
        extent={{58,-102},{98,-62}})));
  O2CO2CirculationFlow o2CO2CirculationFlow
    annotation (Placement(transformation(extent={{14,32},{72,88}})));
  O2CO2measure arterial
    annotation (Placement(transformation(extent={{14,-36},{76,20}})));
  O2CO2measure venous
    annotation (Placement(transformation(extent={{14,-98},{76,-42}})));
equation

  connect(PB.y, busConnector.PB) annotation (Line(points={{-80,80},{-60,
          80},{-40,80},{-40,62},{-40,-19},{-21,-19}},color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(temperature.y, busConnector.T) annotation (Line(points={{-82.125,
          71},{-40,71},{-40,-19},{-21,-19}},        color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiO2.y, busConnector.FiO2) annotation (Line(points={{-82,60},{
          -62,60},{-40,60},{-40,-19},{-21,-19}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiCO2.y, busConnector.FiCO2) annotation (Line(points={{-82,49},
          {-62,49},{-62,48},{-40,48},{-40,-19},{-21,-19}},color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox.y, busConnector.BEox) annotation (Line(points={{-82,37},{
          -62,37},{-62,38},{-40,38},{-40,-19},{-21,-19}},color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cAlb.y, busConnector.ctAlb) annotation (Line(points={{-80.875,
          24},{-40,24},{-40,-19},{-21,-19}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, busConnector.ctPi) annotation (Line(points={{-79.875,12},
          {-60,12},{-40,12},{-40,-19},{-21,-19}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, busConnector.ctHb) annotation (Line(points={{-80.875,-3},
          {-40,-3},{-40,-19},{-21,-19}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fMetHb.y, busConnector.FMetHb) annotation (Line(points={{-82,-16},
          {-40,-16},{-40,-19},{-21,-19}},     color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fCOHb.y, busConnector.FCOHb) annotation (Line(points={{-81.125,
          -30},{-62,-30},{-40,-30},{-40,-19},{-21,-19}},color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fHbF.y, busConnector.FHbF) annotation (Line(points={{-80,-47},{
          -62,-47},{-62,-48},{-40,-48},{-40,-19},{-21,-19}},color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, busConnector.cDPG) annotation (Line(points={{-80,-73},{
          -62,-73},{-62,-72},{-40,-72},{-40,-19},{-21,-19}},color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, arterial.busConnector) annotation (Line(
      points={{-21,-19},{-6,-19},{-6,-30.4},{25.16,-30.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector, venous.busConnector) annotation (Line(
      points={{-21,-19},{-6,-19},{-6,-92.4},{25.16,-92.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector, o2CO2CirculationFlow.busConnector) annotation (
      Line(
      points={{-21,-19},{-6,-19},{-6,30},{65.62,30},{65.62,37.04}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(arterial.ctO2, o2CO2CirculationFlow.CaO2) annotation (Line(
        points={{10.9,4.88},{2,4.88},{2,22},{82,22},{82,63.92},{74.9,
          63.92}}, color={0,0,127}));
  connect(o2CO2CirculationFlow.CaCO2, arterial.ctCO2) annotation (Line(
        points={{74.9,55.52},{80,55.52},{80,24},{0,24},{0,-9.12},{10.9,
          -9.12}}, color={0,0,127}));
  connect(venous.ctO2, o2CO2CirculationFlow.CvO2) annotation (Line(points=
         {{10.9,-57.12},{2,-57.12},{2,-40},{96,-40},{96,80.16},{74.9,
          80.16}}, color={0,0,127}));
  connect(o2CO2CirculationFlow.CvCO2, venous.ctCO2) annotation (Line(
        points={{74.9,71.76},{92,71.76},{92,-38},{0,-38},{0,-71.12},{10.9,
          -71.12}}, color={0,0,127}));
  connect(VAi.y, o2CO2CirculationFlow.VAi) annotation (Line(points={{-2,
          61},{4,61},{4,61.12},{11.1,61.12}}, color={0,0,127}));
  connect(VCO2.y, o2CO2CirculationFlow.VCO2) annotation (Line(points={{
          -18.875,40},{11.1,40},{11.1,40.4}}, color={0,0,127}));
  connect(VO2.y, o2CO2CirculationFlow.VO2) annotation (Line(points={{
          -6.875,50},{-8,50},{-8,49.92},{11.1,49.92}}, color={0,0,127}));
  connect(ShFract.y, o2CO2CirculationFlow.ShuntFract) annotation (Line(
        points={{-22,70},{-6,70},{-6,71.2},{11.1,71.2}}, color={0,0,127}));
  connect(Q.y, o2CO2CirculationFlow.Q) annotation (Line(points={{-10,80},
          {11.1,80},{11.1,80.16}}, color={0,0,127}));
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
end testO2CO2CirculationFlow;
