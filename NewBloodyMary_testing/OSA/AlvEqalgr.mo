within NewBloodyMary_testing.OSA;
model AlvEqalgr

  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-70,29},
            {-54,45}}),           iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,28})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation (Placement(
        transformation(extent={{-34,39},{-16,57}}), iconTransformation(extent={{-112,10},
            {-100,22}})));
  Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation (Placement(
        transformation(extent={{-32,68},{-16,84}}), iconTransformation(extent={{-112,-2},
            {-100,10}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cHb(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{8,8},{-8,-8}},
        rotation=180,
        origin={-78,4}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-8})));
  Physiolibrary.Types.RealIO.ConcentrationInput cAlb(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{7,7},{-7,-7}},
        rotation=180,
        origin={-73,-7}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-20})));
  Physiolibrary.Types.RealIO.ConcentrationInput cPi(displayUnit="mmol/l")
    "concentration of total haemoglobin in whole blood (8.4)" annotation (
      Placement(transformation(
        extent={{7,7},{-7,-7}},
        rotation=180,
        origin={-85,-13}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-32})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-65,-25}),        iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-44})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-72,-34}),        iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-56})));
  Physiolibrary.Types.RealIO.FractionInput FCOHb annotation (Placement(
        transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={-75,-46}),
                         iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-68})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{-8,-8},
            {8,8}},
        rotation=0,
        origin={-78,-56}),        iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,-80})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
            {7,7}},
        rotation=0,
        origin={-68,-65}),        iconTransformation(extent={{-112,-98},{-100,-86}})));
  Physiolibrary.Types.RealIO.PressureOutput PAO2 annotation (Placement(
        transformation(extent={{36,41},{50,55}}), iconTransformation(extent=
           {{100,76},{120,96}})));
  Physiolibrary.Types.RealIO.PressureOutput PACO2 annotation (Placement(
        transformation(extent={{36,70},{48,82}}), iconTransformation(extent=
           {{100,58},{120,78}})));
  Physiolibrary.Types.RealIO.pHOutput pHpc annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,3}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,52})));
  Physiolibrary.Types.RealIO.ConcentrationOutput HCO3pc(displayUnit=
        "mmol/l") "outgoing concentration of HCO3" annotation (Placement(
        transformation(
        extent={{-7,-7.5},{7,7.5}},
        rotation=0,
        origin={87,-6.5}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,34})));
  Physiolibrary.Types.RealIO.FractionOutput sO2pc annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={88,-16}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,18})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CpcCO2 annotation (
      Placement(transformation(
        extent={{-7,-6.5},{7,6.5}},
        rotation=0,
        origin={87,-53.5}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-66})));
  Physiolibrary.Types.RealIO.ConcentrationOutput CpcO2 annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={87,-44}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={110,-46})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
        transformation(extent={{-28,-78},{12,-38}}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,40})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
        transformation(extent={{-28,-78},{12,-38}}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,52})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput VA annotation (Placement(
        transformation(extent={{100,-96},{120,-76}}), iconTransformation(
          extent={{100,-96},{120,-76}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
        transformation(extent={{100,-8},{120,12}}), iconTransformation(
          extent={{100,-8},{120,12}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{100,-20},{120,0}}), iconTransformation(
          extent={{100,-26},{120,-6}})));
  Physiolibrary.Types.RealIO.FractionInput FiO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-72,-34}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,76})));
  Physiolibrary.Types.RealIO.FractionInput FiCO2 annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-72,-34}), iconTransformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-106,64})));
  Physiolibrary.Types.RealIO.PressureInput PB annotation (Placement(
        transformation(extent={{-148,66},{-108,106}}), iconTransformation(
          extent={{-112,82},{-100,94}})));

  Real VA_l_per_min;
  Real VO2_l_per_min;
  Real VCO2_l_per_min;
  Real PAO2_kPa;
  Real PACO2_kPA;
  Real PpcO2_kPA;
  Real PpcCO2_kPA;
  Real Q_l_per_min;
  Real PB_mmHg;
  Real temp_cels;
  Real VAi_l_per_min;

