within NewBloodyMary_testing.OSA;
model AlvEq

  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-66,90},
            {-56,99}}),           iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,28})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation (Placement(
        transformation(extent={{-42,5},{-32,16}}),  iconTransformation(extent={{-112,10},
            {-100,22}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation (Placement(
        transformation(extent={{-38,-2},{-28,8}}),  iconTransformation(extent={{-112,-2},
            {-100,10}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{5,5},{-5,-5}},
        rotation=180,
        origin={-43,77}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-8})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{6,6},{-6,-6}},
        rotation=180,
        origin={-50,72}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-20})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPi(displayUnit="mmol/l")
    "concentration of phosphate" annotation (Placement(transformation(
        extent={{5,5},{-5,-5}},
        rotation=180,
        origin={-41,65}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-32})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-5,-5},
            {5,5}},
        rotation=0,
        origin={-51,59}),         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-44})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-5,-5},
            {5,5}},
        rotation=0,
        origin={-63,53}),         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-56})));
  Physiolibrary.Types.RealIO.FractionInput FCOHb annotation (Placement(
        transformation(
        extent={{-5,-5.5},{5,5.5}},
        rotation=0,
        origin={-53,46.5}),
                         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-68})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=0,
        origin={-62,42}),         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-80})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-5.5,-5},
            {5.5,5}},
        rotation=0,
        origin={-66.5,27}),       iconTransformation(extent={{-112,-98},{-100,-86}})));
  Physiolibrary.Types.RealIO.PressureOutput PAO2 annotation (Placement(
        transformation(extent={{72,-54},{82,-43}}),
                                                  iconTransformation(extent={{100,76},
            {114,90}})));
  Physiolibrary.Types.RealIO.PressureOutput PACO2 annotation (Placement(
        transformation(extent={{86,-60},{96,-50}}),
                                                  iconTransformation(extent={{100,58},
            {114,72}})));
  Physiolibrary.Types.RealIO.pHOutput pHpc annotation (Placement(
        transformation(
        extent={{-6,-6.5},{6,6.5}},
        rotation=0,
        origin={92,78.5}),
                        iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,47})));
  Physiolibrary.Types.RealIO.ConcentrationOutput HCO3pc(displayUnit=
        "mmol/l") "outgoing concentration of HCO3" annotation (Placement(
        transformation(
        extent={{-6,-6.5},{6,6.5}},
        rotation=0,
        origin={76,72.5}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,28})));
  Physiolibrary.Types.RealIO.FractionOutput sO2pc annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={88,66}),  iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,8})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CpcCO2 annotation (
      Placement(transformation(
        extent={{-7,-6.5},{7,6.5}},
        rotation=0,
        origin={83,84.5}),  iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,-68})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CpcO2 annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={67,90}),  iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,-48})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-40,10},{-22,28}}),  iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,40})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-48,-66},{-32,-50}}),iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,52})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAe annotation (Placement(
        transformation(extent={{76,-76},{90,-62}}), iconTransformation(
          extent={{100,-94},{116,-78}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
        transformation(extent={{84,6},{96,18}}),    iconTransformation(
          extent={{100,-18},{116,-2}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{86,-6},{96,4}}),    iconTransformation(
          extent={{100,-36},{116,-20}})));
  Physiolibrary.Types.RealIO.FractionInput FiO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-36,-34}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,76})));
  Physiolibrary.Types.RealIO.FractionInput FiCO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-38,-50}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,64})));
  Physiolibrary.Types.RealIO.PressureInput PB annotation (Placement(
        transformation(extent={{-40,-28},{-26,-14}}),  iconTransformation(
          extent={{-112,82},{-100,94}})));

  PO2PCO2 pO2PCO2_1
    annotation (Placement(transformation(extent={{-22,42},{40,92}})));
  AlvGases alvGases
    annotation (Placement(transformation(extent={{-14,-90},{58,-38}})));
  O2CO2Balance o2CO2Balance
    annotation (Placement(transformation(extent={{0,-26},{64,34}})));
initial equation

