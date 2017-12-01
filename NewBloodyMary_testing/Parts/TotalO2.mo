within NewBloodyMary_testing.Parts;
model TotalO2
  extends BloodO2Base;

  Physiolibrary.Types.RealIO.PressureInput pO2inp annotation (Placement(
        transformation(extent={{-132,-54},{-92,-14}}),iconTransformation(extent=
           {{-100,-14},{-82,4}})));

  Physiolibrary.Types.RealIO.ConcentrationOutput totalO2 annotation (Placement(
        transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-19,-19},{19,19}},
        rotation=270,
        origin={-39,-119})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2p
    "dissolved O2 concentration in plasma" annotation (Placement(transformation(
          extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-19,-19},{19,19}},
        rotation=270,
        origin={-79,-119})));
equation
  cdO2p = cdO2;
  pO2inp=pO2;
  totalO2=tO2;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),     Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end TotalO2;
