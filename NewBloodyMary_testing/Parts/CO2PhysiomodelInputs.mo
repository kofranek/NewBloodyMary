within NewBloodyMary_testing.Parts;
model CO2PhysiomodelInputs
 extends Physiolibrary.Icons.CarbonDioxide;

Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{-114,-62},{-74,-22}}), iconTransformation(
        extent={{60,40},{100,80}})));
                                              /*(
    solventFlowPump(q_out(conc(start=0.05))))*/
//1000 * 1.977/40.01
  Physiolibrary.Types.Constants.PressureConst constVeinspCO2(k(displayUnit="Pa")=
         6329)
    annotation (Placement(transformation(extent={{-56,-68},{-48,-64}})));
  Physiolibrary.Types.Constants.ConcentrationConst constVeinsHCO3(k = 28.5)
    annotation (Placement(transformation(extent={{-56,-80},{-48,-76}})));
  Physiolibrary.Types.Constants.PressureConst constLungspCO2(k(displayUnit="Pa")=
         5400)
    annotation (Placement(transformation(extent={{-10,-68},{-2,-64}})));
  Physiolibrary.Types.Constants.ConcentrationConst constLungsHCO(k = 27.13)
    annotation (Placement(transformation(extent={{-10,-80},{-2,-76}})));
  Physiolibrary.Types.Constants.PressureConst constArtyspCO2(k(displayUnit="Pa")=
         5418)
    annotation (Placement(transformation(extent={{70,-68},{78,-64}})));
  Physiolibrary.Types.Constants.ConcentrationConst constArtysHCO3(k(displayUnit=
         "Pa") = 27.16)
    annotation (Placement(transformation(extent={{70,-80},{78,-76}})));
equation
  connect(constVeinsHCO3.y, busConnector.CO2Veins_cHCO3)
                                                      annotation (Line(
      points={{-47,-78},{-47,14},{-100,14},{-100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{3,-3},{3,-3}}));
  connect(constArtysHCO3.y, busConnector.CO2Artys_cHCO3) annotation (Line(
      points={{79,-78},{79,14},{100,14},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{3,-3},{3,-3}}));
  connect(constVeinspCO2.y, busConnector.CO2Veins_pCO2)     annotation (Line(
      points={{-47,-66},{-47,16},{-100,16},{-100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(constArtyspCO2.y, busConnector.CO2Artys_pCO2) annotation (
      Line(
      points={{79,-66},{79,12},{100,12},{100,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(constLungspCO2.y, busConnector.CO2Lung_pCO2) annotation (Line(
      points={{-1,-66},{-1,10},{10,10},{10,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,-5},{6,-5}}));
  connect(constLungsHCO.y, busConnector.CO2Lung_cHCO3) annotation (Line(
      points={{-1,-78},{-1,12},{10,12},{10,-42},{-94,-42}},
      color={0,0,127},
      smooth=Smooth.None));

  annotation ( Icon(coordinateSystem(
          preserveAspectRatio=false,extent={{-100,-100},{100,100}}),
        graphics={Text(
          extent={{-100,-98},{130,-144}},
          lineColor={28,108,200},
          textString="%name"), Line(
          points={{-100,-98},{44,34}},
          color={28,108,200},
          thickness=1,
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
<td><p>Tom Coleman: QHP 2008 beta 3, University of Mississippi Medical Center</p></td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end CO2PhysiomodelInputs;
