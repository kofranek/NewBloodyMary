within NewBloodyMary_testing.OSA.testOSA;
model testAlvEqalgr

  AlvEqalgr alvEq
    annotation (Placement(transformation(extent={{18,-5},{84,57}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-68,24},{-60,32}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-78,0},{-70,8}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-68,-6},{-60,2}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-58,-12},{-50,-4}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-46,-18},{-38,-10}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-98,-26},{-90,-18}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-88,-32},{-80,-24}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-76,-38},{-68,-30}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-62,-44},{-54,-36}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-78,52},{-70,60}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{-66,46},{-58,54}})));
  Physiolibrary.Types.Constants.ConcentrationConst cvO2(k=6.18)
    annotation (Placement(transformation(extent={{-98,16},{-90,24}})));
  Physiolibrary.Types.Constants.ConcentrationConst cvCO2(k=26.3)
    annotation (Placement(transformation(extent={{-88,8},{-80,16}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "l/min") = 6.6666666666667e-05)
    annotation (Placement(transformation(extent={{-90,38},{-82,46}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-78,32},{-70,40}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{-94,68},{-86,76}})));
  Modelica.Blocks.Sources.Sine sine(
    freqHz=0.02,
    amplitude=1,
    offset=4)
    annotation (Placement(transformation(extent={{-16,74},{8,98}})));
  AlvEq alvEq1
    annotation (Placement(transformation(extent={{16,-80},{86,-14}})));
equation
  connect(temperature.y, alvEq.T) annotation (Line(points={{-53,-40},{-26,
          -40},{-26,-2.52},{16.02,-2.52}},  color={0,0,127}));
  connect(fHbF.y, alvEq.FHbF) annotation (Line(points={{-67,-34},{-50,-34},
          {-28,-34},{-28,1.2},{16.02,1.2}},    color={0,0,127}));
  connect(fCOHb.y, alvEq.FCOHb) annotation (Line(points={{-79,-28},{-30,
          -28},{-30,4.92},{16.02,4.92}},  color={0,0,127}));
  connect(fMetHb1.y, alvEq.FMetHb) annotation (Line(points={{-89,-22},{
          -60,-22},{-32,-22},{-32,8.64},{16.02,8.64}},  color={0,0,127}));
  connect(cDPG.y, alvEq.cDPG) annotation (Line(points={{-37,-14},{-34,-14},
          {-34,12.36},{16.02,12.36}},  color={0,0,127}));
  connect(cPi.y, alvEq.cPi) annotation (Line(points={{-49,-8},{-44,-8},{
          -36,-8},{-36,16.08},{16.02,16.08}},  color={0,0,127}));
  connect(cAlb.y, alvEq.cAlb) annotation (Line(points={{-59,-2},{-48,-2},
          {-38,-2},{-38,19.8},{16.02,19.8}},  color={0,0,127}));
  connect(ctHb.y, alvEq.cHb) annotation (Line(points={{-69,4},{-40,4},{
          -40,23.52},{16.02,23.52}},  color={0,0,127}));
  connect(cvCO2.y, alvEq.CvCO2) annotation (Line(points={{-79,12},{-42,12},
          {-42,27.24},{16.02,27.24}},  color={0,0,127}));
  connect(cvO2.y, alvEq.CvO2) annotation (Line(points={{-89,20},{-89,18},
          {-44,18},{-44,30.96},{16.02,30.96}},  color={0,0,127}));
  connect(BEox.y, alvEq.BEox) annotation (Line(points={{-59,28},{-46,28},
          {-46,34.68},{16.02,34.68}},  color={0,0,127}));
  connect(FiCO2.y, alvEq.FiCO2) annotation (Line(points={{-57,50},{-34,50},
          {-34,45.84},{16.02,45.84}},  color={0,0,127}));
  connect(FiO2.y, alvEq.FiO2) annotation (Line(points={{-69,56},{-30,56},
          {-30,49.56},{16.02,49.56}},  color={0,0,127}));
  connect(PB.y, alvEq.PB) annotation (Line(points={{-85,72},{-56,72},{-24,
          72},{-24,53.28},{16.02,53.28}},  color={0,0,127}));
  connect(alvEq1.PB, alvEq.PB) annotation (Line(points={{13.9,-17.96},{8,
          -17.96},{8,53.28},{16.02,53.28}}, color={0,0,127}));
  connect(alvEq1.FiO2, alvEq.FiO2) annotation (Line(points={{13.9,-21.92},
          {4,-21.92},{4,49.56},{16.02,49.56}}, color={0,0,127}));
  connect(alvEq1.FiCO2, alvEq.FiCO2) annotation (Line(points={{13.9,
          -25.88},{0,-25.88},{0,45.84},{16.02,45.84}}, color={0,0,127}));
  connect(alvEq1.VAi, alvEq.VAi) annotation (Line(points={{13.9,-29.84},{
          -4,-29.84},{-4,42.12},{16.02,42.12}}, color={0,0,127}));
  connect(alvEq1.Q, alvEq.Q) annotation (Line(points={{13.9,-33.8},{-6,
          -33.8},{-6,38},{16.02,38},{16.02,38.4}}, color={0,0,127}));
  connect(alvEq1.BEox, alvEq.BEox) annotation (Line(points={{13.9,-37.76},
          {-8,-37.76},{-8,34.68},{16.02,34.68}}, color={0,0,127}));
  connect(Q.y, alvEq.Q) annotation (Line(points={{-69,36},{-54,36},{-54,
          38},{16.02,38},{16.02,38.4}}, color={0,0,127}));
  connect(alvEq1.CvO2, alvEq.CvO2) annotation (Line(points={{13.9,-41.72},
          {-10,-41.72},{-10,30.96},{16.02,30.96}}, color={0,0,127}));
  connect(alvEq1.CvCO2, alvEq.CvCO2) annotation (Line(points={{13.9,
          -45.68},{-12,-45.68},{-12,27.24},{16.02,27.24}}, color={0,0,127}));
  connect(alvEq1.cHb, alvEq.cHb) annotation (Line(points={{13.9,-49.64},{
          -14,-49.64},{-14,23.52},{16.02,23.52}}, color={0,0,127}));
  connect(alvEq1.cAlb, alvEq.cAlb) annotation (Line(points={{13.9,-53.6},
          {-16,-53.6},{-16,19.8},{16.02,19.8}}, color={0,0,127}));
  connect(alvEq1.cPi, alvEq.cPi) annotation (Line(points={{13.9,-57.56},{
          -18,-57.56},{-18,16.08},{16.02,16.08}}, color={0,0,127}));
  connect(alvEq1.cDPG, alvEq.cDPG) annotation (Line(points={{13.9,-61.52},
          {-20,-61.52},{-20,12.36},{16.02,12.36}}, color={0,0,127}));
  connect(alvEq1.FMetHb, alvEq.FMetHb) annotation (Line(points={{13.9,
          -65.48},{-22,-65.48},{-22,8.64},{16.02,8.64}}, color={0,0,127}));
  connect(alvEq1.FCOHb, alvEq.FCOHb) annotation (Line(points={{13.9,
          -69.44},{-24,-69.44},{-24,4.92},{16.02,4.92}}, color={0,0,127}));
  connect(alvEq1.FHbF, alvEq.FHbF) annotation (Line(points={{13.9,-73.4},
          {-32,-73.4},{-32,-34},{-28,-34},{-28,1.2},{16.02,1.2}}, color={
          0,0,127}));
  connect(alvEq1.T, alvEq.T) annotation (Line(points={{13.9,-77.36},{-40,
          -77.36},{-40,-40},{-26,-40},{-26,-2.52},{16.02,-2.52}}, color={
          0,0,127}));
  connect(sine.y, alvEq.VAi) annotation (Line(
      points={{9.2,86},{12,86},{12,62},{-4,62},{-4,42.12},{16.02,42.12}},
      color={0,0,127},
      smooth=Smooth.None));

  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics));
end testAlvEqalgr;
