within NewBloodyMary_testing.Parts;
model kidney

  Physiolibrary.Types.BusConnector busConnector
    annotation (Placement(transformation(extent={{-100,62},{-60,102}})));
  kidneyABRcompensation kidneyABRcompensation1
    annotation (Placement(transformation(extent={{-40,8},{-20,28}})));
equation
  connect(kidneyABRcompensation1.molarflowrate, busConnector.kidneyBEoxFlow)
    annotation (Line(points={{-21,18},{-6,18},{-6,82},{-80,82}}, color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(kidneyABRcompensation1.pH, busConnector.Artys_pH) annotation (
      Line(points={{-38,18},{-38,18},{-80,18},{-80,82}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{-3,-3},{-3,-3}}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})), Icon(graphics={Ellipse(extent={{-56,90},
              {24,-82}}, lineColor={28,108,200}), Line(points={{32,88},{24,
              -4},{52,-86}}, color={28,108,200})}));
end kidney;
