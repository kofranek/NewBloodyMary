within NewBloodyMary_testing.Parts;
model bloodPO2PCO2

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-4,-28}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-60})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-26,-38}),                          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-84})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=90,
        origin={5,41}),           iconTransformation(extent={{-118,68},{-98,
            88}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{110,94},
            {98,106}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-60})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={91,71}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,40})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={92,58}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,20})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={91,47}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,0})));
  Physiolibrary.Types.RealIO.PressureInput pCO
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=180,
        origin={92,34}),          iconTransformation(extent={{-10,-10},{
            10,10}},
        rotation=180,
        origin={110,-20})));
  TotalCO2 totalCO2(pCO2(start=5332.8954966))
    annotation (Placement(transformation(extent={{-80,22},{-20,82}})));
  TotalO2 totalO2(
    cO2Hb(start=5),
    a(start=0.5),
    FCOHb(start=0),
    sO2CO(start=0.0075),
    T(start=583.3),
    pCO2(start=710994.35944141),
    pO2(start=1777485.8986035))
    annotation (Placement(transformation(extent={{20,22},{80,82}})));
  Physiolibrary.Types.RealIO.PressureInput pO2 annotation (Placement(
        transformation(extent={{-8,16},{16,40}}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={36,-100})));
  Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
        transformation(extent={{-124,42},{-100,66}}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={62,-100})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-62,-6}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-16,-108})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={38,-4}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-38,-108})));
  BloodPhMeassure bloodPhMeassure
    annotation (Placement(transformation(extent={{26,-84},{80,-30}})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-12,-68},
            {12,-44}}),           iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={15,-101})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{102,-60},
            {90,-48}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,80})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(extent={{102,-84},{90,-72}}),
        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,60})));
  Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                       displayUnit="g/l")
    "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={96,-64}),         iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,-40})));
  Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=180,
        origin={-108,76}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-110,24})));
  ctHb_to_Htc ctHb_to_Htc1
    annotation (Placement(transformation(extent={{40,84},{14,100}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={26,-2}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-92,-108})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-74,-10}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-66,-108})));
