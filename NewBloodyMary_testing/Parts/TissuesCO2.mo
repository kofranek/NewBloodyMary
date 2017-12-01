within NewBloodyMary_testing.Parts;
model TissuesCO2

 extends Physiolibrary.Icons.Tissues;
Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in annotation (
    Placement(transformation(extent={{60,-20},{100,20}}),
      iconTransformation(extent={{100,-20},{140,20}})));
Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out annotation (
    Placement(transformation(extent={{-94,-20},{-54,20}}),
      iconTransformation(extent={{-94,-20},{-54,20}})));
Physiolibrary.Types.BusConnector busConnector
  annotation (Placement(transformation(extent={{-108,72},{-68,112}})));

  Physiolibrary.Types.MolarFlowRate CO2FromTissues(displayUnit="mmol/min");
Physiolibrary.Chemical.Sources.UnlimitedSolutePump InflowBase(
    useSoluteFlowInput=true)
  annotation (Placement(transformation(extent={{-84,42},{-64,62}})));
Physiolibrary.Chemical.Components.Stream tissueFlow(
    useSolutionFlowInput=true) annotation (Placement(transformation(
      extent={{-10,10},{10,-10}},
      rotation=180,
      origin={22,0})));
  FlowMeasureCO2 tissueVeinsCO2
    annotation (Placement(transformation(extent={{-24,-2},{-44,18}})));
  Modelica.Blocks.Math.Gain DonnansCoeficient(k=1.04)
    annotation (Placement(transformation(extent={{-4,-4},{4,4}},
        rotation=270,
        origin={-42,-38})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2(
                                      start=45)
                                           annotation (Placement(
        transformation(extent={{42,-22},{50,-14}}),  iconTransformation(
          extent={{-10,-10},{10,10}},
        rotation=270,
        origin={0,-110})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_interstitial
                                           annotation (Placement(
        transformation(extent={{-22,-76},{-14,-68}}),iconTransformation(
          extent={{-10,-10},{10,10}},
        rotation=270,
        origin={20,-110})));
  Interstitium interstitium(volume(displayUnit="l") = 0.012,
      initialHCO3Conc=26.8)
    annotation (Placement(transformation(extent={{114,-52},{134,-32}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
    annotation (Placement(transformation(extent={{30,-52},{50,-32}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump(
      useSoluteFlowInput=true) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={102,-70})));
  Modelica.Blocks.Math.Add add(k1=-1, k2=+1)
    annotation (Placement(transformation(extent={{42,-76},{62,-56}})));
  Modelica.Blocks.Math.Gain gain(k=2e-5)
    annotation (Placement(transformation(extent={{68,-76},{88,-56}})));
  Physiolibrary.Types.Constants.ConcentrationConst bloodHCO3Concentration(k=
       25)
    annotation (Placement(transformation(extent={{10,-60},{18,-52}})));
equation
  CO2FromTissues = -( q_out.q + q_in.q);

  connect(tissueVeinsCO2.pCO2,pCO2)  annotation (Line(
      points={{-38,-4},{-38,-18},{46,-18}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(InflowBase.q_out,tissueVeinsCO2. q_in) annotation (Line(
      points={{-64,52},{-10,52},{-10,0},{-24,0}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(tissueFlow.q_out,tissueVeinsCO2. q_in) annotation (Line(
      points={{12,0},{-24,0}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(DonnansCoeficient.y,cHCO3_interstitial)  annotation (Line(
      points={{-42,-42.4},{-42,-72},{-18,-72}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tissueVeinsCO2.cHCO3,DonnansCoeficient. u) annotation (Line(
      points={{-42,-4},{-42,-33.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tissueFlow.q_in, q_in) annotation (Line(
      points={{32,0},{80,0},{80,0}},
      color={107,45,134},
      thickness=1));
  connect(tissueVeinsCO2.q_out, q_out) annotation (Line(
      points={{-44,0},{-74,0},{-74,0}},
      color={107,45,134},
      thickness=1));
  connect(tissueVeinsCO2.BloodFlow, busConnector.CardiacOutput) annotation (
      Line(points={{-25,8},{-10,8},{6,8},{6,92},{-88,92}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(tissueFlow.solutionFlow, busConnector.CardiacOutput) annotation (Line(
        points={{22,7},{22,7},{22,10},{22,10},{6,10},{6,92},{-88,92}}, color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(InflowBase.soluteFlow, busConnector.VCO2) annotation (Line(points=
         {{-70,56},{-70,76},{-70,92},{-88,92}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(tissueVeinsCO2.T, busConnector.core_T) annotation (Line(points={{
          -43,16},{-50,16},{-58,16},{-58,92},{-88,92}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(tissueVeinsCO2.pCO2, busConnector.tissueVein_pCO2) annotation (
      Line(points={{-38,-4},{-38,-4},{-38,-18},{6,-18},{6,92},{-88,92}},
        color={0,0,127}));
  connect(tissueVeinsCO2.cHCO3, busConnector.tissueVein_cHCO3) annotation (
      Line(points={{-42,-4},{-42,-4},{-42,-28},{6,-28},{6,92},{-88,92}},
        color={0,0,127}));
  connect(tissueVeinsCO2.sO2, busConnector.tissueVein_sO2) annotation (Line(
        points={{-43,8},{-58,8},{-58,92},{-88,92}}, color={0,0,127}));
  connect(tissueVeinsCO2.pH, busConnector.tissueVein_pH) annotation (Line(
        points={{-25,16},{-10,16},{6,16},{6,92},{-88,92}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(tissueVeinsCO2.pH_ery, busConnector.tissueVein_pH_ery)
    annotation (Line(points={{-25,12},{6,12},{6,92},{-88,92}}, color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(tissueVeinsCO2.Hct, busConnector.BloodVol_Hct) annotation (Line(
        points={{-43,12},{-58,12},{-58,92},{-88,92}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(interstitium.HCO3, concentrationMeasure.q_in) annotation (Line(
      points={{115,-42},{115,-42},{40,-42}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure.concentration, add.u1)
    annotation (Line(points={{40,-50},{40,-60}}, color={0,0,127}));
  connect(add.y, gain.u) annotation (Line(points={{63,-66},{63,-66},{66,-66}},
        color={0,0,127}));
  connect(gain.y, unlimitedSolutePump.soluteFlow) annotation (Line(points={
          {89,-66},{89,-66},{98,-66}}, color={0,0,127}));
  connect(interstitium.HCO3, unlimitedSolutePump.q_out) annotation (Line(
      points={{115,-42},{102,-42},{102,-60}},
      color={107,45,134},
      thickness=1));
  connect(pCO2, interstitium.pCO2) annotation (Line(points={{46,-18},{82,
          -18},{82,-34},{116,-34}}, color={0,0,127}));
  connect(cHCO3_interstitial, add.u2) annotation (Line(points={{-18,-72},{
          12,-72},{40,-72}}, color={0,0,127}));
  connect(interstitium.BE, busConnector.interstitiumBEoxFlow) annotation (
      Line(points={{124,-33},{124,-33},{124,-18},{124,92},{-88,92}}, color=
          {0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Icon(graphics={Rectangle(extent={{-120,100},{120,-100}},
            lineColor={0,0,0})}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end TissuesCO2;