equation
  connect(BEox, pO2PCO2_1.BEox) annotation (Line(points={{-61,94.5},{-43.5,
          94.5},{-43.5,81.5},{-25.1,81.5}}, color={0,0,127}));
  connect(pO2PCO2_1.ctHb, ctHb) annotation (Line(points={{-25.1,76.5},{-32.55,
          76.5},{-32.55,77},{-43,77}}, color={0,0,127}));
  connect(pO2PCO2_1.ctAlb, ctAlb) annotation (Line(points={{-25.1,71.5},{-35.55,
          71.5},{-35.55,72},{-50,72}}, color={0,0,127}));
  connect(pO2PCO2_1.ctPi, ctPi) annotation (Line(points={{-25.1,66.5},{-31.55,
          66.5},{-31.55,65},{-41,65}}, color={0,0,127}));
  connect(pO2PCO2_1.cDPG, cDPG) annotation (Line(points={{-25.1,62},{-36,62},
          {-36,59},{-51,59}}, color={0,0,127}));
  connect(pO2PCO2_1.FMetHb, FMetHb) annotation (Line(points={{-25.1,57},{
          -40,57},{-40,53},{-63,53}}, color={0,0,127}));
  connect(pO2PCO2_1.FCOHb, FCOHb) annotation (Line(points={{-25.1,52},{-38,
          52},{-38,46.5},{-53,46.5}}, color={0,0,127}));
  connect(pO2PCO2_1.FHbF, FHbF) annotation (Line(points={{-25.1,47},{-34,47},
          {-34,42},{-62,42}}, color={0,0,127}));
  connect(pO2PCO2_1.T, T) annotation (Line(points={{-25.1,42},{-28,42},{-32,
          42},{-32,27},{-66.5,27}}, color={0,0,127}));
  connect(T, alvGases.T) annotation (Line(points={{-66.5,27},{-44,27},{-44,
          -64.52},{-16.16,-64.52}}, color={0,0,127}));
  connect(alvGases.VAi, VAi) annotation (Line(points={{-16.16,-60.88},{-26,
          -60.88},{-26,-58},{-40,-58}}, color={0,0,127}));
  connect(alvGases.PB, PB) annotation (Line(points={{-16.16,-46.32},{-22,
          -46.32},{-22,-21},{-33,-21}}, color={0,0,127}));
  connect(alvGases.FiO2, FiO2) annotation (Line(points={{-16.16,-50.48},{
          -24,-50.48},{-24,-34},{-36,-34}}, color={0,0,127}));
  connect(alvGases.FiCO2, FiCO2) annotation (Line(points={{-16.16,-54.64},{
          -26,-54.64},{-26,-50},{-38,-50}}, color={0,0,127}));
  connect(o2CO2Balance.Q, Q) annotation (Line(points={{-3.2,25.6},{-22.25,
          25.6},{-22.25,19},{-31,19}},  color={0,0,127}));
  connect(o2CO2Balance.CvCO2, CvCO2) annotation (Line(points={{-3.2,10},{
          -24,10},{-24,3},{-33,3}},  color={0,0,127}));
  connect(o2CO2Balance.CvO2, CvO2) annotation (Line(points={{-3.2,17.2},{
          -20,17.2},{-20,10.5},{-37,10.5}},  color={0,0,127}));
  connect(alvGases.PACO2, PACO2) annotation (Line(points={{61.6,-55.16},{
          73.8,-55.16},{73.8,-55},{91,-55}}, color={0,0,127}));
  connect(alvGases.PAO2, PAO2) annotation (Line(points={{61.6,-49.44},{70,
          -49.44},{70,-48.5},{77,-48.5}}, color={0,0,127}));
  connect(alvGases.VAe, VAe) annotation (Line(points={{61.6,-60.88},{72,
          -60.88},{72,-69},{83,-69}}, color={0,0,127}));
  connect(o2CO2Balance.VCO2, VCO2) annotation (Line(points={{66.56,-0.2},{
          68,-0.2},{68,0},{70,0},{70,-1},{91,-1}},    color={0,0,127}));
  connect(pO2PCO2_1.ctO2, CpcO2) annotation (Line(points={{43.1,87},{52,87},
          {52,90},{67,90}}, color={0,0,127}));
  connect(pO2PCO2_1.ctCO2, CpcCO2) annotation (Line(points={{43.1,82},{60,
          82},{60,84.5},{83,84.5}}, color={0,0,127}));
  connect(pO2PCO2_1.pH, pHpc) annotation (Line(points={{43.1,77},{64.55,77},
          {64.55,78.5},{92,78.5}}, color={0,0,127}));
  connect(pO2PCO2_1.cHCO3, HCO3pc) annotation (Line(points={{43.1,72},{76,
          72},{76,72.5}}, color={0,0,127}));
  connect(pO2PCO2_1.sO2, sO2pc) annotation (Line(points={{43.1,67},{62.55,
          67},{62.55,66},{88,66}}, color={0,0,127}));
  connect(o2CO2Balance.VO2, VO2) annotation (Line(points={{66.56,5.2},{74,
          5.2},{74,12},{90,12}},  color={0,0,127}));
  connect(alvGases.VO2, VO2) annotation (Line(points={{-16.16,-69.2},{-28,
          -69.2},{-28,-96},{98,-96},{98,22},{74,22},{74,12},{90,12}}, color=
         {0,0,127}));
  connect(alvGases.VCO2, VCO2) annotation (Line(points={{-16.16,-74.4},{-22,
          -74.4},{-22,-94},{94,-94},{94,-16},{70,-16},{70,-4},{71.24,-4},{
          71.24,-1},{91,-1}}, color={0,0,127}));
  connect(pO2PCO2_1.pO2, PAO2) annotation (Line(points={{-25.1,91.5},{-88,
          91.5},{-88,-12},{-10,-12},{-10,-34},{66,-34},{66,-50},{68,-50},{
          68,-48.5},{77,-48.5}}, color={0,0,127}));
  connect(pO2PCO2_1.pCO2, PACO2) annotation (Line(points={{-25.1,86.5},{-74,
          86.5},{-74,-10},{-8,-10},{-8,-26},{84,-26},{84,-55},{91,-55}},
        color={0,0,127}));
  connect(o2CO2Balance.CpcO2, CpcO2) annotation (Line(
      points={{-3.2,1.6},{-16,1.6},{-16,38},{52,38},{52,90},{67,90}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(o2CO2Balance.CpcCO2, CpcCO2) annotation (Line(
      points={{-3.2,-5.6},{-10,-5.6},{-10,36},{60,36},{60,84.5},{83,84.5}},
      color={0,0,127},
      smooth=Smooth.None));

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                   graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-68,36},{64,-12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="AlvEq"),
        Text(
          extent={{-94,32},{-56,22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="BEox"),
        Text(
          extent={{-24,6},{24,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-70,14},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvO2"),
        Text(
          extent={{-36,6},{36,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-58,4},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvCO2"),
        Text(
          extent={{-94,-6},{-34,-12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctHb"),
        Text(
          extent={{-94,-16},{-30,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctAlb"),
        Text(
          extent={{-94,-26},{-20,-34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctPi"),
        Text(
          extent={{-94,-38},{-8,-48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cDPG"),
        Text(
          extent={{-94,-50},{-10,-64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FMetHb"),
        Text(
          extent={{-94,-62},{18,-74}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FCOHb"),
        Text(
          extent={{-94,-78},{-30,-84}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbF"),
        Text(
          extent={{-94,-88},{-32,-98}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{-51,5},{51,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={43,-49},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CpcO2"),
        Text(
          extent={{-52,9.5},{52,-9.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={42,-69.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CpcCO2"),
        Text(
          extent={{-4,14},{94,2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2pc"),
        Text(
          extent={{0,36},{94,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="HCO3pc"),
        Text(
          extent={{-22,52},{94,40}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pHpc"),
        Text(
          extent={{2,72},{94,56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PACO2"),
        Text(
          extent={{-6,86},{94,78}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PAO2"),
        Text(
          extent={{-94,42},{-58,36}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q"),
        Text(
          extent={{-94,54},{-48,48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VAi"),
        Text(
          extent={{28,-82},{94,-92}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VA"),
        Text(
          extent={{-8,-6},{94,-16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VO2"),
        Text(
          extent={{-28,-24},{94,-34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VCO2"),
        Text(
          extent={{-94,80},{-42,72}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiO2"),
        Text(
          extent={{-94,68},{-42,58}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiCO2"),
        Text(
          extent={{-93,92},{-38,84}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="PB")}), Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}}), graphics));
end AlvEq;
