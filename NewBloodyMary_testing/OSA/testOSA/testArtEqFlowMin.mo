within NewBloodyMary_testing.OSA.testOSA;
model testArtEqFlowMin

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-99,64},{-91,70}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-95,48},{-89,56}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-81,42},{-75,50}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-103,37},{-95,42}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-81,30},{-73,36}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-97,20},{-89,28}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-75,14},{-69,20}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-99,4},{-91,10}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-101,-12},{-95,-4}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-61,20},{-53,26}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{-59,10},{-51,16}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "m3/s") = 8.19588e-05)
    annotation (Placement(transformation(extent={{-55,78},{-47,84}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-23,0},{-15,8}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-63,28},{-55,34}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{67,-99},{59,-93}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{47,-80},{41,-74}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{-23,20},{-15,28}})));
  AlveolocapillaryUnit alveolocapillaryUnit
    annotation (Placement(transformation(extent={{-2,36},{60,102}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-20,-98},{2,-76}}),iconTransformation(
        extent={{58,-102},{98,-62}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcCO2
    annotation (Placement(transformation(extent={{96,54},{112,66}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcO2
    annotation (Placement(transformation(extent={{74,34},{90,46}})));
  PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{2,-20},{46,24}})));
  TissuesBloodGases tissuesBloodGases
    annotation (Placement(transformation(extent={{4,-70},{48,-28}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
    annotation (Placement(transformation(extent={{-28,60},{-12,72}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
    annotation (Placement(transformation(extent={{-30,42},{-14,54}})));
equation

  connect(PB.y, busConnector.PB) annotation (Line(points={{-54,31},{-44,31},{-44,
          30},{-42,30},{-42,-87},{-9,-87}},
                                          color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(VAi.y, alveolocapillaryUnit.VAi) annotation (Line(points={{-46,81},{-40,
          81},{-40,80},{12.88,80},{12.88,78.9}},        color={0,0,127}));
  connect(FiO2.y, busConnector.FiO2) annotation (Line(points={{-52,23},{-46,23},
          {-46,22},{-46,-87},{-9,-87}},
                                      color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiCO2.y, busConnector.FiCO2) annotation (Line(points={{-50,13},{-48,13},
          {-48,14},{-48,-87},{-9,-87}},  color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, busConnector.ctHb) annotation (Line(points={{-88.25,52},{-70,52},
          {-40,52},{-40,-87},{-9,-87}},   color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox.y, busConnector.BEox) annotation (Line(points={{-90,67},{-74,67},
          {-74,66},{-56,66},{-56,38},{-38,38},{-38,-87},{-9,-87}},
                                                                 color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cAlb.y, busConnector.ctAlb) annotation (Line(points={{-74.25,46},{-36,
          46},{-36,-87},{-9,-87}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, busConnector.ctPi) annotation (Line(points={{-94,39.5},{-64,39.5},
          {-64,40},{-34,40},{-34,-87},{-9,-87}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, busConnector.cDPG) annotation (Line(points={{-72,33},{-70,33},
          {-70,24},{-72,24},{-76,24},{-76,2},{-54,2},{-54,-87},{-9,-87}},
                                                    color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fMetHb1.y, busConnector.FMetHb) annotation (Line(points={{-88,24},{-88,
          24},{-84,24},{-26,24},{-26,-87},{-9,-87}},             color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fHbF.y, busConnector.FHbF) annotation (Line(points={{-90,7},{-88,7},{-88,
          6},{-22,6},{-22,-87},{-9,-87}},
        color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fCOHb.y, busConnector.FCOHb) annotation (Line(points={{-68.25,17},{-60,
          17},{-60,-87},{-9,-87}},
                                color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(temperature.y, busConnector.T) annotation (Line(points={{-94.25,-8},{-86,
          -8},{-86,-16},{-18,-16},{-18,-87},{-9,-87}},    color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, alveolocapillaryUnit.busConnector) annotation (
      Line(
      points={{-9,-87},{53.18,-87},{53.18,41.94}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolocapillaryUnit.CO2pc, pulmonaryShunts.CO2epc) annotation (
     Line(
      points={{48.84,71.64},{92,71.64},{92,-2.84},{32.36,-2.84}},
      color={255,0,0},
      thickness=1));
  connect(alveolocapillaryUnit.O2pc, pulmonaryShunts.O2epc) annotation (
      Line(
      points={{48.22,52.5},{74,52.5},{74,1.56},{32.36,1.56}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{3.32,-8.12},{-6,-8.12},{-6,53.16},{8.54,53.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.CO2v, alveolocapillaryUnit.CO2ven) annotation (
      Line(
      points={{3.32,-12.52},{-12,-12.52},{-12,69.66},{8.54,69.66}},
      color={0,0,255},
      thickness=1));
  connect(VO2.y, tissuesBloodGases.VO2) annotation (Line(points={{58,-96},
          {24,-96},{20.28,-96},{20.28,-70}},          color={0,0,127}));
  connect(VCO2.y, tissuesBloodGases.VCO2) annotation (Line(points={{40.25,-77},{
          27.76,-77},{27.76,-70}},              color={0,0,127}));
  connect(Q.y, pulmonaryShunts.CardiacOutput) annotation (Line(points={{-14,4},
          {-6,4},{-2,4},{-2,4.86},{3.1,4.86}},          color={0,0,127}));
  connect(ShFract.y, pulmonaryShunts.FractionShunts) annotation (Line(
        points={{-14,24},{-2,24},{-2,13.44},{3.76,13.44}},
                                                         color={0,0,127}));
  connect(concentrationMeasure.q_in, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{-20,66},{-12,66},{-12,69.66},{8.54,69.66}},
      color={0,0,255},
      thickness=1));
  connect(concentrationMeasure1.q_in, alveolocapillaryUnit.O2ven)
    annotation (Line(
      points={{-22,48},{-6,48},{-6,53.16},{8.54,53.16}},
      color={0,0,255},
      thickness=1));
  connect(epcO2.q_in, pulmonaryShunts.O2epc) annotation (Line(
      points={{82,40},{74,40},{74,1.56},{32.36,1.56}},
      color={255,0,0},
      thickness=1));
  connect(epcCO2.q_in, pulmonaryShunts.CO2epc) annotation (Line(
      points={{104,60},{92,60},{92,-2.84},{32.36,-2.84}},
      color={255,0,0},
      thickness=1));
  connect(tissuesBloodGases.CO2v, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{6.2,-51.1},{-12,-51.1},{-12,69.66},{8.54,69.66}},
      color={0,0,255},
      thickness=1));
  connect(tissuesBloodGases.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{6.2,-47.32},{-6,-47.32},{-6,53.16},{8.54,53.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.O2a, tissuesBloodGases.O2a) annotation (Line(
      points={{41.16,-8.12},{68,-8.12},{68,-46.9},{45.8,-46.9}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.CO2a, tissuesBloodGases.CO2a) annotation (Line(
      points={{41.16,-12.52},{90,-12.52},{90,-51.1},{45.8,-51.1}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.PulmonaryPerfusion, alveolocapillaryUnit.Q)
    annotation (Line(points={{16.52,-2.84},{22,-2.84},{22,28},{0,28},{0,90.78},{
          17.84,90.78}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})), Icon(coordinateSystem(preserveAspectRatio=
           false, extent={{-100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-72,66},{66,14}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Test AlvEqFLow")}));
end testArtEqFlowMin;
