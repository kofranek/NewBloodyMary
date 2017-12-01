within NewBloodyMary_testing.OSA;
model O2CO2

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-16}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,0})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-7,-7.5},{7,7.5}},
        rotation=0,
        origin={87,-6.5}),                          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,20})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-68,-65}),        iconTransformation(extent={{-120,-106},{-100,-86}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{8,8},{
            -8,-8}},
        rotation=180,
        origin={-78,4}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,40})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-65,-25}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-18})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-72,-34}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-36})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-78,-56}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-76})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-70,29},
            {-54,45}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,98})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{7,7},{
            -7,-7}},
        rotation=180,
        origin={-73,-7}),         iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,20})));
  Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,3}),    iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,40})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={87,-44}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-58})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation (
      Placement(transformation(
        extent={{-7,-6.5},{7,6.5}},
        rotation=0,
        origin={87,-53.5}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-78})));
  Physiolibrary.Types.RealIO.FractionInput FCOHb annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-75,-46}),
                         iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-56})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
    "effiective concentration of hemoglobin (mmol/l)" annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-34}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-38})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctO2( start=6) annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{-120,70},
            {-100,90}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2( start=23) annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{-120,50},
            {-100,70}})));
  Physiolibrary.Types.RealIO.PressureOutput pO2( start=13300) annotation (Placement(
        transformation(extent={{36,41},{50,55}}), iconTransformation(extent={{100,
            70},{120,90}})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
        transformation(extent={{36,70},{48,82}}), iconTransformation(extent={{100,
            50},{120,70}})));
  PO2PCO2 pO2PCO2
    annotation (Placement(transformation(extent={{-36,-64},{62,32}})));
  Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints
    annotation (Placement(transformation(extent={{-8,64},{32,88}})));
  Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1
    annotation (Placement(transformation(extent={{-8,36},{32,60}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPi(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{7,7},{-7,-7}},
        rotation=180,
        origin={-85,-13}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,2})));
        /*
    Real pO2_kPa_init;
    Real pCO2_kPa_init;
    Real pHinit;
    Real sO2init;
    */
initial algorithm
  /*
   (pO2_kPa_init,pCO2_kPa_init,pHinit,sO2init) := O2CO2of(ctO2,ctCO2,BEox,ctHb,ctAlb,ctPi,cDPG,FCOHb,FMetHb,FHbF,T-273.15);
   pO2:=pO2_kPa_init*1000;
   pCO2:=pCO2_kPa_init*1000;
   pH :=pHinit;
   sO2:= sO2init;
   */
