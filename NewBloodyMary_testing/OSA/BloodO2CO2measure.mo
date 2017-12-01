within NewBloodyMary_testing.OSA;
model BloodO2CO2measure

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-12}),                           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-18})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{-7,-7.5},{7,7.5}},
        rotation=0,
        origin={87,-2.5}),                          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,2})));
  Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,9}),    iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,22})));
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
        origin={87,-55.5}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-78})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
    "effiective concentration of hemoglobin (mmol/l)" annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-34}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-38})));
  Physiolibrary.Types.RealIO.PressureOutput pO2( start=13300) annotation (Placement(
        transformation(extent={{78,25},{92,39}}), iconTransformation(extent={{100,52},
            {120,72}})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
        transformation(extent={{80,14},{94,28}}), iconTransformation(extent={{100,32},
            {120,52}})));

  Parts.MolarInflowConnector CO2 annotation (Placement(transformation(
          extent={{-92,48},{-80,60}}), iconTransformation(extent={{-78,64},
            {-58,84}})));
  Parts.MolarInflowConnector O2 annotation (Placement(transformation(extent={{-92,66},
            {-80,78}}),          iconTransformation(extent={{-16,64},{4,84}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-98,-96},{-78,-76}}),
                                                 iconTransformation(
        extent={{-92,-104},{-52,-64}})));
  O2CO2 o2CO2 annotation (Placement(transformation(extent={{-34,-68},{60,42}})));
initial algorithm

equation
  O2.q=0;
  CO2.q=0;
  o2CO2.ctO2=O2.conc;
  o2CO2.ctCO2=CO2.conc;

  connect(busConnector.BEox, o2CO2.BEox) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,38},{-38.7,38},{-38.7,40.9}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, o2CO2.ctHb) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,24},{-90,9},{-38.7,9}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctAlb, o2CO2.ctAlb) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-6},{-90,-2},{-38.7,-2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPi, o2CO2.ctPi) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-11.9},{-38.7,-11.9}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.cDPG, o2CO2.cDPG) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-20},{-90,-22.9},{-38.7,-22.9}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FMetHb, o2CO2.FMetHb) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-30},{-90,-32.8},{-38.7,-32.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FCOHb, o2CO2.FCOHb) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-43.8},{-38.7,-43.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FHbF, o2CO2.FHbF) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-54},{-90,-54.8},{-38.7,-54.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.T, o2CO2.T) annotation (Line(
      points={{-88,-86},{-90,-86},{-90,-68},{-90,-65.8},{-38.7,-65.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(o2CO2.pH, pH) annotation (Line(points={{64.7,9},{73.35,9},{73.35,9},{88,
          9}}, color={0,0,127}));
  connect(o2CO2.cHCO3, cHCO3)
    annotation (Line(points={{64.7,-2},{87,-2},{87,-2.5}}, color={0,0,127}));
  connect(o2CO2.sO2, sO2) annotation (Line(points={{64.7,-13},{73.35,-13},{73.35,
          -12},{88,-12}}, color={0,0,127}));
  connect(o2CO2.ceHb, ceHb) annotation (Line(points={{64.7,-33.9},{73.35,-33.9},
          {73.35,-34},{88,-34}}, color={0,0,127}));
  connect(o2CO2.cdO2, cdO2) annotation (Line(points={{64.7,-44.9},{74.35,-44.9},
          {74.35,-44},{87,-44}}, color={0,0,127}));
  connect(o2CO2.cdCO2, cdCO2) annotation (Line(points={{64.7,-55.9},{74.35,-55.9},
          {74.35,-55.5},{87,-55.5}}, color={0,0,127}));
  connect(o2CO2.pCO2, pCO2) annotation (Line(points={{64.7,20},{74,20},{74,
          21},{87,21}}, color={0,0,127}));
  connect(o2CO2.pO2, pO2) annotation (Line(points={{64.7,31},{73.35,31},{
          73.35,32},{85,32}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-52,-12},{94,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2"),
        Text(
          extent={{-86,10},{94,-10}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cHCO3"),
        Text(
          extent={{-70,26},{94,14}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pH"),
        Text(
          extent={{-48,66},{94,58}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pO2"),
        Text(
          extent={{-44,50},{94,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pCO2"),
        Text(
          extent={{-72,6},{72,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={22,-58},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdO2"),
        Text(
          extent={{-60,6.5},{60,-6.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={34,-80.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdCO2"),
        Text(
          extent={{-95,8},{95,-8}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-1,-38},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="ceHb"),
        Text(
          extent={{-100,-102},{96,-138}},
          lineColor={28,108,200},
          textString="%name"),
        Text(
          extent={{-106,68},{-30,44}},
          lineColor={0,0,0},
          fontSize=24,
          textString="CO2"),
        Text(
          extent={{-28,60},{16,52}},
          lineColor={0,0,0},
          fontSize=24,
          textString="O2")}),   Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end BloodO2CO2measure;