algorithm
  (VA_l_per_min,
  VO2_l_per_min,
  VCO2_l_per_min,
  CpcO2, CpcCO2,
  PAO2_kPa,
  PACO2_kPA,
  PpcO2_kPA,
  PpcCO2_kPA,
  sO2pc,
  pHpc,
  HCO3pc)
 :=AlvEquil(
    VAi_l_per_min,
    FiO2,
    FiCO2,
    temp_cels,
    PB_mmHg,
    5,
    CvO2,
    CvCO2,
    BEox,
    cHb,
    cAlb,
    cPi,
    cDPG,
    FCOHb,
    FMetHb,
    FHbF);

equation

  temp_cels =  T-273.15;
  //from �C to K conversion
  PB_mmHg = PB / 133.322365;
  // from mmHg to Pa conversion
  VAi_l_per_min = VAi * 60000;
  // from m^3/sec to l/min conversion
  Q_l_per_min = Q * 60000;
  // from m^3/sec to l/min conversion
  VA = VA_l_per_min / 60000;
  //from l/min to m^3/sec conversion
  VO2 = VO2_l_per_min / 60 / 1000;
  //from mmol/min to mol/sec conversion
  VCO2 = VCO2_l_per_min / 60 / 1000;
  //from mmol/min to mol/sec conversion
  PAO2 = PAO2_kPa * 1000;
  //from kPa to Pa conversion
  PACO2 = PACO2_kPA * 1000; //from kPa to Pa conversion
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}),            graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-66,80},{58,34}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="AlvEqalgr"),
        Text(
          extent={{-96,32},{-56,24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="BEox"),
        Text(
          extent={{-22,6},{22,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-74,16},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvO2"),
        Text(
          extent={{-28,6},{28,-6}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={-68,4},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="CvCO2"),
        Text(
          extent={{-96,-4},{-48,-14}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cHb"),
        Text(
          extent={{-96,-18},{-56,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cAlb"),
        Text(
          extent={{-96,-29},{-48,-38}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cPi"),
        Text(
          extent={{-96,-40},{-56,-48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="cDPG"),
        Text(
          extent={{-96,-48},{-52,-64}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FMetHb"),
        Text(
          extent={{-96,-60},{-46,-76}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbCO"),
        Text(
          extent={{-96,-76},{-48,-82}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FHbF"),
        Text(
          extent={{-94,-88},{-60,-94}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="T"),
        Text(
          extent={{-28,7},{28,-7}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={66,-45},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CpcO2"),
        Text(
          extent={{-46,3.5},{46,-3.5}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          origin={48,-67.5},
          rotation=180,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="CpcCO2"),
        Text(
          extent={{46,22},{94,10}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="sO2pc"),
        Text(
          extent={{36,36},{94,32}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="HCO3pc"),
        Text(
          extent={{44,56},{94,46}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="pHpc"),
        Text(
          extent={{40,74},{94,60}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PACO2"),
        Text(
          extent={{48,88},{94,82}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="PAO2"),
        Text(
          extent={{-96,44},{-64,36}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="Q"),
        Text(
          extent={{-96,56},{-62,48}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="VAi"),
        Text(
          extent={{36,-82},{94,-96}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VA"),
        Text(
          extent={{52,6},{94,-4}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          horizontalAlignment=TextAlignment.Right,
          fontSize=12,
          textString="VO2"),
        Text(
          extent={{50,-12},{94,-24}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Right,
          textString="VCO2"),
        Text(
          extent={{-96,80},{-48,70}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiO2"),
        Text(
          extent={{-96,70},{-56,60}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="FiCO2"),
        Text(
          extent={{-95,92},{-54,84}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          fontSize=12,
          horizontalAlignment=TextAlignment.Left,
          textString="PB")}));
end AlvEqalgr;
