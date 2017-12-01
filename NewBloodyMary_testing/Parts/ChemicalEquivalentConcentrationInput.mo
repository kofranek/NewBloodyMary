within NewBloodyMary_testing.Parts;
connector ChemicalEquivalentConcentrationInput = input
    ChemicalEquivalentConcentration
  "input ChemicalEquivalentConcentration as connector"
  annotation (defaultComponentName="volumeDensityOfCharge",
  Icon(graphics={Polygon(
          points={{-100,100},{100,0},{-100,-100},{-100,100}},
          lineColor={0,0,127},
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid)},
       coordinateSystem(extent={{-100,-100},{100,100}}, preserveAspectRatio=true, initialScale=0.2)),
  Diagram(coordinateSystem(
        preserveAspectRatio=true, initialScale=0.2,
        extent={{-100,-100},{100,100}},
        grid={1,1}), graphics={Polygon(
          points={{0,50},{100,0},{0,-50},{0,50}},
          lineColor={0,0,127},
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid), Text(
          extent={{-10,85},{-10,60}},
          lineColor={0,0,127},
          textString="%name")}),
    Documentation(info="<html>
    <p>
    Connector with one input signal of type VolumeDensityOfCharge.
    </p>
    </html>"));
