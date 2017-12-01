within NewBloodyMary_testing.Parts;
model AcidBase
  extends Physiolibrary.Icons.AcidBase;
BloodPhMeassure artysPH(_BEox(start=-0.177))
    annotation (Placement(transformation(extent={{86,28},{58,56}})));
BloodPhMeassure veinsPH(_cTHox(start=0), pH(
        start=7.37))
    annotation (Placement(transformation(extent={{-56,28},{-84,56}})));

Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-44,72},{-4,112}}), iconTransformation(
        extent={{-20,-18},{20,22}})));

  //initial equation
  //  ArtysPh.pH=7.4;
BloodPhMeassure lungsPH
    annotation (Placement(transformation(extent={{28,28},{0,56}})));
BloodPhMeassure tissueVeinPH(pH(start=7.4), cHb=43)
    annotation (Placement(transformation(extent={{28,-52},{0,-24}})));
equation
  connect(busConnector.O2Artys_sO2,artysPH. sO2)        annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,60},{64,60},{64,57.4},{63.6,
        57.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,6},{-6,6}}));
  connect(busConnector.O2Veins_sO2, veinsPH.sO2)         annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,60},{-78,60},{-78,57.4},{
        -78.4,57.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,6},{-6,6}}));
  connect(busConnector.ctAlb,artysPH. ctAlb)    annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,42},{59.4,42}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.CO2Artys_cHCO3,artysPH. cHCO3)    annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,53.2},{59.4,53.2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctAlb, veinsPH.ctAlb)    annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,42},{-82.6,42}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.CO2Veins_cHCO3, veinsPH.cHCO3)    annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,53.2},{-82.6,53.2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(artysPH.pH, busConnector.Artys_pH)    annotation (Line(
      points={{74.8,25.2},{74.8,16},{98,16},{98,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(artysPH.pH_ery, busConnector.Artys_pH_ery)    annotation (Line(
      points={{69.2,25.2},{69.2,10},{98,10},{98,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));
  connect(veinsPH.pH, busConnector.Veins_pH)    annotation (Line(
      points={{-67.2,25.2},{-67.2,16},{-24,16},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(veinsPH.pH_ery, busConnector.Veins_pH_ery)    annotation (Line(
      points={{-72.8,25.2},{-72.8,10},{-24,10},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));
  connect(busConnector.ctGlb,artysPH. ctGlb) annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,36.4},{59.4,36.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPO4,artysPH. ctPO4) annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,30.8},{59.4,30.8}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctGlb, veinsPH.ctGlb) annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,36.4},{-82.6,36.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPO4, veinsPH.ctPO4) annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,30.8},{-82.6,30.8}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(artysPH.pH, busConnector.BloodPh_ArtysPh) annotation (Line(
      points={{74.8,25.2},{74.8,16},{98,16},{98,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(busConnector.ctAlb,lungsPH. ctAlb)    annotation (Line(
      points={{-24,92},{-14,92},{-14,42},{1.4,42}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(lungsPH.pH, busConnector.Lung_pH)     annotation (Line(
      points={{16.8,25.2},{16.8,14},{34,14},{34,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(lungsPH.pH_ery, busConnector.Lung_pH_ery)     annotation (Line(
      points={{11.2,25.2},{11.2,8},{34,8},{34,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));
  connect(busConnector.ctGlb,lungsPH. ctGlb) annotation (Line(
      points={{-24,92},{-14,92},{-14,36.4},{1.4,36.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPO4,lungsPH. ctPO4) annotation (Line(
      points={{-24,92},{-14,92},{-14,30.8},{1.4,30.8}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.O2Lung_sO2,lungsPH. sO2)              annotation (Line(
      points={{-24,92},{-14,92},{-14,57.4},{5.6,57.4}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.CO2Lung_cHCO3,lungsPH. cHCO3)              annotation (
      Line(
      points={{-24,92},{-14,92},{-14,53.2},{1.4,53.2}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(lungsPH.pH, busConnector.lungs_pH_plasma) annotation (Line(
      points={{16.8,25.2},{16.8,14},{34,14},{34,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(lungsPH.pH_ery, busConnector.lungs_pH_ery) annotation (Line(
      points={{11.2,25.2},{11.2,8},{34,8},{34,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(busConnector.ctHb, veinsPH.ctHb) annotation (Line(
      points={{-24,92},{-24,74},{-100,74},{-100,47.6},{-82.6,47.6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, lungsPH.ctHb) annotation (Line(
      points={{-24,92},{-14,92},{-14,47.6},{1.4,47.6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, artysPH.ctHb) annotation (Line(
      points={{-24,92},{-24,74},{44,74},{44,47.6},{59.4,47.6}},
      color={0,0,255},
      thickness=0.5,
      smooth=Smooth.None), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));

  connect(busConnector.BEox, veinsPH.BEox) annotation (Line(
      points={{-24,92},{-57.4,92},{-57.4,57.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BEox, lungsPH.BEox) annotation (Line(
      points={{-24,92},{26.6,92},{26.6,57.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.BEox, artysPH.BEox) annotation (Line(
      points={{-24,92},{84.6,92},{84.6,57.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, tissueVeinPH.ctHb) annotation (Line(
      points={{-24,92},{-24,92},{-24,-32.4},{1.4,-32.4}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.tissueVein_cHCO3, tissueVeinPH.cHCO3) annotation (
      Line(
      points={{-24,92},{-24,92},{-24,-26.8},{1.4,-26.8}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctAlb, tissueVeinPH.ctAlb) annotation (Line(
      points={{-24,92},{-24,92},{-24,-38},{1.4,-38}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctGlb, tissueVeinPH.ctGlb) annotation (Line(
      points={{-24,92},{-24,92},{-24,-43.6},{1.4,-43.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctPO4, tissueVeinPH.ctPO4) annotation (Line(
      points={{-24,92},{-24,92},{-24,-48},{-24,-49.2},{1.4,-49.2}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.tissueVein_sO2, tissueVeinPH.sO2) annotation (Line(
      points={{-24,92},{-24,92},{-24,-14},{-24,-16},{5.6,-16},{5.6,-22.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));

  connect(busConnector.BEox, tissueVeinPH.BEox) annotation (Line(
      points={{-24,92},{-24,92},{-24,-8},{26.6,-8},{26.6,-22.6}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(tissueVeinPH.pH, busConnector.tissueVein_pH) annotation (Line(
        points={{16.8,-54.8},{16.8,-60},{34,-60},{34,92},{-24,92}}, color={
          0,0,127}));
  connect(tissueVeinPH.pH_ery, busConnector.tissueVein_pH_ery) annotation (
      Line(points={{11.2,-54.8},{11.2,-64},{34,-64},{34,92},{-24,92}},
        color={0,0,127}));
  annotation ( Icon(coordinateSystem(
          preserveAspectRatio=true, extent={{-100,-100},{100,100}}),
        graphics={                 Text(
          extent={{-118,-84},{124,-118}},
          lineColor={0,0,255},
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
<td>Noriaki Ikeda: A model of overall regulation of body fluids (1979), Kitasato University</td>
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
end AcidBase;
