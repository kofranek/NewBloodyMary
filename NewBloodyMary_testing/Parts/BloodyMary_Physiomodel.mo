within NewBloodyMary_testing.Parts;
model BloodyMary_Physiomodel
  AcidBase acidBaseBalance
    annotation (Placement(transformation(extent={{34,-40},{82,8}})));
  CO2Physiomodel CO2balance
    annotation (Placement(transformation(extent={{-24,-36},{16,4}})));
  O2Physiomodel O2Balance
    annotation (Placement(transformation(extent={{-92,-36},{-40,2}})));
  Ventilation ventilation
    annotation (Placement(transformation(extent={{-60,52},{-32,80}})));
  Physiolibrary.Types.BusConnector busConnector
    annotation (Placement(transformation(extent={{50,38},{90,78}})));
  BodyBEox bodyBEox
    annotation (Placement(transformation(extent={{80,80},{100,100}})));
  kidney kidney1
    annotation (Placement(transformation(extent={{80,20},{100,40}})));
equation
  connect(O2Balance.busConnector, busConnector) annotation (Line(
      points={{-45.2,-1.8},{-45.2,34},{70,34},{70,58}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(CO2balance.busConnector, busConnector) annotation (Line(
      points={{12,-4},{12,-4},{12,24},{12,30},{70,30},{70,58}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(acidBaseBalance.busConnector, busConnector) annotation (Line(
      points={{58,-15.52},{58,20},{70,20},{70,58}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ventilation.busConnector, busConnector) annotation (Line(
      points={{-32,74.4},{-6,74.4},{-6,74},{34,74},{34,48},{34,46},{70,46},
          {70,58}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, bodyBEox.busConnector) annotation (Line(
      points={{70,58},{76,58},{76,98},{82,98}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector, kidney1.busConnector) annotation (Line(
      points={{70,58},{76,58},{76,38.2},{82,38.2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),      Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-92,80},{88,-18}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Bloody Mary
(Physiomodel)")}));
end BloodyMary_Physiomodel;
