within NewBloodyMary_testing.Parts;
partial model BloodPhBase
  import Modelica.Math;

  Physiolibrary.Types.Concentration betaX "buffer value of blood";
                                         //(unit = "mEq/l")
  Physiolibrary.Types.Concentration betaP "buffer value of plasma";
                                         //(unit = "mEq/l")
  Physiolibrary.Types.Concentration _cTH
    "total concentration of tiratable hydrogen ions";
                                       //( displayUnit="mEq/l")
  Physiolibrary.Types.Concentration _BE "base excess";
                                      //( displayUnit="mEq/l")
  Physiolibrary.Types.Concentration _BEox
    "base excess in fully oxygenated blood";
                                        //( displayUnit="mEq/l")
  Physiolibrary.Types.Concentration _cTHox
    "total concentration of tiratable hydrogen ions in fully oxygenated blood";
                                         //( displayUnit="mEq/l")
   Physiolibrary.Types.RealIO.pHOutput pH( start=7.4) "plasma pH"    annotation (Placement(transformation(
          extent={{30,-98},{70,-58}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-20,-120})));
  Physiolibrary.Types.RealIO.pHOutput pH_ery "intracellular erytrocytes pH"   annotation (Placement(
        transformation(extent={{-14,-98},{26,-58}}),iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={20,-120})));

  Physiolibrary.Types.RealIO.ConcentrationInput cHCO3(
                                       displayUnit="mmol/l")
    "concentration of plasma HCO3 ions (default=24.5mmol/l)"
                                   annotation (Placement(transformation(extent={{50,18},
            {90,58}}),            iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,80})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                          displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)"
                                   annotation (Placement(transformation(extent={{50,58},
            {90,98}}),            iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,40})));
  parameter Physiolibrary.Types.Concentration  cHb(displayUnit="mmol/l")=43
    "an empirical parameter accounting for erythrocyte plasma distributions = concentration of Hb inside erythrocytes divided by (1-0.57)";

  Physiolibrary.Types.RealIO.FractionInput sO2 "oxygen saturation"
                                   annotation (Placement(transformation(extent={{-100,60},
            {-60,100}}),          iconTransformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={60,110})));

  Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                       displayUnit="mmol/l")
    "concentration of total plasma albumins(dofault=0.65mmol/l)"                 annotation (Placement(transformation(extent={{52,-26},
            {92,14}}),            iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,0})));

  Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                       displayUnit="g/l")
    "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{52,-60},
            {92,-20}}),           iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,-40})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(
                                       displayUnit="mmol/l")
    "concentration of total inorganic phosphate in plasma"                       annotation (Placement(transformation(extent={{54,-92},
            {94,-52}}),           iconTransformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,-80})));

equation
  //Van Slyke equation:  - T=37
  _cTH = -(1 - ctHb / cHb) * (cHCO3 - 24.5 + betaX * (pH - 7.4));
  //  _cTH = -(1-(1-0.57)*(0.44))*((cHCO3-24.5)+betaX*(pH-7.4));
  betaX = 2.3 * ctHb + betaP;
  betaP =  8*ctAlb + 0.075*ctGlb + 0.309*ctPO4;
  //  _betaX = 0.11 * plasmaProteinConc(displayUnit="g/l"); //mmol/l
  //Haldane effect:
  _cTH = homotopy(_cTHox - 0.3 * (1 - sO2), _cTHox);
  //base excess
  _BEox = -_cTHox;
  _BE = - _cTH;
  //erythrocytes:
  pH_ery = homotopy(7.19 + 0.77 * (pH - 7.4) + 0.035 * (1 - sO2), 7.19 + 0.77 * (pH - 7.4));
  annotation (
    preferredView = text,
    Documentation(info="<html>
<pre>Blood pH calculation by
<i><b>Van Slyke equation</b></i>,
<i><b>Haldame</b></i> effect
and plasma-<i><b>erythrocytes</b></i> acidity distribution.</pre>
</html>",
 revisions="<html>

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
<td><p>dec 2009</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"),
    Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
            100,100}}), graphics={
        Text(
          extent={{-72,-56},{76,-92}},
          lineColor={0,0,255},
          textString="%name"),
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-96,-62},{98,-94}},
          lineColor={0,0,255},
          textString="%name")}),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end BloodPhBase;
