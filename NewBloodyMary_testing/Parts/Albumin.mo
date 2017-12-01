within NewBloodyMary_testing.Parts;
model Albumin
    extends BufferInterface;
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     tAlb(displayUnit="mmol/l")
    annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));

  Physiolibrary.Types.MassConcentration tAlb_mass;
  parameter Physiolibrary.Types.MolarMass Alb_MolarMass(displayUnit="g/mol") = 66.463;
equation
  tAlb_mass=tAlb*Alb_MolarMass;  //kg/m3 = g/l
  y = - tAlb_mass * ( 0.123 * pH - 0.631) * Modelica.Constants.F;
  //where [ Albx- ] is in mEq / L and [ Albumin ] is in g / dL. Therefore, at pH 7.40, the charge contributed by 4.40 g / dL of albumin is approximately -12.3 mEq / L.
  annotation (Documentation(info="<html>
<p>http://www.figge-fencl.org/titrationcurve.html</p>
<p>:</p>
<p><br/>A least-squares linear regression fit to the Figge-Fencl quantitative physicochemical model (version 3.0) over the pH range of 6.90 to 7.90 yields the following equation for the charge displayed by albumin:</p>
<p><br/> [ Albx- ] = -10 x [ Albumin ] x ( 0.123 x pH - 0.631 );</p>
<p><br/> where [ Albx- ] is in mEq / L and [ Albumin ] is in g / dL. Therefore, at pH 7.40, the charge contributed by 4.40 g / dL of albumin is approximately -12.3 mEq / L.</p>
</html>"),
   Icon(graphics={Text(
          extent={{-79,-27},{79,27}},
          lineColor={0,0,255},
          origin={73,19},
          rotation=90,
          textString="Alb")}));
end Albumin;
