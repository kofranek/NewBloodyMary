within NewBloodyMary_testing.Parts;
model Ventilation
  extends Physiolibrary.Icons.Ventilation;
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{66,-30},{86,-10}}), iconTransformation(
        extent={{80,40},{120,80}})));
AlveolarVentilation_BTPS alveolarVentilation
    annotation (Placement(transformation(extent={{-15,-15},{15,15}}, origin={-37,
            -43})));
equation
  connect(alveolarVentilation.core_T,busConnector. core_T)
    annotation (Line(
      points={{-25,-46},{18,-46},{18,-20},{76,-20}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.BarometerPressure,alveolarVentilation. EnvironmentPressure)
    annotation (Line(
      points={{76,-20},{-72,-20},{-72,-37},{-49,-37}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.AmbientTemperature,alveolarVentilation. AmbientTemperature)
    annotation (Line(
      points={{76,-20},{-72,-20},{-72,-28},{-49,-28}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.EnvironmentRelativeHumidity,alveolarVentilation. EnvironmentRelativeHumidity)
    annotation (Line(
      points={{76,-20},{-72,-20},{-72,-46},{-49,-46}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolarVentilation.BronchiDilution, busConnector.BronchiDilution)
    annotation (Line(
      points={{-22,-58},{76,-58},{76,-20}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
connect(alveolarVentilation.AlveolarVentilation, busConnector.AlveolarVentilation_Env)
  annotation (Line(
    points={{-22,-52},{76,-52},{76,-20}},
    color={0,0,127},
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
  connect(alveolarVentilation.RespRate, busConnector.RespRate) annotation (Line(
        points={{-25,-40},{-4,-40},{18,-40},{18,-20},{76,-20}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.DeadSpace, busConnector.DeadSpace) annotation (
      Line(points={{-25,-34},{-4,-34},{18,-34},{18,-20},{76,-20}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.TidalVolume, busConnector.TidalVolume)
    annotation (Line(points={{-25,-28},{-4,-28},{18,-28},{18,-20},{76,-20}},
        color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Text(
          extent={{-120,-108},{130,-126}},
          lineColor={0,0,255},
          textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}})));
end Ventilation;
