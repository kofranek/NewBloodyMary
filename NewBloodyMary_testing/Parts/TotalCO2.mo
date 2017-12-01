within NewBloodyMary_testing.Parts;
model TotalCO2
  extends BloodCO2Base;

  Physiolibrary.Types.RealIO.PressureInput pCO2inp annotation (Placement(
        transformation(extent={{-102,-22},{-62,18}}), iconTransformation(extent={{-98,-14},
            {-80,4}})));

  Physiolibrary.Types.RealIO.ConcentrationOutput totalCO2 annotation (Placement(
        transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-38,-120})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2p
    "dissolved CO2 concentration" annotation (Placement(transformation(extent={{
            -80,-100},{-60,-80}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-78,-120})));
equation
  cdCO2p = cdCO2;
  pCO2inp=pCO2;
  totalCO2=tCO2;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),     Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics));
end TotalCO2;
