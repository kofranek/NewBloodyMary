within NewBloodyMary_testing.Parts;
model BodyBEox

  Physiolibrary.Types.BusConnector busConnector
    annotation (Placement(transformation(extent={{-100,60},{-60,100}})));
  Physiolibrary.Chemical.Components.Substance BloodBE(useNormalizedVolume=
        false, solute_start=0)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Physiolibrary.Types.Constants.VolumeConst bloodVolume(k=0.005)
    annotation (Placement(transformation(extent={{-18,14},{-10,22}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={0,80})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{-84,-10},{-64,10}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump1(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{-84,-36},{-64,-16}})));
equation
  connect(BloodBE.solutionVolume,bloodVolume. y) annotation (Line(points={{-4,4},{
          -4,18},{-9,18}},               color={0,0,127}));
  connect(BloodBE.q_out,concentrationMeasure1. q_in) annotation (Line(
      points={{0,0},{0,18},{0,80}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure1.concentration, busConnector.BEox)
    annotation (Line(points={{-8,80},{-80,80}},           color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(unlimitedSolutePump.q_out, BloodBE.q_out) annotation (Line(
      points={{-64,0},{-30,0},{0,0}},
      color={107,45,134},
      thickness=1));
  connect(unlimitedSolutePump.soluteFlow, busConnector.interstitiumBEoxFlow)
    annotation (Line(points={{-70,4},{-70,4},{-70,52},{-70,80},{-80,80}},
        color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(unlimitedSolutePump1.q_out, BloodBE.q_out) annotation (Line(
      points={{-64,-26},{0,-26},{0,0}},
      color={107,45,134},
      thickness=1));
  connect(unlimitedSolutePump1.soluteFlow, busConnector.kidneyBEoxFlow)
    annotation (Line(points={{-70,-22},{-70,-22},{-70,80},{-80,80}}, color=
          {0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end BodyBEox;