equation
  connect(cHCO3, cHCO3) annotation (Line(
      points={{-26,-38},{-26,-38}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalCO2.T, T) annotation (Line(
      points={{-23,76},{5,76},{5,41}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(sO2, totalCO2.sO2) annotation (Line(
      points={{-4,-28},{-4,52},{-23,52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalCO2.cHCO3, cHCO3) annotation (Line(
      points={{-26,16},{-26,-38}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(cDPG, totalO2.cDPG) annotation (Line(
      points={{91,71},{84.5,71},{84.5,70},{77,70}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FMetHb, totalO2.FMetHb) annotation (Line(
      points={{92,58},{77,58}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FHbF, totalO2.FHbF) annotation (Line(
      points={{91,47},{83.5,47},{83.5,46},{77,46}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO, totalO2.pCO) annotation (Line(
      points={{92,34},{77,34}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.T, T) annotation (Line(
      points={{23,58},{5,58},{5,41}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.ctHb, ctHb) annotation (Line(
      points={{77,82},{88,82},{88,100},{104,100}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.sO2, totalCO2.sO2) annotation (Line(
      points={{50,16},{50,-12},{-4,-12},{-4,52},{-23,52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalCO2.pCO2inp, pCO2) annotation (Line(
      points={{-76.7,50.5},{-84,50.5},{-84,50},{-90,50},{-90,54},{-112,54}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.pO2inp, pO2) annotation (Line(
      points={{22.7,50.5},{18,50.5},{18,28},{4,28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.totalO2, ctO2) annotation (Line(
      points={{38.3,16.3},{38.3,10.5},{38,10.5},{38,-4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalCO2.totalCO2, ctCO2) annotation (Line(
      points={{-61.4,16},{-61.4,6},{-62,6},{-62,-6}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctCO2, ctCO2) annotation (Line(
      points={{-62,-6},{-62,-6}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.pCO2, pCO2) annotation (Line(
      points={{23,70},{16,70},{16,78},{-14,78},{-14,84},{-90,84},{-90,54},{-112,
          54}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.sO2, totalCO2.sO2) annotation (Line(
      points={{69.2,-27.3},{69.2,-12},{-4,-12},{-4,52},{-23,52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.cHCO3, cHCO3) annotation (Line(
      points={{77.3,-35.4},{92,-35.4},{92,-16},{-26,-16},{-26,-38}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctHb, bloodPhMeassure.ctHb) annotation (Line(
      points={{104,100},{96,100},{96,-46.2},{77.3,-46.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.pH, totalCO2.pH) annotation (Line(
      points={{47.6,-89.4},{47.6,-100},{-96,-100},{-96,76},{-77,76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.pH_ery, totalCO2.pH_ery) annotation (Line(
      points={{58.4,-89.4},{58.4,-98},{-84,-98},{-84,64},{-77,64}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(totalO2.pH, totalCO2.pH) annotation (Line(
      points={{23,82},{-10,82},{-10,92},{-96,92},{-96,76},{-77,76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.ctPO4, ctPO4) annotation (Line(
      points={{77.3,-78.6},{84.65,-78.6},{84.65,-78},{96,-78}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.ctGlb, ctGlb) annotation (Line(
      points={{77.3,-67.8},{83.65,-67.8},{83.65,-64},{96,-64}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPhMeassure.ctAlb, ctAlb) annotation (Line(
      points={{77.3,-57},{83.65,-57},{83.65,-54},{96,-54}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pH, totalCO2.pH) annotation (Line(
      points={{-108,76},{-77,76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctHb_to_Htc1.ctHb, ctHb) annotation (Line(
      points={{43.64,92},{88,92},{88,100},{104,100}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctHb_to_Htc1.Htc, totalCO2.Hct) annotation (Line(
      points={{10.36,92},{-6,92},{-6,64},{-23,64}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(BEox, bloodPhMeassure.BEox) annotation (Line(points={{0,-56},{16,
          -56},{16,-20},{28.7,-20},{28.7,-27.3}}, color={0,0,127}));
  connect(totalO2.cdO2p, cdO2) annotation (Line(points={{26.3,16.3},{26.3,
          11.15},{26,11.15},{26,-2}}, color={0,0,127}));
  connect(totalCO2.cdCO2p, cdCO2) annotation (Line(points={{-73.4,16},{-74,
          16},{-74,-10},{-74,-10}},
                                color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{74,-56},{92,-66}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="sO2"),
        Text(
          extent={{76,-76},{98,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cHCO3"),
        Text(
          extent={{-98,84},{-80,74}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="T"),
        Text(
          extent={{-96,34},{-78,24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pH"),
        Text(
          extent={{2,-80},{20,-90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="BEox"),
        Text(
          extent={{-96,-52},{-78,-62}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctHb"),
        Text(
          extent={{-10,6},{10,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2",
          origin={-40,-88},
          rotation=90),
        Text(
          extent={{-13,7},{13,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2",
          origin={-15,-85},
          rotation=90),
        Text(
          extent={{-74,114},{70,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="%name"),
        Text(
          extent={{24,-80},{42,-90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pO2"),
        Text(
          extent={{50,-78},{70,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO2"),
        Text(
          extent={{76,-34},{94,-44}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctGlb"),
        Text(
          extent={{76,-16},{94,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO"),
        Text(
          extent={{76,4},{94,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FHbF"),
        Text(
          extent={{74,26},{94,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FMetHb"),
        Text(
          extent={{76,42},{94,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cDPG"),
        Text(
          extent={{78,62},{96,54}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctPO4"),
        Text(
          extent={{78,82},{96,74}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctAlb"),
        Text(
          extent={{-12,6},{12,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdO2",
          origin={-90,-84},
          rotation=90),
        Text(
          extent={{-15.5,19.5},{15.5,-19.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdCO2",
          origin={-63.5,-83.5},
          rotation=90)}),       Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end bloodPO2PCO2;
