within NewBloodyMary_testing.Parts;
model VentilationO2CO2
    extends Physiolibrary.Icons.Lungs;

  Physiolibrary.Types.RealIO.VolumeInput tidalVolume annotation (Placement(
        transformation(extent={{38,80},{22,96}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-50,90})));
  Physiolibrary.Types.RealIO.VolumeInput deadSpace annotation (Placement(
        transformation(extent={{48,72},{32,87}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-10,90})));
  Physiolibrary.Types.RealIO.FrequencyInput respiratoryRate annotation (
      Placement(transformation(extent={{58,62},{42,78}}),
        iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={30,90})));
  Physiolibrary.Types.RealIO.PressureInput barometricPressure annotation (
      Placement(transformation(extent={{-100,66},{-84,82}}),
        iconTransformation(extent={{-100,80},{-80,100}})));
  Physiolibrary.Types.RealIO.TemperatureInput ambientTemperature
    annotation (Placement(transformation(extent={{-84,80},{-68,96}}),
        iconTransformation(extent={{-100,-18},{-80,2}})));
  Physiolibrary.Types.RealIO.TemperatureInput bodyTemperature annotation (
      Placement(transformation(extent={{90,52},{74,68}}),
        iconTransformation(extent={{-100,-44},{-80,-24}})));
  Physiolibrary.Types.RealIO.FractionInput airHumidity annotation (
      Placement(transformation(extent={{-44,52},{-28,68}}),
        iconTransformation(extent={{-100,58},{-80,78}})));
  Physiolibrary.Types.RealIO.FractionInput FiO2 annotation (Placement(
        transformation(extent={{-104,48},{-86,66}}), iconTransformation(
          extent={{-100,36},{-80,56}})));
  Physiolibrary.Types.RealIO.FractionInput FiCO2 annotation (Placement(
        transformation(extent={{-56,23},{-36,43}}), iconTransformation(
          extent={{-100,10},{-80,30}})));
  Parts.AlveolarVentilation_BTPS alveolarVentilation_BTPS
    annotation (Placement(transformation(extent={{-24,42},{18,88}})));
  Physiolibrary.Chemical.Components.GasSolubility O2gasSolubility(
    useHeatPort=true,
    kH_T0(displayUnit="(mmol/l)/kPa at 37degC") = 0.02707666941329,
    C=1700,
    solubilityRateCoef(displayUnit="ml/min") = 0.01,
    T0=310.15,
    solventFraction=1)
    annotation (Placement(transformation(extent={{-70,-60},{-50,-40}})));
  Physiolibrary.Chemical.Components.GasSolubility gasSolubility1(
    useHeatPort=true,
    kH_T0(displayUnit="(mmol/l)/(mmol/l)") = 0.604,
    C=2400,
    solubilityRateCoef(displayUnit="ml/min") = 0.1,
    solventFraction=1)
    annotation (Placement(transformation(extent={{50,-60},{70,-40}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2 annotation (Placement(
        transformation(extent={{-70,-94},{-50,-74}}), iconTransformation(
          extent={{-70,-94},{-50,-74}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a CO2 annotation (
      Placement(transformation(extent={{50,-94},{70,-74}}),
        iconTransformation(extent={{20,-100},{40,-80}})));
  Physiolibrary.Chemical.Sources.UnlimitedGasStorage airO2(useHeatPort=true,
      usePartialPressureInput=true)
    annotation (Placement(transformation(extent={{-92,16},{-78,30}})));
  Parts.AlveolarVentilation O2alveolarVentilation
    annotation (Placement(transformation(extent={{-76,-22},{-42,12}})));
  Parts.AlveolarVentilation CO2alveolarVentilation
    annotation (Placement(transformation(extent={{42,-22},{76,12}})));
  Physiolibrary.Thermal.Sources.UnlimitedHeat alveolusHeat(
      useTemperatureInput=true)
    annotation (Placement(transformation(extent={{-4,-56},{8,-44}})));
  Parts.GasPartialPressure PiO2 annotation (Placement(
        transformation(
        extent={{-7,-6},{7,6}},
        rotation=0,
        origin={-69,60})));
  Parts.GasPartialPressure PiCO2
    annotation (Placement(transformation(extent={{-30,30},{-16,42}})));
  Physiolibrary.Chemical.Sources.UnlimitedGasStorage airCO2(useHeatPort=
        true, usePartialPressureInput=true)
    annotation (Placement(transformation(extent={{18,18},{32,32}})));
  Physiolibrary.Thermal.Sources.UnlimitedHeat environment(
      useTemperatureInput=true) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=90,
        origin={-86,6})));
  Physiolibrary.Thermal.Sources.UnlimitedHeat environment1(
      useTemperatureInput=true) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=90,
        origin={24,8})));
equation
  connect(alveolarVentilation_BTPS.TidalVolume, tidalVolume)
    annotation (Line(points={{13.8,88},{30,88}},         color={0,0,127}));
  connect(respiratoryRate, alveolarVentilation_BTPS.RespRate) annotation (
      Line(points={{50,70},{13.8,70},{13.8,69.6}}, color={0,0,127}));
  connect(bodyTemperature, alveolarVentilation_BTPS.core_T) annotation (
      Line(points={{82,60},{13.8,60},{13.8,60.4}}, color={0,0,127}));
  connect(alveolarVentilation_BTPS.DeadSpace, deadSpace) annotation (Line(
        points={{13.8,78.8},{17.9,78.8},{17.9,79.5},{40,79.5}}, color={0,0,
          127}));
  connect(ambientTemperature, alveolarVentilation_BTPS.AmbientTemperature)
    annotation (Line(points={{-76,88},{-76,88},{-19.8,88}}, color={0,0,127}));
  connect(barometricPressure, alveolarVentilation_BTPS.EnvironmentPressure)
    annotation (Line(points={{-92,74},{-19.8,74},{-19.8,74.2}}, color={0,0,
          127}));
  connect(alveolarVentilation_BTPS.EnvironmentRelativeHumidity, airHumidity)
    annotation (Line(points={{-19.8,60.4},{-23.9,60.4},{-23.9,60},{-36,60}},
        color={0,0,127}));
  connect(O2gasSolubility.q_in, O2) annotation (Line(
      points={{-60,-58},{-60,-58},{-60,-84}},
      color={107,45,134},
      thickness=1));
  connect(gasSolubility1.q_in, CO2) annotation (Line(
      points={{60,-58},{60,-58},{60,-84}},
      color={107,45,134},
      thickness=1));
  connect(alveolusHeat.temperature, bodyTemperature) annotation (Line(
        points={{-4,-50},{-10,-50},{-10,32},{50,32},{50,60},{82,60}}, color=
         {0,0,127}));
  connect(alveolusHeat.port, gasSolubility1.heatPort) annotation (Line(
      points={{8,-50},{34,-50},{60,-50}},
      color={191,0,0},
      thickness=1));
  connect(O2alveolarVentilation.inspired, airO2.q_out) annotation (Line(
      points={{-76,8.6},{-78,8.6},{-78,23}},
      color={107,45,134},
      thickness=1));
  connect(O2alveolarVentilation.expired, airO2.q_out) annotation (Line(
      points={{-42,8.6},{-42,23},{-78,23}},
      color={107,45,134},
      thickness=1));
  connect(O2gasSolubility.q_out, O2alveolarVentilation.alveolar)
    annotation (Line(
      points={{-60,-40},{-60,-40},{-60,-22},{-58.66,-22}},
      color={107,45,134},
      thickness=1));
  connect(airCO2.q_out, CO2alveolarVentilation.expired) annotation (Line(
      points={{32,25},{76,25},{76,8.6}},
      color={107,45,134},
      thickness=1));
  connect(CO2alveolarVentilation.inspired, airCO2.q_out) annotation (Line(
      points={{42,8.6},{32,8.6},{32,25}},
      color={107,45,134},
      thickness=1));
  connect(gasSolubility1.q_out, CO2alveolarVentilation.alveolar)
    annotation (Line(
      points={{60,-40},{60,-40},{60,-22},{59.34,-22}},
      color={107,45,134},
      thickness=1));
  connect(FiO2, PiO2.gasFractionConcentration) annotation (Line(points={{
          -95,57},{-86.5,57},{-77.4,57}}, color={0,0,127}));
  connect(PiCO2.gasFractionConcentration, FiCO2) annotation (Line(points={{
          -31.4,33},{-34.7,33},{-34.7,33},{-46,33}}, color={0,0,127}));
  connect(PiCO2.pressure, alveolarVentilation_BTPS.EnvironmentPressure)
    annotation (Line(points={{-31.4,39.72},{-44,39.72},{-44,74},{-19.8,74},
          {-19.8,74.2}}, color={0,0,127}));
  connect(alveolusHeat.port, O2gasSolubility.heatPort) annotation (Line(
      points={{8,-50},{8,-62},{-28,-62},{-28,-50},{-60,-50}},
      color={191,0,0},
      thickness=1));
  connect(PiCO2.partialPressure, airCO2.partialPressure) annotation (Line(
        points={{-14.95,36},{-2,36},{14,36},{14,25},{18,25}}, color={0,0,
          127}));
  connect(airO2.partialPressure, PiO2.partialPressure) annotation (Line(
        points={{-92,23},{-94,23},{-94,24},{-94,44},{-94,50},{-58,50},{-58,
          60},{-60.95,60}}, color={0,0,127}));
  connect(PiO2.pressure, alveolarVentilation_BTPS.EnvironmentPressure)
    annotation (Line(points={{-77.4,63.72},{-82,63.72},{-82,74},{-19.8,74},
          {-19.8,74.2}}, color={0,0,127}));
  connect(CO2alveolarVentilation.AlveolarVentilation_Env,
    alveolarVentilation_BTPS.AlveolarVentilation) annotation (Line(points={
          {72.6,-1.6},{90,-1.6},{90,51.2},{18,51.2}}, color={0,0,127}));
  connect(alveolarVentilation_BTPS.BronchiDilution, CO2alveolarVentilation.BronchiDilution)
    annotation (Line(points={{18,42},{48,42},{82,42},{82,-11.8},{72.6,-11.8}},
        color={0,0,127}));
  connect(O2alveolarVentilation.BronchiDilution, CO2alveolarVentilation.BronchiDilution)
    annotation (Line(points={{-45.4,-11.8},{32,-11.8},{32,-30},{82,-30},{82,
          -11.8},{72.6,-11.8}}, color={0,0,127}));
  connect(O2alveolarVentilation.AlveolarVentilation_Env,
    alveolarVentilation_BTPS.AlveolarVentilation) annotation (Line(points={{-45.4,
          -1.6},{38,-1.6},{38,-26},{90,-26},{90,51.2},{18,51.2}},
        color={0,0,127}));
  connect(environment.port, airO2.heatPort) annotation (Line(
      points={{-86,12},{-86,12},{-86,23},{-85,23}},
      color={191,0,0},
      thickness=1));
  connect(environment1.port, airCO2.heatPort) annotation (Line(
      points={{24,14},{24,25},{25,25}},
      color={191,0,0},
      thickness=1));
  connect(environment1.temperature, ambientTemperature) annotation (Line(
        points={{24,2},{24,0},{-30,0},{-30,28},{-56,28},{-56,88},{-76,88}},
        color={0,0,127}));
  connect(environment.temperature, ambientTemperature) annotation (Line(
        points={{-86,0},{-86,-4},{-98,-4},{-98,40},{-56,40},{-56,88},{-76,
          88}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end VentilationO2CO2;
