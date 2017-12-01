within NewBloodyMary_testing.Parts;
model TestToolVenousBlood

  VenousO2CO2 VenousBlood
    annotation (Placement(transformation(extent={{-36,-68},{38,10}})));
  bloodPO2PCO2 ArterialBlood
    annotation (Placement(transformation(extent={{-60,34},{2,94}})));
  Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
          "kg/m3") = 2.93)
    annotation (Placement(transformation(extent={{44,26},{34,34}})));
  Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
    annotation (Placement(transformation(extent={{64,34},{54,44}})));
Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
  annotation (Placement(transformation(extent={{72,46},{60,54}})));
Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
  annotation (Placement(transformation(extent={{50,60},{38,68}})));
Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
  annotation (Placement(transformation(extent={{76,66},{66,74}})));
  Physiolibrary.Types.RealIO.PressureInput PaO2 annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={-21,19}), iconTransformation(extent={{-120,80},{-100,100}})));
  Physiolibrary.Types.RealIO.PressureInput PaCO2 annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={-9,19}), iconTransformation(extent={{-120,60},{-100,80}})));
  Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
        transformation(extent={{-92,18},{-76,34}}), iconTransformation(extent={{
            -120,40},{-100,60}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cHb annotation (Placement(
        transformation(extent={{-92,36},{-72,56}}), iconTransformation(extent={{
            -120,-60},{-100,-40}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cAlb annotation (Placement(
        transformation(extent={{-64,-102},{-48,-86}}), iconTransformation(
          extent={{-120,-80},{-100,-60}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cPi annotation (Placement(
        transformation(extent={{-38,-96},{-22,-80}}), iconTransformation(extent=
           {{-120,-100},{-100,-80}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput QCO annotation (Placement(
        transformation(extent={{-88,-20},{-72,-4}}), iconTransformation(extent={
            {-120,20},{-100,40}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{-92,-6},{-76,10}}), iconTransformation(extent={{
            -120,0},{-100,20}})));
  Physiolibrary.Types.RealIO.FractionInput RQ annotation (Placement(
        transformation(extent={{-102,-12},{-84,6}}), iconTransformation(extent={
            {-120,-20},{-100,0}})));
  Physiolibrary.Types.RealIO.TemperatureInput bloodTemp annotation (Placement(
        transformation(extent={{-124,78},{-102,100}}), iconTransformation(
          extent={{-120,-40},{-100,-20}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
        transformation(extent={{100,8},{120,28}}),  iconTransformation(extent={{100,8},
            {120,28}})));
  Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
          extent={{100,-68},{120,-48}}),
                                       iconTransformation(extent={{100,-68},
            {120,-48}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdO2
    "concentration of dissolved O2 in plasma" annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={-58,18}), iconTransformation(extent={{100,-20},{120,0}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2
    "concentration of dissolved CO2 in plasma" annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        rotation=270,
        origin={-49,19}), iconTransformation(extent={{100,-44},{120,-24}})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctO2v
    "total concentration of O2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={56,2}),   iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,85})));
  Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2v
    "total concentration of CO2 in venous blood (in mmol/l)" annotation (
      Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={61,-5}),  iconTransformation(
        extent={{-7,-7},{7,7}},
        rotation=0,
        origin={107,71})));
equation
  //O2.conc = VenousBlood.ctO2v;
  // CO2.conc = VenousBlood.ctCO2v;
  //O2.q = VenousBlood.ctO2v*QCO;
  //CO2.q = VenousBlood.ctCO2v*QCO;
  connect(DPG.y, ArterialBlood.cDPG) annotation (Line(points={{64.75,70},{
          30,70},{30,76},{5.1,76}}, color={0,0,127}));
  connect(DPG.y, VenousBlood.cDPG) annotation (Line(points={{64.75,70},{64,
          70},{64,72},{64,76},{84,76},{84,-90},{-9.36,-90},{-9.36,-68}},
        color={0,0,127}));
  connect(FMetHb.y, ArterialBlood.FMetHb) annotation (Line(points={{36.5,64},
          {22,64},{22,70},{5.1,70}}, color={0,0,127}));
  connect(FMetHb.y, VenousBlood.FMetHb) annotation (Line(points={{36.5,64},
          {36.5,56},{82,56},{82,48},{82,-102},{-1.22,-102},{-1.22,-68}},
                                                                     color=
          {0,0,127}));
  connect(FHbF.y, ArterialBlood.FHbF) annotation (Line(points={{58.5,50},{
          32,50},{32,60},{10,60},{10,64},{5.1,64}}, color={0,0,127}));
  connect(FHbF.y, VenousBlood.FHbF) annotation (Line(points={{58.5,50},{54,
          50},{54,54},{80,54},{80,-94},{8.4,-94},{8.4,-68}}, color={0,0,127}));
  connect(pCO.y, ArterialBlood.pCO) annotation (Line(points={{52.75,39},{
          26.375,39},{26.375,58},{5.1,58}}, color={0,0,127}));
  connect(pCO.y, VenousBlood.pCO) annotation (Line(points={{52.75,39},{
          52.75,32},{78,32},{78,-84},{17.28,-84},{17.28,-67.22}}, color={0,
          0,127}));
  connect(ctGlb.y, ArterialBlood.ctGlb) annotation (Line(points={{32.75,30},
          {20,30},{20,52},{5.1,52}}, color={0,0,127}));
  connect(ctGlb.y, VenousBlood.ctGlb) annotation (Line(points={{32.75,30},{
          32,30},{32,24},{32,22},{76,22},{76,-82},{27.64,-82},{27.64,-68}},
        color={0,0,127}));
  connect(ArterialBlood.ctO2, VenousBlood.ctO2a) annotation (Line(points={{-40.78,
          31.6},{-40.78,-22.37},{-37.85,-22.37}},        color={0,0,127}));
  connect(ArterialBlood.ctCO2, VenousBlood.ctCO2a) annotation (Line(points={{-33.96,
          31.6},{-33.96,10},{-56,10},{-56,-29.39},{-37.85,-29.39}},
        color={0,0,127}));
  connect(VenousBlood.T, bloodTemp) annotation (Line(points={{-37.11,-51.23},{-98.555,
          -51.23},{-98.555,89},{-113,89}}, color={0,0,127}));
  connect(ArterialBlood.T, bloodTemp) annotation (Line(points={{-62.48,87.4},{-98,
          87.4},{-98,89},{-113,89}}, color={0,0,127}));
  connect(ArterialBlood.ctHb, cHb)
    annotation (Line(points={{-63.1,46},{-82,46}}, color={0,0,127}));
  connect(VenousBlood.ctHb, cHb) annotation (Line(points={{-37.48,-43.04},{-68,-43.04},
          {-68,46},{-82,46}}, color={0,0,127}));
  connect(RQ, VenousBlood.RQ) annotation (Line(points={{-93,-3},{-38.5,-3},{-38.5,
          -3.65},{-37.85,-3.65}}, color={0,0,127}));
  connect(VenousBlood.VO2, VO2) annotation (Line(points={{-37.85,2.59},{-57.925,
          2.59},{-57.925,2},{-84,2}}, color={0,0,127}));
  connect(BEox, ArterialBlood.BEox) annotation (Line(points={{-84,26},{
          -24.35,26},{-24.35,33.7}},
                        color={0,0,127}));
  connect(VenousBlood.BEox, ArterialBlood.BEox) annotation (Line(points={{-37.48,
          -36.8},{-64,-36.8},{-64,26},{-24.35,26},{-24.35,33.7}},
                                                                color={0,0,127}));
  connect(VenousBlood.Q, QCO) annotation (Line(points={{-37.85,-9.89},{-52.925,-9.89},
          {-52.925,-12},{-80,-12}}, color={0,0,127}));
  connect(ArterialBlood.pCO2, PaCO2) annotation (Line(points={{-9.78,34},{
          -9.78,30},{-9,30},{-9,19}},
                                color={0,0,127}));
  connect(PaO2, ArterialBlood.pO2) annotation (Line(points={{-21,19},{-21,
          25.5},{-17.84,25.5},{-17.84,34}},
                                        color={0,0,127}));
  connect(cPi, VenousBlood.ctPO4) annotation (Line(points={{-30,-88},{-24,-88},{
          -18.98,-88},{-18.98,-68}}, color={0,0,127}));
  connect(cPi, ArterialBlood.ctPO4) annotation (Line(points={{-30,-88},{-26,-88},
          {-14,-88},{-14,-92},{86,-92},{86,82},{5.1,82}}, color={0,0,127}));
  connect(cAlb, VenousBlood.ctAlb) annotation (Line(points={{-56,-94},{-36,-94},
          {-36,-74},{-28.23,-74},{-28.23,-67.61}}, color={0,0,127}));
  connect(ArterialBlood.ctAlb, VenousBlood.ctAlb) annotation (Line(points={{5.1,
          88},{5.1,90},{88,90},{88,-98},{-36,-98},{-36,-74},{-28.23,-74},{-28.23,
          -67.61}}, color={0,0,127}));
  connect(VenousBlood.pHv, pH) annotation (Line(points={{40.96,-39.92},{
          49.48,-39.92},{49.48,-58},{110,-58}},
                                color={0,0,127}));
  connect(VenousBlood.VCO2, VCO2) annotation (Line(points={{40.59,6.49},{
          47.295,6.49},{47.295,18},{110,18}},
                                       color={0,0,127}));
  connect(ArterialBlood.cdCO2, cdCO2) annotation (Line(points={{-49.46,31.6},
          {-49.46,27.8},{-49,27.8},{-49,19}}, color={0,0,127}));
  connect(ArterialBlood.cdO2, cdO2) annotation (Line(points={{-57.52,31.6},
          {-57.52,26.8},{-58,26.8},{-58,18}}, color={0,0,127}));
  connect(VenousBlood.ctO2v, ctO2v) annotation (Line(points={{40.59,1.03},{46.295,
          1.03},{46.295,2},{56,2}}, color={0,0,127}));
  connect(VenousBlood.ctCO2v, ctCO2v) annotation (Line(points={{40.59,-4.43},{49.295,
          -4.43},{49.295,-5},{61,-5}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})), Icon(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={128,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-68,78},{84,34}},
          lineColor={28,108,200},
          textString="Venous Blood 
Test Tool")}));
end TestToolVenousBlood;
