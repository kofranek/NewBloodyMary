within NewBloodyMary_testing.Parts;
model MeassureBloodO2
  extends BloodO2Base;
                      //_withoutCO_;
Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in annotation (
    Placement(transformation(extent={{-28,-116},{12,-76}}),
      iconTransformation(extent={{-20,-100},{20,-60}})));
equation
   q_in.q = 0;  //flows: mmol/min
   tO2 = q_in.conc; //mmol/l
end MeassureBloodO2;
