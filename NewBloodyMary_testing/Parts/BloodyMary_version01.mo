within NewBloodyMary_testing.Parts;
model BloodyMary_version01
  Physiolibrary.Types.Constants.PressureConst barometricPressure(k=
        99991.79056125)
    annotation (Placement(transformation(extent={{-54,92},{-42,96}})));
  Physiolibrary.Types.Constants.FractionConst airHumidity(k=0.58)
    annotation (Placement(transformation(extent={{-32,88},{-20,92}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-68,82},{-56,86}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.00038)
    annotation (Placement(transformation(extent={{-30,80},{-20,84}})));
  Physiolibrary.Types.Constants.TemperatureConst atmosphericTemperature(k=
        298.15)
    annotation (Placement(transformation(extent={{-48,74},{-38,78}})));
  Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
    annotation (Placement(transformation(extent={{-48,66},{-38,70}})));
  Physiolibrary.Types.Constants.VolumeConst inspiredTidalVolume(k=0.0005)
    annotation (Placement(transformation(extent={{-80,94},{-72,98}})));
  Physiolibrary.Types.Constants.VolumeConst deadVolume(k=0.00015)
    annotation (Placement(transformation(extent={{-4,-2},{4,2}},
        rotation=180,
        origin={36,97})));
  Physiolibrary.Types.Constants.FrequencyConst breathingFrequency(k=
        0.29333333333333)
    annotation (Placement(transformation(extent={{-4,-2},{4,2}},
        rotation=180,
        origin={36,84})));
  VentilationO2CO2 ventilation
    annotation (Placement(transformation(extent={{-10,66},{32,94}})));
  BloodO2CO2Equilibrium       AlvCapillary(
    BloodO2in(q(start=10)),
    BloodO2out(conc(start=7.9475)),
    BloodCO2out(conc(start=21.6349)),
    Blood(bloodPO2PCO2_(totalO2(
          sO2CO(start=0.977),
          a(start=-0.1),
          cO2Hb(start=8.16),
          tO2(start=8.161),
          pCO2(start=5700),
          pO2(start=13870)), totalCO2(tCO2_P(start=24.9), pCO2(start=5160)))),
    BloodCO2in(q(start=115.472)))
    annotation (Placement(transformation(extent={{-12,20},{28,60}})));
  BloodO2CO2measured       VeinsBlood(Blood(bloodPO2PCO2_(totalO2(
  pO2(                            start=6140),
  cO2Hb(                            start=6.52),
  a(                            start=0.076),
  pCO2(                            start=6400)), totalCO2(
  tCO2_P(                             start=27.4),
  pCO2(                             start=6240)))))
    annotation (Placement(transformation(extent={{-50,20},{-90,60}})));
  BloodO2CO2measured       ArtBlood(Blood(bloodPO2PCO2_(totalO2(
    pO2(                            start=13459),
    cO2Hb(                            start=7.82305),
    pCO2(                            start=4428.03),
    a(                            start=-0.1)), totalCO2(
    tCO2_P(                             start=26),
    pCO2(                             start=5330)))))
    annotation (Placement(transformation(extent={{62,20},{102,60}})));
  BloodO2CO2Equilibrium       TissueCapillary
    annotation (Placement(transformation(extent={{22,-26},{-20,-68}})));
Physiolibrary.Chemical.Components.Stream O2pulmShortCircuit(
      useSolutionFlowInput=true)
    annotation (Placement(transformation(extent={{-4,14},{12,-2}})));
Physiolibrary.Chemical.Components.Stream CO2pulmShortCircuit(
      useSolutionFlowInput=true)
    annotation (Placement(transformation(extent={{-4,-6},{12,-22}})));
Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2met(
      useSoluteFlowInput=true) annotation (Placement(transformation(
        extent={{-8,7},{8,-7}},
        rotation=180,
        origin={10,-91})));
Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut O2met(
      useSoluteFlowInput=true) annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={24,-78})));
  Physiolibrary.Chemical.Components.Substance veinsCO2(
    stateName="CO2Veins.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0869)
    annotation (Placement(transformation(extent={{-44,-38},{-24,-18}})));
  Physiolibrary.Chemical.Components.Substance veinsO2(
    stateName="O2Veins.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0247781)
    annotation (Placement(transformation(extent={{-46,-78},{-26,-58}})));
  Physiolibrary.Chemical.Components.Substance artysCO2(
    stateName="CO2Artys.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0343)
    annotation (Placement(transformation(extent={{84,-22},{64,-2}})));
  Physiolibrary.Chemical.Components.Substance artysO2(
    stateName="O2Artys.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0130979)
    annotation (Placement(transformation(extent={{68,-82},{88,-62}})));
  BloodParameters       bloodParameters
    annotation (Placement(transformation(extent={{-98,66},{-74,82}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0.000145717)
    annotation (Placement(transformation(extent={{40,-88},{30,-82}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=0.00018309)
    annotation (Placement(transformation(extent={{42,-74},{32,-68}})));
  Physiolibrary.Types.Constants.VolumeConst ArtBloodVolume(k=0.001621)
    annotation (Placement(transformation(extent={{46,-58},{54,-52}})));
  Physiolibrary.Types.Constants.VolumeConst VenBloodVolume(k=0.00360844)
    annotation (Placement(transformation(extent={{-82,-60},{-74,-54}})));
  PulmonaryShunts       pulmonaryShunts
    annotation (Placement(transformation(extent={{-72,-15},{-50,12}})));
  Physiolibrary.Types.Constants.FractionConst ShuntSraction(k=0.02)
    annotation (Placement(transformation(extent={{-85,4},{-77,10}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k=
        8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-85,-8},{-77,-2}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0) annotation (
      Placement(transformation(
        extent={{4,-3},{-4,3}},
        rotation=180,
        origin={-34,17})));
equation
  connect(FiO2.y,ventilation. FiO2) annotation (Line(points={{-54.5,84},{
          -44,84},{-44,86.44},{-7.9,86.44}},
                                          color={0,0,127}));
  connect(inspiredTidalVolume.y,ventilation. tidalVolume) annotation (Line(
        points={{-71,96},{0.5,96},{0.5,92.6}},     color={0,0,127}));
  connect(deadVolume.y,ventilation. deadSpace) annotation (Line(points={{31,97},
          {8.9,97},{8.9,92.6}},           color={0,0,127}));
  connect(breathingFrequency.y, ventilation.respiratoryRate) annotation (
      Line(points={{31,84},{17.3,84},{17.3,92.6}}, color={0,0,127}));
  connect(airHumidity.y, ventilation.airHumidity) annotation (Line(points={
          {-18.5,90},{-7.9,90},{-7.9,89.52}}, color={0,0,127}));
  connect(bodyTemperature.y, ventilation.bodyTemperature) annotation (Line(
        points={{-36.75,68},{-24,68},{-24,75.24},{-7.9,75.24}}, color={0,0,
          127}));
  connect(barometricPressure.y, ventilation.barometricPressure) annotation (
     Line(points={{-40.5,94},{-22,94},{-22,92.6},{-7.9,92.6}}, color={0,0,
          127}));
  connect(AlvCapillary.O2equil, ventilation.O2) annotation (Line(
      points={{2.4,56},{2.4,63.1},{-1.6,63.1},{-1.6,68.24}},
      color={107,45,134},
      thickness=1));
  connect(AlvCapillary.CO2equil, ventilation.CO2) annotation (Line(
      points={{12,55.6},{12,62.91},{17.3,62.91},{17.3,67.4}},
      color={107,45,134},
      thickness=1));
  connect(FiCO2.y, ventilation.FiCO2) annotation (Line(points={{-18.75,82},
          {-14,82},{-14,82.8},{-7.9,82.8}}, color={0,0,127}));
  connect(TissueCapillary.BloodO2out, veinsO2.q_out) annotation (Line(
      points={{-16.64,-50.36},{-36,-50.36},{-36,-68}},
      color={107,45,134},
      thickness=1));
  connect(TissueCapillary.BloodCO2out, veinsCO2.q_out) annotation (Line(
      points={{-16.64,-41.96},{-34,-41.96},{-34,-28}},
      color={107,45,134},
      thickness=1));
  connect(TissueCapillary.BloodCO2out, VeinsBlood.BloodCO2in) annotation (
      Line(
      points={{-16.64,-41.96},{-94,-41.96},{-94,38},{-53.6,38},{-53.6,34.4}},
      color={107,45,134},
      thickness=1));

  connect(TissueCapillary.BloodO2out, VeinsBlood.BloodO2in) annotation (
      Line(
      points={{-16.64,-50.36},{-96,-50.36},{-96,48},{-53.2,48},{-53.2,43.6}},
      color={107,45,134},
      thickness=1));

  connect(VeinsBlood.BloodO2in, AlvCapillary.BloodO2in) annotation (Line(
      points={{-53.2,43.6},{-30.6,43.6},{-8.4,43.6}},
      color={107,45,134},
      thickness=1));
  connect(VeinsBlood.BloodCO2in, AlvCapillary.BloodCO2in) annotation (Line(
      points={{-53.6,34.4},{-30.8,34.4},{-8.4,34.4}},
      color={107,45,134},
      thickness=1));
  connect(O2pulmShortCircuit.q_in, VeinsBlood.BloodO2in) annotation (Line(
      points={{-4,6},{-18,6},{-44,6},{-44,43.6},{-53.2,43.6}},
      color={107,45,134},
      thickness=1));
  connect(CO2pulmShortCircuit.q_in, AlvCapillary.BloodCO2in) annotation (
      Line(
      points={{-4,-14},{-48,-14},{-48,34},{-30.8,34.4},{-8.4,34.4}},
      color={107,45,134},
      thickness=1));
  connect(AlvCapillary.BloodO2out, ArtBlood.BloodO2in) annotation (Line(
      points={{24.8,43.2},{44.4,43.2},{44.4,43.6},{65.2,43.6}},
      color={107,45,134},
      thickness=1));
  connect(AlvCapillary.BloodCO2out, ArtBlood.BloodCO2in) annotation (Line(
      points={{24.8,35.2},{44.4,35.2},{44.4,34.4},{65.6,34.4}},
      color={107,45,134},
      thickness=1));
  connect(CO2pulmShortCircuit.q_out, ArtBlood.BloodCO2in) annotation (Line(
      points={{12,-14},{12,-16},{54,-16},{54,26},{65.6,26},{65.6,34.4}},
      color={107,45,134},
      thickness=1));
  connect(O2pulmShortCircuit.q_out, ArtBlood.BloodO2in) annotation (Line(
      points={{12,6},{50,6},{50,38},{65.2,38},{65.2,43.6}},
      color={107,45,134},
      thickness=1));
  connect(ArtBlood.BloodCO2in, TissueCapillary.BloodCO2in) annotation (Line(
      points={{65.6,34.4},{96,34.4},{96,-41.12},{18.22,-41.12}},
      color={107,45,134},
      thickness=1));
  connect(TissueCapillary.BloodO2in, ArtBlood.BloodO2in) annotation (Line(
      points={{18.22,-50.78},{98,-50.78},{98,43.6},{65.2,43.6}},
      color={107,45,134},
      thickness=1));
  connect(artysCO2.q_out, TissueCapillary.BloodCO2in) annotation (Line(
      points={{74,-12},{76,-12},{76,-41.12},{18.22,-41.12}},
      color={107,45,134},
      thickness=1));
  connect(artysO2.q_out, ArtBlood.BloodO2in) annotation (Line(
      points={{78,-72},{78,-58},{98,-58},{98,43.6},{65.2,43.6}},
      color={107,45,134},
      thickness=1));
  connect(bloodParameters.bloodParameters, VeinsBlood.bloodParameters)
    annotation (Line(
      points={{-85.88,70.24},{-85.88,62},{-54,62},{-54,57.2}},
      color={0,0,255},
      thickness=0.5));
  connect(bloodParameters.bloodParameters, TissueCapillary.bloodParameters)
    annotation (Line(
      points={{-85.88,70.24},{-85.88,70},{-88,70},{-88,-98},{46,-98},{46,
          -76},{46,-66},{17.8,-66},{17.8,-65.06}},
      color={0,0,255},
      thickness=0.5));
  connect(bloodParameters.bloodParameters, AlvCapillary.bloodParameters)
    annotation (Line(
      points={{-85.88,70.24},{-85.88,62},{-8,62},{-8,57.2}},
      color={0,0,255},
      thickness=0.5));
  connect(bloodParameters.bloodParameters, ArtBlood.bloodParameters)
    annotation (Line(
      points={{-85.88,70.24},{-85.88,62},{66,62},{66,57.2}},
      color={0,0,255},
      thickness=0.5));
  connect(TissueCapillary.O2equil, O2met.q_in) annotation (Line(
      points={{6.88,-63.8},{6.88,-78},{16,-78}},
      color={107,45,134},
      thickness=1));
  connect(CO2met.q_out, TissueCapillary.CO2equil) annotation (Line(
      points={{2,-91},{-4,-91},{-4,-63.38},{-3.2,-63.38}},
      color={107,45,134},
      thickness=1));
  connect(O2met.soluteFlow, VO2.y) annotation (Line(points={{27.2,-74.8},{
          28,-74.8},{28,-71},{30.75,-71}}, color={0,0,127}));
  connect(VCO2.y, CO2met.soluteFlow) annotation (Line(points={{28.75,-85},{
          6.8,-85},{6.8,-88.2}}, color={0,0,127}));
  connect(VenBloodVolume.y, veinsO2.solutionVolume) annotation (Line(points=
         {{-73,-57},{-40,-57},{-40,-64}}, color={0,0,127}));
  connect(VenBloodVolume.y, veinsCO2.solutionVolume) annotation (Line(
        points={{-73,-57},{-52,-57},{-52,-16},{-38,-16},{-38,-24}}, color={
          0,0,127}));
  connect(ArtBloodVolume.y, artysO2.solutionVolume) annotation (Line(points=
         {{55,-55},{74,-55},{74,-68}}, color={0,0,127}));
  connect(artysCO2.solutionVolume, artysO2.solutionVolume) annotation (Line(
        points={{78,-8},{78,0},{88,0},{88,-54},{74,-54},{74,-68}}, color={0,
          0,127}));
  connect(ShuntSraction.y, pulmonaryShunts.FractionShunts) annotation (Line(
        points={{-76,7},{-73.5,7},{-73.5,2.55},{-70.9,2.55}}, color={0,0,
          127}));
  connect(pulmonaryShunts.PulmonaryPerfusion, AlvCapillary.bloodFlowRate)
    annotation (Line(points={{-59.02,-4.47},{-20,-4.47},{-20,53.8},{-14.6,
          53.8}}, color={0,0,127}));
  connect(CardiacOutput.y, pulmonaryShunts.CardiacOutput) annotation (Line(
        points={{-76,-5},{-73.5,-5},{-73.5,-8.655},{-70.35,-8.655}}, color=
          {0,0,127}));
  connect(pulmonaryShunts.ShuntFlow, O2pulmShortCircuit.solutionFlow)
    annotation (Line(points={{-59.02,-7.44},{-14,-7.44},{-14,-4},{4,-4},{4,
          0.4}}, color={0,0,127}));
  connect(pulmonaryShunts.ShuntFlow, CO2pulmShortCircuit.solutionFlow)
    annotation (Line(points={{-59.02,-7.44},{-14,-7.44},{-14,-24},{4,-24},{
          4,-19.6}}, color={0,0,127}));
  connect(TissueCapillary.bloodFlowRate, pulmonaryShunts.CardiacOutput)
    annotation (Line(points={{24.73,-61.49},{54,-61.49},{54,-100},{-84,-100},
          {-84,-16},{-74,-16},{-74,-8},{-73.5,-8.655},{-70.35,-8.655}},
        color={0,0,127}));
  connect(VeinsBlood.bloodFlowRate, pulmonaryShunts.CardiacOutput)
    annotation (Line(points={{-47.4,53.8},{-38,53.8},{-38,64},{-100,64},{
          -100,-16},{-74,-16},{-74,-8},{-73.5,-8.655},{-70.35,-8.655}},
        color={0,0,127}));
  connect(ArtBlood.bloodFlowRate, pulmonaryShunts.CardiacOutput)
    annotation (Line(points={{59.4,53.8},{54,53.8},{54,64},{-100,64},{-100,
          -16},{-74,-16},{-74,-8},{-73.5,-8.655},{-70.35,-8.655}}, color={0,
          0,127}));
  connect(BEox.y, AlvCapillary.BEox) annotation (Line(points={{-29,17},{-20,
          17},{-20,48.6},{-14.6,48.6}}, color={0,0,127}));
  connect(VeinsBlood.BEox, AlvCapillary.BEox)
    annotation (Line(points={{-47.4,48.6},{-14.6,48.6}}, color={0,0,127}));
  connect(ArtBlood.BEox, BEox.y) annotation (Line(points={{59.4,48.6},{38,
          48.6},{38,17},{-29,17}}, color={0,0,127}));
  connect(TissueCapillary.BEox, BEox.y) annotation (Line(points={{24.73,
          -56.03},{38,-56.03},{38,17},{-29,17}}, color={0,0,127}));
  connect(atmosphericTemperature.y, ventilation.ambientTemperature)
    annotation (Line(points={{-36.75,76},{-22,76},{-22,78.88},{-7.9,78.88}},
        color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),      Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-98,68},{88,2}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Bloody Mary")}));
end BloodyMary_version01;
