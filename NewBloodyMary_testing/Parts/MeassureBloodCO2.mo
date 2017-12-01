within NewBloodyMary_testing.Parts;
model MeassureBloodCO2
  extends BloodCO2Base;

Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in annotation (
    Placement(transformation(extent={{80,-20},{120,20}}),
      iconTransformation(extent={{-20,-100},{20,-60}})));
equation
  q_in.q=0;
  tCO2 = q_in.conc;
  // * MiniliterPerLiter;  //mmol/l
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid), Text(
          extent={{-74,-26},{74,-58}},
          lineColor={0,0,255},
          textString="%name")}));
end MeassureBloodCO2;
