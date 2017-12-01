within NewBloodyMary_testing.OSA.testOSA;
model testArtEqFlow

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-53,66},{-45,72}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-53,54},{-47,62}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-35,38},{-29,46}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-57,25},{-49,30}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-65,-98},{-57,-92}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-53,8},{-45,16}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-33,-76},{-27,-70}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-57,-12},{-49,-6}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-57,-28},{-51,-20}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-21,-50},{-13,-44}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{-21,-60},{-13,-54}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "m3/s") = 8.19588e-05)
    annotation (Placement(transformation(extent={{-9,68},{-1,74}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{23,-10},{31,-2}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-17,-4},{-9,2}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{81,-96},{73,-90}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{93,-90},{87,-84}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{23,10},{31,18}})));
  O2CO2 arterialBlood
    annotation (Placement(transformation(extent={{-91,0},{-149,74}})));
  O2CO2 venousBlood annotation (Placement(transformation(extent={{-93,
            -104},{-145,-24}})));
  AlveolocapillaryUnit alveolocapillaryUnit
    annotation (Placement(transformation(extent={{44,26},{106,92}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{26,-108},{48,-86}}),
                                                 iconTransformation(
        extent={{58,-102},{98,-62}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcCO2
    annotation (Placement(transformation(extent={{110,46},{126,58}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcO2
    annotation (Placement(transformation(extent={{118,24},{134,36}})));
  PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{48,-30},{92,14}})));
  TissuesBloodGases tissuesBloodGases
    annotation (Placement(transformation(extent={{50,-80},{94,-38}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
    annotation (Placement(transformation(extent={{18,50},{34,62}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
    annotation (Placement(transformation(extent={{14,32},{30,44}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcO1
    annotation (Placement(transformation(extent={{114,-44},{130,-32}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure epcCO1
    annotation (Placement(transformation(extent={{128,-44},{144,-32}})));
equation
  // alvEq.CvO2 = alvEq.CpcO2 - alvEq.VO2/Q;
  // alvEq.CvCO2 = alvEq.CpcCO2 + alvEq.VCO2/Q;
  connect(BEox.y, arterialBlood.BEox) annotation (Line(points={{-44,69},{
          -23,69},{-23,73.26},{-88.1,73.26}},  color={0,0,127}));
  connect(venousBlood.BEox, arterialBlood.BEox) annotation (Line(points={{-90.4,
          -24.8},{-65,-24.8},{-65,73.26},{-88.1,73.26}},          color={
          0,0,127}));
  connect(cAlb.y, arterialBlood.ctAlb) annotation (Line(points={{-28.25,
          42},{-7,42},{-23,42},{-23,32},{-69,32},{-69,44.4},{-88.1,44.4}},
                         color={0,0,127}));
  connect(venousBlood.ctAlb, arterialBlood.ctAlb) annotation (Line(points={{-90.4,
          -56},{-69,-56},{-69,44.4},{-88.1,44.4}},          color={0,0,
          127}));
  connect(cPi.y, arterialBlood.ctPi) annotation (Line(points={{-48,27.5},
          {-29,27.5},{-29,34},{-73,34},{-73,37.74},{-88.1,37.74}},
        color={0,0,127}));
  connect(venousBlood.ctPi, arterialBlood.ctPi) annotation (Line(points={{-90.4,
          -63.2},{-73,-63.2},{-73,37.74},{-88.1,37.74}},            color=
         {0,0,127}));
  connect(cDPG.y, arterialBlood.cDPG) annotation (Line(points={{-56,-95},
          {-56,-96},{-56,-80},{-64,-80},{-64,22},{-75,22},{-75,30.34},{
          -88.1,30.34}},  color={0,0,127}));
  connect(venousBlood.cDPG, arterialBlood.cDPG) annotation (Line(points={{-90.4,
          -71.2},{-75,-71.2},{-75,30.34},{-88.1,30.34}},            color=
         {0,0,127}));
  connect(fMetHb1.y, arterialBlood.FMetHb) annotation (Line(points={{-44,12},
          {-40,12},{-40,20},{-77,20},{-77,23.68},{-88.1,23.68}},
        color={0,0,127}));
  connect(venousBlood.FMetHb, arterialBlood.FMetHb) annotation (Line(
        points={{-90.4,-78.4},{-77,-78.4},{-77,23.68},{-88.1,23.68}},
        color={0,0,127}));
  connect(fCOHb.y, arterialBlood.FCOHb) annotation (Line(points={{-26.25,
          -73},{-22,-73},{-22,-66},{-22,0},{-22,4},{-77,4},{-77,16.28},{
          -88.1,16.28}},  color={0,0,127}));
  connect(venousBlood.FCOHb, arterialBlood.FCOHb) annotation (Line(points={{-90.4,
          -86.4},{-79,-86.4},{-79,16.28},{-88.1,16.28}},            color=
         {0,0,127}));
  connect(fHbF.y, arterialBlood.FHbF) annotation (Line(points={{-48,-9},{
          -25,-9},{-25,2},{-81,2},{-81,8.88},{-88.1,8.88}},       color={
          0,0,127}));
  connect(venousBlood.FHbF, arterialBlood.FHbF) annotation (Line(points={{-90.4,
          -94.4},{-81,-94.4},{-81,8.88},{-88.1,8.88}},              color=
         {0,0,127}));
  connect(temperature.y, arterialBlood.T) annotation (Line(points={{-50.25,
          -24},{-40,-24},{-40,-18},{-83,-18},{-83,1.48},{-88.1,1.48}},
                  color={0,0,127}));
  connect(venousBlood.T, arterialBlood.T) annotation (Line(points={{-90.4,
          -102.4},{-83,-102.4},{-83,1.48},{-88.1,1.48}},         color={0,
          0,127}));
  connect(PB.y, busConnector.PB) annotation (Line(points={{-8,-1},{0,-1},
          {0,-2},{4,-2},{4,-97},{37,-97}},color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(VAi.y, alveolocapillaryUnit.VAi) annotation (Line(points={{0,71},{
          6,71},{6,70},{58.88,70},{58.88,68.9}},        color={0,0,127}));
  connect(FiO2.y, busConnector.FiO2) annotation (Line(points={{-12,-47},{
          -12,-46},{0,-46},{0,-97},{37,-97}},
                                      color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiCO2.y, busConnector.FiCO2) annotation (Line(points={{-12,-57},
          {-4,-57},{-4,-58},{-4,-97},{37,-97}},
                                         color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, arterialBlood.ctHb) annotation (Line(points={{-46.25,58},
          {-24,58},{-24,51.8},{-88.1,51.8}}, color={0,0,127}));
  connect(venousBlood.ctHb, arterialBlood.ctHb) annotation (Line(points={{-90.4,
          -48},{-66,-48},{-66,51.8},{-88.1,51.8}},        color={0,0,127}));
  connect(ctHb.y, busConnector.ctHb) annotation (Line(points={{-46.25,58},
          {-46.25,54},{6,54},{6,-97},{37,-97}},
                                          color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox.y, busConnector.BEox) annotation (Line(points={{-44,69},{
          -28,69},{-28,56},{-10,56},{-10,28},{8,28},{8,-97},{37,-97}},
                                                                 color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cAlb.y, busConnector.ctAlb) annotation (Line(points={{-28.25,42},
          {10,42},{10,-97},{37,-97}},
                                  color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, busConnector.ctPi) annotation (Line(points={{-48,27.5},{
          -18,27.5},{-18,30},{12,30},{12,-97},{37,-97}},
                                                 color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, busConnector.cDPG) annotation (Line(points={{-56,-95},{
          -56,-96},{-54,-96},{-50,-96},{-22,-96},{-22,-97},{37,-97}},
                                                    color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fMetHb1.y, busConnector.FMetHb) annotation (Line(points={{-44,12},
          {-44,12},{-40,12},{18,12},{18,-97},{37,-97}},          color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fHbF.y, busConnector.FHbF) annotation (Line(points={{-48,-9},{
          -38,-9},{-38,-96},{-22,-96},{-22,-97},{37,-97}},
        color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fCOHb.y, busConnector.FCOHb) annotation (Line(points={{-26.25,
          -73},{-14,-73},{-14,-97},{37,-97}},
                                color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(temperature.y, busConnector.T) annotation (Line(points={{-50.25,
          -24},{-50,-24},{28,-24},{28,-97},{37,-97}},     color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, alveolocapillaryUnit.busConnector) annotation (
      Line(
      points={{37,-97},{99.18,-97},{99.18,31.94}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolocapillaryUnit.CO2pc, pulmonaryShunts.CO2epc) annotation (
     Line(
      points={{94.84,61.64},{132,61.64},{132,-12.84},{78.36,-12.84}},
      color={255,0,0},
      thickness=1));
  connect(alveolocapillaryUnit.O2pc, pulmonaryShunts.O2epc) annotation (
      Line(
      points={{94.22,42.5},{120,42.5},{120,-8.44},{78.36,-8.44}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{59,-17.68},{40,-18},{40,43.16},{54.54,43.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.CO2v, alveolocapillaryUnit.CO2ven) annotation (
      Line(
      points={{59,-22.08},{34,-22},{34,59.66},{54.54,59.66}},
      color={0,0,255},
      thickness=1));
  connect(VO2.y, tissuesBloodGases.VO2) annotation (Line(points={{72,-93},
          {70,-93},{70,-92},{66.28,-92},{66.28,-80}}, color={0,0,127}));
  connect(VCO2.y, tissuesBloodGases.VCO2) annotation (Line(points={{86.25,
          -87},{73.76,-87},{73.76,-80}},        color={0,0,127}));
  connect(Q.y, pulmonaryShunts.CardiacOutput) annotation (Line(points={{32,-6},
          {40,-6},{44,-6},{44,-18.78},{49.1,-18.78}},   color={0,0,127}));
  connect(ShFract.y, pulmonaryShunts.FractionShunts) annotation (Line(
        points={{32,14},{44,14},{44,-1.4},{49.76,-1.4}}, color={0,0,127}));
  connect(concentrationMeasure.q_in, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{26,56},{34,56},{34,59.66},{54.54,59.66}},
      color={0,0,255},
      thickness=1));
  connect(concentrationMeasure1.q_in, alveolocapillaryUnit.O2ven)
    annotation (Line(
      points={{22,38},{40,38},{40,43.16},{54.54,43.16}},
      color={0,0,255},
      thickness=1));
  connect(venousBlood.ctCO2, concentrationMeasure.concentration)
    annotation (Line(points={{-90.4,-40},{14,-40},{14,50},{26,50},{26,52},
          {26,51.2}},     color={0,0,127}));
  connect(venousBlood.ctO2, concentrationMeasure1.concentration)
    annotation (Line(points={{-90.4,-32},{22,-32},{22,33.2}},
                          color={0,0,127}));
  connect(epcO2.q_in, pulmonaryShunts.O2epc) annotation (Line(
      points={{126,30},{120,30},{120,-8.44},{78.36,-8.44}},
      color={255,0,0},
      thickness=1));
  connect(epcCO2.q_in, pulmonaryShunts.CO2epc) annotation (Line(
      points={{118,52},{132,52},{132,-12.84},{78.36,-12.84}},
      color={255,0,0},
      thickness=1));
  connect(tissuesBloodGases.CO2v, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{52.2,-61.1},{34,-61.1},{34,59.66},{54.54,59.66}},
      color={0,0,255},
      thickness=1));
  connect(tissuesBloodGases.O2v, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{52.2,-57.32},{40,-57.32},{40,43.16},{54.54,43.16}},
      color={0,0,255},
      thickness=1));
  connect(pulmonaryShunts.O2a, tissuesBloodGases.O2a) annotation (Line(
      points={{87.16,-17.24},{114,-17.24},{114,-56.9},{91.8,-56.9}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.CO2a, tissuesBloodGases.CO2a) annotation (Line(
      points={{87.16,-21.64},{130,-21.64},{130,-61.1},{91.8,-61.1}},
      color={255,0,0},
      thickness=1));
  connect(pulmonaryShunts.PulmonaryPerfusion, alveolocapillaryUnit.Q)
    annotation (Line(points={{62.52,-12.84},{68,-12.84},{68,18},{46,18},{
          46,80.78},{63.84,80.78}},
                                 color={0,0,127}));
  connect(epcO1.q_in, tissuesBloodGases.O2a) annotation (Line(
      points={{122,-38},{114,-38},{114,-56.9},{91.8,-56.9}},
      color={255,0,0},
      thickness=1));
  connect(epcCO1.q_in, tissuesBloodGases.CO2a) annotation (Line(
      points={{136,-38},{130,-38},{130,-61.1},{91.8,-61.1}},
      color={255,0,0},
      thickness=1));
  connect(arterialBlood.ctO2, epcO1.concentration) annotation (Line(
        points={{-88.1,66.6},{-78,66.6},{-78,100},{146,100},{146,-52},{
          122,-52},{122,-42.8}},             color={0,0,127}));
  connect(epcCO1.concentration, arterialBlood.ctCO2) annotation (Line(
        points={{136,-42.8},{136,-50},{144,-50},{144,98},{-74,98},{-74,
          59.2},{-88.1,59.2}}, color={0,0,127}));
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
end testArtEqFlow;
