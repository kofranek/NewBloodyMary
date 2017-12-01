within NewBloodyMary_testing.Parts;
model O2PhysiomodelDbg

AlveolarVentilation             alveolarVentilation(solventFlowPump(q_out(
        conc(start=104/760)), useSolutionFlowInput=true)) annotation (
    Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-12,58})));
  BloodO2_Siggaard O2Lung(
  pCO2(start=5700),
  pO2(start=13870),
    sO2CO(start=0.977),
    q_in(q(start=10)),
    a(start=-0.1),
    cO2Hb(start=8.16),
    tO2(start=8.161))
    annotation (Placement(transformation(extent={{-20,-10},{0,10}})));
  Physiolibrary.Chemical.Components.GasSolubility
                                    gasSolubility(useHeatPort=true,
  C=1700,
  kH_T0(displayUnit="(mmol/l)/kPa at 37degC") = 0.02707666941329,
  solubilityRateCoef(displayUnit="m3/s") = 0.01,
  T0=310.15)
    annotation (Placement(transformation(extent={{-22,20},{-2,40}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat alveolus(useTemperatureInput=
        true, T=310.15)
  annotation (Placement(transformation(extent={{8,26},{0,34}})));
Physiolibrary.Chemical.Sources.UnlimitedGasStorage air(PartialPressure(
      displayUnit="mmHg") = 21331.5819864, useHeatPort=true,
    usePartialPressureInput=true)
  annotation (Placement(transformation(extent={{-48,72},{-28,92}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat environment(useTemperatureInput=
       true, T=298.15)
  annotation (Placement(transformation(extent={{-74,54},{-54,74}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{82,24},{102,44}}), iconTransformation(
        extent={{60,60},{100,100}})));
  GasPartialPressure PO2
    annotation (Placement(transformation(extent={{-66,77},{-54,87}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
    unlimitedSolutionStorage(Conc=13)
    annotation (Placement(transformation(extent={{-98,-18},{-78,2}})));
  Physiolibrary.Chemical.Components.Substance
    unlimitedSolutionStorage1(solute_start=0.024)
    annotation (Placement(transformation(extent={{70,-22},{50,-2}})));
equation
  connect(busConnector.CO2Lung_pCO2,O2Lung. pCO2)               annotation (
      Line(
      points={{92,34},{-54,34},{-54,6},{-19,6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Lung.ctHb,busConnector. ctHb)               annotation (Line(
      points={{-1,10},{30,10},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.cDPG,busConnector. cDPG)               annotation (Line(
      points={{-1,6},{30,6},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.FMetHb,busConnector. FMetHb)               annotation (Line(
      points={{-1,2},{30,2},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.FHbF,busConnector. FHbF)               annotation (Line(
      points={{-1,-2},{30,-2},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Lung.pCO,busConnector. pCO)               annotation (Line(
      points={{-1,-6},{30,-6},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.AlveolarVentilated_BloodFlow,O2Lung. BloodFlow)
    annotation (Line(
      points={{92,34},{-54,34},{-54,-3.4},{-20,-3.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Lung.sO2,busConnector. O2Lung_sO2) annotation (Line(
      points={{-10,-12},{-10,-18},{30,-18},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-3},{6,-3}}));
  connect(busConnector.core_T,O2Lung. T) annotation (Line(
      points={{92,34},{-54,34},{-54,2},{-19,2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.Lung_pH,O2Lung. pH) annotation (Line(
      points={{92,34},{-54,34},{-54,10},{-19,10}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolarVentilation.AlveolarVentilation_Env,busConnector. AlveolarVentilation_Env)
    annotation (Line(
      points={{-4,60},{30,60},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.BronchiDilution,busConnector. BronchiDilution)
    annotation (Line(
      points={{-4,54},{30,54},{30,34},{92,34}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(alveolarVentilation.alveolar,gasSolubility. q_out) annotation (Line(
      points={{-11.8,48},{-12,48},{-12,40}},
      color={107,45,134},
      thickness=1,
      smooth=Smooth.None));
  connect(O2Lung.alveolar,gasSolubility. q_in) annotation (Line(
      points={{-10.4,8.2},{-12,8.2},{-12,22}},
      color={107,45,134},
      thickness=1,
      smooth=Smooth.None));
connect(alveolus.port,gasSolubility. heatPort) annotation (Line(
    points={{0,30},{-12,30}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(air.q_out,alveolarVentilation. inspired) annotation (Line(
    points={{-28,82},{-22,82},{-22,66}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(air.q_out,alveolarVentilation. expired) annotation (Line(
    points={{-28,82},{10,82},{10,66},{-2,66}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(environment.port,air. heatPort) annotation (Line(
    points={{-54,64},{-38,64},{-38,82}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
  connect(busConnector.FiO2, PO2.gasFractionConcentration) annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,79.5},{-67.2,79.5}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BarometerPressure, PO2.pressure) annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,85.1},{-67.2,85.1}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(PO2.partialPressure, air.partialPressure)
    annotation (Line(points={{-53.1,82},{-48,82}}, color={0,0,127}));
  connect(busConnector.AmbientTemperature, environment.temperature)
    annotation (Line(
      points={{92,34},{92,34},{92,98},{-98,98},{-98,64},{-74,64}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.core_T, alveolus.temperature) annotation (Line(
      points={{92,34},{90,34},{90,36},{90,34},{30,34},{30,30},{8,30}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Lung.q_in, unlimitedSolutionStorage.q_out) annotation (Line(
      points={{-19,-9},{-50,-9},{-50,-8},{-78,-8}},
      color={107,45,134},
      thickness=1));
  connect(O2Lung.q_out, unlimitedSolutionStorage1.q_out) annotation (Line(
      points={{-1,-9},{24.5,-9},{24.5,-12},{60,-12}},
      color={107,45,134},
      thickness=1));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -40},{100,100}}),
                   graphics={
                  Bitmap(extent={{-100,102},{100,-98}},  fileName=
              "modelica://Physiolibrary/Resources/Icons/O2.png"), Text(
          extent={{-130,-100},{146,-148}},
          lineColor={28,108,200},
          textString="%name")}),                                    Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-100,-40},{100,
            100}})));
end O2PhysiomodelDbg;
