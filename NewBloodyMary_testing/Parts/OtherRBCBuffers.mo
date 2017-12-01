within NewBloodyMary_testing.Parts;
model OtherRBCBuffers
  extends BufferInterface;

  parameter Physiolibrary.Types.Concentration NCharge=9 "charge at pH=7.4";

equation
   y = - NCharge * Modelica.Constants.F;

  annotation ( Documentation(info="<html>
<p><b><font style=\"font-size: 12pt; \"><a name=\"internal-source-marker_0.47659245471196454\">C</a>harge for phosphates:</b></p>
<p><br/>pKa1=2.1, pKa2=6.8, pKa3=12.7 &nbsp;&nbsp;(wiki: &nbsp;2.12, 7.21, 12.67 at 25&deg;C)</p>
<p><br/>tPO4 = [H3PO4] + [H2PO4] + [HPO4] + [PO4]</p>
<p><br/>charge(tPO4,pH) = [H2PO4] + 2[HPO4] + 3[PO4]</p>
<p><br/>[H2PO4] / [H3PO4] = 10^(pH-pKa1) </p>
<p><br/>[HPO4] / [H2PO4] = 10^(pH-pKa2) </p>
<p><br/>[PO4] / [HPO4] = 10^(pH-pKa3) </p>
</html>"),
    Icon(graphics={Text(
          extent={{-79,-27},{79,27}},
          lineColor={0,0,255},
          origin={73,19},
          rotation=90,
          textString="Others")}));
end OtherRBCBuffers;
