within NewBloodyMary_testing.OSA.testOSA;
model testAlvEq

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-33,66},{-25,72}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-29,50},{-23,58}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-15,44},{-9,52}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-37,39},{-29,44}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-15,32},{-7,38}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-31,22},{-23,30}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-9,16},{-3,22}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-33,6},{-25,12}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-35,-10},{-29,-2}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-43,88},{-35,94}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{-13,82},{-5,88}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "m3/s") = 8.19588e-05)
    annotation (Placement(transformation(extent={{-1,76},{7,82}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-27,-30},{-19,-22}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-61,92},{-53,98}})));
  AlvEq alvEq annotation (Placement(transformation(extent={{35,14},{99,
            100}})));
  VenousO2CO2 venousO2CO2_1
    annotation (Placement(transformation(extent={{19,-90},{-43,-56}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{47,-48},{39,-42}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{47,-60},{41,-54}})));
  ShuntPerfusin shuntPerfusin
    annotation (Placement(transformation(extent={{23,-38},{81,-18}})));
  ShuntMixing shuntMixing
    annotation (Placement(transformation(extent={{115,-90},{51,-48}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{-3,-38},{5,-30}})));
  O2CO2 arterialBlood
    annotation (Placement(transformation(extent={{-85,12},{-143,86}})));
  O2CO2 venousBlood annotation (Placement(transformation(extent={{-87,-92},
            {-139,-12}})));
  Modelica.Blocks.Sources.Sine sine(
    freqHz=0.2,
    amplitude=2E-5,
    offset=8E-5)
    annotation (Placement(transformation(extent={{-46,108},{-26,128}})));
