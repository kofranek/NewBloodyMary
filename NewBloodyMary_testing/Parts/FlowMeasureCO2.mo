within NewBloodyMary_testing.Parts;
model FlowMeasureCO2
  extends BloodCO2Base;

  import Modelica.Math;
/*
  Real tCO2_P(start=24,              final displayUnit="mmol/l");

  Real pK_ery;
  Real aCO2_ery(final displayUnit="mmol/l/mmHg");
  Real tCO2_ery(final displayUnit="mmol/l");

  Real tCO2(final displayUnit="mmol/l");

  constant Real MiniliterPerLiter(final displayUnit="ml/l")=1000;
*/
Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in
    "CO2 inflow to ventilated alveols in mmol/ml"
                                                annotation (Placement(
      transformation(extent={{-120,-100},{-80,-60}}), iconTransformation(
        extent={{-120,-100},{-80,-60}})));
/*  Library.Interfaces.RealInput_ pH_ery "outgoing intracellular erytrocytes pH"
                                  annotation (Placement(transformation(extent={{-120,10},
            {-80,50}}),           iconTransformation(extent={{-100,30},{-80,50}})));
  Library.Interfaces.RealInput_ Hct
    "outgoing hematocrit (erytrocytes volume/blood volume)"
                                   annotation (Placement(transformation(extent={{60,60},
            {100,100}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,40})));
  Library.Interfaces.RealInput_ sO2 "outgoing oxygen saturation"
                                   annotation (Placement(transformation(extent={{60,20},
            {100,60}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,0})));
*/
Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out
    "CO2 outflow from ventilated alveols in mmol/ml"
                                                   annotation (Placement(
      transformation(extent={{80,-100},{120,-60}}), iconTransformation(
        extent={{80,-100},{120,-60}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput BloodFlow(
                                          displayUnit="ml/min")
    "blood flow through ventilated alveols"
                                   annotation (Placement(transformation(extent={{-120,
            -80},{-80,-40}}),     iconTransformation(extent={{-100,-10},{-80,10}})));
equation

  q_in.q + q_out.q = 0;
  q_in.conc = (q_in.q/BloodFlow);
  tCO2 = q_in.conc; //=(-q_out.q/BloodFlow);  //mmol/l
  /*
  //total plasma CO2 from SimpleCO2Solution
  tCO2_P = cHCO3 + cdCO2;

  //erythrocytes:
  pK_ery = 6.125 - log10(1+10^(pH_ery-7.84-0.06*sO2));
  tCO2_ery=aCO2_ery*pCO2*(1+10^(pH_ery-pK_ery));
  aCO2_ery=0.195; //solubility

  //plasma+erythrocyte
  tCO2 = tCO2_ery*Hct + tCO2_P*(1-Hct);
*/
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-74,-26},{74,-58}},
          lineColor={0,0,255},
          textString="%name"),
        Polygon(
          points={{-72,10},{80,0},{-72,-10},{-72,10}},
          lineColor={0,0,127},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid,
          origin={-2,-80},
          rotation=360)}));
end FlowMeasureCO2;
