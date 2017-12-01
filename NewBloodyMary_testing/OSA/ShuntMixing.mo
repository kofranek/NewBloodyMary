within NewBloodyMary_testing.OSA;
model ShuntMixing

  Physiolibrary.Types.RealIO.ConcentrationInput CvO2
    "mixed venous O2 concentration" annotation (Placement(transformation(extent=
           {{-34,39},{-16,57}}), iconTransformation(extent={{-120,-20},{-100,0}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvCO2
    "mixed venous CO2 concentration" annotation (Placement(transformation(
          extent={{-32,68},{-16,84}}), iconTransformation(extent={{-120,-46},{-100,
            -26}})));

  Physiolibrary.Types.RealIO.VolumeFlowRateInput Qpulm "Pulmonary Perfusin"
    annotation (Placement(transformation(extent={{-82,-92},{-64,-74}}),
        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,54})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CaO2
    "arteril O2 contentration"                        annotation (Placement(
        transformation(extent={{100,8},{120,28}}), iconTransformation(extent={{100,
            8},{120,28}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CaCO2
    "arterial CO2 concentration"                       annotation (Placement(
        transformation(extent={{100,8},{120,28}}), iconTransformation(extent={{100,
            -24},{120,-4}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Qsh "Shunt Perfusin"
    annotation (Placement(transformation(extent={{-82,-92},{-64,-74}}),
        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,22})));
  Physiolibrary.Types.RealIO.ConcentrationInput CpcO2
    "end pulmonary capilary  O2 concentration" annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{
            -120,-68},{-100,-48}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CpcCO2
    "end pulmonary capilary CO2 concentration" annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{
            -120,-94},{-100,-74}})));
equation

  CaO2 = (Qpulm*CpcO2+Qsh*CvO2)/(Qsh+Qpulm);

  CaCO2 = (Qpulm*CpcCO2+Qsh*CvCO2)/(Qsh+Qpulm);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}),       graphics={
        Rectangle(
          extent={{-100,102},{100,-98}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-46,6},{46,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={48,18},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CaO2"),
        Text(
          extent={{-39,7},{39,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={55,-15},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CaCO2"),
        Text(
          extent={{-62,122},{60,38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ShuntMixing"),
        Text(
          extent={{-49,5},{49,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-45,-37},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvCO2"),
        Text(
          extent={{-49,5},{49,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-45,-9},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvO2"),
        Text(
          extent={{-94,58},{4,48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Qpulm"),
        Text(
          extent={{-94,26},{-4,16}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Qsh"),
        Text(
          extent={{-48,5},{48,-5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-46,-57},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CpcO2"),
        Text(
          extent={{-42,6},{42,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-52,-84},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CpcCO2")}),
                                Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end ShuntMixing;
