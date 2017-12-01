within NewBloodyMary_testing.Parts;
model CO2Physiomodel
 extends Physiolibrary.Icons.CarbonDioxide;
  Physiolibrary.Chemical.Components.Substance                veins(
                                                           stateName=
        "CO2Veins.Mass[mMol]",
  useNormalizedVolume=false,
  solute_start=0.0869)
    annotation (Placement(transformation(extent={{-96,-14},{-76,6}})));
  Physiolibrary.Chemical.Components.Substance                artys(
                                                           stateName=
        "CO2Artys.Mass[mMol]",
  useNormalizedVolume=false,
  solute_start=0.0343)
    annotation (Placement(transformation(extent={{92,-12},{72,8}})));
  TissuesCO2 CO2Tissues
    annotation (Placement(transformation(extent={{-48,-40},{-28,-20}})));

Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-114,-62},{-74,-22}}), iconTransformation(
        extent={{60,40},{100,80}})));
  Physiolibrary.Chemical.Sources.UnlimitedGasStorage air(useHeatPort=true,
      usePartialPressureInput=true)
    annotation (Placement(transformation(extent={{-60,84},{-48,96}})));
AlveolarVentilation alveolarVentilation
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, origin={0,78})));
                                              /*(
    solventFlowPump(q_out(conc(start=0.05))))*/
Physiolibrary.Chemical.Components.Stream pulmShortCircuit(
    useSolutionFlowInput=true)
  annotation (Placement(transformation(extent={{-22,14},{-2,-6}})));
  Modelica.Blocks.Math.Feedback pulmShortCircuitFlow
    annotation (Placement(transformation(extent={{10,-10},{-10,10}},
        rotation=270,
        origin={-12,-10})));
//1000 * 1.977/40.01
  MeassureBloodCO2 veinsCO2(tCO2_P(start=27.4), pCO2(
        start=6240))
    annotation (Placement(transformation(extent={{-96,22},{-76,42}})));
  MeassureBloodCO2 artysCO2(tCO2_P(start=26), pCO2(start=5330))
    annotation (Placement(transformation(extent={{72,22},{92,42}})));

  BloodCO2 CO2Lung(
    q_in(q(start=115.472)),
    tCO2_P(start=24.9),
  pCO2(start=5160))
    annotation (Placement(transformation(extent={{-10,22},{10,42}})));