equation
  // alvEq.CvO2 = alvEq.CpcO2 - alvEq.VO2/Q;
  // alvEq.CvCO2 = alvEq.CpcCO2 + alvEq.VCO2/Q;
  connect(alvEq.PB, PB.y) annotation (Line(
      points={{33.08,94.84},{3,94.84},{3,95},{-52,95}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FiO2.y, alvEq.FiO2) annotation (Line(
      points={{-34,91},{-1,91},{-1,89.68},{33.08,89.68}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(cDPG.y, alvEq.cDPG) annotation (Line(
      points={{-6,35},{3,35},{3,38.08},{33.08,38.08}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(alvEq.FMetHb, fMetHb1.y) annotation (Line(
      points={{33.08,32.92},{7,32.92},{7,26},{-22,26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(fCOHb.y, alvEq.FCOHb) annotation (Line(
      points={{-2.25,19},{13,19},{13,27.76},{33.08,27.76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(fHbF.y, alvEq.FHbF) annotation (Line(
      points={{-24,9},{13,9},{13,22.6},{33.08,22.6}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(temperature.y, alvEq.T) annotation (Line(
      points={{-28.25,-6},{15,-6},{15,17.44},{33.08,17.44}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(venousO2CO2_1.VO2, VO2.y) annotation (Line(points={{21.79,
          -68.75},{35,-68.75},{35,-45},{38,-45}},
                                          color={0,0,127}));
  connect(VCO2.y, venousO2CO2_1.VCO2) annotation (Line(points={{40.25,-57},
          {37,-57},{37,-72.49},{21.79,-72.49}},
                                              color={0,0,127}));
  connect(BEox.y, alvEq.BEox) annotation (Line(points={{-24,69},{33.08,69},
          {33.08,69.04}},      color={0,0,127}));
  connect(shuntPerfusin.ShuntFract, ShFract.y) annotation (Line(points={{20.1,
          -30.6},{11,-30.6},{11,-34},{6,-34}},           color={0,0,127}));
  connect(shuntMixing.Qpulm, shuntPerfusin.Qpulm) annotation (Line(points={{118.2,
          -57.66},{125,-57.66},{125,-26.2},{83.9,-26.2}}, color={0,0,127}));
  connect(shuntMixing.Qsh, shuntPerfusin.Qsh) annotation (Line(points={{118.2,
          -64.38},{127,-64.38},{127,-30.4},{83.9,-30.4}},color={0,0,127}));
  connect(venousO2CO2_1.CaO2, shuntMixing.CaO2) annotation (Line(points={{22.1,
          -77.42},{39,-77.42},{39,-65.22},{47.8,-65.22}},        color={0,
          0,127}));
  connect(shuntMixing.CaCO2, venousO2CO2_1.CaCO2) annotation (Line(points={{47.8,
          -71.94},{41,-71.94},{41,-81.5},{22.1,-81.5}},        color={0,0,
          127}));
  connect(shuntMixing.CpcO2, alvEq.CpcO2) annotation (Line(points={{118.2,
          -81.18},{131,-81.18},{131,36.36},{101.56,36.36}},
                                                         color={0,0,127}));
  connect(shuntMixing.CpcCO2, alvEq.CpcCO2) annotation (Line(points={{118.2,
          -86.64},{133,-86.64},{133,27.76},{101.56,27.76}}, color={0,0,
          127}));
  connect(venousO2CO2_1.CvO2, alvEq.CvO2) annotation (Line(points={{-46.1,
          -69.94},{-49,-69.94},{-49,63.88},{33.08,63.88}},  color={0,0,
          127}));
  connect(shuntMixing.CvO2, venousO2CO2_1.CvO2) annotation (Line(points={{118.2,
          -71.1},{133,-71.1},{133,-94},{-53,-94},{-53,-69.94},{-46.1,
          -69.94}}, color={0,0,127}));
  connect(venousO2CO2_1.CvCO2, alvEq.CvCO2) annotation (Line(points={{-46.1,
          -75.38},{-51,-75.38},{-51,58.72},{33.08,58.72}},        color={
          0,0,127}));
  connect(shuntMixing.CvCO2, venousO2CO2_1.CvCO2) annotation (Line(points={{118.2,
          -76.56},{121,-76.56},{121,-76},{125,-76},{125,-92},{-51,-92},{
          -51,-82},{-51,-78},{-51,-75.38},{-46.1,-75.38}},
                                        color={0,0,127}));
  connect(Q.y, shuntPerfusin.Q)
    annotation (Line(points={{-18,-26},{20.1,-26}},  color={0,0,127}));
  connect(venousO2CO2_1.Q, shuntPerfusin.Q) annotation (Line(points={{22.1,
          -63.82},{29,-63.82},{29,-50},{-11,-50},{-11,-26},{20.1,-26}},
                 color={0,0,127}));
  connect(shuntPerfusin.Qpulm, alvEq.Q) annotation (Line(points={{83.9,
          -26.2},{89,-26.2},{89,-16},{-39,-16},{-39,74.2},{33.08,74.2}},
        color={0,0,127}));
  connect(venousBlood.ctO2, alvEq.CvO2) annotation (Line(points={{-84.4,
          -20},{-49,-20},{-49,63.88},{33.08,63.88}}, color={0,0,127}));
  connect(venousBlood.ctCO2, alvEq.CvCO2) annotation (Line(points={{-84.4,
          -28},{-51,-28},{-51,58.72},{33.08,58.72}},        color={0,0,
          127}));
  connect(BEox.y, arterialBlood.BEox) annotation (Line(points={{-24,69},{
          -17,69},{-17,85.26},{-82.1,85.26}},  color={0,0,127}));
  connect(venousBlood.BEox, arterialBlood.BEox) annotation (Line(points={{-84.4,
          -12.8},{-59,-12.8},{-59,85.26},{-82.1,85.26}},          color={
          0,0,127}));
  connect(alvEq.FiCO2, FiCO2.y) annotation (Line(points={{33.08,84.52},{
          13,84.52},{13,85},{-4,85}},    color={0,0,127}));
  connect(cAlb.y, arterialBlood.ctAlb) annotation (Line(points={{-8.25,48},
          {-1,48},{-1,52},{-17,52},{-17,44},{-63,44},{-63,56.4},{-82.1,
          56.4}},        color={0,0,127}));
  connect(venousBlood.ctAlb, arterialBlood.ctAlb) annotation (Line(points={{-84.4,
          -44},{-63,-44},{-63,56.4},{-82.1,56.4}},          color={0,0,
          127}));
  connect(cPi.y, arterialBlood.ctPi) annotation (Line(points={{-28,41.5},
          {-23,41.5},{-23,46},{-67,46},{-67,49.74},{-82.1,49.74}},
        color={0,0,127}));
  connect(venousBlood.ctPi, arterialBlood.ctPi) annotation (Line(points={{-84.4,
          -51.2},{-67,-51.2},{-67,49.74},{-82.1,49.74}},            color=
         {0,0,127}));
  connect(cDPG.y, arterialBlood.cDPG) annotation (Line(points={{-6,35},{
          -3,35},{-3,40},{-21,40},{-21,34},{-69,34},{-69,42.34},{-82.1,
          42.34}},        color={0,0,127}));
  connect(venousBlood.cDPG, arterialBlood.cDPG) annotation (Line(points={{-84.4,
          -59.2},{-69,-59.2},{-69,42.34},{-82.1,42.34}},            color=
         {0,0,127}));
  connect(fMetHb1.y, arterialBlood.FMetHb) annotation (Line(points={{-22,26},
          {-17,26},{-17,32},{-71,32},{-71,35.68},{-82.1,35.68}},
        color={0,0,127}));
  connect(venousBlood.FMetHb, arterialBlood.FMetHb) annotation (Line(
        points={{-84.4,-66.4},{-71,-66.4},{-71,35.68},{-82.1,35.68}},
        color={0,0,127}));
  connect(fCOHb.y, arterialBlood.FCOHb) annotation (Line(points={{-2.25,
          19},{5,19},{5,12},{-17,12},{-17,16},{-73,16},{-73,28.28},{-82.1,
          28.28}},        color={0,0,127}));
  connect(venousBlood.FCOHb, arterialBlood.FCOHb) annotation (Line(points={{-84.4,
          -74.4},{-73,-74.4},{-73,28.28},{-82.1,28.28}},            color=
         {0,0,127}));
  connect(fHbF.y, arterialBlood.FHbF) annotation (Line(points={{-24,9},{
          -19,9},{-19,14},{-75,14},{-75,20.88},{-82.1,20.88}},    color={
          0,0,127}));
  connect(venousBlood.FHbF, arterialBlood.FHbF) annotation (Line(points={{-84.4,
          -82.4},{-75,-82.4},{-75,20.88},{-82.1,20.88}},            color=
         {0,0,127}));
  connect(temperature.y, arterialBlood.T) annotation (Line(points={{-28.25,
          -6},{-21,-6},{-21,2},{-77,2},{-77,13.48},{-82.1,13.48}},
                  color={0,0,127}));
  connect(venousBlood.T, arterialBlood.T) annotation (Line(points={{-84.4,
          -90.4},{-77,-90.4},{-77,13.48},{-82.1,13.48}},         color={0,
          0,127}));
  connect(shuntMixing.CaO2, arterialBlood.ctO2) annotation (Line(points={{47.8,
          -65.22},{39,-65.22},{39,-96},{-55,-96},{-55,78.6},{-82.1,78.6}},
                  color={0,0,127}));
  connect(shuntMixing.CaCO2, arterialBlood.ctCO2) annotation (Line(points={{47.8,
          -71.94},{41,-71.94},{41,-98},{-57,-98},{-57,71.2},{-82.1,71.2}},
                          color={0,0,127}));
  connect(cAlb.y, alvEq.ctAlb) annotation (Line(points={{-8.25,48},{12,48},
          {12,48.4},{33.08,48.4}}, color={0,0,127}));
  connect(ctHb.y, alvEq.ctHb) annotation (Line(points={{-22.25,54},{33.08,
          54},{33.08,53.56}}, color={0,0,127}));
  connect(venousBlood.ctHb, alvEq.ctHb) annotation (Line(points={{-84.4,
          -36},{-64,-36},{-64,60},{-18,60},{-18,54},{33.08,54},{33.08,
          53.56}}, color={0,0,127}));
  connect(arterialBlood.ctHb, alvEq.ctHb) annotation (Line(points={{-82.1,
          63.8},{-64,63.8},{-64,60},{-18,60},{-18,54},{33.08,54},{33.08,
          53.56}}, color={0,0,127}));
  connect(cPi.y, alvEq.ctPi) annotation (Line(points={{-28,41.5},{2,41.5},
          {2,43.24},{33.08,43.24}}, color={0,0,127}));
  connect(VAi.y, alvEq.VAi) annotation (Line(points={{8,79},{20,79},{20,
          79.36},{33.08,79.36}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testAlvEq;
