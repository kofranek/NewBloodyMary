within NewBloodyMary_testing.OSA.testOSA;
model TestPO2PCO2

  PO2PCO2 pO2PCO2_1
    annotation (Placement(transformation(extent={{-14,-2},{56,66}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5330)
    annotation (Placement(transformation(extent={{-60,54},{-52,62}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-48,48},{-40,56}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-68,38},{-60,46}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-72,-4},{-64,4}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=-19)
    annotation (Placement(transformation(extent={{-82,70},{-74,78}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="kPa")=
      13300)
    annotation (Placement(transformation(extent={{-74,60},{-66,68}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-80,22},{-72,30}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-38,10},{-30,18}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-60,16},{-52,24}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-54,4},{-46,12}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-58,30},{-50,38}})));
equation
  connect(pCO2.y, pO2PCO2_1.pCO2) annotation (Line(points={{-51,58},{
          -17.5,58},{-17.5,51.72}},
                                 color={0,0,127}));
  connect(BEox.y, pO2PCO2_1.BEox) annotation (Line(points={{-73,74},{-42,
          74},{-42,65.32},{-17.5,65.32}},
                                        color={0,0,127}));
  connect(pO2.y, pO2PCO2_1.pO2) annotation (Line(points={{-65,64},{-34,64},
          {-34,58.52},{-17.5,58.52}},
                                    color={0,0,127}));
  connect(pO2PCO2_1.ctHb, ctHb.y) annotation (Line(points={{-17.5,44.92},
          {-22,44.92},{-22,52},{-39,52}},
                                        color={0,0,127}));
  connect(cAlb.y, pO2PCO2_1.ctAlb) annotation (Line(points={{-59,42},{-32,
          42},{-32,38.12},{-17.5,38.12}},
                                        color={0,0,127}));
  connect(cDPG.y, pO2PCO2_1.cDPG) annotation (Line(points={{-71,26},{
          -17.5,26},{-17.5,25.2}}, color={0,0,127}));
  connect(temperature.y, pO2PCO2_1.T) annotation (Line(points={{-63,0},{
          -42,0},{-42,-2},{-17.5,-2}},   color={0,0,127}));
  connect(fHbF.y, pO2PCO2_1.FHbF) annotation (Line(points={{-45,8},{-32,8},
          {-32,4.8},{-17.5,4.8}}, color={0,0,127}));
  connect(fMetHb1.y, pO2PCO2_1.FMetHb) annotation (Line(points={{-51,20},
          {-34,20},{-34,18.4},{-17.5,18.4}}, color={0,0,127}));
  connect(cPi.y, pO2PCO2_1.ctPi) annotation (Line(points={{-49,34},{-34,
          34},{-34,31.32},{-17.5,31.32}}, color={0,0,127}));
  connect(pO2PCO2_1.FCOHb, fCOHb.y) annotation (Line(points={{-17.5,11.6},
          {-23.75,11.6},{-23.75,14},{-29,14}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end TestPO2PCO2;
