within NewBloodyMary_testing.Parts;
model bloodCO2O2BEox

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=0,
        origin={92,-4}),                            iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-58})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-10,-10},{10,10}},
        rotation=0,
        origin={94,-18}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-84})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-10,-10},
            {10,10}},
        rotation=0,
        origin={-96,88}),         iconTransformation(extent={{-118,76},{-98,
            96}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{11,-11},
            {-11,11}},
        rotation=180,
        origin={-95,-1}),         iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-54})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={95,69}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,42})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={94,56}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,22})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={93,43}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,2})));
  Physiolibrary.Types.RealIO.PressureInput pCO
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=180,
        origin={94,28}),          iconTransformation(extent={{-10,-10},{
            10,10}},
        rotation=180,
        origin={112,-18})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-12,-12},
            {12,12}},
        rotation=90,
        origin={-2,-94}),         iconTransformation(
        extent={{-9,-9},{9,9}},
        rotation=90,
        origin={-3,-103})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{98,82},
            {86,94}}),            iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,82})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(extent={{96,72},{84,84}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,62})));
  Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                       displayUnit="g/l")
    "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={94,12}),          iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={112,-38})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctO2 annotation (Placement(
        transformation(
        extent={{-13,-13},{13,13}},
        rotation=90,
        origin={-88,-93}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,-102})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2 annotation (Placement(
        transformation(
        extent={{-12,-12},{12,12}},
        rotation=90,
        origin={-28,-90}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-42,-102})));
  Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=180,
        origin={-96,52}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-110,28})));
  Physiolibrary.Types.RealIO.PressureOutput pO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={16,-94}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={27,-101})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={34,-96}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={55,-101})));
  bloodPO2PCO2 bloodPO2PCO2_
    annotation (Placement(transformation(extent={{-64,-30},{64,102}})));
  Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints
    annotation (Placement(transformation(extent={{-74,-72},{-34,-48}})));
  Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1
    annotation (Placement(transformation(extent={{10,-72},{50,-48}})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-88,-44}),                          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-110,-24})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cdO2(displayUnit="mmol/l")
    "outgoing concentration of HCO3" annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-88,-30}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={-110,0})));
equation
  connect(bloodPO2PCO2_.pH, pH) annotation (Line(
      points={{-70.4,51.84},{-85.25,51.84},{-85.25,52},{-96,52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(BEox, bloodPO2PCO2_.BEox) annotation (Line(
      points={{-2,-94},{-2,-38},{10,-38},{10,-30.66},{9.6,-30.66}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(T, bloodPO2PCO2_.T) annotation (Line(
      points={{-96,88},{-84,88},{-84,87.48},{-69.12,87.48}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.cHCO3, cHCO3) annotation (Line(
      points={{70.4,-19.44},{77.25,-19.44},{77.25,-18},{94,-18}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.ctAlb, ctAlb) annotation (Line(
      points={{70.4,88.8},{79.25,88.8},{79.25,88},{92,88}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctPO4, bloodPO2PCO2_.ctPO4) annotation (Line(
      points={{90,78},{80,78},{80,75.6},{70.4,75.6}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.cDPG, cDPG) annotation (Line(
      points={{70.4,62.4},{82.25,62.4},{82.25,69},{95,69}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.FMetHb, FMetHb) annotation (Line(
      points={{70.4,49.2},{79.25,49.2},{79.25,56},{94,56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.FHbF, FHbF) annotation (Line(
      points={{70.4,36},{82,36},{82,43},{93,43}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.pCO, pCO) annotation (Line(
      points={{70.4,22.8},{81.25,22.8},{81.25,28},{94,28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.ctGlb, ctGlb) annotation (Line(
      points={{70.4,9.6},{81.25,9.6},{81.25,12},{94,12}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.ctHb, ctHb) annotation (Line(
      points={{-70.4,-3.6},{-82.25,-3.6},{-82.25,-1},{-95,-1}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodPO2PCO2_.sO2, sO2) annotation (Line(
      points={{70.4,-3.6},{79.2,-3.6},{79.2,-4},{92,-4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(inverseBlockConstraints.y1, pO2) annotation (Line(
      points={{-33,-60},{-14,-60},{-14,-78},{16,-78},{16,-94}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO2, inverseBlockConstraints1.y1) annotation (Line(
      points={{34,-96},{34,-78},{58,-78},{58,-60},{51,-60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(inverseBlockConstraints1.y2, bloodPO2PCO2_.pCO2) annotation (Line(
      points={{47,-60},{39.68,-60},{39.68,-30}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctCO2, inverseBlockConstraints1.u1) annotation (Line(
      points={{-28,-90},{-28,-64},{-8,-64},{-8,-60},{8,-60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctO2, inverseBlockConstraints.u1) annotation (Line(
      points={{-88,-93},{-88,-60},{-76,-60}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(inverseBlockConstraints.u2, bloodPO2PCO2_.ctO2) annotation (Line(
      points={{-70,-60},{-24.32,-60},{-24.32,-35.28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(inverseBlockConstraints1.u2, bloodPO2PCO2_.ctCO2) annotation (Line(
      points={{14,-60},{20,-60},{20,-50},{-10.24,-50},{-10.24,-35.28}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(inverseBlockConstraints.y2, bloodPO2PCO2_.pO2) annotation (Line(
        points={{-37,-60},{-50,-60},{-50,-54},{2,-54},{2,-42},{23.04,-42},{
          23.04,-30}}, color={0,0,127}));
  connect(bloodPO2PCO2_.cdO2, cdO2) annotation (Line(points={{-58.88,-35.28},
          {-58.88,-42},{-70,-42},{-70,-30},{-88,-30}}, color={0,0,127}));
  connect(bloodPO2PCO2_.cdCO2, cdCO2) annotation (Line(points={{-42.24,
          -35.28},{-42.24,-44},{-88,-44}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{102,-102}},
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
          extent={{-18,-74},{4,-88}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="BEox"),
        Text(
          extent={{-96,-46},{-78,-56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctHb"),
        Text(
          extent={{-92,-76},{-68,-88}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2"),
        Text(
          extent={{-58,-72},{-30,-90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2"),
        Text(
          extent={{-86,114},{58,16}},
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
          extent={{82,88},{100,78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctAlb"),
        Text(
          extent={{82,66},{100,56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctPO4"),
        Text(
          extent={{82,48},{100,38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cDPG"),
        Text(
          extent={{78,28},{98,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FMetHb"),
        Text(
          extent={{82,6},{98,-2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="FHbF"),
        Text(
          extent={{80,-14},{96,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO"),
        Text(
          extent={{80,-34},{96,-42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctGlb"),
        Text(
          extent={{-96,6},{-76,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdO2"),
        Text(
          extent={{-96,-14},{-70,-30}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdCO2")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end bloodCO2O2BEox;
