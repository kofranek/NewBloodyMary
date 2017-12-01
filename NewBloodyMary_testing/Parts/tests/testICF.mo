within NewBloodyMary_testing.Parts.tests;
model testICF

  Interstitium interstitium(initialHCO3Conc=25, volume(displayUnit="l")=
         0.012)
    annotation (Placement(transformation(extent={{18,20},{38,40}})));
  Physiolibrary.Chemical.Components.Substance BloodBE(useNormalizedVolume=
       false, solute_start=0)
    annotation (Placement(transformation(extent={{20,60},{40,80}})));
  Physiolibrary.Types.Constants.VolumeConst bloodVolume(k=0.005)
    annotation (Placement(transformation(extent={{0,70},{8,78}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
    annotation (Placement(transformation(extent={{-20,34},{-12,42}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure
    concentrationMeasure
    annotation (Placement(transformation(extent={{-66,20},{-46,40}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump(
      useSoluteFlowInput=true) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={18,-20})));
  Physiolibrary.Types.Constants.ConcentrationConst bloodHCO3Concentration(
      k=26)
    annotation (Placement(transformation(extent={{-80,-26},{-72,-18}})));
  Modelica.Blocks.Math.Add add(k1=-1, k2=+1)
    annotation (Placement(transformation(extent={{-58,-26},{-38,-6}})));
  Modelica.Blocks.Math.Gain gain(k=2e-5)
    annotation (Placement(transformation(extent={{-28,-26},{-8,-6}})));
equation
  connect(interstitium.BE, BloodBE.q_out) annotation (Line(
      points={{28,39},{30,39},{30,70}},
      color={107,45,134},
      thickness=1));
  connect(BloodBE.solutionVolume, bloodVolume.y)
    annotation (Line(points={{26,74},{9,74}}, color={0,0,127}));
  connect(interstitium.pCO2, pCO2.y) annotation (Line(points={{20,38},{20,
          38},{-11,38}}, color={0,0,127}));
  connect(interstitium.HCO3, concentrationMeasure.q_in) annotation (Line(
      points={{19,30},{19,30},{-56,30}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure.concentration, add.u1) annotation (Line(
        points={{-56,22},{-60,22},{-60,-10}}, color={0,0,127}));
  connect(bloodHCO3Concentration.y, add.u2) annotation (Line(points={{-71,
          -22},{-71,-22},{-60,-22}}, color={0,0,127}));
  connect(add.y, gain.u) annotation (Line(points={{-37,-16},{-34,-16},{
          -30,-16}}, color={0,0,127}));
  connect(gain.y, unlimitedSolutePump.soluteFlow) annotation (Line(points=
         {{-7,-16},{12,-16},{14,-16}}, color={0,0,127}));
  connect(interstitium.HCO3, unlimitedSolutePump.q_out) annotation (Line(
      points={{19,30},{18,30},{18,-10}},
      color={107,45,134},
      thickness=1));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end testICF;
