within NewBloodyMary_testing.Parts;
connector MassOutflowConnector "Mass Concentration and Solute Outflow"
  extends MassFlowConnector;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={127,0,0},
          fillPattern=FillPattern.Solid), Rectangle(
          extent={{-60,60},{60,-60}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid)}));
end MassOutflowConnector;
