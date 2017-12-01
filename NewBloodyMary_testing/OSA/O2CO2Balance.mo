within NewBloodyMary_testing.OSA;
model O2CO2Balance

  Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{-120,34},
            {-100,54}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{-120,10},
            {-100,30}})));

  Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
        transformation(extent={{108,-6},{120,6}}),  iconTransformation(
          extent={{100,-4},{116,12}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{88,18},{98,28}}),   iconTransformation(
          extent={{100,-22},{116,-6}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CpcO2 annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{
            -120,-18},{-100,2}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CpcCO2 annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{
            -120,-42},{-100,-22}})));

  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-82,-92},{-64,-74}}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,72})));
equation
  VO2=Q*(CpcO2-CvO2);
  VCO2=Q*(CvCO2-CpcCO2);
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}),       graphics={
        Rectangle(
          extent={{-100,102},{100,-98}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-96,6},{96,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={2,44},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvO2"),
        Text(
          extent={{-97,10},{97,-10}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={3,20},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvCO2"),
        Text(
          extent={{-50,116},{74,38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="O2CO2Balance"),
        Text(
          extent={{36,8},{94,-2}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VO2"),
        Text(
          extent={{12,-12},{94,-20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VCO2"),
        Text(
          extent={{-90,13},{90,-13}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-4,-33},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CpcCO2"),
        Text(
          extent={{-81,8},{81,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-13,-8},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CpcO2"),
        Text(
          extent={{-94,80},{98,64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q")}),    Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end O2CO2Balance;
