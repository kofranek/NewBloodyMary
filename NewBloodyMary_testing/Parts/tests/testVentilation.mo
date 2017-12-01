within NewBloodyMary_testing.Parts.tests;
model testVentilation

  Parts.VentilationO2CO2 ventilation
    annotation (Placement(transformation(extent={{-38,-2},{44,72}})));
  Physiolibrary.Types.Constants.PressureConst barometricPressure(k=
        99991.79056125)
    annotation (Placement(transformation(extent={{-86,72},{-78,80}})));
  Physiolibrary.Types.Constants.FractionConst airHumidity(k=0.58)
    annotation (Placement(transformation(extent={{-88,56},{-80,64}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-90,44},{-82,52}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.00038)
    annotation (Placement(transformation(extent={{-72,38},{-64,46}})));
  Physiolibrary.Types.Constants.TemperatureConst atmosphericTemperature(k=
        298.15)
    annotation (Placement(transformation(extent={{-62,28},{-54,36}})));
  Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
    annotation (Placement(transformation(extent={{-76,14},{-68,22}})));
  Physiolibrary.Types.Constants.VolumeConst inspiredTidalVolume(k=0.0005)
    annotation (Placement(transformation(extent={{-42,78},{-34,86}})));
  Physiolibrary.Types.Constants.VolumeConst deadVolume(k=0.00015)
    annotation (Placement(transformation(extent={{-24,86},{-16,94}})));
  Physiolibrary.Types.Constants.FrequencyConst breathingFrequency(k=
        0.29333333333333)
    annotation (Placement(transformation(extent={{0,88},{8,96}})));
equation
  connect(barometricPressure.y, ventilation.barometricPressure) annotation (
     Line(points={{-77,76},{-56,76},{-56,68.3},{-33.9,68.3}}, color={0,0,
          127}));
  connect(airHumidity.y, ventilation.airHumidity) annotation (Line(points={
          {-79,60},{-33.9,60},{-33.9,60.16}}, color={0,0,127}));
  connect(FiO2.y, ventilation.FiO2) annotation (Line(points={{-81,48},{-60,
          48},{-60,52.02},{-33.9,52.02}}, color={0,0,127}));
  connect(FiCO2.y, ventilation.FiCO2) annotation (Line(points={{-63,42},{
          -33.9,42},{-33.9,42.4}}, color={0,0,127}));
  connect(atmosphericTemperature.y, ventilation.atmosphericTemperature)
    annotation (Line(points={{-53,32},{-33.9,32},{-33.9,32.04}}, color={0,0,
          127}));
  connect(bodyTemperature.y, ventilation.bodyTemperature) annotation (Line(
        points={{-67,18},{-52,18},{-52,22.42},{-33.9,22.42}}, color={0,0,
          127}));
  connect(inspiredTidalVolume.y, ventilation.tidalVolume) annotation (Line(
        points={{-33,82},{-17.5,82},{-17.5,68.3}}, color={0,0,127}));
  connect(deadVolume.y, ventilation.deadSpace) annotation (Line(points={{
          -15,90},{-1.1,90},{-1.1,68.3}}, color={0,0,127}));
  connect(breathingFrequency.y, ventilation.respiratoryRate) annotation (
      Line(points={{9,92},{15.3,92},{15.3,68.3}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end testVentilation;
