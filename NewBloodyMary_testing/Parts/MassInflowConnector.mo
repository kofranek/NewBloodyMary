within NewBloodyMary_testing.Parts;
connector MassInflowConnector "Mass Concentration and Solute Inflow"
  extends MassFlowConnector;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={127,0,0},
          fillPattern=FillPattern.Solid)}));
end MassInflowConnector;
