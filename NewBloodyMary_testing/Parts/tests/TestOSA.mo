within NewBloodyMary_testing.Parts.tests;
model TestOSA

  OSA.ctO2content ctO2content
    annotation (Placement(transformation(extent={{-32,-32},{54,54}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{78,24},{68,32}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k(displayUnit="kPa")=
      5000)
    annotation (Placement(transformation(extent={{-58,-6},{-50,2}})));
  Physiolibrary.Types.Constants.pHConst pH(k=7.410)
    annotation (Placement(transformation(extent={{-56,38},{-48,46}})));
  Physiolibrary.Types.Constants.FractionConst FCOHb(k=0.005)
    annotation (Placement(transformation(extent={{80,-28},{72,-20}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5140)
    annotation (Placement(transformation(extent={{-60,20},{-52,28}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k(
        displayUnit="K") = 310.15)
    annotation (Placement(transformation(extent={{-74,6},{-66,14}})));
  Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
    annotation (Placement(transformation(extent={{82,-12},{74,-4}})));
  Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
    annotation (Placement(transformation(extent={{74,8},{66,16}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=9)
    annotation (Placement(transformation(extent={{82,42},{72,50}})));
equation
  connect(pH.y, ctO2content.pH) annotation (Line(points={{-47,42},{-36.3,
          42},{-36.3,29.06}},  color={0,0,127}));
  connect(pO2.y, ctO2content.pO2) annotation (Line(points={{-49,-2},{
          -36.3,-2},{-36.3,45.4}},    color={0,0,127}));
  connect(pCO2.y, ctO2content.pCO2) annotation (Line(points={{-51,24},{
          -42,24},{-42,11},{-36.3,11}},        color={0,0,127}));
  connect(temperature.y, ctO2content.T) annotation (Line(points={{-65,10},
          {-36.3,10},{-36.3,-6.2}},   color={0,0,127}));
  connect(FCOHb.y, ctO2content.FCOHb) annotation (Line(points={{71,-24},{
          58.3,-24},{58.3,-23.4}},   color={0,0,127}));
  connect(FHbF.y, ctO2content.FHbF) annotation (Line(points={{73,-8},{62,
          -8},{62,-6.2},{58.3,-6.2}},  color={0,0,127}));
  connect(FMetHb.y, ctO2content.FMetHb) annotation (Line(points={{65,12},
          {58.3,12},{58.3,11}},   color={0,0,127}));
  connect(cDPG.y, ctO2content.cDPG) annotation (Line(points={{66.75,28},{
          58.3,28},{58.3,28.2}},   color={0,0,127}));
  connect(ctHb.y, ctO2content.ctHb) annotation (Line(points={{70.75,46},{
          58.3,46},{58.3,45.4}},   color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end TestOSA;
