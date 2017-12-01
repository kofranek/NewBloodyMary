within NewBloodyMary_testing.Parts;
connector MolarOutflowConnector "Molar Concentration and Solute Outflow"
  extends MolarFlowConnector;
  annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"), Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid), Rectangle(
          extent={{-60,60},{60,-60}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid)}));
end MolarOutflowConnector;
