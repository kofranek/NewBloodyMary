within NewBloodyMary_testing.OSA;
model ctO2content

  Physiolibrary.Types.RealIO.pHInput pH
                                  annotation (Placement(transformation(extent={{-120,70},
            {-80,110}}),          iconTransformation(extent={{-120,32},{
            -100,52}})));
  Physiolibrary.Types.RealIO.PressureInput pCO2(start=5330)
                                   annotation (Placement(transformation(extent={{-120,20},
            {-80,60}}),           iconTransformation(extent={{-120,-10},{
            -100,10}})));
  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-120,
            -20},{-80,20}}),      iconTransformation(extent={{-120,-50},{
            -100,-30}})));
  Physiolibrary.Types.RealIO.PressureInput pO2 annotation (Placement(
        transformation(extent={{-132,-54},{-92,-14}}),iconTransformation(extent={{-120,70},
            {-100,90}})));
  Physiolibrary.Types.RealIO.FractionInput FCOHb
                                   annotation (Placement(transformation(extent={{60,-100},
            {100,-60}}),          iconTransformation(extent={{-10,-10},{
            10,10}},
        rotation=180,
        origin={110,-80})));
  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{60,-60},
            {100,-20}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,-40})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{60,-20},
            {100,20}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,0})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{60,20},
            {100,60}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,40})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
                                   annotation (Placement(transformation(extent={{60,60},
            {100,100}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,80})));

  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-30,-112},{10,-72}}),
                                                    iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={60,-110})));
  Physiolibrary.Types.RealIO.ConcentrationOutput totalO2 annotation (Placement(
        transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={20,-110})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2p
    "dissolved O2 concentration in plasma" annotation (Placement(transformation(
          extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-20,-110})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
    "effective concentration of hemoglobin" annotation (Placement(
        transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-60,-110})));

algorithm
  (totalO2,sO2, cdO2p,ceHb) :=O2totalSI(
    ctHb,
    pO2,
    pH,
    pCO2,
    cDPG,
    FCOHb,
    FMetHb,
    FHbF,
    T);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),
                         graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-60,66},{64,-34}},
          lineColor={28,108,200},
          textString="O2 total")}),         Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end ctO2content;
