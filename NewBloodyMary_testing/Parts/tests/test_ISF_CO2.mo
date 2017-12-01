within NewBloodyMary_testing.Parts.tests;
model test_ISF_CO2

  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-64,30},{-56,38}})));
  Physiolibrary.Types.Constants.VolumeConst volume(k=0.012)
    annotation (Placement(transformation(extent={{-70,50},{-62,58}})));
  Parts.ISF_CO2 ISF_CO2(useNormalizedVolume=false, initMolarConcentration=
        25.2)
    annotation (Placement(transformation(extent={{24,26},{44,46}})));
  Physiolibrary.Types.Constants.ConcentrationConst dSID(k=0)
    annotation (Placement(transformation(extent={{-32,18},{-24,26}})));
equation
  connect(temperature.y, ISF_CO2.T) annotation (Line(points={{-55,34},{-14,
          34},{-14,36.8},{25.8,36.8}}, color={0,0,127}));
  connect(volume.y, ISF_CO2.solutionVolume) annotation (Line(points={{-61,
          54},{-16,54},{-16,56},{30,56},{30,40}}, color={0,0,127}));
  connect(dSID.y, ISF_CO2.dSID) annotation (Line(points={{-23,22},{0,22},{0,
          31.8},{26,31.8}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end test_ISF_CO2;