equation
  /*
  pO2_kPa_init*1000 =pO2;
  pCO2_kPa_init*1000 = pCO2;
  pHinit = pH;
  sO2init = sO2;
  */
  connect(pO2PCO2.pH, pH)
    annotation (Line(points={{66.9,3.2},{88,3.2},{88,3}}, color={0,0,127}));
  connect(pO2PCO2.cHCO3, cHCO3) annotation (Line(points={{66.9,-6.4},{75.45,-6.4},
          {75.45,-6.5},{87,-6.5}}, color={0,0,127}));
  connect(pO2PCO2.sO2, sO2)
    annotation (Line(points={{66.9,-16},{88,-16}}, color={0,0,127}));
  connect(pO2PCO2.ceHb, ceHb) annotation (Line(points={{66.9,-34.24},{74.45,-34.24},
          {74.45,-34},{88,-34}}, color={0,0,127}));
  connect(pO2PCO2.cdO2, cdO2) annotation (Line(points={{66.9,-43.84},{75.45,-43.84},
          {75.45,-44},{87,-44}}, color={0,0,127}));
  connect(pO2PCO2.cdCO2, cdCO2) annotation (Line(points={{66.9,-53.44},{75.45,-53.44},
          {75.45,-53.5},{87,-53.5}}, color={0,0,127}));
  connect(BEox, pO2PCO2.BEox)
    annotation (Line(points={{-62,37},{-40.9,11.84}},color={0,0,127}));
  connect(pO2PCO2.ctO2, inverseBlockConstraints1.u2) annotation (Line(points={{66.9,
          22.4},{76,22.4},{76,34},{16,34},{16,48},{-4,48}}, color={0,0,127}));
  connect(inverseBlockConstraints1.u1, ctO2)
    annotation (Line(points={{-10,48},{-13.5,48},{-25,48}}, color={0,0,127}));
  connect(inverseBlockConstraints.u1, ctCO2)
    annotation (Line(points={{-10,76},{-18,76},{-24,76}}, color={0,0,127}));
  connect(pO2PCO2.ctCO2, inverseBlockConstraints.u2) annotation (Line(points={{66.9,
          12.8},{82,12.8},{82,62},{14,62},{14,76},{-4,76}}, color={0,0,127}));
  connect(inverseBlockConstraints.y1, pCO2)
    annotation (Line(points={{33,76},{42,76},{42,76}}, color={0,0,127}));
  connect(inverseBlockConstraints1.y1, pO2)
    annotation (Line(points={{33,48},{43,48},{43,48}}, color={0,0,127}));
  connect(pO2PCO2.pO2, inverseBlockConstraints1.y2) annotation (Line(points={{-40.9,
          31.04},{-70,31.04},{-70,56},{22,56},{22,48},{29,48}},
                                                              color={0,0,127}));
  connect(pO2PCO2.pCO2, inverseBlockConstraints.y2) annotation (Line(points={{-40.9,
          21.44},{-60,21.44},{-78,21.44},{-78,82},{20,82},{20,76},{29,76}},
                                                                color={0,0,127}));
  connect(ctHb, pO2PCO2.ctHb) annotation (Line(points={{-78,4},{-40.9,4},{-40.9,
          2.24}}, color={0,0,127}));
  connect(ctAlb, pO2PCO2.ctAlb) annotation (Line(points={{-73,-7},{-40.9,-7},{-40.9,
          -7.36}},       color={0,0,127}));
  connect(cDPG, pO2PCO2.cDPG) annotation (Line(points={{-65,-25},{-48.5,-25},{-48.5,
          -25.6},{-40.9,-25.6}}, color={0,0,127}));
  connect(FMetHb, pO2PCO2.FMetHb) annotation (Line(points={{-72,-34},{-40.9,-34},
          {-40.9,-35.2}}, color={0,0,127}));
  connect(FCOHb, pO2PCO2.FCOHb)
    annotation (Line(points={{-75,-46},{-48,-46},{-48,-44.8},{-40.9,-44.8}},
                                                     color={0,0,127}));
  connect(FHbF, pO2PCO2.FHbF) annotation (Line(points={{-78,-56},{-40.9,-56},{-40.9,
          -54.4}}, color={0,0,127}));
  connect(T, pO2PCO2.T) annotation (Line(points={{-68,-65},{-50,-65},{-50,-64},{
          -40.9,-64}},    color={0,0,127}));
  connect(pO2PCO2.ctPi, ctPi) annotation (Line(points={{-40.9,-16.96},{-60.45,-16.96},
          {-60.45,-13},{-85,-13}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{74,4},{92,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2"),
        Text(
          extent={{70,30},{94,10}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="HCO3"),
        Text(
          extent={{-96,-92},{-78,-102}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{72,44},{92,32}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pH"),
        Text(
          extent={{-96,100},{-78,90}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="BEox"),
        Text(
          extent={{-96,44},{-78,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctHb"),
        Text(
          extent={{-10,6},{10,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-86,78},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctO2"),
        Text(
          extent={{-13,7},{13,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-83,59},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctCO2"),
        Text(
          extent={{-64,62},{58,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="O2CO2"),
        Text(
          extent={{74,88},{92,78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          horizontalAlignment=TextAlignment.Right,
          fontSize=12,
          textString="pO2"),
        Text(
          extent={{70,70},{92,52}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pCO2"),
        Text(
          extent={{-96,-72},{-78,-80}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbF"),
        Text(
          extent={{-96,-28},{-68,-46}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FMetHb"),
        Text(
          extent={{-96,-12},{-76,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cDPG"),
        Text(
          extent={{-96,26},{-76,14}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctAlb"),
        Text(
          extent={{-12,6},{12,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={78,-58},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdO2"),
        Text(
          extent={{-15.5,19.5},{15.5,-19.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={76.5,-77.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdCO2"),
        Text(
          extent={{-96,-48},{-72,-64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbCO"),
        Text(
          extent={{-12,5},{12,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={78,-39},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ceHb"),
        Text(
          extent={{-96,6},{-78,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctPi"),
        Text(
          extent={{-60,92},{70,62}},
          lineColor={28,108,200},
          textString="%name")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end O2CO2;
