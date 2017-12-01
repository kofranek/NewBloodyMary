within NewBloodyMary_testing.Parts;
model TestInputs

  Physiolibrary.Types.BusConnector busConnector
    annotation (Placement(transformation(extent={{54,-20},{94,20}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst
    constAlveolarVentilated_BloodFlow(k=9.0294166666667e-05)
    annotation (Placement(transformation(extent={{-88,94},{-80,98}})));
  Physiolibrary.Types.Constants.TemperatureConst constAmbientTemperature(k=
        295.37222)
    annotation (Placement(transformation(extent={{-88,86},{-80,90}})));
  Physiolibrary.Types.Constants.VolumeConst constArtysVol(k=0.00162155)
    annotation (Placement(transformation(extent={{-88,76},{-80,80}})));
  Modelica.Blocks.Sources.Constant                  constBEox(k=-5)
            annotation (Placement(transformation(extent={{-90,58},{-82,62}})));
  Physiolibrary.Types.Constants.PressureConst constBarometerPressure(k(
        displayUnit="mmHg") = 101325.0144354)
    annotation (Placement(transformation(extent={{-88,46},{-80,50}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst constCardiacOutput(k=
        9.0294166666667e-05)
    annotation (Placement(transformation(extent={{-86,38},{-78,42}})));
  Physiolibrary.Types.Constants.VolumeConst constDeadSpace(k=0.000171674)
    annotation (Placement(transformation(extent={{-88,14},{-80,18}})));

  Physiolibrary.Types.Constants.FractionConst constEnvironmentRelativeHumidity(
      k=0.5) "Just a tip"
                         annotation (Placement(transformation(extent={{-88,4},
            {-80,8}})));
  Physiolibrary.Types.Constants.FractionConst constFHbF(k=0.005)
    annotation (Placement(transformation(extent={{-86,-6},{-78,-2}})));
  Physiolibrary.Types.Constants.FractionConst constFMetHb(k=0.005)
    annotation (Placement(transformation(extent={{-86,-16},{-78,-12}})));
  Physiolibrary.Types.Constants.FractionConst constFiO2(k=0.21)
    "Not in physiomodel"
    annotation (Placement(transformation(extent={{-86,-28},{-78,-24}})));
  Physiolibrary.Types.Constants.FrequencyConst constRespRate(k=
        0.20166666666667)
    annotation (Placement(transformation(extent={{-88,-56},{-80,-52}})));
  Physiolibrary.Types.Constants.VolumeConst constTidalVolume(k=0.0005)
    "Not Known"
    annotation (Placement(transformation(extent={{-86,-78},{-78,-74}})));
  Physiolibrary.Types.Constants.VolumeConst constVeinsVol(k=0.00361)
    annotation (Placement(transformation(extent={{-58,82},{-50,86}})));
  Physiolibrary.Types.Constants.ConcentrationConst constcDPG(k(displayUnit="mol/m3")=
         5.4)
    annotation (Placement(transformation(extent={{-36,22},{-28,26}})));
  Physiolibrary.Types.Constants.TemperatureConst constcore_T(k(displayUnit=
          "degC") = 310.22)
    annotation (Placement(transformation(extent={{-34,10},{-26,14}})));
  Physiolibrary.Types.Constants.ConcentrationConst constctAlb(k(displayUnit=
         "mmol/l") = 0.629267)
    annotation (Placement(transformation(extent={{-34,0},{-26,4}})));
  Physiolibrary.Types.Constants.MassConcentrationConst
                                                   constctGlb(k=27.9924)
    annotation (Placement(transformation(extent={{-34,-10},{-26,-6}})));
  Physiolibrary.Types.Constants.ConcentrationConst constctHb(k(displayUnit="mol/m3")=
         9.79719)
    annotation (Placement(transformation(extent={{-34,-22},{-26,-18}})));
  Physiolibrary.Types.Constants.ConcentrationConst constctPO4(k=0.162792)
    annotation (Placement(transformation(extent={{-34,-32},{-26,-28}})));
  Physiolibrary.Types.Constants.PressureConst constpCO(k(displayUnit="Pa") = 0)
    annotation (Placement(transformation(extent={{-34,-44},{-26,-40}})));
  Physiolibrary.Types.Constants.pHConst constpH(k=7.39) "OF WHAT?"
    annotation (Placement(transformation(extent={{-34,-60},{-26,-56}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0.000145717)
    "metabolic CO2 production rate"
    annotation (Placement(transformation(extent={{-40,70},{-30,74}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=0.00018309)
    "metabolic O2 consumption rate"
    annotation (Placement(transformation(extent={{-40,62},{-30,66}})));
  Physiolibrary.Types.Constants.FractionConst bloofVol_Hct(k=0.464)
    "hematocrit"
    annotation (Placement(transformation(extent={{-82,26},{-74,30}})));
  Physiolibrary.Types.Constants.FractionConst constFiCO2(k=0)
    "Not in physiomodel"
    annotation (Placement(transformation(extent={{-86,-42},{-78,-38}})));
  Modelica.Blocks.Sources.Ramp stepFiCO2(height=0.05, startTime=4800,
    duration=0)
    annotation (Placement(transformation(extent={{-72,-40},{-64,-32}})));
equation
  connect(constAlveolarVentilated_BloodFlow.y, busConnector.AlveolarVentilated_BloodFlow)
    annotation (Line(points={{-79,96},{4,96},{4,0},{74,0}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constAmbientTemperature.y, busConnector.AmbientTemperature)
    annotation (Line(points={{-79,88},{4,88},{4,0},{74,0}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constArtysVol.y, busConnector.ArtysVol) annotation (Line(points={{-79,
          78},{4,78},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constBarometerPressure.y, busConnector.BarometerPressure) annotation (
     Line(points={{-79,48},{4,48},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constCardiacOutput.y, busConnector.CardiacOutput) annotation (Line(
        points={{-77,40},{4,40},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constDeadSpace.y, busConnector.DeadSpace) annotation (Line(points={{-79,16},
          {4,16},{4,0},{74,0}},     color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constEnvironmentRelativeHumidity.y, busConnector.EnvironmentRelativeHumidity)
    annotation (Line(points={{-79,6},{4,6},{4,0},{74,0}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constFHbF.y, busConnector.FHbF) annotation (Line(points={{-77,-4},{4,-4},
          {4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constFMetHb.y, busConnector.FMetHb) annotation (Line(points={{-77,-14},
          {4,-14},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constFiO2.y, busConnector.FiO2) annotation (Line(points={{-77,-26},{4,
          -26},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constRespRate.y, busConnector.RespRate) annotation (Line(points={{-79,-54},
          {4,-54},{4,0},{74,0}},      color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constTidalVolume.y, busConnector.TidalVolume) annotation (Line(points={{-77,-76},
          {4,-76},{4,0},{74,0}},           color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constVeinsVol.y, busConnector.VeinsVol) annotation (Line(points={{-49,84},
          {4,84},{4,0},{74,0}},     color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constcDPG.y, busConnector.cDPG) annotation (Line(points={{-27,24},{4,24},
          {4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constcore_T.y, busConnector.core_T) annotation (Line(points={{-25,12},
          {4,12},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constctAlb.y, busConnector.ctAlb) annotation (Line(points={{-25,2},{4,
          2},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constctGlb.y, busConnector.ctGlb) annotation (Line(points={{-25,-8},{4,
          -8},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constctHb.y, busConnector.ctHb) annotation (Line(points={{-25,-20},{4,
          -20},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constctPO4.y, busConnector.ctPO4) annotation (Line(points={{-25,-30},{
          4,-30},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constpCO.y, busConnector.pCO) annotation (Line(points={{-25,-42},{4,-42},
          {4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(constpH.y, busConnector.pH) annotation (Line(points={{-25,-58},{4,-58},
          {4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));

  connect(VO2.y, busConnector.VO2) annotation (Line(points={{-28.75,64},{
          -12,64},{4,64},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(VCO2.y, busConnector.VCO2) annotation (Line(points={{-28.75,72},{
          -12,72},{4,72},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(bloofVol_Hct.y, busConnector.BloodVol_Hct) annotation (Line(
        points={{-73,28},{-34,28},{-34,30},{4,30},{4,0},{74,0}}, color={0,0,
          127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(stepFiCO2.y, busConnector.FiCO2) annotation (Line(points={{-63.6,
          -36},{-30,-36},{4,-36},{4,0},{74,0}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={Text(
          extent={{24,90},{96,22}},
          lineColor={28,108,200},
          textString="AlveolarBlood flow > cardiac output???")}));
end TestInputs;
