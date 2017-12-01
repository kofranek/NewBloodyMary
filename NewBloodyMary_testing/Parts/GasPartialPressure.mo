within NewBloodyMary_testing.Parts;
model GasPartialPressure

  Physiolibrary.Types.RealIO.PressureInput pressure annotation (Placement(
        transformation(extent={{-140,42},{-100,82}}),   iconTransformation(
          extent={{-140,42},{-100,82}})));
  Physiolibrary.Types.RealIO.PressureOutput partialPressure annotation (
      Placement(transformation(extent={{94,-2},{114,18}}), iconTransformation(
          extent={{100,-15},{130,15}})));
  Physiolibrary.Types.RealIO.FractionInput gasFractionConcentration annotation (
     Placement(transformation(extent={{-140,-70},{-100,-30}}),
                                                             iconTransformation(
          extent={{-140,-70},{-100,-30}})));
equation
  partialPressure = pressure * gasFractionConcentration;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                         graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-102,42},{102,-30}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="%name")}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end GasPartialPressure;
