within NewBloodyMary_testing.Parts;
model Interstitium
  constant Real T = 310.15;
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a HCO3
    annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput   BE
    annotation (Placement(transformation(extent={{-10,80},{10,100}})));
  Physiolibrary.Types.RealIO.PressureInput pCO2
    annotation (Placement(transformation(extent={{-100,60},{-60,100}})));
  Real pK = 6.1 + (-0.0026)*(T-310.15);
  Real aCO2(final displayUnit="mmol/(l.kPa)") = 0.00023 * 10^(-0.0092*(T-310.15));             //solubility depends on temperature
   Physiolibrary.Types.Concentration cdCO2(displayUnit="mmol/l") = aCO2*pCO2;
  Real pH;

   parameter Physiolibrary.Types.Volume volume;
   parameter Physiolibrary.Types.Concentration initialHCO3Conc;
   Real cHCO3( start = initialHCO3Conc, fixed = true) = HCO3.conc;
   Real tHCO3;
equation
  BE = -HCO3.q;
  der(tHCO3) = HCO3.q;
  tHCO3/volume = HCO3.conc;

  cdCO2 * 10^(pH-pK) = cHCO3;

end Interstitium;
