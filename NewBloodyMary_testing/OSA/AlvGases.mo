within NewBloodyMary_testing.OSA;
model AlvGases

  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-68,-65}),        iconTransformation(extent={{-112,-8},{
            -100,4}})));
  Physiolibrary.Types.RealIO.PressureOutput PAO2 annotation (Placement(
        transformation(extent={{36,41},{50,55}}), iconTransformation(extent={{100,46},
            {120,66}})));
  Physiolibrary.Types.RealIO.PressureOutput PACO2 annotation (Placement(
        transformation(extent={{36,70},{48,82}}), iconTransformation(extent={{100,24},
            {120,44}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-92,6},{-62,36}}),   iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,12})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAe annotation (Placement(
        transformation(extent={{100,2},{120,22}}),    iconTransformation(extent={{100,2},
            {120,22}})));
  Physiolibrary.Types.RealIO.FractionInput FiO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-72,-34}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,52})));
  Physiolibrary.Types.RealIO.FractionInput FiCO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-72,-10}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,36})));
  Physiolibrary.Types.RealIO.PressureInput PB annotation (Placement(
        transformation(extent={{-148,66},{-108,106}}), iconTransformation(
          extent={{-112,62},{-100,74}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{-142,-10},{-102,30}}), iconTransformation(
          extent={{-112,-26},{-100,-14}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
        transformation(extent={{-142,-10},{-102,30}}), iconTransformation(
          extent={{-112,-46},{-100,-34}})));

  Real VAi_BTPS_l_per_min "inspired alveolar ventilation in l BTPS/min";
  Real temp_cels "?core body temperature in ?C";
  Real PB_mmHg "barometric pressure";
  Real VO2_mmol_per_min( start = 11)
    "rate of oxygen comsumption [mmol/min]";
  Real VCO2_mmol_per_min( start=10)
    "rate of carbon dioxide production [mmol/min]";
  Real PAO2_mmHg "alveolar pO2 [mmHg]";
  Real PACO2_mmHg "alveolar PCO2 [mmHg]";
  Real VAe_BTPS_l_per_min "expired alveolar ventilation in l BTPS/min";

algorithm
  (
  PAO2_mmHg,
  PACO2_mmHg,
  VAe_BTPS_l_per_min)
  :=AlveolarGases(
  VAi_BTPS_l_per_min,
  FiO2,
  FiCO2,
  temp_cels,
  PB_mmHg,
  VO2_mmol_per_min,
  VCO2_mmol_per_min);

equation

  temp_cels =  T-273.15;
  //from grad C to grad K conversion
  PB_mmHg = PB / 133.322365;
  // from mmHg to Pa conversion
  PAO2_mmHg = PAO2 / 133.322365;
  // from mmHg to Pa conversion
  PACO2_mmHg = PACO2 / 133.322365;
  // from mmHg to Pa conversion
  VAi_BTPS_l_per_min = VAi * 60000;
  // from m^3/sec to l/min conversion
  VAe = VAe_BTPS_l_per_min / 60000;
  //from l/min to m^3/sec conversion
  VO2 = VO2_mmol_per_min / 60 / 1000;
  //from mmol/min to mol/sec conversion
  VCO2 = VCO2_mmol_per_min / 60 / 1000;  //from mmol/min to mol/sec conversion
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),      graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-42,-40},{82,-86}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="AlvGases"),
        Text(
          extent={{-94,2},{6,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{-46,44},{94,24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PACO2"),
        Text(
          extent={{-80,62},{94,52}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PAO2"),
        Text(
          extent={{-94,16},{0,6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VAi"),
        Text(
          extent={{-46,20},{94,4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VAe"),
        Text(
          extent={{-94,-14},{52,-28}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VO2"),
        Text(
          extent={{-94,-36},{66,-50}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VCO2"),
        Text(
          extent={{-94,56},{14,46}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiO2"),
        Text(
          extent={{-94,40},{4,28}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiCO2"),
        Text(
          extent={{-93,72},{10,62}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="PB")}), Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}})));
end AlvGases;
