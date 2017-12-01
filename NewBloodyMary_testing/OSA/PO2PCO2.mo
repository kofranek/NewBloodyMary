within NewBloodyMary_testing.OSA;
model PO2PCO2

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=0,
        origin={30,6}),                             iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,0})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-7,-7},{7,7}},
        rotation=0,
        origin={101,50}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,20})));
  Physiolibrary.Types.RealIO.TemperatureInput T  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-98,-8}),         iconTransformation(extent={{-120,-110},{-100,-90}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{8,8},{
            -8,-8}},
        rotation=180,
        origin={-76,-44}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,38})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-6,6},{
            6,-6}},
        rotation=180,
        origin={-4,62}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-20})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-6,6},{
            6,-6}},
        rotation=180,
        origin={-4,50}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-40})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-6,6},{
            6,-6}},
        rotation=180,
        origin={-4,38}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-80})));
  Physiolibrary.Types.RealIO.PressureInput pO2  annotation (Placement(
        transformation(extent={{-100,68},{-88,80}}),
                                                  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,98})));
  Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
        transformation(extent={{4,67},{18,81}}),      iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,78})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={101,62}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,60})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
        transformation(
        extent={{7.5,-7},{-7.5,7}},
        rotation=180,
        origin={-28.5,0}),
                         iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,80})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-62,-28},
            {-46,-12}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,58})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{6,6.5},
            {-6,-6.5}},
        rotation=180,
        origin={-61,-51.5}),      iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,18})));
  Physiolibrary.Types.RealIO.pHOutput pH( start = 7.4) annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={56,-44}),  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,40})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={101,38}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-58})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation (
      Placement(transformation(
        extent={{-7,7},{7,-7}},
        rotation=0,
        origin={-45,0}),   iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-78})));
  Physiolibrary.Types.RealIO.FractionInput FCOHb annotation (Placement(
        transformation(
        extent={{-6,6},{6,-6}},
        rotation=180,
        origin={-4,26}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-60})));
  ctO2content bloodctO2content
    annotation (Placement(transformation(extent={{-80,20},{-20,80}})));
  ctCO2content bloodctCO2content
    annotation (Placement(transformation(extent={{26,20},{86,80}})));
  BEINV vanSlykeEquation
    annotation (Placement(transformation(extent={{-34,-74},{28,-14}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
    "effiective concentration of hemoglobin (mmol/l)" annotation (Placement(
        transformation(
        extent={{-6,6},{6,-6}},
        rotation=0,
        origin={-58,0}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-38})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPi(displayUnit="mmol/l")
    "concentration of phosphate  (mmol/l)" annotation (Placement(transformation(
        extent={{6,6.5},{-6,-6.5}},
        rotation=180,
        origin={-59,-59.5}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-2})));
equation
  connect(bloodctCO2content.pCO2, pCO2)
    annotation (Line(points={{23,74},{23,74},{11,74}}, color={0,0,127}));
  connect(bloodctO2content.pCO2, pCO2) annotation (Line(points={{-83,50},{-100,
          50},{-100,98},{18,98},{18,74},{11,74}}, color={0,0,127}));
  connect(bloodctO2content.pO2, pO2)
    annotation (Line(points={{-83,74},{-94,74}}, color={0,0,127}));
  connect(vanSlykeEquation.BEox, BEox)
    annotation (Line(points={{-37.1,-20},{-54,-20}}, color={0,0,127}));
  connect(vanSlykeEquation.pCO2, pCO2) annotation (Line(points={{-37.1,-32},
          {-100,-32},{-100,98},{18,98},{18,74},{11,74}}, color={0,0,127}));
  connect(vanSlykeEquation.ctHb, ctHb)
    annotation (Line(points={{-37.1,-44},{-76,-44}}, color={0,0,127}));
  connect(bloodctO2content.ctHb, ctHb) annotation (Line(points={{-17,74},{2,
          74},{2,-4},{62,-4},{62,-92},{-66,-92},{-66,-44},{-76,-44}}, color=
         {0,0,127}));
  connect(ctAlb, vanSlykeEquation.cAlb) annotation (Line(points={{-61,-51.5},{-37.5,
          -51.5},{-37.5,-51.8},{-37.1,-51.8}},    color={0,0,127}));
  connect(bloodctO2content.T, T) annotation (Line(points={{-83,38},{-89,38},
          {-89,-8},{-98,-8}}, color={0,0,127}));
  connect(T, vanSlykeEquation.temp) annotation (Line(points={{-98,-8},{-88,-8},{
          -88,-73.4},{-37.1,-73.4}},  color={0,0,127}));
  connect(bloodctCO2content.T, vanSlykeEquation.temp) annotation (Line(
        points={{23,50},{6,50},{6,-8},{-88,-8},{-88,-73.4},{-37.1,-73.4}},
        color={0,0,127}));
  connect(bloodctCO2content.ctHb, ctHb) annotation (Line(points={{23,38},{2,
          38},{2,-4},{62,-4},{62,-92},{-66,-92},{-66,-44},{-76,-44}}, color=
         {0,0,127}));
  connect(bloodctO2content.sO2, bloodctCO2content.sO2) annotation (Line(
        points={{-32,17},{-32,6},{16,6},{16,26},{23,26}}, color={0,0,127}));
  connect(cDPG, bloodctO2content.cDPG)
    annotation (Line(points={{-4,62},{-17,62}}, color={0,0,127}));
  connect(FMetHb, bloodctO2content.FMetHb)
    annotation (Line(points={{-4,50},{-17,50}}, color={0,0,127}));
  connect(FHbF, bloodctO2content.FHbF)
    annotation (Line(points={{-4,38},{-17,38}}, color={0,0,127}));
  connect(FCOHb, bloodctO2content.FCOHb)
    annotation (Line(points={{-4,26},{-17,26}}, color={0,0,127}));
  connect(vanSlykeEquation.pH, bloodctCO2content.pH) annotation (Line(
        points={{31.1,-44},{44,-44},{44,16},{12,16},{12,62},{23,62}}, color=
         {0,0,127}));
  connect(bloodctO2content.pH, bloodctCO2content.pH) annotation (Line(
        points={{-83,62.6},{-98,62.6},{-98,92},{4,92},{4,62},{23,62}},
        color={0,0,127}));
  connect(pH, bloodctCO2content.pH) annotation (Line(points={{56,-44},{44,
          -44},{44,16},{12,16},{12,62},{23,62}}, color={0,0,127}));
  connect(sO2, bloodctCO2content.sO2) annotation (Line(points={{30,6},{16,6},
          {16,26},{23,26}}, color={0,0,127}));
  connect(bloodctO2content.cdO2p, cdCO2)
    annotation (Line(points={{-56,17},{-56,0},{-45,0}}, color={0,0,127}));
  connect(bloodctO2content.totalO2, ctO2) annotation (Line(points={{-44,17},
          {-44,0},{-28.5,0}}, color={0,0,127}));
  connect(bloodctCO2content.ctCO2, ctCO2)
    annotation (Line(points={{89,62},{101,62}}, color={0,0,127}));
  connect(bloodctCO2content.cHCO3, cHCO3)
    annotation (Line(points={{89,50},{101,50}}, color={0,0,127}));
  connect(bloodctCO2content.cdCO2p, cdO2)
    annotation (Line(points={{89,38},{101,38}}, color={0,0,127}));
  connect(bloodctO2content.ceHb, ceHb)
    annotation (Line(points={{-68,17},{-68,0},{-58,0}}, color={0,0,127}));
  connect(vanSlykeEquation.cPi, ctPi) annotation (Line(points={{-37.1,-59},{-45.55,
          -59},{-45.55,-59.5},{-59,-59.5}}, color={0,0,127}));
  connect(vanSlykeEquation.sO2, bloodctCO2content.sO2) annotation (Line(points={
          {-37.1,-66.2},{-54,-66.2},{-54,-80},{76,-80},{76,-2},{16,-2},{16,26},{
          23,26}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-66,4},{94,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2"),
        Text(
          extent={{-66,26},{94,8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="HCO3"),
        Text(
          extent={{-94,-88},{10,-96}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{-44,44},{92,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pH"),
        Text(
          extent={{-96,44},{54,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctHb"),
        Text(
          extent={{-73,7},{73,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={19,81},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ctO2"),
        Text(
          extent={{-75,6},{75,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={19,58},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ctCO2"),
        Text(
          extent={{-44,32},{66,-56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="PO2CO2"),
        Text(
          extent={{-94,98},{104,88}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="pO2"),
        Text(
          extent={{-94,86},{58,72}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="pCO2"),
        Text(
          extent={{-94,-74},{102,-82}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbF"),
        Text(
          extent={{-94,-34},{104,-48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FMetHb"),
        Text(
          extent={{-92,-14},{102,-28}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cDPG"),
        Text(
          extent={{-94,22},{68,12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctAlb"),
        Text(
          extent={{-74,8},{74,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={18,-56},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdO2"),
        Text(
          extent={{-80,11.5},{80,-11.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={14,-79.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdCO2"),
        Text(
          extent={{-94,-54},{58,-64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FCOHb"),
        Text(
          extent={{-78,7},{78,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={14,-37},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ceHb"),
        Text(
          extent={{-94,4},{52,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctPi"),
        Text(
          extent={{-96,66},{52,50}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="BEox")}), Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end PO2PCO2;
