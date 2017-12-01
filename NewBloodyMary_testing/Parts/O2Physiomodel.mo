within NewBloodyMary_testing.Parts;
model O2Physiomodel

  Physiolibrary.Chemical.Components.Substance                veins(
                                         stateName="O2Veins.Mass[mMol]",
    useNormalizedVolume=false,
  solute_start=0.0247781)
    annotation (Placement(transformation(extent={{-92,-46},{-72,-26}})));
AlveolarVentilation             alveolarVentilation(solventFlowPump(q_out(
        conc(start=104/760)), useSolutionFlowInput=true)) annotation (
    Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-12,58})));
  Modelica.Blocks.Math.Feedback pulmShortCircuitFlow
    annotation (Placement(transformation(extent={{22,-56},{2,-36}})));
  MeassureBloodO2 artysO2(
  pO2(start=13459),
  cO2Hb(start=7.82305),
  pCO2(start=4428.03),
    a(start=-0.1))
    annotation (Placement(transformation(extent={{60,-12},{80,8}})));
  MeassureBloodO2 veinsO2(
  pO2(start=6140),
  cO2Hb(start=6.52),
  a(start=0.076),
  pCO2(start=6400))
    annotation (Placement(transformation(extent={{-90,-10},{-70,10}})));
  BloodO2_Siggaard O2Lung(
  pCO2(start=5700),
  pO2(start=13870),
    sO2CO(start=0.977),
    q_in(q(start=10)),
    a(start=-0.1),
    cO2Hb(start=8.16),
    tO2(start=8.161))
    annotation (Placement(transformation(extent={{-20,-10},{0,10}})));
  Physiolibrary.Chemical.Components.GasSolubility
                                    gasSolubility(useHeatPort=true,
  C=1700,
  kH_T0(displayUnit="(mmol/l)/kPa at 37degC") = 0.02707666941329,
  solubilityRateCoef(displayUnit="m3/s") = 0.01,
  T0=310.15)
    annotation (Placement(transformation(extent={{-22,20},{-2,40}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat alveolus(useTemperatureInput=
        true, T=310.15)
  annotation (Placement(transformation(extent={{8,26},{0,34}})));
Physiolibrary.Chemical.Sources.UnlimitedGasStorage air(PartialPressure(
      displayUnit="mmHg") = 21331.5819864, useHeatPort=true,
    usePartialPressureInput=true)
  annotation (Placement(transformation(extent={{-48,72},{-28,92}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat environment(useTemperatureInput=
       true, T=298.15)
  annotation (Placement(transformation(extent={{-74,54},{-54,74}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{82,24},{102,44}}), iconTransformation(
        extent={{60,60},{100,100}})));
  Physiolibrary.Chemical.Components.Substance                artys(
                               stateName="O2Artys.Mass[mMol]",
    useNormalizedVolume=false,
  solute_start=0.0130979)
    annotation (Placement(transformation(extent={{56,-88},{76,-68}})));
TissuesO2 tissuesO2
  annotation (Placement(transformation(extent={{-18,-90},{2,-70}})));
  GasPartialPressure PO2
    annotation (Placement(transformation(extent={{-66,77},{-54,87}})));
Physiolibrary.Chemical.Components.Stream pulmShortCircuit(
    useSolutionFlowInput=true)
  annotation (Placement(transformation(extent={{-18,-22},{2,-42}})));
equation
  connect(pulmShortCircuitFlow.u1,busConnector. CardiacOutput)
    annotation (Line(
      points={{20,-46},{30,-46},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.AlveolarVentilated_BloodFlow,pulmShortCircuitFlow. u2)
    annotation (Line(
      points={{92,34},{-54,34},{-54,-6},{-34,-6},{-34,-54},{12,-54}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.CO2Artys_pCO2,artysO2. pCO2)              annotation (
      Line(
      points={{92,34},{30,34},{30,4},{61,4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(artysO2.ctHb,busConnector. ctHb)              annotation (Line(
      points={{79,8},{98,8},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysO2.cDPG,busConnector. cDPG)              annotation (Line(
      points={{79,4},{98,4},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysO2.FMetHb,busConnector. FMetHb)              annotation (Line(
      points={{79,0},{98,0},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysO2.FHbF,busConnector. FHbF)              annotation (Line(
      points={{79,-4},{98,-4},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysO2.pCO,busConnector. pCO)              annotation (Line(
      points={{79,-8},{98,-8},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.Artys_pH,artysO2. pH)  annotation (Line(
      points={{92,34},{30,34},{30,8},{61,8}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.core_T,artysO2. T)       annotation (Line(
      points={{92,34},{30,34},{30,0},{61,0}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(artys.q_out,artysO2. q_in) annotation (Line(
      points={{66,-78},{66,-10},{70,-10}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(veinsO2.ctHb,busConnector. ctHb)              annotation (Line(
      points={{-71,10},{-54,10},{-54,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsO2.cDPG,busConnector. cDPG)              annotation (Line(
      points={{-71,6},{-54,6},{-54,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsO2.FMetHb,busConnector. FMetHb)              annotation (Line(
      points={{-71,2},{-54,2},{-54,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsO2.FHbF,busConnector. FHbF)              annotation (Line(
      points={{-71,-2},{-54,-2},{-54,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsO2.pCO,busConnector. pCO)              annotation (Line(
      points={{-71,-6},{-54,-6},{-54,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.CO2Veins_pCO2,veinsO2. pCO2)              annotation (
      Line(
      points={{92,34},{-96,34},{-96,6},{-89,6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.Veins_pH,veinsO2. pH)  annotation (Line(
      points={{92,34},{-96,34},{-96,10},{-89,10}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.core_T,veinsO2. T)       annotation (Line(
      points={{92,34},{-96,34},{-96,2},{-89,2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(veins.q_out,veinsO2. q_in)  annotation (Line(
      points={{-82,-36},{-82,-8},{-80,-8}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(busConnector.O2Veins_sO2,veinsO2. sO2)  annotation (Line(
      points={{92,34},{-96,34},{-96,-18},{-80,-18},{-80,-12}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-3,-3},{-3,-3}}));
  connect(artysO2.sO2,busConnector. O2Artys_sO2) annotation (Line(
      points={{70,-14},{70,-20},{98,-20},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{3,-3},{3,-3}}));
  connect(artysO2.pO2,busConnector. O2Artys_PO2) annotation (Line(
      points={{74,-14},{98,-14},{98,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.CO2Lung_pCO2,O2Lung. pCO2)               annotation (
      Line(
      points={{92,34},{-54,34},{-54,6},{-19,6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Lung.ctHb,busConnector. ctHb)               annotation (Line(
      points={{-1,10},{30,10},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.cDPG,busConnector. cDPG)               annotation (Line(
      points={{-1,6},{30,6},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.FMetHb,busConnector. FMetHb)               annotation (Line(
      points={{-1,2},{30,2},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.FHbF,busConnector. FHbF)               annotation (Line(
      points={{-1,-2},{30,-2},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.pCO,busConnector. pCO)               annotation (Line(
      points={{-1,-6},{30,-6},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.AlveolarVentilated_BloodFlow,O2Lung. BloodFlow)
    annotation (Line(
      points={{92,34},{-54,34},{-54,-3.4},{-20,-3.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Lung.sO2,busConnector. O2Lung_sO2) annotation (Line(
      points={{-10,-12},{-10,-18},{30,-18},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-3},{6,-3}}));
  connect(busConnector.core_T,O2Lung. T) annotation (Line(
      points={{92,34},{-54,34},{-54,2},{-19,2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(veins.q_out,O2Lung. q_in) annotation (Line(
      points={{-82,-36},{-82,-9},{-19,-9}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(O2Lung.q_out,artys. q_out) annotation (Line(
      points={{-1,-9},{66,-9},{66,-78}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(busConnector.Lung_pH,O2Lung. pH) annotation (Line(
      points={{92,34},{-54,34},{-54,10},{-19,10}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolarVentilation.AlveolarVentilation_Env,busConnector. AlveolarVentilation_Env)
    annotation (Line(
      points={{-4,60},{30,60},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.BronchiDilution,busConnector. BronchiDilution)
    annotation (Line(
      points={{-4,54},{30,54},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.alveolar,gasSolubility. q_out) annotation (Line(
      points={{-11.8,48},{-12,48},{-12,40}},
      color={107,45,134},
      thickness=1,
      smooth=Smooth.None));
  connect(O2Lung.alveolar,gasSolubility. q_in) annotation (Line(
      points={{-10.4,8.2},{-12,8.2},{-12,22}},
      color={107,45,134},
      thickness=1,
      smooth=Smooth.None));
connect(artys.solutionVolume,busConnector. ArtysVol) annotation (Line(
    points={{62,-74},{62,-66},{30,-66},{30,34},{92,34}},
    color={0,0,127},
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
connect(veins.solutionVolume,busConnector. VeinsVol) annotation (Line(
    points={{-86,-32},{-86,-26},{-96,-26},{-96,34},{92,34}},
    color={0,0,127},
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
connect(alveolus.port,gasSolubility. heatPort) annotation (Line(
    points={{0,30},{-12,30}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(air.q_out,alveolarVentilation. inspired) annotation (Line(
    points={{-28,82},{-22,82},{-22,66}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(air.q_out,alveolarVentilation. expired) annotation (Line(
    points={{-28,82},{10,82},{10,66},{-2,66}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(environment.port,air. heatPort) annotation (Line(
    points={{-54,64},{-38,64},{-38,82}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(tissuesO2.busConnector,busConnector)  annotation (Line(
    points={{-16.2,-72.6},{-16.2,-62},{100,-62},{100,34},{92,34}},
    color={255,204,51},
    thickness=0.5,
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
  connect(busConnector.FiO2, PO2.gasFractionConcentration) annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,79.5},{-67.2,79.5}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BarometerPressure, PO2.pressure) annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,85.1},{-67.2,85.1}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(PO2.partialPressure, air.partialPressure)
    annotation (Line(points={{-53.1,82},{-48,82}}, color={0,0,127}));
  connect(busConnector.AmbientTemperature, environment.temperature)
    annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,64},{-74,64}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.core_T, alveolus.temperature) annotation (Line(
      points={{92,34},{90,34},{90,36},{90,34},{30,34},{30,30},{8,30}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(tissuesO2.arty, artys.q_out) annotation (Line(
      points={{4,-80},{36,-80},{36,-78},{66,-78}},
      color={107,45,134},
      thickness=1));
  connect(tissuesO2.vein, veins.q_out) annotation (Line(
      points={{-20,-80},{-50,-80},{-50,-78},{-82,-78},{-82,-36}},
      color={107,45,134},
      thickness=1));
  connect(pulmShortCircuitFlow.y, pulmShortCircuit.solutionFlow)
    annotation (Line(points={{3,-46},{-8,-46},{-8,-39}}, color={0,0,127}));
  connect(veinsO2.q_in, pulmShortCircuit.q_in) annotation (Line(
      points={{-80,-8},{-50,-8},{-50,-32},{-18,-32}},
      color={107,45,134},
      thickness=1));
  connect(pulmShortCircuit.q_out, artysO2.q_in) annotation (Line(
      points={{2,-32},{36,-32},{36,-10},{70,-10}},
      color={107,45,134},
      thickness=1));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}}),
                   graphics={
                  Bitmap(extent={{-100,102},{100,-98}},  fileName=
              "modelica://Physiolibrary/Resources/Icons/O2.png"), Text(
          extent={{-130,-100},{146,-148}},
          lineColor={28,108,200},
          textString="%name")}),                                    Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end O2Physiomodel;
