within NewBloodyMary_testing.Parts;
connector MolarFlowConnector "Molar Concentration and Solute flow"
  Physiolibrary.Types.Concentration conc
    "Molar solute concentration in mol/m3 (displayUnit: mmol/l)";
  flow Physiolibrary.Types.MolarFlowRate q
    "Molar solute flow in mol/sec (displayUnit=mmol/min)";
  annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"), Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end MolarFlowConnector;
