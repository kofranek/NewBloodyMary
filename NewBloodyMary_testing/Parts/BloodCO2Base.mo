within NewBloodyMary_testing.Parts;
partial model BloodCO2Base
  extends HendersonHasselbach;

  import Modelica.Math;

  Physiolibrary.Types.Concentration tCO2_P(start=24, displayUnit="mmol/l");
  //start=24,
  Real pK_ery;
  Physiolibrary.Types.GasSolubility aCO2_ery( displayUnit="mmol/l/mmHg");
  Physiolibrary.Types.Concentration tCO2_ery( displayUnit="mmol/l");

   Physiolibrary.Types.Concentration tCO2( displayUnit="mmol/l");

  //  constant Real MiniliterPerLiter(final displayUnit="ml/l")=1000;
   Physiolibrary.Types.RealIO.pHInput pH_ery
    "outgoing intracellular erytrocytes pH"
                                  annotation (Placement(transformation(extent={{-120,10},
            {-80,50}}),           iconTransformation(extent={{-100,30},{-80,50}})));
   Physiolibrary.Types.RealIO.FractionInput Hct
    "outgoing hematocrit (erytrocytes volume/blood volume)"
                                   annotation (Placement(transformation(extent={{60,60},
            {100,100}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,40})));
   Physiolibrary.Types.RealIO.FractionInput sO2
    "outgoing oxygen saturation"   annotation (Placement(transformation(extent={{60,20},
            {100,60}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,0})));

equation
  //total plasma CO2 from SimpleCO2Solution
  tCO2_P = cHCO3 + cdCO2;
  //erythrocytes:
  pK_ery = 6.125 - log10(1 + 10 ^ (pH_ery - 7.84 - 0.06 * sO2));
  tCO2_ery=aCO2_ery*pCO2*(1+10^(pH_ery-pK_ery));
  aCO2_ery=0.000195;
  //solubility 0.23 (mmol/l)/kPa at 25degC
  //plasma+erythrocyte
  tCO2 = tCO2_ery * Hct + tCO2_P * (1 - Hct);
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid), Text(
          extent={{-74,-26},{74,-58}},
          lineColor={0,0,255},
          textString="%name")}),        Documentation(revisions="<html>

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
end BloodCO2Base;
