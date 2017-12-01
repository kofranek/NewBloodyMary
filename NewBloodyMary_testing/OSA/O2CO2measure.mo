within NewBloodyMary_testing.OSA;
model O2CO2measure

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
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{-120,36},
            {-100,56}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctCO2( start=23) annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{-120,
            -14},{-100,6}})));
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
        /*
    Real pO2_kPa_init;
    Real pCO2_kPa_init;
    Real pHinit;
    Real sO2init;
    */
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-100,-50},{-78,-28}}),
                                                 iconTransformation(
        extent={{-84,-100},{-44,-60}})));
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
          21.44},{-40.9,19.52},{-78,19.52},{-78,82},{20,82},{20,76},{29,76}},
                                                                color={0,0,127}));
  connect(busConnector.T, pO2PCO2.T) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-64},{-40.9,-64}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FHbF, pO2PCO2.FHbF) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-54.4},{-40.9,-54.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FCOHb, pO2PCO2.FCOHb) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-44.8},{-40.9,-44.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FMetHb, pO2PCO2.FMetHb) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-34},{-72,-34},{-72,-35.2},{-40.9,
          -35.2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.cDPG, pO2PCO2.cDPG) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-25.6},{-40.9,-25.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPi, pO2PCO2.ctPi) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-20},{-80,-16.96},{-40.9,-16.96}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctAlb, pO2PCO2.ctAlb) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,-7.36},{-40.9,-7.36}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, pO2PCO2.ctHb) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,2.24},{-40.9,2.24}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BEox, pO2PCO2.BEox) annotation (Line(
      points={{-89,-39},{-80,-39},{-80,11.84},{-40.9,11.84}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, initialScale = 0.1), graphics={Rectangle(lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
            fillPattern =                                                                                                    FillPattern.Solid, extent={{
              -100,100},{100,-100}}),                                                                                                    Text(lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -14,2},{90,-6}},                                                                                                   fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2"),                                                                                                    Text(lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -34,26},{92,10}},                                                                                                   fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="HCO3"),                                                                                                    Text(lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent = {{72, 44}, {92, 32}},                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="pH"),                                                                                                    Text(origin={
              -59,44},                                                                                                    rotation = 180, lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -35,6},{35,-6}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctO2"),                                                                                                    Text(origin={
              -60,-5},                                                                                                    rotation = 180, lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -36,7},{36,-7}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Left,
          textString="ctCO2"),                                                                                                    Text(lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
            fillPattern =                                                                                                    FillPattern.Solid, extent = {{-64, 62}, {58, -22}}, textString = "O2CO2"), Text(lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -4,86},{92,78}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="pO2"),                                                                                                    Text(lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -12,64},{90,52}},                                                                                                   fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="pCO2"),                                                                                                    Text(origin={34,
              -58},                                                                                                    rotation = 180, lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -56,6},{56,-6}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdO2"),                                                                                                    Text(origin={49,
              -80.5},                                                                                                    rotation = 180, lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -41,4.5},{41,-4.5}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="cdCO2"),                                                                                                    Text(origin={33,
              -37},                                                                                                    rotation = 180, lineColor=
              {0,0,255},                                                                                                    fillColor=
              {255,255,0},
            fillPattern=FillPattern.Solid,                                                                                                    extent={{
              -57,5},{57,-5}},                                                                                                    fontSize=
              12,
          horizontalAlignment=TextAlignment.Right,
          textString="ceHb"),                                                                                                    Text(lineColor = {28, 108, 200}, extent = {{-60, 92}, {70, 62}}, textString = "%name")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                   extent={{-100,-100},{100,100}})));
end O2CO2measure;
