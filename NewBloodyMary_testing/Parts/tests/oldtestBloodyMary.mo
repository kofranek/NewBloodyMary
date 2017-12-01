within NewBloodyMary_testing.Parts.tests;
model oldtestBloodyMary

  Physiolibrary.Types.Constants.VolumeFlowRateConst QCO(k=8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-184,-126},{-174,-116}})));
  Parts.VentilationO2CO2 ventilation
    annotation (Placement(transformation(extent={{-28,8},{54,82}})));
  Physiolibrary.Types.Constants.PressureConst barometricPressure(k=
        99991.79056125)
    annotation (Placement(transformation(extent={{-76,82},{-68,90}})));
  Physiolibrary.Types.Constants.FractionConst airHumidity(k=0.58)
    annotation (Placement(transformation(extent={{-78,66},{-70,74}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{-80,54},{-72,62}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.00038)
    annotation (Placement(transformation(extent={{-62,48},{-54,56}})));
  Physiolibrary.Types.Constants.TemperatureConst atmosphericTemperature(k=
        298.15)
    annotation (Placement(transformation(extent={{-52,38},{-44,46}})));
  Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
    annotation (Placement(transformation(extent={{-66,24},{-58,32}})));
  Physiolibrary.Types.Constants.VolumeConst inspiredTidalVolume(k=0.0005)
    annotation (Placement(transformation(extent={{-32,88},{-24,96}})));
  Physiolibrary.Types.Constants.VolumeConst deadVolume(k=0.00015)
    annotation (Placement(transformation(extent={{-14,96},{-6,104}})));
  Physiolibrary.Types.Constants.FrequencyConst breathingFrequency(k=
        0.29333333333333)
    annotation (Placement(transformation(extent={{10,98},{18,106}})));
  Parts.BloodO2CO2Equilibrium AlvCapillary(
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
    annotation (Placement(transformation(extent={{4,-84},{86,-16}})));

  /*
  //
  BloodO2in.q(start=10),
  BloodO2out.conc(start=7.9475),
  BloodCO2out.conc(start=21.6349),
  Blood.bloodPO2PCO2_.totalO2.sO2CO(start=0.977),
  Blood.bloodPO2PCO2_.totalO2.a(start=-0.1),
  Blood.bloodPO2PCO2_.totalO2.cO2Hb(start=8.16),
  Blood.bloodPO2PCO2_.totalO2.tO2(start=8.161),
  Blood.bloodPO2PCO2_.totalO2.pCO2(start=5700),
  Blood.bloodPO2PCO2_.totalO2.pO2(start=13870),
  
  BloodCO2in(q(start=115.472)),
  Blood.bloodPO2PCO2_.totalCO2.tCO2_P(start=24.9),
  Blood.bloodPO2PCO2_.totalCO2.pCO2(start=5160)
  
  */

  Parts.BloodParameters bloodParameters
    annotation (Placement(transformation(extent={{-82,-6},{-62,14}})));

  Parts.BloodO2CO2measured ArtBlood(Blood(bloodPO2PCO2_(totalO2(
    pO2(                            start=13459),
    cO2Hb(                            start=7.82305),
    pCO2(                            start=4428.03),
    a(                            start=-0.1)), totalCO2(
    tCO2_P(                             start=26),
    pCO2(                             start=5330)))))
    annotation (Placement(transformation(extent={{112,-88},{206,-10}})));

    /*
    Blood.bloodPO2PCO2_.totalO2.pO2(start=13459),
    Blood.bloodPO2PCO2_.totalO2.cO2Hb(start=7.82305),
    Blood.bloodPO2PCO2_.totalO2.pCO2(start=4428.03),
    Blood.bloodPO2PCO2_.totalO2.a(start=-0.1),
    Blood.bloodPO2PCO2_.totalCO2.tCO2_P(start=26), 
    Blood.bloodPO2PCO2_.totalCO2.pCO2(start=5330)
    
    
    */
  Parts.BloodO2CO2Equilibrium TissueCapillary
    annotation (Placement(transformation(extent={{64,-138},{-18,-216}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0) annotation (
      Placement(transformation(
        extent={{4,-4},{-4,4}},
        rotation=180,
        origin={-86,-30})));
  Parts.BloodO2CO2measured VeinsBlood(Blood(bloodPO2PCO2_(totalO2(
  pO2(                            start=6140),
  cO2Hb(                            start=6.52),
  a(                            start=0.076),
  pCO2(                            start=6400)), totalCO2(
  tCO2_P(                             start=27.4),
  pCO2(                             start=6240)))))
    annotation (Placement(transformation(extent={{-188,-94},{-94,-16}})));

  /*  
  Blood.bloodPO2PCO2_.totalO2.pO2(start=6140),
  Blood.bloodPO2PCO2_.totalO2.cO2Hb(start=6.52),
  Blood.bloodPO2PCO2_.totalO2.a(start=0.076),
  Blood.bloodPO2PCO2_.totalO2.pCO2(start=6400),
  Blood.bloodPO2PCO2_.totalCO2.tCO2_P(start=27.4), 
  Blood.bloodPO2PCO2_.totalCO2.pCO2(start=6240))
  
  */
Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
                                              Metabolism_O2Use(
      useSoluteFlowInput=true) annotation (Placement(transformation(
      extent={{-10,10},{10,-10}},
      rotation=270,
      origin={36,-240})));
Physiolibrary.Chemical.Sources.UnlimitedSolutePump InflowBase(
    useSoluteFlowInput=true)
  annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
        origin={14,-236})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0.000145717)
    annotation (Placement(transformation(extent={{-36,-240},{-16,-220}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=0.00018309)
    annotation (Placement(transformation(extent={{-26,-268},{-6,-248}})));
  Physiolibrary.Types.Constants.VolumeConst VenBloodVolume(k=0.00360844)
    annotation (Placement(transformation(extent={{-154,-204},{-134,-190}})));
  Physiolibrary.Types.Constants.VolumeConst ArtBloodVolume(k=0.001621)
    annotation (Placement(transformation(extent={{190,-156},{168,-140}})));
  Physiolibrary.Chemical.Components.Substance veinsO2(
    stateName="O2Veins.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0247781)
    annotation (Placement(transformation(extent={{-126,-256},{-106,-236}})));
  Physiolibrary.Chemical.Components.Substance artysO2(
    stateName="O2Artys.Mass[mMol]",
    useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0130979)
    annotation (Placement(transformation(extent={{154,-240},{174,-220}})));
  Physiolibrary.Chemical.Components.Substance                veins(
                                                           stateName=
        "CO2Veins.Mass[mMol]",
  useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0869)
    annotation (Placement(transformation(extent={{-114,-208},{-94,-188}})));
  Physiolibrary.Chemical.Components.Substance                artys(
                                                           stateName=
        "CO2Artys.Mass[mMol]",
  useNormalizedVolume=false,
    Simulation=Physiolibrary.Types.SimulationType.NoInit,
    solute_start=0.0343)
    annotation (Placement(transformation(extent={{114,-236},{94,-216}})));
  Parts.PulmonaryShunts pulmonaryShunts
    annotation (Placement(transformation(extent={{-114,-132},{-84,-96}})));
  Physiolibrary.Types.Constants.FractionConst ShuntSraction(k=0.02)
    annotation (Placement(transformation(extent={{-144,-106},{-136,-98}})));
Physiolibrary.Chemical.Components.Stream O2pulmShortCircuit(
      useSolutionFlowInput=true)
    annotation (Placement(transformation(extent={{12,-90},{32,-110}})));
Physiolibrary.Chemical.Components.Stream CO2pulmShortCircuit(
      useSolutionFlowInput=true)
    annotation (Placement(transformation(extent={{10,-112},{30,-132}})));
equation
  connect(barometricPressure.y,ventilation. barometricPressure) annotation (
     Line(points={{-67,86},{-46,86},{-46,78.3},{-23.9,78.3}}, color={0,0,
          127}));
  connect(airHumidity.y,ventilation. airHumidity) annotation (Line(points={{-69,70},
          {-23.9,70},{-23.9,70.16}},          color={0,0,127}));
  connect(FiO2.y,ventilation. FiO2) annotation (Line(points={{-71,58},{-50,
          58},{-50,62.02},{-23.9,62.02}}, color={0,0,127}));
  connect(FiCO2.y,ventilation. FiCO2) annotation (Line(points={{-53,52},{
          -23.9,52},{-23.9,52.4}}, color={0,0,127}));
  connect(bodyTemperature.y,ventilation. bodyTemperature) annotation (Line(
        points={{-57,28},{-42,28},{-42,32.42},{-23.9,32.42}}, color={0,0,
          127}));
  connect(inspiredTidalVolume.y,ventilation. tidalVolume) annotation (Line(
        points={{-23,92},{-7.5,92},{-7.5,78.3}},   color={0,0,127}));
  connect(deadVolume.y,ventilation. deadSpace) annotation (Line(points={{-5,100},
          {8.9,100},{8.9,78.3}},          color={0,0,127}));
  connect(breathingFrequency.y,ventilation. respiratoryRate) annotation (
      Line(points={{19,102},{25.3,102},{25.3,78.3}},
                                                  color={0,0,127}));
  connect(bloodParameters.bloodParameters, AlvCapillary.bloodParameters)
    annotation (Line(
      points={{-71.9,-0.7},{-25.1,-0.7},{-25.1,-20.76},{12.2,-20.76}},
      color={0,0,255},
      thickness=0.5));
  connect(AlvCapillary.O2equil, ventilation.O2) annotation (Line(
      points={{33.52,-22.8},{33.52,-6},{-11.6,-6},{-11.6,13.92}},
      color={107,45,134},
      thickness=1));
  connect(AlvCapillary.CO2equil, ventilation.CO2) annotation (Line(
      points={{53.2,-23.48},{61.2,-23.48},{61.2,8},{61.2,11.7},{25.3,11.7}},
      color={107,45,134},
      thickness=1));

  connect(ArtBlood.bloodParameters, bloodParameters.bloodParameters)
    annotation (Line(
      points={{121.4,-15.46},{121.4,-0.7},{-71.9,-0.7}},
      color={0,0,255},
      thickness=0.5));
  connect(BEox.y, AlvCapillary.BEox) annotation (Line(points={{-81,-30},{
          -44,-30},{-44,-35.38},{-1.33,-35.38}},
                                        color={0,0,127}));
  connect(BEox.y, TissueCapillary.BEox) annotation (Line(points={{-81,-30},
          {-81,-32},{-16,-32},{-16,-88},{86,-88},{86,-193.77},{69.33,
          -193.77}},
        color={0,0,127}));
  connect(ArtBlood.BEox, AlvCapillary.BEox) annotation (Line(points={{105.89,
          -32.23},{94,-32.23},{94,-86},{-12,-86},{-12,-35.38},{-1.33,-35.38}},
                                                                    color={0,0,127}));

  connect(AlvCapillary.BloodO2out, ArtBlood.BloodO2in) annotation (Line(
      points={{79.44,-44.56},{99.72,-44.56},{99.72,-41.98},{119.52,-41.98}},
      color={107,45,134},
      thickness=1));

  connect(AlvCapillary.BloodCO2out, ArtBlood.BloodCO2in) annotation (Line(
      points={{79.44,-58.16},{99.72,-58.16},{99.72,-59.92},{120.46,-59.92}},
      color={107,45,134},
      thickness=1));

  connect(ArtBlood.BloodCO2in, TissueCapillary.BloodCO2in) annotation (Line(
      points={{120.46,-59.92},{120.46,-166.08},{56.62,-166.08}},
      color={107,45,134},
      thickness=1));
  connect(ArtBlood.BloodO2in, TissueCapillary.BloodO2in) annotation (Line(
      points={{119.52,-41.98},{138,-41.98},{138,-184.02},{56.62,-184.02}},
      color={107,45,134},
      thickness=1));

  connect(Metabolism_O2Use.q_in, TissueCapillary.O2equil) annotation (Line(
      points={{36,-230},{36,-230},{36,-208.2},{34.48,-208.2}},
      color={107,45,134},
      thickness=1));
  connect(InflowBase.q_out, TissueCapillary.CO2equil) annotation (Line(
      points={{14,-226},{14,-226},{14,-207.42},{14.8,-207.42}},
      color={107,45,134},
      thickness=1));
  connect(VO2.y, Metabolism_O2Use.soluteFlow) annotation (Line(points={{-3.5,
          -258},{4,-258},{26,-258},{26,-244},{32,-244}},    color={0,0,127}));
  connect(VCO2.y, InflowBase.soluteFlow) annotation (Line(points={{-13.5,
          -230},{10,-230},{10,-232}},    color={0,0,127}));
  connect(veinsO2.q_out, TissueCapillary.BloodO2out) annotation (Line(
      points={{-116,-246},{-116,-214},{-44,-214},{-44,-183.24},{-11.44,
          -183.24}},
      color={107,45,134},
      thickness=1));

  connect(artysO2.q_out, TissueCapillary.BloodO2in) annotation (Line(
      points={{164,-230},{164,-190},{136,-190},{136,-184.02},{56.62,-184.02}},
      color={107,45,134},
      thickness=1));
  connect(ArtBloodVolume.y, artysO2.solutionVolume) annotation (Line(points={{165.25,
          -148},{160,-148},{160,-226}}, color={0,0,127}));
  connect(veinsO2.solutionVolume, VenBloodVolume.y) annotation (Line(points={{-120,
          -242},{-120,-242},{-120,-168},{-120,-197},{-131.5,-197}}, color={0,0,127}));
  connect(veins.q_out, TissueCapillary.BloodCO2out) annotation (Line(
      points={{-104,-198},{-70,-198},{-70,-167.64},{-11.44,-167.64}},
      color={107,45,134},
      thickness=1));
  connect(veins.solutionVolume, VenBloodVolume.y) annotation (Line(points={{-108,
          -194},{-108,-152},{-120,-152},{-120,-197},{-131.5,-197}}, color={0,0,127}));
  connect(artys.q_out, TissueCapillary.BloodCO2in) annotation (Line(
      points={{104,-226},{102,-226},{102,-166.08},{56.62,-166.08}},
      color={107,45,134},
      thickness=1));
  connect(artys.solutionVolume, ArtBloodVolume.y) annotation (Line(points={{108,
          -222},{110,-222},{110,-156},{150,-156},{150,-148},{165.25,-148}},
        color={0,0,127}));
  connect(VeinsBlood.BloodCO2in, AlvCapillary.BloodCO2in) annotation (Line(
      points={{-179.54,-65.92},{-83.77,-65.92},{-83.77,-59.52},{11.38,-59.52}},
      color={107,45,134},
      thickness=1));

  connect(AlvCapillary.BloodO2in, VeinsBlood.BloodO2in) annotation (Line(
      points={{11.38,-43.88},{-86.72,-43.88},{-86.72,-47.98},{-180.48,
          -47.98}},
      color={107,45,134},
      thickness=1));

  connect(VeinsBlood.BloodCO2in, TissueCapillary.BloodCO2out) annotation (Line(
      points={{-179.54,-65.92},{-196,-65.92},{-196,-167.64},{-11.44,-167.64}},
      color={107,45,134},
      thickness=1));
  connect(VeinsBlood.BloodO2in, TissueCapillary.BloodO2out) annotation (Line(
      points={{-180.48,-47.98},{-206,-47.98},{-206,-183.24},{-11.44,-183.24}},
      color={107,45,134},
      thickness=1));
  connect(bloodParameters.bloodParameters, VeinsBlood.bloodParameters)
    annotation (Line(
      points={{-71.9,-0.7},{-178.6,-0.7},{-178.6,-21.46}},
      color={0,0,255},
      thickness=0.5));
  connect(VeinsBlood.BEox, AlvCapillary.BEox) annotation (Line(points={{-194.11,
          -38.23},{-210,-38.23},{-210,-8},{-68,-8},{-68,-30},{-44,-30},{-44,
          -35.38},{-1.33,-35.38}},
                           color={0,0,127}));
  connect(VeinsBlood.bloodFlowRate, QCO.y) annotation (Line(points={{
          -194.11,-28.09},{-200,-28.09},{-200,-106},{-152,-106},{-152,-121},
          {-172.75,-121}}, color={0,0,127}));
  connect(pulmonaryShunts.CardiacOutput, QCO.y) annotation (Line(points={{
          -111.75,-123.54},{-152,-123.54},{-152,-121},{-172.75,-121}},
        color={0,0,127}));
  connect(ShuntSraction.y, pulmonaryShunts.FractionShunts) annotation (Line(
        points={{-135,-102},{-126,-102},{-126,-108.6},{-112.5,-108.6}},
        color={0,0,127}));
  connect(pulmonaryShunts.PulmonaryPerfusion, AlvCapillary.bloodFlowRate)
    annotation (Line(points={{-96.3,-117.96},{-54,-117.96},{-54,-26.54},{
          -1.33,-26.54}}, color={0,0,127}));
  connect(O2pulmShortCircuit.q_in, VeinsBlood.BloodO2in) annotation (Line(
      points={{12,-100},{-40,-100},{-40,-47.98},{-90,-47.98},{-180.48,
          -47.98}},
      color={107,45,134},
      thickness=1));
  connect(O2pulmShortCircuit.q_out, ArtBlood.BloodO2in) annotation (Line(
      points={{32,-100},{104,-100},{104,-41.98},{119.52,-41.98}},
      color={107,45,134},
      thickness=1));
  connect(CO2pulmShortCircuit.solutionFlow, pulmonaryShunts.ShuntFlow)
    annotation (Line(points={{20,-129},{20,-132},{-92,-132},{-92,-121.92},{
          -96.3,-121.92}}, color={0,0,127}));
  connect(O2pulmShortCircuit.solutionFlow, pulmonaryShunts.ShuntFlow)
    annotation (Line(points={{22,-107},{22,-112},{-6,-112},{-6,-132},{-92,
          -132},{-92,-121.92},{-96.3,-121.92}}, color={0,0,127}));
  connect(CO2pulmShortCircuit.q_in, AlvCapillary.BloodCO2in) annotation (
      Line(
      points={{10,-122},{-46,-122},{-46,-66},{-84,-66},{-83.77,-65.92},{
          -83.77,-59.52},{11.38,-59.52}},
      color={107,45,134},
      thickness=1));
  connect(CO2pulmShortCircuit.q_out, ArtBlood.BloodCO2in) annotation (Line(
      points={{30,-122},{68,-122},{112,-122},{112,-59.92},{120.46,-59.92}},
      color={107,45,134},
      thickness=1));

  connect(TissueCapillary.bloodFlowRate, QCO.y) annotation (Line(points={{
          69.33,-203.91},{92,-203.91},{92,-136},{-152,-136},{-152,-121},{
          -172.75,-121}}, color={0,0,127}));
  connect(ArtBlood.bloodFlowRate, QCO.y) annotation (Line(points={{105.89,
          -22.09},{92,-22.09},{92,-136},{-152,-136},{-152,-121},{-172.75,
          -121}}, color={0,0,127}));
  connect(TissueCapillary.bloodParameters, bloodParameters.bloodParameters)
    annotation (Line(
      points={{55.8,-210.54},{55.8,-256},{228,-256},{228,-2},{122,-2},{
          121.4,-0.7},{-71.9,-0.7}},
      color={0,0,255},
      thickness=0.5));
  connect(atmosphericTemperature.y, ventilation.ambientTemperature)
    annotation (Line(points={{-43,42},{-23.9,42},{-23.9,42.04}}, color={0,
          0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end oldtestBloodyMary;
