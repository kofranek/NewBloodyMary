within NewBloodyMary_testing.OSA.testOSA;
model testctCO2content

  ctCO2content ctCO2content1
    annotation (Placement(transformation(extent={{-20,-6},{30,44}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-66,2},{-56,10}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-48,12},{-40,20}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5330)
    annotation (Placement(transformation(extent={{-42,36},{-34,44}})));
  Physiolibrary.Types.Constants.pHConst pH(k=7.037)
    annotation (Placement(transformation(extent={{-58,22},{-50,30}})));
  Physiolibrary.Types.Constants.FractionConst sO2(k=0.946)
    annotation (Placement(transformation(extent={{-78,-20},{-70,-12}})));
equation
  connect(pCO2.y, ctCO2content1.pCO2) annotation (Line(points={{-33,40},{
          -22.5,40},{-22.5,39}}, color={0,0,127}));
  connect(pH.y, ctCO2content1.pH) annotation (Line(points={{-49,26},{-36,
          26},{-36,29},{-22.5,29}}, color={0,0,127}));
  connect(temperature.y, ctCO2content1.T) annotation (Line(points={{-39,
          16},{-32,16},{-32,19},{-22.5,19}}, color={0,0,127}));
  connect(ctHb.y, ctCO2content1.ctHb) annotation (Line(points={{-54.75,6},
          {-38,6},{-38,9},{-22.5,9}}, color={0,0,127}));
  connect(sO2.y, ctCO2content1.sO2) annotation (Line(points={{-69,-16},{
          -46,-16},{-46,-1},{-22.5,-1}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent=
            {{-100,-100},{100,100}})));
end testctCO2content;
