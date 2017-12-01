within NewBloodyMary_testing.Parts.tests;
model testVenousBloodTestTool

  Parts.TestToolVenousBlood VenousBlood
    annotation (Placement(transformation(extent={{-44,-94},{8,-46}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
    annotation (Placement(transformation(extent={{-88,-34},{-80,-26}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
    annotation (Placement(transformation(extent={{-80,-42},{-72,-34}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=180,
        origin={-98,-80})));
  Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
    annotation (Placement(transformation(extent={{-106,-28},{-98,-22}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctPi(k=1.16) annotation (
     Placement(transformation(
        extent={{-5,-3},{5,3}},
        rotation=0,
        origin={-79,-95})));
  Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
    annotation (Placement(transformation(extent={{-5,-3},{5,3}},
        rotation=0,
        origin={-101,-90})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00023333333333333)
    annotation (Placement(transformation(extent={{-88,-68},{-80,-60}})));
  Physiolibrary.Types.Constants.FractionConst RQ(k(displayUnit="1") = 0.8)
    annotation (Placement(transformation(extent={{-78,-74},{-70,-66}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst QCO(k=
        8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-78,-60},{-70,-52}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0) annotation (
      Placement(transformation(
        extent={{4,-4},{-4,4}},
        rotation=180,
        origin={-84,-50})));
equation

  connect(pO2.y, VenousBlood.PaO2) annotation (Line(points={{-79,-30},{-52,
          -30},{-52,-48.4},{-46.6,-48.4}},
                                      color={0,0,127}));
  connect(pCO2.y, VenousBlood.PaCO2) annotation (Line(points={{-71,-38},{
          -54,-38},{-54,-53.2},{-46.6,-53.2}},
                                      color={0,0,127}));
  connect(VenousBlood.QCO, QCO.y) annotation (Line(points={{-46.6,-62.8},{
          -63.3,-62.8},{-63.3,-56},{-69,-56}},
                                         color={0,0,127}));
  connect(RQ.y, VenousBlood.RQ) annotation (Line(points={{-69,-70},{-52,-70},{-52,
          -72.4},{-46.6,-72.4}}, color={0,0,127}));
  connect(temp.y, VenousBlood.bloodTemp) annotation (Line(points={{-97,-25},{-89.5,
          -25},{-89.5,-77.2},{-46.6,-77.2}}, color={0,0,127}));
  connect(VenousBlood.VO2, VO2.y) annotation (Line(points={{-46.6,-67.6},{-66,-67.6},
          {-66,-64},{-79,-64}}, color={0,0,127}));
  connect(ctHb.y, VenousBlood.cHb) annotation (Line(points={{-93,-80},{-62,-80},
          {-62,-82},{-46.6,-82}}, color={0,0,127}));
  connect(ctAlb.y, VenousBlood.cAlb) annotation (Line(points={{-94.75,-90},
          {-89.375,-90},{-89.375,-86.8},{-46.6,-86.8}},            color={0,0,127}));
  connect(ctPi.y, VenousBlood.cPi) annotation (Line(points={{-72.75,-95},{-56,-95},
          {-56,-91.6},{-46.6,-91.6}}, color={0,0,127}));
  connect(BEox.y, VenousBlood.BEox) annotation (Line(points={{-79,-50},{-72,
          -50},{-56,-50},{-56,-56},{-56,-58},{-46.6,-58}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testVenousBloodTestTool;
