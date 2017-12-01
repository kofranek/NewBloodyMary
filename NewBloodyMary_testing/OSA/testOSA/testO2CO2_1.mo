within NewBloodyMary_testing.OSA.testOSA;
model testO2CO2_1

  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-84,50},{-76,58}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-72,42},{-64,50}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-62,6},{-54,14}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=-19)
    annotation (Placement(transformation(extent={{-96,68},{-88,76}})));
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
  Physiolibrary.Types.Constants.ConcentrationConst ctO2(k=7.6354)
    annotation (Placement(transformation(extent={{-16,-10},{-8,-2}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctCO2(k=10.3922)
    annotation (Placement(transformation(extent={{-28,-16},{-20,-8}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPI(k=1.15)
    annotation (Placement(transformation(extent={{-82,-32},{-74,-24}})));
equation
  connect(o2CO2_1.ctHb, ctHb.y) annotation (Line(points={{8.7,-19.2},{-74,
          -19.2},{-74,54},{-75,54}}, color={0,0,127}));
  connect(o2CO2_1.cDPG, cDPG.y) annotation (Line(points={{8.7,-37.76},{
          -91,-37.76},{-91,36}},
                            color={0,0,127}));
  connect(o2CO2_1.FHbCO, fCOHb.y) annotation (Line(points={{8.7,-49.92},{
          -23,-49.92},{-23,26}},
                          color={0,0,127}));
  connect(ctO2.y, o2CO2_1.ctO2) annotation (Line(points={{-7,-6},{8.7,-6},
          {8.7,-6.4}}, color={0,0,127}));
  connect(ctCO2.y, o2CO2_1.ctCO2) annotation (Line(points={{-19,-12},{8.7,
          -12},{8.7,-12.8}},
                           color={0,0,127}));
  connect(o2CO2_1.T, temperature.y) annotation (Line(points={{8.7,-62.72},
          {-53,-62.72},{-53,10}},color={0,0,127}));
  connect(o2CO2_1.FHbF, fHbF.y) annotation (Line(points={{8.7,-56.32},{
          -35,-56.32},{-35,18}},
                            color={0,0,127}));
  connect(o2CO2_1.FMetHb, fMetHb1.y) annotation (Line(points={{8.7,-43.52},
          {-53,-43.52},{-53,32}},color={0,0,127}));
  connect(o2CO2_1.ctAlb, cAlb.y) annotation (Line(points={{8.7,-25.6},{
          -63,-25.6},{-63,46}}, color={0,0,127}));
  connect(o2CO2_1.BEox, BEox.y) annotation (Line(points={{8.7,-0.64},{-87,
          -0.64},{-87,72}},color={0,0,127}));
  connect(cPI.y, o2CO2_1.ctPi) annotation (Line(points={{-73,-28},{-34,
          -28},{-34,-31.36},{8.7,-31.36}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testO2CO2_1;
