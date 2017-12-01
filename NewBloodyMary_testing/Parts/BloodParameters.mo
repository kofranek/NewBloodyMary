within NewBloodyMary_testing.Parts;
model BloodParameters
  Physiolibrary.Types.BusConnector bloodParameters annotation (Placement(
        transformation(extent={{-66,2},{-26,42}}),iconTransformation(extent={{-26,-74},
            {28,-20}})));
Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5.4)
    "2,3 DPG concentration"
    annotation (Placement(transformation(extent={{52,8},{42,16}})));
Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
    "fraction of methemoglobin"
  annotation (Placement(transformation(extent={{52,-10},{40,-2}})));
Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
    "fraction of fetal hemoglobin"
  annotation (Placement(transformation(extent={{52,-22},{40,-14}})));
  Physiolibrary.Types.Constants.PressureConst PCO(k=2.6664477483)
    "psrtial pressure of CO"
    annotation (Placement(transformation(extent={{52,-38},{42,-28}})));
  Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
          "kg/m3") = 2.93) "globuline concentration"
    annotation (Placement(transformation(extent={{54,36},{44,44}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
    annotation (Placement(transformation(extent={{54,52},{44,60}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.16)
    "phospahate concentration"
    annotation (Placement(transformation(extent={{54,22},{42,30}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    "hemoglibin concentration"
    annotation (Placement(transformation(extent={{5,-4},{-5,4}},
        rotation=0,
        origin={49,70})));
  Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
    "blood temperature"
    annotation (Placement(transformation(extent={{-5,4},{5,-4}},
        rotation=180,
        origin={49,86})));
equation
  connect(temp.y, bloodParameters.temp) annotation (Line(points={{42.75,86},
          {2,86},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, bloodParameters.ctHb) annotation (Line(points={{42.75,70},
          {22,70},{2,70},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctAlb.y, bloodParameters.ctAlb) annotation (Line(points={{42.75,
          56},{22,56},{2,56},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctGlb.y, bloodParameters.ctGlb) annotation (Line(points={{42.75,
          40},{22,40},{2,40},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, bloodParameters.cPi) annotation (Line(points={{40.5,26},{
          22,26},{2,26},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, bloodParameters.cDPG) annotation (Line(points={{40.75,12},
          {40.75,12},{2,12},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FHbF.y, bloodParameters.FHbF) annotation (Line(points={{38.5,-18},
          {22,-18},{2,-18},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FMetHb.y, bloodParameters.FMetHb) annotation (Line(points={{38.5,
          -6},{20,-6},{2,-6},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(PCO.y, bloodParameters.PCO) annotation (Line(points={{40.75,-33},
          {2,-33},{2,22},{-46,22}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),      Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={Rectangle(
          extent={{-98,100},{100,-98}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-106,76},{96,36}},
          lineColor={28,108,200},
          textString="Blood 
parameters")}));
end BloodParameters;
