within NewBloodyMary_testing.Parts.tests;
model testO2

  Parts.O2PhysiomodelDbg o2PhysiomodelDbg
    annotation (Placement(transformation(extent={{-22,34},{-2,54}})));
  Parts.TestInputs testInputs
    annotation (Placement(transformation(extent={{-84,66},{-64,86}})));
  Parts.VentilationInputs ventilationInputs
    annotation (Placement(transformation(extent={{-88,12},{-68,32}})));
  Parts.AcidBaseInputs acidBaseInputs
    annotation (Placement(transformation(extent={{-88,-20},{-68,0}})));
  Parts.CO2PhysiomodelInputs cO2PhysiomodelInputs
    annotation (Placement(transformation(extent={{-88,-56},{-68,-36}})));
equation
  connect(o2PhysiomodelDbg.busConnector, testInputs.busConnector)
    annotation (Line(
      points={{-4,51.1429},{-36,51.1429},{-36,76},{-66.6,76}},
      color={0,0,255},
      thickness=0.5));
  connect(o2PhysiomodelDbg.busConnector, ventilationInputs.busConnector)
    annotation (Line(
      points={{-4,51.1429},{-36,51.1429},{-36,28},{-68,28}},
      color={0,0,255},
      thickness=0.5));
  connect(o2PhysiomodelDbg.busConnector, acidBaseInputs.busConnector)
    annotation (Line(
      points={{-4,51.1429},{-36,51.1429},{-36,-9.8},{-78,-9.8}},
      color={0,0,255},
      thickness=0.5));
  connect(o2PhysiomodelDbg.busConnector, cO2PhysiomodelInputs.busConnector)
    annotation (Line(
      points={{-4,51.1429},{-36,51.1429},{-36,-40},{-70,-40}},
      color={0,0,255},
      thickness=0.5));
end testO2;
