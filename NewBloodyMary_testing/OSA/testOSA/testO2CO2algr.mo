within NewBloodyMary_testing.OSA.testOSA;
model testO2CO2algr

  PO2PCO2 pO2PCO2_1
    annotation (Placement(transformation(extent={{-4,8},{66,76}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         7999.3432449)
    annotation (Placement(transformation(extent={{-38,56},{-30,64}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-86,50},{-78,58}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-74,42},{-66,50}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-62,6},{-54,14}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=-19)
    annotation (Placement(transformation(extent={{-98,88},{-90,96}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="mmHg")=
         10665.7909932)
    annotation (Placement(transformation(extent={{-56,62},{-48,70}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-102,32},{-94,40}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-36,22},{-28,30}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-60,28},{-52,36}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-44,14},{-36,22}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-56,38},{-48,46}})));
  O2CO2algr o2CO2algr
    annotation (Placement(transformation(extent={{-2,-68},{68,-6}})));
  Modelica.Blocks.Sources.Sine sine(freqHz=0.1, amplitude=1)
    annotation (Placement(transformation(extent={{-74,74},{-54,94}})));
equation
  connect(pCO2.y, pO2PCO2_1.pCO2) annotation (Line(points={{-29,60},{-7.5,
          60},{-7.5,61.72}},
                          color={0,0,127}));
  connect(pO2.y, pO2PCO2_1.pO2) annotation (Line(points={{-47,66},{-24,66},
          {-24,68.52},{-7.5,68.52}},
                                   color={0,0,127}));
  connect(pO2PCO2_1.ctHb, ctHb.y) annotation (Line(points={{-7.5,54.92},{
          -12,54.92},{-12,54},{-77,54}},color={0,0,127}));
  connect(cAlb.y, pO2PCO2_1.ctAlb) annotation (Line(points={{-65,46},{-22,
          46},{-22,48.12},{-7.5,48.12}},
                                       color={0,0,127}));
  connect(cDPG.y, pO2PCO2_1.cDPG) annotation (Line(points={{-93,36},{-7.5,
          36},{-7.5,35.2}}, color={0,0,127}));
  connect(temperature.y, pO2PCO2_1.T) annotation (Line(points={{-53,10},{
          -32,10},{-32,8},{-7.5,8}},       color={0,0,127}));
  connect(fHbF.y, pO2PCO2_1.FHbF) annotation (Line(points={{-35,18},{-22,
          18},{-22,14.8},{-7.5,14.8}}, color={0,0,127}));
  connect(fMetHb1.y, pO2PCO2_1.FMetHb) annotation (Line(points={{-51,32},
          {-24,32},{-24,28.4},{-7.5,28.4}}, color={0,0,127}));
  connect(cPi.y, pO2PCO2_1.ctPi) annotation (Line(points={{-47,42},{-7.5,
          42},{-7.5,41.32}}, color={0,0,127}));
  connect(o2CO2algr.ctO2, pO2PCO2_1.ctO2) annotation (Line(points={{-6.2,
          -12.2},{-18,-12.2},{-18,-2},{86,-2},{86,69.2},{69.5,69.2}},
        color={0,0,127}));
  connect(o2CO2algr.ctCO2, pO2PCO2_1.ctCO2) annotation (Line(points={{-6.2,
          -18.4},{-22,-18.4},{-22,4},{82,4},{82,62.4},{69.5,62.4}},
        color={0,0,127}));
  connect(o2CO2algr.ctAlb, cAlb.y) annotation (Line(points={{-6.2,-30.8},
          {-65,-30.8},{-65,46}}, color={0,0,127}));
  connect(o2CO2algr.ctPi, pO2PCO2_1.ctPi) annotation (Line(points={{-6.2,
          -36.38},{-46,-36.38},{-46,34},{-40,34},{-40,42},{-7.5,42},{-7.5,
          41.32}}, color={0,0,127}));
  connect(o2CO2algr.cDPG, cDPG.y) annotation (Line(points={{-6.2,-42.58},
          {-93,-42.58},{-93,36}}, color={0,0,127}));
  connect(o2CO2algr.FMetHb, fMetHb1.y) annotation (Line(points={{-6.2,
          -48.16},{-51,-48.16},{-51,32}}, color={0,0,127}));
  connect(o2CO2algr.FHbF, fHbF.y) annotation (Line(points={{-6.2,-61.18},
          {-35,-61.18},{-35,18}}, color={0,0,127}));
  connect(o2CO2algr.T, pO2PCO2_1.T) annotation (Line(points={{-6.2,-67.38},
          {-42,-67.38},{-42,10},{-32,10},{-32,8},{-7.5,8}}, color={0,0,
          127}));
  connect(o2CO2algr.BEox, BEox.y) annotation (Line(points={{-6.2,-6.62},{
          -89,-6.62},{-89,92}}, color={0,0,127}));
  connect(sine.y, pO2PCO2_1.BEox) annotation (Line(points={{-53,84},{-32,
          84},{-32,75.32},{-7.5,75.32}}, color={0,0,127}));
  connect(o2CO2algr.ctHb, pO2PCO2_1.BEox) annotation (Line(points={{-6.2,
          -24.6},{-42,-24.6},{-42,84},{-32,84},{-32,75.32},{-7.5,75.32}},
        color={0,0,127}));
  connect(pO2PCO2_1.FCOHb, fCOHb.y) annotation (Line(points={{-7.5,21.6},
          {-18,21.6},{-18,26},{-27,26}}, color={0,0,127}));
  connect(fCOHb.y, o2CO2algr.FCOHb) annotation (Line(points={{-27,26},{
          -24,26},{-24,-54.98},{-6.2,-54.98}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testO2CO2algr;
