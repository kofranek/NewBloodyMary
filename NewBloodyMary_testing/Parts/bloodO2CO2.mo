within NewBloodyMary_testing.Parts;
model bloodO2CO2

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-4,-50}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-60})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-26,-60}),                          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-84})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=90,
        origin={5,19}),           iconTransformation(extent={{-118,76},{-98,
            96}})));
  Physiolibrary.Types.RealIO.pHInput pH annotation (Placement(transformation(
          extent={{-122,60},{-96,86}}), iconTransformation(extent={{-120,18},
            {-100,38}})));
  Physiolibrary.Types.RealIO.pHInput pHery annotation (Placement(
        transformation(extent={{-118,32},{-96,54}}), iconTransformation(
          extent={{-120,-28},{-100,-8}})));
   Physiolibrary.Types.RealIO.FractionInput Hct(start=0.4)
    "outgoing hematocrit (erytrocytes volume/blood volume)"
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=180,
        origin={-4,42}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-64})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{110,72},
            {98,84}}),            iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-90})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={91,49}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,30})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={92,36}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,10})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={91,25}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,-10})));
  Physiolibrary.Types.RealIO.PressureInput pCO
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=180,
        origin={92,12}),          iconTransformation(extent={{-10,-10},{
            10,10}},
        rotation=180,
        origin={110,-30})));
  TotalCO2 tCO2
    annotation (Placement(transformation(extent={{-80,0},{-20,60}})));
  TotalO2 tO2
    annotation (Placement(transformation(extent={{20,0},{80,60}})));
  Physiolibrary.Types.RealIO.PressureInput pO2 annotation (Placement(
        transformation(extent={{-8,-6},{16,18}}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={26,-102})));
  Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
        transformation(extent={{-118,20},{-94,44}}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={54,-100})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-64,-28}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-18,-102})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={36,-26}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-46,-102})));
equation
  connect(cHCO3, cHCO3) annotation (Line(
      points={{-26,-60},{-26,-60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.pH, pH) annotation (Line(
      points={{-77,54},{-86,54},{-86,73},{-109,73}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pHery, tCO2.pH_ery) annotation (Line(
      points={{-107,43},{-92.5,43},{-92.5,42},{-77,42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.T, T) annotation (Line(
      points={{-23,54},{5,54},{5,19}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Hct, tCO2.Hct) annotation (Line(
      points={{-4,42},{-23,42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(sO2, tCO2.sO2) annotation (Line(
      points={{-4,-50},{-4,30},{-23,30}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.cHCO3, cHCO3) annotation (Line(
      points={{-26,-6},{-26,-60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(cDPG, tO2.cDPG) annotation (Line(
      points={{91,49},{84.5,49},{84.5,48},{77,48}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FMetHb, tO2.FMetHb) annotation (Line(
      points={{92,36},{77,36}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FHbF, tO2.FHbF) annotation (Line(
      points={{91,25},{83.5,25},{83.5,24},{77,24}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO, tO2.pCO) annotation (Line(
      points={{92,12},{77,12}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.pH, pH) annotation (Line(
      points={{23,60},{0,60},{0,73},{-109,73}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.T, T) annotation (Line(
      points={{23,36},{5,36},{5,19}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.ctHb, ctHb) annotation (Line(
      points={{77,60},{88,60},{88,78},{104,78}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.sO2, tCO2.sO2) annotation (Line(
      points={{50,-6},{50,-34},{-4,-34},{-4,30},{-23,30}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.pCO2inp, pCO2) annotation (Line(
      points={{-77.3,28.5},{-88.65,28.5},{-88.65,32},{-106,32}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.pO2inp, pO2) annotation (Line(
      points={{22.7,28.5},{18,28.5},{18,6},{4,6}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.totalO2, ctO2) annotation (Line(
      points={{38.3,-5.7},{38.3,-11.5},{36,-11.5},{36,-26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.totalCO2, ctCO2) annotation (Line(
      points={{-62,-6},{-62,-12.5},{-64,-12.5},{-64,-28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctCO2, ctCO2) annotation (Line(
      points={{-64,-28},{-64,-28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.pCO2, pCO2) annotation (Line(
      points={{23,48},{6,48},{6,58},{-20,58},{-20,62},{-90,62},{-90,32},{-106,
          32}},
      color={0,0,127},
      smooth=Smooth.None));
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
          extent={{-98,92},{-80,82}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="T"),
        Text(
          extent={{-98,34},{-80,24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pH"),
        Text(
          extent={{-96,-14},{-78,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pHery"),
        Text(
          extent={{-96,-58},{-78,-68}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Hct"),
        Text(
          extent={{-96,-82},{-78,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctHb"),
        Text(
          extent={{-56,-82},{-38,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2"),
        Text(
          extent={{-24,-82},{-6,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2"),
        Text(
          extent={{-72,114},{72,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="%name"),
        Text(
          extent={{18,-80},{36,-90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pO2"),
        Text(
          extent={{44,-80},{62,-90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO2"),
        Text(
          extent={{74,-26},{92,-36}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO"),
        Text(
          extent={{74,-6},{92,-16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FHbF"),
        Text(
          extent={{72,16},{94,4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FMetHb"),
        Text(
          extent={{72,36},{92,26}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cDPG")}), Diagram(coordinateSystem(preserveAspectRatio=
            false, extent={{-100,-100},{100,100}}), graphics));
end bloodO2CO2;
