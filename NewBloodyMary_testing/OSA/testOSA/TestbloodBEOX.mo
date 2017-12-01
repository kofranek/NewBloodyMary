within NewBloodyMary_testing.OSA.testOSA;
model TestbloodBEOX

  bloodBEox bloodBEox1
    annotation (Placement(transformation(extent={{-34,-18},{24,44}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5330)
    annotation (Placement(transformation(extent={{-86,36},{-78,44}})));
  Physiolibrary.Types.Constants.pHConst pH(k=7.4)
    annotation (Placement(transformation(extent={{-68,28},{-60,36}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-90,18},{-82,26}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-76,6},{-68,14}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-84,-24},{-76,-16}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-86,-6},{-78,2}})));
  Physiolibrary.Types.Constants.FractionConst sO2(k=0.5)
    annotation (Placement(transformation(extent={{-72,-14},{-64,-6}})));
equation
  connect(pCO2.y, bloodBEox1.pCO2) annotation (Line(points={{-77,40},{-58,
          40},{-58,41.52},{-36.9,41.52}},
                                        color={0,0,127}));
  connect(pH.y, bloodBEox1.pH) annotation (Line(points={{-59,32},{-46,32},
          {-46,30.98},{-36.9,30.98}},
                                    color={0,0,127}));
  connect(ctHb.y, bloodBEox1.ctHb) annotation (Line(points={{-81,22},{-58,
          22},{-58,20.44},{-36.9,20.44}},
                                   color={0,0,127}));
  connect(cAlb.y, bloodBEox1.cAlb) annotation (Line(points={{-67,10},{
          -36.9,10},{-36.9,9.28}},
                                 color={0,0,127}));
  connect(temperature.y, bloodBEox1.temp) annotation (Line(points={{-75,-20},
          {-56,-20},{-56,-15.52},{-36.9,-15.52}},    color={0,0,127}));
  connect(cPi.y, bloodBEox1.cPi) annotation (Line(points={{-77,-2},{-56,
          -2},{-56,0.6},{-36.9,0.6}}, color={0,0,127}));
  connect(sO2.y, bloodBEox1.sO2) annotation (Line(points={{-63,-10},{-50,
          -10},{-50,-8.08},{-36.9,-8.08}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end TestbloodBEOX;
