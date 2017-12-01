within NewBloodyMary_testing.Parts;
partial model HendersonHasselbach
  import Modelica.Math;

  Real pK;
  Real aCO2(final displayUnit="mmol/(l.kPa)");
   Physiolibrary.Types.Concentration cdCO2(displayUnit="mmol/l");
// start=3,
  //  Physiolibrary.Types.Pressure pCO2(start=6000,            displayUnit="kPa");
  //  start=6,
  // constant Real MiniliterPerLiter(final displayUnit="ml/l")=1000;
   Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                        displayUnit="mmol/l")
    "outgoing concentration of HCO3"                                                           annotation (Placement(
        transformation(extent={{20,-70},{60,-30}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={80,-120})));
   Physiolibrary.Types.RealIO.TemperatureInput T(      displayUnit="degC")
    "outgoing temperature"                                                            annotation (Placement(transformation(extent={{70,-26},
            {110,14}}),           iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,80})));        /*start=37,*/

   Physiolibrary.Types.RealIO.pHInput pH "outgoing plasma pH"
                                                        annotation (Placement(transformation(extent={{-120,50},
            {-80,90}}),           iconTransformation(extent={{-100,70},{-80,90}})));
 Physiolibrary.Types.RealIO.PressureOutput pCO2(start=6000,       displayUnit="mmHg")
    "alveolar partial pressure of pCO2"
                                    annotation (Placement(transformation(
          extent={{-58,-70},{-18,-30}}),
                                       iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={40,-120})));               /*start=40,*/
equation
  //Henderson-Hasselbalch equation:
  pK = 6.1 + (-0.0026) * (T - 310.15);
  aCO2 = 0.00023 * 10^(-0.0092*(T-310.15));
  //solubility depends on temperature
  cdCO2 = aCO2 * pCO2;
  // pH = if ( cdCO2 > 1e-8) then  pK + log10(max(1e-15,cHCO3/cdCO2)) else pK;
  cdCO2 * 10 ^ (pH - pK) = cHCO3;
    annotation ( Documentation(revisions="<html>

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

</html>"), Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end HendersonHasselbach;
