within NewBloodyMary_testing.Parts;
model fractToPressure

  Physiolibrary.Types.RealIO.FractionInput fraction annotation (Placement(
        transformation(extent={{-140,-20},{-100,20}}), iconTransformation(
          extent={{-140,-20},{-100,20}})));
  Physiolibrary.Types.RealIO.PressureInput pressure annotation (Placement(
        transformation(extent={{-56,42},{-16,82}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={0,60})));
  Physiolibrary.Types.RealIO.PressureOutput partialPressure annotation (
      Placement(transformation(extent={{46,-72},{66,-52}}), iconTransformation(
          extent={{100,-20},{142,22}})));
equation
   partialPressure = pressure * fraction;

    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                         graphics={Rectangle(
          extent={{-100,40},{100,-40}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-100,30},{98,-28}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="%name")}));
end fractToPressure;
