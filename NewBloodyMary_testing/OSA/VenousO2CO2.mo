within NewBloodyMary_testing.OSA;
model VenousO2CO2

  Physiolibrary.Types.RealIO.ConcentrationInput CaO2 annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{
            -120,-36},{-100,-16}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CaCO2 annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{
            -120,-60},{-100,-40}})));

  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-82,-92},{-64,-74}}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,54})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{-140,-6},{-100,34}}), iconTransformation(extent=
           {{-118,16},{-100,34}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
        transformation(extent={{-140,12},{-100,52}}), iconTransformation(extent=
           {{-118,-6},{-100,12}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CvO2 annotation (Placement(
        transformation(extent={{100,8},{120,28}}), iconTransformation(extent={{100,
            8},{120,28}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CvCO2 annotation (Placement(
        transformation(extent={{100,8},{120,28}}), iconTransformation(extent={{100,
            -24},{120,-4}})));
equation
  VO2=Q*(CaO2-CvO2);
  VCO2=Q*(CvCO2-CaCO2);
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}),       graphics={
        Rectangle(
          extent={{-100,102},{100,-98}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-24,5},{24,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={70,17},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CvO2"),
        Text(
          extent={{-22,8},{22,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={72,-14},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CvCO2"),
        Text(
          extent={{-72,124},{50,40}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="VenousO2CO2"),
        Text(
          extent={{-94,30},{-50,20}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VO2"),
        Text(
          extent={{-94,8},{-48,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VCO2"),
        Text(
          extent={{-22,4},{22,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-72,-50},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CaCO2"),
        Text(
          extent={{-23,6},{23,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-71,-26},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CaO2"),
        Text(
          extent={{-94,60},{-58,48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q")}),    Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end VenousO2CO2;
