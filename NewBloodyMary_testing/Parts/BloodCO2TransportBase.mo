within NewBloodyMary_testing.Parts;
partial model BloodCO2TransportBase
  extends BloodCO2Base;

Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in
    "CO2 inflow to ventilated alveols in mmol/ml"
                                                annotation (Placement(
      transformation(extent={{-120,-100},{-80,-60}}), iconTransformation(
        extent={{-120,-100},{-80,-60}})));
Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out
    "CO2 outflow from ventilated alveols in mmol/ml"
                                                   annotation (Placement(
      transformation(extent={{80,-100},{120,-60}}), iconTransformation(
        extent={{80,-100},{120,-60}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput BloodFlow(
                                          final displayUnit="ml/min")
    "blood flow through ventilated alveols"
                                   annotation (Placement(transformation(extent={{-120,
            -80},{-80,-40}}),     iconTransformation(extent={{-100,-10},{-80,10}})));
equation
  q_in.conc = q_in.q/ BloodFlow; //mmol/l
  tCO2 = (-q_out.q/BloodFlow); //mmol/l
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-74,-26},{74,-58}},
          lineColor={0,0,255},
          textString="%name"),
        Polygon(
          points={{-72,10},{80,0},{-72,-10},{-72,10}},
          lineColor={0,0,127},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid,
          origin={-2,-80},
          rotation=360)}),        Documentation(revisions="<html>

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
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"));
end BloodCO2TransportBase;
