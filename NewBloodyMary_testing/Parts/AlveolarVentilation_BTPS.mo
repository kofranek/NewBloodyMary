within NewBloodyMary_testing.Parts;
model AlveolarVentilation_BTPS
  extends Physiolibrary.Icons.Lungs;
//  parameter Real EnvironmentPressure(final displayUnit="mmHg");
  //  parameter Real EnvironmentTemperature(final displayUnit="degC");
  Physiolibrary.Types.RealIO.FrequencyInput RespRate
                                         annotation (Placement(transformation(
          extent={{26,68},{40,82}}),    iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={80,20})));
  Physiolibrary.Types.RealIO.VolumeInput TidalVolume
                                            annotation (Placement(
        transformation(
        extent={{-18,-18},{10,10}},
        origin={-50,-32}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={80,100})));
  Physiolibrary.Types.RealIO.VolumeInput DeadSpace
                                          annotation (Placement(transformation(
          extent={{-68,-76},{-40,-48}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={80,60})));
  Physiolibrary.Types.RealIO.TemperatureInput core_T
                                         annotation (Placement(
        transformation(
        extent={{-20,-20},{8,8}},
        origin={-48,-80}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={80,-20})));
  GasEquation tidalVolume(V2(start=400))
    annotation (Placement(transformation(extent={{-12,-54},{8,-34}})));
  GasEquation deadVolume(V2(start=150))
    annotation (Placement(transformation(extent={{-12,-80},{8,-60}})));
  Modelica.Blocks.Math.Product alveolarVentilation annotation (Placement(
      transformation(
      extent={{-10,-10},{10,10}},
      rotation=270,
      origin={54,52})));
  VaporPressure vaporPressure annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={14,90})));
  Modelica.Blocks.Math.Division vaporPart annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={-20,34})));
  Modelica.Blocks.Math.Feedback added_pH2O annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={-15,61})));
  VaporPressure vaporPressure1 annotation (
      Placement(transformation(extent={{-10,-10},{10,10}}, origin={-56,64})));
  Modelica.Blocks.Math.Product air_pH2O
    annotation (Placement(transformation(extent={{-36,68},{-26,78}})));
  Physiolibrary.Types.RealIO.TemperatureInput AmbientTemperature
                                         annotation (Placement(
        transformation(
        extent={{-20,-20},{8,8}},
        origin={-78,70}),  iconTransformation(
        extent={{-20,-20},{20,20}},
        origin={-80,100})));
  Physiolibrary.Types.RealIO.PressureInput EnvironmentPressure
                                         annotation (Placement(
        transformation(
        extent={{-20,-20},{8,8}},
        origin={-78,-4}),  iconTransformation(
        extent={{-20,-20},{20,20}},
        origin={-80,40})));
  Physiolibrary.Types.RealIO.FractionInput EnvironmentRelativeHumidity
                                         annotation (Placement(
        transformation(
        extent={{-20,-20},{8,8}},
        origin={-58,90}),  iconTransformation(
        extent={{-20,-20},{20,20}},
        origin={-80,-20})));
  Modelica.Blocks.Math.Feedback alveolarVolume
  annotation (Placement(transformation(extent={{58,-46},{78,-26}})));
  Modelica.Blocks.Math.Feedback airPressureWitoutVapor
    annotation (Placement(transformation(extent={{-64,0},{-44,-20}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput AlveolarVentilation
  annotation (Placement(transformation(extent={{70,22},{84,36}}),
      iconTransformation(
      extent={{-20,-20},{20,20}},
      origin={100,-60})));
  Modelica.Blocks.Math.Feedback dilution
    annotation (Placement(transformation(extent={{-30,20},{-10,0}})));
  Physiolibrary.Types.Constants.FractionConst             Constant(k=1)
  annotation (Placement(transformation(extent={{-48,6},{-40,14}})));
  Physiolibrary.Types.RealIO.FractionOutput BronchiDilution
                                         annotation (Placement(transformation(
          extent={{6,4},{18,16}}),      iconTransformation(
        extent={{-20,-20},{20,20}},
        origin={100,-100})));
equation

  connect(TidalVolume,tidalVolume. V1) annotation (Line(
      points={{-54,-36},{-10.6,-36}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(DeadSpace, deadVolume.V1)   annotation (Line(
      points={{-54,-62},{-10.6,-62}},
      color={0,0,127},
      smooth=Smooth.None));
connect(RespRate, alveolarVentilation.u2) annotation (Line(
    points={{33,75},{48,75},{48,64}},
    color={0,0,127},
    smooth=Smooth.None));
  connect(core_T, vaporPressure.T)   annotation (Line(
      points={{-54,-86},{94,-86},{94,90},{22.6,90}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(air_pH2O.y, added_pH2O.u2) annotation (Line(
      points={{-25.5,73},{-25.5,61},{-20.6,61}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(added_pH2O.y, vaporPart.u1) annotation (Line(
      points={{-15,54.7},{-14,54.7},{-14,54},{-16,54},{-16,44},{-16.4,44},
        {-16.4,41.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(AmbientTemperature, vaporPressure1.T) annotation (Line(
      points={{-84,64},{-64.6,64}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(EnvironmentRelativeHumidity, air_pH2O.u1) annotation (Line(
      points={{-64,84},{-40,84},{-40,76},{-37,76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(core_T, tidalVolume.T1) annotation (Line(
      points={{-54,-86},{-32,-86},{-32,-48},{-10.6,-48}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(core_T, deadVolume.T1) annotation (Line(
      points={{-54,-86},{-32,-86},{-32,-74},{-10.6,-74}},
      color={0,0,127},
      smooth=Smooth.None));
connect(alveolarVolume.y, alveolarVentilation.u1) annotation (Line(
    points={{77,-36},{90,-36},{90,80},{60,80},{60,64}},
    color={0,0,127},
    smooth=Smooth.None));
connect(tidalVolume.V2, alveolarVolume.u1) annotation (Line(
    points={{6.6,-36},{60,-36}},
    color={0,0,127},
    smooth=Smooth.None));
connect(alveolarVolume.u2, deadVolume.V2) annotation (Line(
    points={{68,-44},{68,-62},{6.6,-62}},
    color={0,0,127},
    smooth=Smooth.None));
  connect(EnvironmentPressure, airPressureWitoutVapor.u1) annotation (Line(
      points={{-84,-10},{-62,-10}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(airPressureWitoutVapor.y, tidalVolume.P1) annotation (Line(
      points={{-45,-10},{-28,-10},{-28,-42},{-10.6,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(airPressureWitoutVapor.y, deadVolume.P1) annotation (Line(
      points={{-45,-10},{-28,-10},{-28,-68},{-10.6,-68}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(Constant.y, dilution.u1) annotation (Line(
      points={{-39,10},{-28,10}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(vaporPart.y, dilution.u2) annotation (Line(
      points={{-20,27.4},{-20,18}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(dilution.y, BronchiDilution) annotation (Line(
      points={{-11,10},{12,10}},
      color={0,0,127},
      smooth=Smooth.None));
connect(vaporPressure1.VaporPressure_, air_pH2O.u2) annotation (Line(
    points={{-44.6,64},{-40,64},{-40,70},{-37,70}},
    color={0,0,127},
    smooth=Smooth.None));
connect(vaporPressure.VaporPressure_, added_pH2O.u1) annotation (Line(
    points={{2.6,90},{-15,90},{-15,66.6}},
    color={0,0,127},
    smooth=Smooth.None));
connect(alveolarVentilation.y, AlveolarVentilation) annotation (Line(
    points={{54,41},{54,29},{77,29}},
    color={0,0,127},
    smooth=Smooth.None));
connect(added_pH2O.y, airPressureWitoutVapor.u2) annotation (Line(
    points={{-15,54.7},{-54,54.7},{-54,-2}},
    color={0,0,127},
    smooth=Smooth.None));
connect(EnvironmentPressure, vaporPart.u2) annotation (Line(
    points={{-84,-10},{-70,-10},{-70,41.2},{-23.6,41.2}},
    color={0,0,127},
    smooth=Smooth.None));
connect(EnvironmentPressure, tidalVolume.P2) annotation (Line(
    points={{-84,-10},{-70,-10},{-70,-22},{30,-22},{30,-42},{6.6,-42}},
    color={0,0,127},
    smooth=Smooth.None));
connect(EnvironmentPressure, deadVolume.P2) annotation (Line(
    points={{-84,-10},{-70,-10},{-70,-22},{30,-22},{30,-68},{6.6,-68}},
    color={0,0,127},
    smooth=Smooth.None));
connect(AmbientTemperature, tidalVolume.T2) annotation (Line(
    points={{-84,64},{-94,64},{-94,-98},{38,-98},{38,-48},{6.6,-48}},
    color={0,0,127},
    smooth=Smooth.None));
connect(AmbientTemperature, deadVolume.T2) annotation (Line(
    points={{-84,64},{-94,64},{-94,-98},{38,-98},{38,-74},{6.6,-74}},
    color={0,0,127},
    smooth=Smooth.None));
 annotation (
    Icon(coordinateSystem(preserveAspectRatio=false,extent={{-100,-100},{
            100,100}}), graphics={Text(
          extent={{-100,-100},{76,-70}},
          textString="%name",
          lineColor={0,0,255})}));
end AlveolarVentilation_BTPS;
