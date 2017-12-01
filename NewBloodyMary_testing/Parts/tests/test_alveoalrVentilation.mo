within NewBloodyMary_testing.Parts.tests;
model test_alveoalrVentilation

  Parts.AlveolarVentilation_BTPS alveolarVentilation_STPD
    annotation (Placement(transformation(extent={{-56,-26},{26,56}})));
  Physiolibrary.Types.Constants.TemperatureConst teplotaOkoli(k=298.15)
    annotation (Placement(transformation(extent={{-94,52},{-78,62}})));
  Physiolibrary.Types.Constants.PressureConst okolniTlak(k=99991.79056125)
    annotation (Placement(transformation(extent={{-98,22},{-80,36}})));
  Physiolibrary.Types.Constants.FractionConst fraction(k=0.78)
    "vlhkostVzduchu"
    annotation (Placement(transformation(extent={{-96,-2},{-80,10}})));
  Physiolibrary.Types.Constants.VolumeConst TidelVolumeBTPS(k=0.0005)
    annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={64,64})));
  Physiolibrary.Types.Constants.VolumeConst DeadVolumeBTPS(k=0.00025)
    annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={58,42})));
  Physiolibrary.Types.Constants.FrequencyConst frequency(k=0.2) annotation (
     Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={60,18})));
  Physiolibrary.Types.Constants.TemperatureConst teplotaJadra(k=310.15)
    annotation (Placement(transformation(
        extent={{-8,-5},{8,5}},
        rotation=180,
        origin={60,5})));
equation
  connect(teplotaOkoli.y, alveolarVentilation_STPD.AmbientTemperature)
    annotation (Line(points={{-76,57},{-66,57},{-66,56},{-47.8,56}}, color=
          {0,0,127}));
  connect(okolniTlak.y, alveolarVentilation_STPD.EnvironmentPressure)
    annotation (Line(points={{-77.75,29},{-62.875,29},{-62.875,31.4},{-47.8,
          31.4}}, color={0,0,127}));
  connect(fraction.y, alveolarVentilation_STPD.EnvironmentRelativeHumidity)
    annotation (Line(points={{-78,4},{-66,4},{-66,6.8},{-47.8,6.8}}, color=
          {0,0,127}));
  connect(TidelVolumeBTPS.y, alveolarVentilation_STPD.TidalVolume)
    annotation (Line(points={{59,64},{42,64},{42,56},{17.8,56}}, color={0,0,
          127}));
  connect(DeadVolumeBTPS.y, alveolarVentilation_STPD.DeadSpace) annotation (
     Line(points={{53,42},{36,42},{36,39.6},{17.8,39.6}}, color={0,0,127}));
  connect(frequency.y, alveolarVentilation_STPD.RespRate) annotation (Line(
        points={{55,18},{40,18},{40,23.2},{17.8,23.2}}, color={0,0,127}));
  connect(teplotaJadra.y, alveolarVentilation_STPD.core_T) annotation (Line(
        points={{50,5},{38,5},{38,6.8},{17.8,6.8}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end test_alveoalrVentilation;
