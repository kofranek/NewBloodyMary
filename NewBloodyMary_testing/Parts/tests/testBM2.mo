within NewBloodyMary_testing.Parts.tests;
model testBM2

  Parts.BloodyMary_Physiomodel bloodyMary_Physiomodel(CO2balance(veins(
          solute_start=0.0812), artys(solute_start=0.0338)), kidney1(
        kidneyABRcompensation1(actionSize=1E-005)))
    annotation (Placement(transformation(extent={{44,20},{64,40}})));
  Parts.TestInputs testInputs(constTidalVolume(k=0.00057), stepFiCO2(height=
          0.05, duration=1000000))
    annotation (Placement(transformation(extent={{-54,24},{-34,44}})));
equation
  connect(testInputs.busConnector, bloodyMary_Physiomodel.busConnector)
    annotation (Line(
      points={{-36.6,34},{61,34},{61,35.8}},
      color={0,0,255},
      thickness=0.5));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})), experiment(StopTime=6000));
end testBM2;
