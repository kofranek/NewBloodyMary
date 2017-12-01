within NewBloodyMary_testing.Parts.tests;
model testBloodPO2PCO2

Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
  annotation (Placement(transformation(extent={{60,42},{50,50}})));
Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
  annotation (Placement(transformation(extent={{42,36},{30,44}})));
Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
  annotation (Placement(transformation(extent={{60,28},{48,36}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctPO4(k=1.16)
    annotation (Placement(transformation(extent={{48,50},{36,58}})));
  Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
          "kg/l") = 2.93)
    annotation (Placement(transformation(extent={{36,10},{26,18}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
    annotation (Placement(transformation(extent={{36,60},{26,68}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{5,-4},{-5,4}},
        rotation=180,
        origin={-87,-10})));
  Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
    annotation (Placement(transformation(extent={{-90,58},{-80,66}})));
  Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
    annotation (Placement(transformation(extent={{56,16},{46,26}})));
  Parts.bloodPO2PCO2 bloodPO2PCO2_
    annotation (Placement(transformation(extent={{-64,-12},{12,68}})));
  Physiolibrary.Types.Constants.VolumeDensityOfChargeConst
    volumeDensityOfCharge(k=0)
    annotation (Placement(transformation(extent={{-62,-38},{-48,-28}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
    annotation (Placement(transformation(extent={{-34,-80},{-24,-70}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
    annotation (Placement(transformation(extent={{-58,-58},{-48,-48}})));
equation
  connect(ctAlb.y, bloodPO2PCO2_.ctAlb) annotation (Line(
      points={{24.75,64},{20,64},{20,60},{15.8,60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctPO4.y, bloodPO2PCO2_.ctPO4) annotation (Line(
      points={{34.5,54},{22,54},{22,52},{15.8,52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(DPG.y, bloodPO2PCO2_.cDPG) annotation (Line(
      points={{48.75,46},{22,46},{22,44},{15.8,44}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO.y, bloodPO2PCO2_.pCO) annotation (Line(
      points={{44.75,21},{44.75,21.5},{15.8,21.5},{15.8,20}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.FMetHb, FMetHb.y) annotation (Line(
      points={{15.8,36},{22.9,36},{22.9,40},{28.5,40}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.FHbF, FHbF.y) annotation (Line(
      points={{15.8,28},{31.9,28},{31.9,32},{46.5,32}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.ctGlb, ctGlb.y) annotation (Line(
      points={{15.8,12},{24.75,12},{24.75,14}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctHb.y, bloodPO2PCO2_.ctHb) annotation (Line(
      points={{-80.75,-10},{-74,-10},{-74,4},{-67.8,4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(temp.y, bloodPO2PCO2_.T) annotation (Line(
      points={{-78.75,62},{-72,62},{-72,59.2},{-67.04,59.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(volumeDensityOfCharge.y, bloodPO2PCO2_.BEox) annotation (Line(
      points={{-46.25,-33},{-20.3,-33},{-20.3,-12.4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO2.y, bloodPO2PCO2_.pCO2) annotation (Line(
      points={{-22.75,-75},{-2.44,-75},{-2.44,-12}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pO2.y, bloodPO2PCO2_.pO2) annotation (Line(points={{-46.75,-53},{
          -12.32,-53},{-12.32,-12}},   color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testBloodPO2PCO2;
