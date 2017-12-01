within NewBloodyMary_testing.Parts;
model AcidBaseInputs
  extends Physiolibrary.Icons.AcidBase;

Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-44,72},{-4,112}}), iconTransformation(
        extent={{-20,-18},{20,22}})));

  Physiolibrary.Types.Constants.pHConst constlung_erypH(k=7.22) "OF WHAT?"
    annotation (Placement(transformation(extent={{-12,46},{-4,50}})));
  Physiolibrary.Types.Constants.pHConst constLung_pH(k=7.44)
    annotation (Placement(transformation(extent={{-10,78},{-2,82}})));
  Physiolibrary.Types.Constants.pHConst constveins_erypH(k=7.19)
    annotation (Placement(transformation(extent={{-88,60},{-80,64}})));
  Physiolibrary.Types.Constants.pHConst constveins_pH(k=7.39)
    annotation (Placement(transformation(extent={{-88,80},{-80,84}})));
  Physiolibrary.Types.Constants.pHConst constartys_erypH(k=7.22)
    annotation (Placement(transformation(extent={{48,56},{56,60}})));
  Physiolibrary.Types.Constants.pHConst constartys_pH2(k=7.43)
    annotation (Placement(transformation(extent={{48,76},{56,80}})));
equation
  connect(constartys_pH2.y, busConnector.Artys_pH)    annotation (Line(
      points={{57,78},{100,78},{100,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(constartys_erypH.y, busConnector.Artys_pH_ery)    annotation (Line(
      points={{57,58},{57,56},{100,56},{100,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));
  connect(constveins_pH.y, busConnector.Veins_pH)    annotation (Line(
      points={{-79,82},{-24,82},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(constveins_erypH.y, busConnector.Veins_pH_ery)    annotation (Line(
      points={{-79,62},{-24,62},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));

  connect(constLung_pH.y, busConnector.Lung_pH)     annotation (Line(
      points={{-1,80},{-1,78},{32,78},{32,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-8},{6,-8}}));
  connect(constlung_erypH.y, busConnector.Lung_pH_ery)     annotation (Line(
      points={{-3,48},{-3,46},{36,46},{36,92},{-24,92}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-13},{6,-13}}));

  annotation ( Icon(coordinateSystem(
          preserveAspectRatio=false,extent={{-100,-100},{100,100}}),
        graphics={                 Text(
          extent={{-118,-84},{124,-118}},
          lineColor={0,0,255},
          textString="%name"),
        Line(
          points={{-98,-100},{-24,-24}},
          color={28,108,200},
          thickness=0.5,
          arrow={Arrow.None,Arrow.Filled}),
        Line(
          points={{-98,98},{-34,34}},
          color={28,108,200},
          thickness=0.5,
          arrow={Arrow.None,Arrow.Filled})}),
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
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,
            100}})));
end AcidBaseInputs;
