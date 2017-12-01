within NewBloodyMary_testing.Parts;
model PulmonaryShunts
  extends Icons.Shunts;
  Physiolibrary.Types.RealIO.FractionInput FractionShunts annotation (
      Placement(transformation(extent={{-100,-20},{-60,20}}),
        iconTransformation(extent={{-102,18},{-78,42}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput CardiacOutput annotation (
      Placement(transformation(extent={{-100,40},{-60,80}}),
        iconTransformation(extent={{-98,-66},{-72,-40}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput PulmonaryPerfusion
    annotation (Placement(transformation(extent={{52,50},{72,70}}),
        iconTransformation(extent={{8,-32},{28,-12}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput ShuntFlow annotation (
      Placement(transformation(extent={{42,10},{62,30}}),
        iconTransformation(extent={{8,-54},{28,-34}})));
  Modelica.Blocks.Math.Feedback feedback
    annotation (Placement(transformation(extent={{10,50},{30,70}})));
  Modelica.Blocks.Math.Product product
    annotation (Placement(transformation(extent={{-30,10},{-10,30}})));
equation
  connect(product.u2, FractionShunts) annotation (Line(points={{-32,14},{
          -46,14},{-46,0},{-80,0}}, color={0,0,127}));
  connect(product.u1, CardiacOutput) annotation (Line(points={{-32,26},{-48,
          26},{-48,60},{-80,60}}, color={0,0,127}));
  connect(product.y, ShuntFlow)
    annotation (Line(points={{-9,20},{52,20},{52,20}}, color={0,0,127}));
  connect(feedback.y, PulmonaryPerfusion)
    annotation (Line(points={{29,60},{62,60},{62,60}}, color={0,0,127}));
  connect(product.y, feedback.u2) annotation (Line(points={{-9,20},{8,20},{
          20,20},{20,52}}, color={0,0,127}));
  connect(feedback.u1, CardiacOutput)
    annotation (Line(points={{12,60},{-80,60},{-80,60}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end PulmonaryShunts;
