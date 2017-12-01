within NewBloodyMary_testing.Parts;
connector MassFlowConnector "Mass Concentration and Solute flow"
  Physiolibrary.Types.MassConcentration conc
    "Mass solute concentration in kg/m3 = g/l (displayUnit: mg/l)";
  flow Physiolibrary.Types.MassFlowRate q
    "Mass solute flow in kg/sec (displayUnit: mg/min)";
end MassFlowConnector;
