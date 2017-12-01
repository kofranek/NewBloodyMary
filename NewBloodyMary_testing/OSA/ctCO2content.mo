within NewBloodyMary_testing.OSA;
model ctCO2content

  Physiolibrary.Types.RealIO.PressureInput pCO2(start=5330) "pCO2 in Pa"
                                   annotation (Placement(transformation(extent={{-120,20},
            {-80,60}}),           iconTransformation(extent={{-120,70},{
            -100,90}})));
  Physiolibrary.Types.RealIO.pHInput pH
                                  annotation (Placement(transformation(extent={{-120,70},
            {-80,110}}),          iconTransformation(extent={{-120,30},{
            -100,50}})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)
    "temperature (in Kelvins)"                                 annotation (Placement(transformation(extent={{-120,
            -20},{-80,20}}),      iconTransformation(extent={{-120,-10},{-100,10}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
    "hemoglobin concentration (mmol/l)"
                                   annotation (Placement(transformation(extent={{60,60},
            {100,100}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-110,-40})));
  Physiolibrary.Types.RealIO.FractionInput sO2 "O2 hemoglobin saturation "
    annotation (Placement(transformation(extent={{-120,-98},{-80,-58}}),
        iconTransformation(extent={{-120,-90},{-100,-70}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2
    "total blood CO2 concentration (in mmol/l)" annotation (Placement(
        transformation(extent={{100,30},{120,50}}), iconTransformation(extent={{100,30},
            {120,50}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3
    "plasma HCO3 concentration (in mmol/l)" annotation (Placement(
        transformation(extent={{100,60},{120,80}}), iconTransformation(extent={{100,-10},
            {120,10}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2p
    "plasma CO2 dissolved concentration (in mmol/l)" annotation (Placement(
        transformation(extent={{100,60},{120,80}}), iconTransformation(extent={{100,-50},
            {120,-30}})));

algorithm
  (ctCO2, cHCO3,cdCO2p) := CO2totalSI(
   pH,
   pCO2,
   T,
   ctHb,
   sO2);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                         graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-66,46},{82,-26}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CO2 total")}));
end ctCO2content;