Physiolibrary.Chemical.Components.GasSolubility gasSolubility(
  useHeatPort=true,
    C=2400,
  kH_T0(displayUnit="(mmol/l)/(mmol/l)") = 0.604,
  solubilityRateCoef(displayUnit="m3/s") = 0.1,
  T0=310.15)
  annotation (Placement(transformation(extent={{-10,44},{10,64}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat environment(useTemperatureInput=
       true, T=298.15)
  annotation (Placement(transformation(extent={{-80,60},{-70,68}})));
Physiolibrary.Thermal.Sources.UnlimitedHeat alveolus(useTemperatureInput=
        true, T=310.15)
  annotation (Placement(transformation(extent={{64,58},{84,78}})));
  Modelica.Blocks.Math.Product product
    annotation (Placement(transformation(extent={{-78,84},{-66,96}})));
equation
  connect(CO2Tissues.q_out, veins.q_out)   annotation (Line(
      points={{-45.4,-30},{-70,-30},{-70,-4},{-86,-4}},
      color={102,44,145},
      thickness=1));
  connect(air.q_out, alveolarVentilation.expired) annotation (Line(
      points={{-48,90},{14,90},{14,86},{10,86}},
      color={102,44,145},
      thickness=1));
connect(pulmShortCircuit.solutionFlow, pulmShortCircuitFlow.y)
  annotation (Line(
    points={{-12,-3},{-12,-1}},
    color={0,0,127},
    smooth=Smooth.None));
  connect(pulmShortCircuitFlow.u1, busConnector.CardiacOutput)
    annotation (Line(
      points={{-12,-18},{10,-18},{10,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.AlveolarVentilated_BloodFlow, pulmShortCircuitFlow.u2)
    annotation (Line(
      points={{-94,-42},{-54,-42},{-54,-10},{-20,-10}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(veins.q_out, pulmShortCircuit.q_in)    annotation (Line(
      points={{-86,-4},{-86,24},{-46,24},{-46,4},{-22,4}},
      color={102,44,145},
      thickness=1));
  connect(pulmShortCircuit.q_out, artys.q_out)    annotation (Line(
      points={{-2,4},{24,4},{24,24},{82,24},{82,-2}},
      color={102,44,145},
      thickness=1));
  connect(busConnector.Veins_pH, veinsCO2.pH)             annotation (
      Line(
      points={{-94,-42},{-100,-42},{-100,40},{-95,40}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.Veins_pH_ery, veinsCO2.pH_ery)
    annotation (Line(
      points={{-94,-42},{-100,-42},{-100,36},{-95,36}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(veinsCO2.sO2, busConnector.O2Veins_sO2)             annotation (
      Line(
      points={{-77,32},{-54,32},{-54,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsCO2.Hct, busConnector.BloodVol_Hct)             annotation (Line(
      points={{-77,36},{-54,36},{-54,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsCO2.T, busConnector.core_T)
                                          annotation (Line(
      points={{-77,40},{-54,40},{-54,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(veinsCO2.cHCO3, busConnector.CO2Veins_cHCO3)
                                                      annotation (Line(
      points={{-78,20},{-78,14},{-100,14},{-100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{3,-3},{3,-3}}));
  connect(veins.q_out, veinsCO2.q_in)   annotation (Line(
      points={{-86,-4},{-86,24}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(busConnector.Artys_pH, artysCO2.pH)             annotation (
      Line(
      points={{-94,-42},{50,-42},{50,40},{73,40}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.Artys_pH_ery, artysCO2.pH_ery)
    annotation (Line(
      points={{-94,-42},{50,-42},{50,36},{73,36}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(artysCO2.sO2, busConnector.O2Artys_sO2)             annotation (
      Line(
      points={{91,32},{100,32},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysCO2.Hct, busConnector.BloodVol_Hct)             annotation (Line(
      points={{91,36},{100,36},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysCO2.T, busConnector.core_T)       annotation (Line(
      points={{91,40},{100,40},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artysCO2.q_in, artys.q_out)    annotation (Line(
      points={{82,24},{82,-2}},
      color={200,0,0},
      thickness=1,
      smooth=Smooth.None));
  connect(artysCO2.cHCO3, busConnector.CO2Artys_cHCO3) annotation (Line(
      points={{90,20},{90,14},{100,14},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{3,-3},{3,-3}}));
  connect(veinsCO2.pCO2, busConnector.CO2Veins_pCO2)     annotation (Line(
      points={{-82,20},{-82,16},{-100,16},{-100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(artysCO2.pCO2, busConnector.CO2Artys_pCO2) annotation (
      Line(
      points={{86,20},{86,12},{100,12},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(busConnector, CO2Tissues.busConnector) annotation (Line(
      points={{-94,-42},{-54,-42},{-54,-20.8},{-46.8,-20.8}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None));
  connect(CO2Lung.sO2, busConnector.O2Lung_sO2)              annotation (
      Line(
      points={{9,32},{50,32},{50,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.AlveolarVentilated_BloodFlow,CO2Lung. BloodFlow)
    annotation (Line(
      points={{-94,-42},{-54,-42},{-54,32},{-9,32}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(CO2Lung.q_out, artys.q_out)                 annotation (Line(
      points={{10,24},{82,24},{82,-2}},
      color={102,44,145},
      thickness=1));
  connect(CO2Lung.Hct, busConnector.BloodVol_Hct)              annotation (Line(
      points={{9,36},{50,36},{50,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(CO2Lung.T, busConnector.core_T) annotation (Line(
      points={{9,40},{50,40},{50,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(CO2Lung.pCO2, busConnector.CO2Lung_pCO2) annotation (Line(
      points={{4,20},{4,10},{10,10},{10,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-5},{6,-5}}));
  connect(CO2Lung.cHCO3, busConnector.CO2Lung_cHCO3) annotation (Line(
      points={{8,20},{8,12},{10,12},{10,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(veins.q_out, CO2Lung.q_in)    annotation (Line(
      points={{-86,-4},{-86,24},{-10,24}},
      color={102,44,145},
      thickness=1));
  connect(busConnector.lungs_pH_plasma, CO2Lung.pH) annotation (Line(
      points={{-94,-42},{-54,-42},{-54,40},{-9,40}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.lungs_pH_ery, CO2Lung.pH_ery) annotation (Line(
      points={{-94,-42},{-54,-42},{-54,36},{-9,36}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolarVentilation.AlveolarVentilation_Env, busConnector.AlveolarVentilation_Env)
    annotation (Line(
      points={{8,80},{100,80},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(artys.q_out, CO2Tissues.q_in) annotation (Line(
      points={{82,-2},{52,-2},{52,-30},{-26,-30}},
      color={102,44,145},
      thickness=1));
  connect(alveolarVentilation.BronchiDilution, busConnector.BronchiDilution)
    annotation (Line(
      points={{8,74},{100,74},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
connect(alveolarVentilation.alveolar, gasSolubility.q_out) annotation (
    Line(
    points={{0.2,68},{0,68},{0,64}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(CO2Lung.alveolar_outflow, gasSolubility.q_in) annotation (Line(
    points={{0,42},{0,46}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
connect(busConnector.VeinsVol, veins.solutionVolume) annotation (Line(
    points={{-94,-42},{-100,-42},{-100,0},{-90,0}},
    color={0,0,255},
    thickness=0.5,
    smooth=Smooth.None), Text(
    string="%first",
    index=-1,
    extent={{-6,3},{-6,3}}));
connect(artys.solutionVolume, busConnector.ArtysVol) annotation (Line(
    points={{86,2},{100,2},{100,-42},{-94,-42}},
    color={0,0,127},
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
connect(environment.port, air.heatPort) annotation (Line(
    points={{-70,64},{-54,64},{-54,90}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(alveolus.port, gasSolubility.heatPort) annotation (Line(
    points={{84,68},{94,68},{94,54},{0,54}},
    color={191,0,0},
    thickness=1,
    smooth=Smooth.None));
  connect(busConnector.AmbientTemperature, environment.temperature)
    annotation (Line(
      points={{-94,-42},{-84,-42},{-84,-40},{-100,-40},{-100,64},{-80,64}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));

  connect(busConnector.core_T, alveolus.temperature) annotation (Line(
      points={{-94,-42},{4,-42},{102,-42},{102,88},{52,88},{52,68},{64,68}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));

  connect(air.partialPressure, product.y) annotation (Line(points={{-60,90},
          {-62,90},{-65.4,90}}, color={0,0,127}));
  connect(busConnector.FiCO2, product.u2) annotation (Line(
      points={{-94,-42},{-100,-42},{-100,86.4},{-79.2,86.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BarometerPressure, product.u1) annotation (Line(
      points={{-94,-42},{-100,-42},{-100,93.6},{-79.2,93.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(alveolarVentilation.inspired, air.q_out) annotation (Line(
      points={{-10,86},{-30,86},{-30,90},{-48,90}},
      color={107,45,134},
      thickness=1));
  annotation ( Icon(coordinateSystem(
          preserveAspectRatio=false,extent={{-100,-100},{100,100}}),
        graphics={Text(
          extent={{-100,-98},{130,-144}},
          lineColor={28,108,200},
          textString="%name")}),
    Documentation(revisions="<html>

<table cellspacing=\"2\" cellpadding=\"0\" border=\"0\"><tr>
<td><p>Author:</p></td>
<td><p>Marek Matejak</p></td>
</tr>
<tr>
<td><p>License:</p></td>
<td><p><a href=\"http://www.physiomodel.org/license.html\">Physiomodel License 1.0</a> </p></td>
</tr>

<tr>
<td><p>Date of:</p></td>
<td><p>2009</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
<tr>
<td></td>
<td><p>Tom Coleman: QHP 2008 beta 3, University of Mississippi Medical Center</p></td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end CO2Physiomodel;
