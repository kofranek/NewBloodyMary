within NewBloodyMary_testing.Parts.tests;
model testKidneyCompensation

  kidneyABRcompensation kidneyABRcompensation1
    annotation (Placement(transformation(extent={{-8,-10},{12,10}})));
  Modelica.Blocks.Sources.Constant const(k=7.2)
    annotation (Placement(transformation(extent={{-58,-14},{-38,6}})));
equation
  connect(const.y, kidneyABRcompensation1.pH) annotation (Line(points={{
          -37,-4},{-20,-4},{-20,0},{-6,0}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end testKidneyCompensation;
