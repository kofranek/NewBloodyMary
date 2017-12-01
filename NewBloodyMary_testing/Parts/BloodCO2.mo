within NewBloodyMary_testing.Parts;
model BloodCO2

 extends BloodCO2TransportBase;
// extends Physiolibrary.Icons.LungShunt;
Physiolibrary.Chemical.Interfaces.ChemicalPort_a alveolar_outflow
    "CO2 outflow from blood to alveol space in mmol/min"
    annotation (Placement(transformation(extent={{-20,80},{20,120}}),
        iconTransformation(extent={{-20,80},{20,120}})));
equation
  q_in.q + q_out.q + alveolar_outflow.q = 0;
  alveolar_outflow.conc = cdCO2;

end BloodCO2;
