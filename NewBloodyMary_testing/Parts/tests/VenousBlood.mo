within NewBloodyMary_testing.Parts.tests;
model VenousBlood

  Parts.VenousO2CO2 VenousBlood
    annotation (Placement(transformation(extent={{-36,-68},{38,10}})));
  Parts.bloodPO2PCO2 ArterialBlood
    annotation (Placement(transformation(extent={{-60,34},{2,94}})));
  Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
    annotation (Placement(transformation(extent={{-28,14},{-18,24}})));
  Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
    annotation (Placement(transformation(extent={{4,18},{14,28}})));
  Physiolibrary.Types.Constants.VolumeDensityOfChargeConst
    volumeDensityOfCharge(k=0)
    annotation (Placement(transformation(extent={{-90,14},{-76,24}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{5,-4},{-5,4}},
        rotation=180,
        origin={-81,46})));
  Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
    annotation (Placement(transformation(extent={{-94,84},{-84,92}})));
  Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
          "kg/l") = 2.93)
    annotation (Placement(transformation(extent={{44,34},{34,42}})));
  Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
    annotation (Placement(transformation(extent={{64,40},{54,50}})));
Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
  annotation (Placement(transformation(extent={{68,52},{56,60}})));
Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
  annotation (Placement(transformation(extent={{50,60},{38,68}})));
Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
  annotation (Placement(transformation(extent={{76,66},{66,74}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctPO4(k=1.16)
    annotation (Placement(transformation(extent={{64,76},{52,84}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
    annotation (Placement(transformation(extent={{44,84},{34,92}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst molarFlowRate(k=
        0.00023333333333333)
    annotation (Placement(transformation(extent={{-90,-2},{-82,6}})));
  Physiolibrary.Types.Constants.FractionConst fraction(k(displayUnit="1")=
         0.8)
    annotation (Placement(transformation(extent={{-86,-16},{-78,-8}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst volumeFlowRate(k=
        8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-84,-32},{-76,-24}})));
equation
  connect(temp.y, ArterialBlood.T) annotation (Line(points={{-82.75,88},{-62.48,
          88},{-62.48,87.4}}, color={0,0,127}));
  connect(ctHb.y, ArterialBlood.ctHb)
    annotation (Line(points={{-74.75,46},{-63.1,46}}, color={0,0,127}));
  connect(volumeDensityOfCharge.y, ArterialBlood.BEox) annotation (Line(
        points={{-74.25,19},{-24.35,19},{-24.35,33.7}},
                                                      color={0,0,127}));
  connect(pO2.y, ArterialBlood.pO2) annotation (Line(points={{-16.75,19},{
          -6,19},{-6,26},{-17.84,26},{-17.84,34}},color={0,0,127}));
  connect(pCO2.y, ArterialBlood.pCO2) annotation (Line(points={{15.25,23},{
          26,23},{26,30},{-9.78,30},{-9.78,34}},   color={0,0,127}));
  connect(ctAlb.y, ArterialBlood.ctAlb)
    annotation (Line(points={{32.75,88},{5.1,88}}, color={0,0,127}));
  connect(ctAlb.y, VenousBlood.ctAlb) annotation (Line(points={{32.75,88},{
          32,88},{32,94},{32,96},{90,96},{90,-94},{-28.23,-94},{-28.23,-67.61}},
        color={0,0,127}));
  connect(ctPO4.y, ArterialBlood.ctPO4) annotation (Line(points={{50.5,80},
          {24,80},{24,82},{5.1,82}}, color={0,0,127}));
  connect(ctPO4.y, VenousBlood.ctPO4) annotation (Line(points={{50.5,80},{
          48,80},{48,94},{86,94},{86,-92},{-18.98,-92},{-18.98,-68}}, color=
         {0,0,127}));
  connect(DPG.y, ArterialBlood.cDPG) annotation (Line(points={{64.75,70},{
          30,70},{30,76},{5.1,76}}, color={0,0,127}));
  connect(DPG.y, VenousBlood.cDPG) annotation (Line(points={{64.75,70},{64,
          70},{64,72},{64,76},{84,76},{84,-90},{-9.36,-90},{-9.36,-68}},
        color={0,0,127}));
  connect(FMetHb.y, ArterialBlood.FMetHb) annotation (Line(points={{36.5,64},
          {22,64},{22,70},{5.1,70}}, color={0,0,127}));
  connect(FMetHb.y, VenousBlood.FMetHb) annotation (Line(points={{36.5,64},
          {54,64},{82,64},{82,62},{82,-88},{-1.22,-88},{-1.22,-68}}, color=
          {0,0,127}));
  connect(FHbF.y, ArterialBlood.FHbF) annotation (Line(points={{54.5,56},{
          32,56},{32,60},{10,60},{10,64},{5.1,64}}, color={0,0,127}));
  connect(FHbF.y, VenousBlood.FHbF) annotation (Line(points={{54.5,56},{54,
          56},{54,62},{80,62},{80,-86},{8.4,-86},{8.4,-68}}, color={0,0,127}));
  connect(pCO.y, ArterialBlood.pCO) annotation (Line(points={{52.75,45},{
          26.375,45},{26.375,58},{5.1,58}}, color={0,0,127}));
  connect(pCO.y, VenousBlood.pCO) annotation (Line(points={{52.75,45},{
          52.75,32},{78,32},{78,-84},{17.28,-84},{17.28,-67.22}}, color={0,
          0,127}));
  connect(ctGlb.y, ArterialBlood.ctGlb) annotation (Line(points={{32.75,38},
          {20,38},{20,52},{5.1,52}}, color={0,0,127}));
  connect(ctGlb.y, VenousBlood.ctGlb) annotation (Line(points={{32.75,38},{
          32,38},{32,24},{32,22},{76,22},{76,-82},{27.64,-82},{27.64,-68}},
        color={0,0,127}));
  connect(ArterialBlood.ctO2, VenousBlood.ctO2a) annotation (Line(points={{-40.78,
          31.6},{-40.78,-22.37},{-37.85,-22.37}},        color={0,0,127}));
  connect(ArterialBlood.ctCO2, VenousBlood.ctCO2a) annotation (Line(points={{-33.96,
          31.6},{-33.96,10},{-56,10},{-56,-29.39},{-37.85,-29.39}},
        color={0,0,127}));
  connect(volumeDensityOfCharge.y, VenousBlood.BEox) annotation (Line(
        points={{-74.25,19},{-62,19},{-62,-36.8},{-37.48,-36.8}}, color={0,
          0,127}));
  connect(ctHb.y, VenousBlood.ctHb) annotation (Line(points={{-74.75,46},{-64,
          46},{-64,-43.04},{-37.48,-43.04}}, color={0,0,127}));
  connect(temp.y, VenousBlood.T) annotation (Line(points={{-82.75,88},{-76,
          88},{-76,50},{-94,50},{-94,-46},{-94,-51.23},{-37.11,-51.23}},
        color={0,0,127}));
  connect(molarFlowRate.y, VenousBlood.VO2) annotation (Line(points={{-81,2},
          {-60,2},{-60,2.59},{-37.85,2.59}}, color={0,0,127}));
  connect(fraction.y, VenousBlood.RQ) annotation (Line(points={{-77,-12},{-68,
          -12},{-68,-3.65},{-37.85,-3.65}}, color={0,0,127}));
  connect(volumeFlowRate.y, VenousBlood.Q) annotation (Line(points={{-75,-28},
          {-58,-28},{-58,-9.89},{-37.85,-9.89}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})));
end VenousBlood;
