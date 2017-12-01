within NewBloodyMary_testing.Parts;
model VenousO2CO2
  import NewBloodyMary = NewBloodyMary_testing;

  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2
    "oxygen comsumption in mmol/sec" annotation (Placement(transformation(
          extent={{-96,-24},{-80,-8}}), iconTransformation(extent={{-112,74},
            {-98,88}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2
    "CO2 production (mmol/sec)" annotation (Placement(transformation(extent={
            {64,-20},{78,-6}}), iconTransformation(extent={{100,84},{114,98}})));
  Physiolibrary.Types.RealIO.FractionInput RQ "respiration quotient"
    annotation (Placement(transformation(extent={{-98,-34},{-82,-18}}),
        iconTransformation(extent={{-112,58},{-98,72}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q
    "Blood flow rate in m3/sec" annotation (Placement(transformation(extent={{-100,
            -44},{-84,-28}}),     iconTransformation(extent={{-112,42},{-98,
            56}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctO2a
    "total concentration of O2 in arterial blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-8.5,-9},{8.5,9}},
        rotation=0,
        origin={-92.5,-53}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-105,17})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2a
    "total concentration of CO2 in arterial blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-7.5,-7},{7.5,7}},
        rotation=0,
        origin={-92.5,-83}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-105,-1})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
    "BE in (virtully) fully oxygenated blood"
                                  annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-18,10}),         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-104,-20})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "Concentration of total haemoglobin in whole blood (mmol/l)"
                                   annotation (Placement(transformation(extent={{11,-11},
            {-11,11}},
        rotation=180,
        origin={-95,29}),         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-104,-36})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{82,88},
            {70,100}}),           iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-79,-99})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(extent={{96,80},{84,92}}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-54,-100})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={77,77}),          iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-28,-100})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={92,70}),          iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-6,-100})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=180,
        origin={77,63}),          iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={20,-100})));
  Physiolibrary.Types.RealIO.PressureInput pCO
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=180,
        origin={90,54}),          iconTransformation(extent={{-8,-8},{8,8}},
        rotation=90,
        origin={44,-98})));
  Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                       displayUnit="g/l")
    "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
            {6,6}},
        rotation=180,
        origin={76,48}),          iconTransformation(extent={{-8,-8},{8,8}},
        rotation=90,
        origin={72,-100})));
  Physiolibrary.Types.RealIO.FractionOutput sO2v
    "Oxygen hemohlobin saturation in venous blood (fraction)" annotation (
      Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={94,36}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,-48})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3v(displayUnit="mmol/l")
    "venous  concentration of HCO3 in mmol/l" annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={93,23}),  iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,-68})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2v
    "pCO2 in venous blood (Pa)"
    annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={40,12}),  iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,-5})));
  Physiolibrary.Types.RealIO.PressureOutput pO2v "pO2 in venous blood (Pa)"
    annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={18,10}),  iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,11})));
  Physiolibrary.Types.RealIO.pHOutput pHv "pH in venous blood" annotation (
      Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=180,
        origin={-92,72}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,-28})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2v
    "total concentration of O2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={88,-26}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,77})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2v
    "total concentration of CO2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={89,-39}), iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,63})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)
    "temperature (in K)"                                       annotation (Placement(transformation(extent={{-9,-9},
            {9,9}},
        rotation=0,
        origin={-95,91}),         iconTransformation(extent={{-110,-64},{-96,
            -50}})));
  VenousFick venousFick
    annotation (Placement(transformation(extent={{-72,-96},{50,0}})));
  NewBloodyMary.Parts.bloodCO2O2BEox bloodCO2O2BEox
    annotation (Placement(transformation(extent={{-68,24},{52,100}})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cdO2v(displayUnit=
        "mmol/l") "venous O2 dissolved concentration" annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=180,
        origin={-93,61}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,48})));
   Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2v(displayUnit=
        "mmol/l") "venous O2 dissolved concentration" annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=180,
        origin={-91,49}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={108,32})));
