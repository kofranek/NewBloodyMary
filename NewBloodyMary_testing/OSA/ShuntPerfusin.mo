within NewBloodyMary_testing.OSA;
model ShuntPerfusin

  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-82,-92},{-64,-74}}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,20})));
  Physiolibrary.Types.RealIO.FractionInput ShuntFract annotation (Placement(
        transformation(extent={{-124,60},{-84,100}}), iconTransformation(extent=
           {{-120,-36},{-100,-16}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput Qsh
    "Pulmonary shunt perfusion" annotation (Placement(transformation(extent={{100,-34},
            {120,-14}}),   iconTransformation(extent={{100,-34},{120,-14}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput Qpulm
    "pulmonary perfusion"
    annotation (Placement(transformation(extent={{100,8},{120,28}}),
        iconTransformation(extent={{100,8},{120,28}})));
equation
   Qsh = Q*ShuntFract;
   Qpulm = Q-Qsh;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,102},{100,-98}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-72,124},{50,40}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ShuntPerfusion"),
        Text(
          extent={{-94,26},{-20,12}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q"),
        Text(
          extent={{-94,2},{4,-54}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="ShuntFract"),
        Text(
          extent={{28,-10},{94,-38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="Qsh"),
        Text(
          extent={{28,34},{92,8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="Qpulm")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end ShuntPerfusin;
