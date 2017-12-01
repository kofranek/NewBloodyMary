within NewBloodyMary_testing.OSA.testOSA;
model testctO2content

  ctO2content ctO2content1
    annotation (Placement(transformation(extent={{-16,-12},{42,50}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="kPa")=
      13300)
    annotation (Placement(transformation(extent={{-48,38},{-40,46}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{74,46},{66,54}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{66,26},{58,34}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{78,14},{68,22}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{66,-12},{58,-4}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{66,2},{58,10}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-38,2},{-30,10}})));
  Physiolibrary.Types.Constants.pHConst pH(k=7.0)
    annotation (Placement(transformation(extent={{-86,26},{-78,34}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5330)
    annotation (Placement(transformation(extent={{-38,16},{-30,24}})));
equation
  connect(pO2.y, ctO2content1.pO2) annotation (Line(points={{-39,42},{-30,
          42},{-30,43.8},{-18.9,43.8}}, color={0,0,127}));
  connect(pH.y, ctO2content1.pH) annotation (Line(points={{-77,30},{-50,
          30},{-50,32.02},{-18.9,32.02}}, color={0,0,127}));
  connect(pCO2.y, ctO2content1.pCO2) annotation (Line(points={{-29,20},{
          -18.9,20},{-18.9,19}}, color={0,0,127}));
  connect(temperature.y, ctO2content1.T) annotation (Line(points={{-29,6},
          {-18.9,6},{-18.9,6.6}}, color={0,0,127}));
  connect(ctHb.y, ctO2content1.ctHb) annotation (Line(points={{65,50},{56,
          50},{56,43.8},{44.9,43.8}}, color={0,0,127}));
  connect(cDPG.y, ctO2content1.cDPG) annotation (Line(points={{57,30},{52,
          30},{52,31.4},{44.9,31.4}}, color={0,0,127}));
  connect(fMetHb1.y, ctO2content1.FMetHb) annotation (Line(points={{66.75,
          18},{58,18},{58,19},{44.9,19}}, color={0,0,127}));
  connect(fHbF.y, ctO2content1.FHbF) annotation (Line(points={{57,6},{
          44.9,6},{44.9,6.6}}, color={0,0,127}));
  connect(fCOHb.y, ctO2content1.FCOHb) annotation (Line(points={{57,-8},{
          50.5,-8},{50.5,-5.8},{44.9,-5.8}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end testctO2content;