equation
  connect(venousFick.Q, Q) annotation (Line(
      points={{-73.83,-36},{-92,-36}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.RQ, RQ) annotation (Line(
      points={{-73.83,-25.44},{-79.915,-25.44},{-79.915,-26},{-90,-26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.VO2, VO2) annotation (Line(
      points={{-73.83,-15.84},{-79.915,-15.84},{-79.915,-16},{-88,-16}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.ctCO2v, bloodCO2O2BEox.ctCO2) annotation (Line(
      points={{54.27,-31.2},{96,-31.2},{96,4},{-33.2,4},{-33.2,23.24}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(BEox, bloodCO2O2BEox.BEox) annotation (Line(
      points={{-18,10},{-9.8,10},{-9.8,22.86}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.pO2, pO2v) annotation (Line(
      points={{8.2,23.62},{8.2,10},{18,10}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.pCO2, pCO2v) annotation (Line(
      points={{25,23.62},{25,12},{40,12}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.VCO2, VCO2) annotation (Line(
      points={{54.27,-12.96},{60.135,-12.96},{60.135,-13},{71,-13}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.sO2, sO2v) annotation (Line(
      points={{58,39.96},{76,39.96},{76,36},{94,36}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.cHCO3, cHCO3v) annotation (Line(
      points={{58,30.08},{76,30.08},{76,23},{93,23}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctGlb, bloodCO2O2BEox.ctGlb) annotation (Line(
      points={{76,48},{68,48},{68,47.56},{59.2,47.56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO, bloodCO2O2BEox.pCO) annotation (Line(
      points={{90,54},{74,54},{74,55.16},{59.2,55.16}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FHbF, bloodCO2O2BEox.FHbF) annotation (Line(
      points={{77,63},{69.5,63},{69.5,62.76},{59.2,62.76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FMetHb, bloodCO2O2BEox.FMetHb) annotation (Line(
      points={{92,70},{76,70},{76,70.36},{59.2,70.36}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(cDPG, bloodCO2O2BEox.cDPG) annotation (Line(
      points={{77,77},{65.5,77},{65.5,77.96},{59.2,77.96}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctPO4, bloodCO2O2BEox.ctPO4) annotation (Line(
      points={{90,86},{74,86},{74,85.56},{59.2,85.56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctAlb, bloodCO2O2BEox.ctAlb) annotation (Line(
      points={{76,94},{68,94},{68,93.16},{59.2,93.16}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.ctO2v, bloodCO2O2BEox.ctO2) annotation (Line(
      points={{54.27,-22.56},{78,-22.56},{78,0},{-56,0},{-56,23.24}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctO2v, venousFick.ctO2v) annotation (Line(
      points={{88,-26},{78,-26},{78,-22.56},{54.27,-22.56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(venousFick.ctCO2v, ctCO2v) annotation (Line(
      points={{54.27,-31.2},{76,-31.2},{76,-39},{89,-39}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.ctHb, ctHb) annotation (Line(
      points={{-74,41.48},{-81,41.48},{-81,29},{-95,29}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.pH, pHv) annotation (Line(
      points={{-74,72.64},{-82,72.64},{-82,72},{-92,72}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bloodCO2O2BEox.T, T) annotation (Line(
      points={{-72.8,94.68},{-82,94.68},{-82,91},{-95,91}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctCO2a, venousFick.ctCO2a) annotation (Line(points={{-92.5,-83},{
          -80.25,-83},{-80.25,-57.12},{-72.61,-57.12}}, color={0,0,127}));
  connect(venousFick.ctO2a, ctO2a) annotation (Line(points={{-72.61,-46.56},{
          -78.305,-46.56},{-78.305,-53},{-92.5,-53}}, color={0,0,127}));
  connect(bloodCO2O2BEox.cdCO2, cdCO2v) annotation (Line(points={{-74,52.88},
          {-80,52.88},{-80,49},{-91,49}}, color={0,0,127}));
  connect(bloodCO2O2BEox.cdO2, cdO2v) annotation (Line(points={{-74,62},{
          -80,62},{-80,61},{-93,61}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),                Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-94,84},{-74,76}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VO2"),
        Text(
          extent={{74,96},{94,88}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VCO2"),
        Text(
          extent={{-94,68},{-74,60}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="RQ"),
        Text(
          extent={{-96,52},{-76,44}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Q"),
        Text(
          extent={{-96,20},{-76,12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2a"),
        Text(
          extent={{-94,2},{-74,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2a"),
        Text(
          extent={{-92,-16},{-72,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="BEox"),
        Text(
          extent={{-92,-34},{-72,-42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctHb"),
        Text(
          extent={{-8,4},{8,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctGlb",
          origin={70,-84},
          rotation=180),
        Text(
          extent={{-8,4},{8,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO",
          origin={42,-84},
          rotation=180),
        Text(
          extent={{-8,4},{8,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={22,-84},
          rotation=180,
          textString="FHbF"),
        Text(
          extent={{-10,6},{10,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-4,-84},
          rotation=180,
          textString="FMetHb"),
        Text(
          extent={{-9,5},{9,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cDPG",
          origin={-29,-83},
          rotation=180),
        Text(
          extent={{-9,5},{9,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-53,-85},
          rotation=180,
          textString="ctPO4"),
        Text(
          extent={{-9,5},{9,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-79,-85},
          rotation=180,
          textString="ctAlb"),
        Text(
          extent={{-8,4},{8,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={82,14},
          rotation=180,
          textString="pO2v"),
        Text(
          extent={{70,2},{90,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pCO2v"),
        Text(
          extent={{74,-60},{96,-76}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cHCO3v"),
        Text(
          extent={{76,-42},{92,-50}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="sO2v"),
        Text(
          extent={{78,-20},{94,-28}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="pHv"),
        Text(
          extent={{74,70},{96,56}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctCO2v"),
        Text(
          extent={{76,82},{94,72}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctO2v"),
        Text(
          extent={{-96,-54},{-78,-64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="T"),
        Text(
          extent={{-68,92},{58,68}},
          lineColor={28,108,200},
          textString="%name"),
        Text(
          extent={{78,52},{96,42}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdO2v"),
        Text(
          extent={{74,40},{96,26}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="cdCO2v")}));
end VenousO2CO2;
