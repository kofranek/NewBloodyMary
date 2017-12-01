within NewBloodyMary_testing.OSA;
model O2CO2algr

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
        origin={-68,-65}),        iconTransformation(extent={{-122,-108},{
            -102,-88}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{8,8},{
            -8,-8}},
        rotation=180,
        origin={-78,4}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,40})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-65,-25}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,-18})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-72,-34}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,-36})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-78,-56}),        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,-78})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-70,29},
            {-54,45}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,98})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{7,7},{
            -7,-7}},
        rotation=180,
        origin={-73,-7}),         iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,20})));
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
        origin={-112,-58})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
    "effiective concentration of hemoglobin (mmol/l)" annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-34}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-38})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctO2 annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{-122,70},
            {-102,90}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2 annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{-122,50},
            {-102,70}})));
  Physiolibrary.Types.RealIO.PressureOutput pO2( start=13300) annotation (Placement(
        transformation(extent={{36,41},{50,55}}), iconTransformation(extent={{100,
            70},{120,90}})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
        transformation(extent={{36,70},{48,82}}), iconTransformation(extent={{100,
            50},{120,70}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPi(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{7,7},{-7,-7}},
        rotation=180,
        origin={-85,-13}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-112,2})));
  Real pO2kPa;
  Real pCO2kPa;
  Real tempC;

algorithm
  (pO2kPa,pCO2kPa,pH,sO2) := O2CO2of( ctO2,ctCO2,BEox,ctHb,ctAlb,ctPi,cDPG,FCOHb,FMetHb,FHbF,tempC);
  cHCO3:=cHCO3of(pH,pCO2kPa,tempC);
  cdCO2 := ctCO2Pof(pH, pCO2kPa, tempC);
  cdO2 := dissO2( pO2,tempC);
  ceHb :=ceHbof(ctHb,FCOHb,FMetHb);
equation
  T-273.15=tempC;
  pO2kPa*1000=pO2;
  pCO2kPa*1000=pCO2;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{76,2},{94,-8}},
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
          extent={{-92,-90},{-74,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{74,44},{94,32}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pH"),
        Text(
          extent={{-94,102},{-76,92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="BEox"),
        Text(
          extent={{-92,46},{-74,36}},
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
          origin={-84,80},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctO2"),
        Text(
          extent={{-13,7},{13,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-81,61},
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
          extent={{76,88},{94,78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pO2"),
        Text(
          extent={{72,70},{94,52}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pCO2"),
        Text(
          extent={{-92,-74},{-74,-82}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbF"),
        Text(
          extent={{-92,-26},{-64,-44}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FMetHb"),
        Text(
          extent={{-92,-12},{-72,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cDPG"),
        Text(
          extent={{-92,26},{-72,14}},
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
          origin={82,-58},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdO2"),
        Text(
          extent={{-15.5,19.5},{15.5,-19.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={78.5,-79.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdCO2"),
        Text(
          extent={{-92,-48},{-68,-64}},
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
          origin={82,-39},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ceHb"),
        Text(
          extent={{-92,8},{-74,-2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctPi")}), Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end O2CO2algr;
