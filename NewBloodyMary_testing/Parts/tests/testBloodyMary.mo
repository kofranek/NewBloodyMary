within NewBloodyMary_testing.Parts.tests;
model testBloodyMary

  Parts.BloodyMary_Physiomodel bloodyMary_Physiomodel
    annotation (Placement(transformation(extent={{48,34},{92,78}})));
  Physiolibrary.Types.Constants.VolumeConst inspiredTidalVolume(k=0.0005)
    annotation (Placement(transformation(extent={{-84,80},{-76,84}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-72,68},{-60,72}})));
  Physiolibrary.Types.Constants.PressureConst barometricPressure(k=
        99991.79056125)
    annotation (Placement(transformation(extent={{-58,78},{-46,82}})));
  Physiolibrary.Types.Constants.TemperatureConst atmosphericTemperature(k=
        298.15)
    annotation (Placement(transformation(extent={{-52,60},{-42,64}})));
  Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
    annotation (Placement(transformation(extent={{-52,52},{-42,56}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.00038)
    annotation (Placement(transformation(extent={{-34,66},{-24,70}})));
  Physiolibrary.Types.Constants.FractionConst airHumidity(k=0.58)
    annotation (Placement(transformation(extent={{-36,74},{-24,78}})));
  Physiolibrary.Types.Constants.FrequencyConst breathingFrequency(k=
        0.29333333333333)
    annotation (Placement(transformation(extent={{5,-3},{-5,3}},
        rotation=180,
        origin={-3,-17})));
  Physiolibrary.Types.Constants.VolumeConst deadVolume(k=0.00015)
    annotation (Placement(transformation(extent={{5,-3.5},{-5,3.5}},
        rotation=180,
        origin={-3,-3.5})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0) annotation (
      Placement(transformation(
        extent={{4,-3},{-4,3}},
        rotation=180,
        origin={-24,27})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k=
        8.3333333333333e-05)
    annotation (Placement(transformation(extent={{59,-78},{67,-72}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0.000145717)
    annotation (Placement(transformation(extent={{-20,-74},{-10,-68}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=0.00018309)
    annotation (Placement(transformation(extent={{-16,-58},{-8,-52}})));
  Physiolibrary.Types.Constants.VolumeConst ArtBloodVolume(k=0.001621)
    annotation (Placement(transformation(extent={{-12,-34},{-4,-28}})));
  Physiolibrary.Types.Constants.VolumeConst VenBloodVolume(k=0.00360844)
    annotation (Placement(transformation(extent={{-72,-50},{-64,-44}})));
  Physiolibrary.Types.Constants.FractionConst Shuntfraction(k=0.02)
    annotation (Placement(transformation(extent={{59,-66},{67,-60}})));
  Parts.PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{78,-80},{98,-60}})));
equation
  connect(Shuntfraction.y, pulmonaryShunts.FractionShunts) annotation (Line(
        points={{68,-63},{72,-63},{72,-67},{79,-67}}, color={0,0,127}));
  connect(CardiacOutput.y, pulmonaryShunts.CardiacOutput) annotation (Line(
        points={{68,-75},{72,-75},{72,-75.3},{79.5,-75.3}},
                                                        color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end testBloodyMary;
