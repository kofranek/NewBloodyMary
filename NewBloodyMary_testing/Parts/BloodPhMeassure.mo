within NewBloodyMary_testing.Parts;
model BloodPhMeassure
  extends BloodPhBase;
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{
            -102,90},{-62,130}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-90,110})));
equation
  _BEox = BEox;
  //  cTHox.conc*1000 = _cTHox;
  annotation (          Documentation(revisions="<html>

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
<td><p>2013</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"), Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end BloodPhMeassure;
