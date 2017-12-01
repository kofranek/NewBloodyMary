within NewBloodyMary_testing.Parts.tests;
model testSO2
  Physiolibrary.Types.Constants.pHConst pH(k=7.4)
    annotation (Placement(transformation(extent={{-84,60},{-76,68}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5300)
    annotation (Placement(transformation(extent={{-88,46},{-80,54}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=300.15)
    annotation (Placement(transformation(extent={{-86,34},{-78,42}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=9)
    annotation (Placement(transformation(extent={{0,60},{-12,70}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5.4)
    annotation (Placement(transformation(extent={{26,60},{16,66}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb(k=0.005)
    annotation (Placement(transformation(extent={{26,34},{16,42}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{54,14},{44,22}})));
  Physiolibrary.Types.Constants.PressureConst pCO(k(displayUnit="kPa")=
      0)
    annotation (Placement(transformation(extent={{-34,-16},{-26,-8}})));
  TotalO2 totalO2_1
    annotation (Placement(transformation(extent={{-42,32},{-22,52}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="kPa")=
      5000)
    annotation (Placement(transformation(extent={{-84,-8},{-76,0}})));
equation
  connect(totalO2_1.pH, pH.y) annotation (Line(points={{-41,52},{-58,52},
          {-58,64},{-75,64}}, color={0,0,127}));
  connect(totalO2_1.pCO2, pCO2.y) annotation (Line(points={{-41,48},{-58,
          48},{-58,50},{-79,50}}, color={0,0,127}));
  connect(totalO2_1.T, temperature.y) annotation (Line(points={{-41,44},{
          -52,44},{-52,38},{-77,38}}, color={0,0,127}));
  connect(ctHb.y, totalO2_1.ctHb) annotation (Line(points={{-13.5,65},{
          -13.5,58.5},{-23,58.5},{-23,52}}, color={0,0,127}));
  connect(totalO2_1.cDPG, cDPG.y) annotation (Line(points={{-23,48},{-4,
          48},{-4,63},{14.75,63}}, color={0,0,127}));
  connect(totalO2_1.FMetHb, fMetHb.y) annotation (Line(points={{-23,44},{
          -4,44},{-4,38},{14.75,38}}, color={0,0,127}));
  connect(fHbF.y, totalO2_1.FHbF) annotation (Line(points={{42.75,18},{10,
          18},{10,40},{-23,40}}, color={0,0,127}));
  connect(pCO.y, totalO2_1.pCO) annotation (Line(points={{-25,-12},{-18,
          -12},{-18,8},{-14,8},{-14,36},{-23,36}}, color={0,0,127}));
  connect(pO2.y, totalO2_1.pO2inp) annotation (Line(points={{-75,-4},{-58,
          -4},{-58,41.5},{-41.1,41.5}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end testSO2;
