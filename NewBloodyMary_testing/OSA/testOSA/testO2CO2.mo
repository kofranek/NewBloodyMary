within NewBloodyMary_testing.OSA.testOSA;
model testO2CO2

  PO2PCO2 pO2PCO2_1
    annotation (Placement(transformation(extent={{-4,8},{66,76}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         7999.3432449)
    annotation (Placement(transformation(extent={{-36,56},{-28,64}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-84,50},{-76,58}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-72,42},{-64,50}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-62,6},{-54,14}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=-19)
    annotation (Placement(transformation(extent={{-96,68},{-88,76}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="mmHg")=
         10665.7909932)
    annotation (Placement(transformation(extent={{-54,62},{-46,70}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-100,32},{-92,40}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-32,22},{-24,30}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-62,28},{-54,36}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-44,14},{-36,22}})));
  O2CO2 o2CO2_1
    annotation (Placement(transformation(extent={{12,-64},{78,0}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-54,38},{-46,46}})));
  Modelica.Blocks.Sources.Sine sine(freqHz=0.1, amplitude=1)
    annotation (Placement(transformation(extent={{-68,80},{-48,100}})));
equation
  connect(pCO2.y, pO2PCO2_1.pCO2) annotation (Line(points={{-27,60},{-7.5,
          60},{-7.5,61.72}},
                          color={0,0,127}));
  connect(pO2.y, pO2PCO2_1.pO2) annotation (Line(points={{-45,66},{-24,66},
          {-24,68.52},{-7.5,68.52}},
                                   color={0,0,127}));
  connect(pO2PCO2_1.ctHb, ctHb.y) annotation (Line(points={{-7.5,54.92},{
          -12,54.92},{-12,54},{-75,54}},color={0,0,127}));
  connect(cAlb.y, pO2PCO2_1.ctAlb) annotation (Line(points={{-63,46},{-22,
          46},{-22,48.12},{-7.5,48.12}},
                                       color={0,0,127}));
  connect(cDPG.y, pO2PCO2_1.cDPG) annotation (Line(points={{-91,36},{-7.5,
          36},{-7.5,35.2}}, color={0,0,127}));
  connect(temperature.y, pO2PCO2_1.T) annotation (Line(points={{-53,10},{
          -32,10},{-32,8},{-7.5,8}},       color={0,0,127}));
  connect(fHbF.y, pO2PCO2_1.FHbF) annotation (Line(points={{-35,18},{-22,
          18},{-22,14.8},{-7.5,14.8}}, color={0,0,127}));
  connect(fMetHb1.y, pO2PCO2_1.FMetHb) annotation (Line(points={{-53,32},
          {-24,32},{-24,28.4},{-7.5,28.4}}, color={0,0,127}));
  connect(o2CO2_1.ctHb, ctHb.y) annotation (Line(points={{8.7,-19.2},{-74,
          -19.2},{-74,54},{-75,54}}, color={0,0,127}));
  connect(o2CO2_1.ctAlb, pO2PCO2_1.ctAlb) annotation (Line(points={{8.7,
          -25.6},{-66,-25.6},{-66,40},{-60,40},{-60,46},{-22,46},{-22,
          48.12},{-7.5,48.12}},
                              color={0,0,127}));
  connect(o2CO2_1.cDPG, cDPG.y) annotation (Line(points={{8.7,-37.76},{
          -91,-37.76},{-91,36}},
                            color={0,0,127}));
  connect(o2CO2_1.FMetHb, pO2PCO2_1.FMetHb) annotation (Line(points={{8.7,
          -43.52},{-48,-43.52},{-48,32},{-24,32},{-24,28.4},{-7.5,28.4}},
        color={0,0,127}));
  connect(o2CO2_1.FHbF, pO2PCO2_1.FHbF) annotation (Line(points={{8.7,
          -56.32},{-30,-56.32},{-30,18},{-22,18},{-22,14.8},{-7.5,14.8}},
        color={0,0,127}));
  connect(o2CO2_1.T, pO2PCO2_1.T) annotation (Line(points={{8.7,-62.72},{
          -40,-62.72},{-40,10},{-32,10},{-32,8},{-7.5,8}},      color={0,
          0,127}));
  connect(cPi.y, pO2PCO2_1.ctPi) annotation (Line(points={{-45,42},{-7.5,
          42},{-7.5,41.32}}, color={0,0,127}));
  connect(o2CO2_1.ctPi, pO2PCO2_1.ctPi) annotation (Line(points={{8.7,
          -31.36},{-78,-31.36},{-78,24},{-36,24},{-36,42},{-7.5,42},{-7.5,
          41.32}}, color={0,0,127}));
  connect(o2CO2_1.ctO2, pO2PCO2_1.ctO2) annotation (Line(points={{8.7,
          -6.4},{2,-6.4},{2,4},{80,4},{80,69.2},{69.5,69.2}}, color={0,0,
          127}));
  connect(o2CO2_1.ctCO2, pO2PCO2_1.ctCO2) annotation (Line(points={{8.7,
          -12.8},{-2,-12.8},{-2,6},{78,6},{78,62.4},{69.5,62.4}}, color={
          0,0,127}));
  connect(sine.y, pO2PCO2_1.BEox) annotation (Line(points={{-47,90},{-24,
          90},{-24,75.32},{-7.5,75.32}}, color={0,0,127}));
  connect(o2CO2_1.BEox, pO2PCO2_1.BEox) annotation (Line(points={{8.7,
          -0.64},{-86,-0.64},{-86,76},{-40,76},{-40,90},{-24,90},{-24,
          75.32},{-7.5,75.32}}, color={0,0,127}));
  connect(fCOHb.y, pO2PCO2_1.FCOHb) annotation (Line(points={{-23,26},{
          -16,26},{-16,21.6},{-7.5,21.6}}, color={0,0,127}));
  connect(o2CO2_1.FCOHb, pO2PCO2_1.FCOHb) annotation (Line(points={{8.7,
          -49.92},{-16,-49.92},{-16,21.6},{-7.5,21.6}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testO2CO2;
