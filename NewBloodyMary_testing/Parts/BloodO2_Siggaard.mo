within NewBloodyMary_testing.Parts;
model BloodO2_Siggaard

extends BloodO2Base;
                    //_withoutCO_;
  //Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in;
  //Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out;
  //Physiolibrary.Chemical.Interfaces.ChemicalPort_b alveolar;
  //Modelica.Blocks.Interfaces.RealInput
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in
    annotation (Placement(transformation(extent={{-100,-100},{-80,-80}}),
        iconTransformation(extent={{-100,-100},{-80,-80}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out
    annotation (Placement(transformation(extent={{80,-100},{100,-80}}),
        iconTransformation(extent={{80,-100},{100,-80}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_b alveolar
    annotation (Placement(transformation(extent={{-14,72},{6,92}}),
        iconTransformation(extent={{-14,72},{6,92}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput BloodFlow
    annotation (Placement(transformation(extent={{-120,-54},{-80,-14}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb_(
                                       displayUnit="mmol/l")
    "effective haemoglobin"           annotation (Placement(
        transformation(extent={{38,-102},{78,-62}}),iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-40,-120})));
equation
q_in.q + q_out.q + alveolar.q = 0;
  //flows: mmol/min
  alveolar.conc = cdO2;

q_in.conc = q_in.q/ BloodFlow;
  //mmol/l
  //tO2 = MiniliterPerLiter * (-q_out.q/ BloodFlow); //mmol/l
  tO2 = -q_out.q / BloodFlow;
  //mmol/l
  ceHb_ = ceHb;
annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
          -100,-100},{100,100}}), graphics));
end BloodO2_Siggaard;
