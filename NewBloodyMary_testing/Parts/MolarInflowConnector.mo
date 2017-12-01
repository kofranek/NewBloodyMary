within NewBloodyMary_testing.Parts;
connector MolarInflowConnector "Molar Concentration and Solute Inflow"
  extends MolarFlowConnector;
  annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"), Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid)}));
end MolarInflowConnector;
