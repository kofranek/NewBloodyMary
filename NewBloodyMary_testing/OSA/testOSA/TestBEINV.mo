within NewBloodyMary_testing.OSA.testOSA;
model TestBEINV

  BEINV bEINV
    annotation (Placement(transformation(extent={{-24,-16},{26,36}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k(displayUnit="kPa")=
         5330)
    annotation (Placement(transformation(extent={{-44,16},{-36,24}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8)
    annotation (Placement(transformation(extent={{-86,8},{-78,16}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-84,-2},{-76,6}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-60,-30},{-52,-22}})));
  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-52,28},{-44,36}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-68,-10},{-60,-2}})));
  Physiolibrary.Types.Constants.FractionConst sO2(k=0.5)
    annotation (Placement(transformation(extent={{-56,-16},{-48,-8}})));
equation
  connect(BEox.y, bEINV.BEox) annotation (Line(points={{-43,32},{-36,32},
          {-36,30.8},{-26.5,30.8}}, color={0,0,127}));
  connect(pCO2.y, bEINV.pCO2) annotation (Line(points={{-35,20},{-26.5,20},
          {-26.5,20.4}}, color={0,0,127}));
  connect(ctHb.y, bEINV.ctHb)
    annotation (Line(points={{-77,12},{-38,12},{-38,10},{-26.5,10}},
                                                   color={0,0,127}));
  connect(cAlb.y, bEINV.cAlb) annotation (Line(points={{-75,2},{-26.5,2},
          {-26.5,3.24}}, color={0,0,127}));
  connect(temperature.y, bEINV.temp) annotation (Line(points={{-51,-26},{
          -34,-26},{-34,-15.48},{-26.5,-15.48}},
                                               color={0,0,127}));
  connect(cPi.y, bEINV.cPi) annotation (Line(points={{-59,-6},{-44,-6},{-44,
          -3},{-26.5,-3}}, color={0,0,127}));
  connect(sO2.y, bEINV.sO2) annotation (Line(points={{-47,-12},{-38,-12},
          {-38,-9.24},{-26.5,-9.24}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end TestBEINV;
