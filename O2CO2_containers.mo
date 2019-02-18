within ;
package O2CO2_containers
  import NewBloodyMary;
  model O2CO2curves
    Physiolibrary.Types.RealIO.PressureInput PCO2 annotation (Placement(
          transformation(extent={{-76,14},{-58,32}}),   iconTransformation(extent=
             {{-114,66},{-94,86}})));

    Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2_array[numberOfIntervals +
      1]                                                                            annotation (
        Placement(transformation(extent={{92,70},{112,90}}),  iconTransformation(
            extent={{92,-40},{112,-20}})));

    Physiolibrary.Types.RealIO.PressureInput PO2 annotation (Placement(
          transformation(extent={{-68,28},{-50,46}}),    iconTransformation(
            extent={{-114,28},{-94,48}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput ctO2_array[numberOfIntervals +
      1] annotation (Placement(transformation(extent={{94,52},{114,72}}),
          iconTransformation(extent={{92,-76},{112,-56}})));


    parameter Physiolibrary.Types.Pressure dPCO2 = (pCO2max-pCO2min)/numberOfIntervals;
    parameter Physiolibrary.Types.Pressure dPO2 = (pO2max-pO2min)/numberOfIntervals;
    parameter  Physiolibrary.Types.Pressure pCO2min=1;
    parameter  Physiolibrary.Types.Pressure pCO2max=10665.7909932;
    parameter  Physiolibrary.Types.Pressure pO2min=1;
    parameter  Physiolibrary.Types.Pressure pO2max=19998.35811225;
    parameter  Integer numberOfIntervals = 100;
    Physiolibrary.Types.Pressure pCO2array[numberOfIntervals+1];
    Physiolibrary.Types.Pressure pO2array[numberOfIntervals+1];




    Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
          transformation(extent={{-66,38},{-52,52}}),  iconTransformation(extent={
              {-114,-6},{-94,14}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (Placement(
          transformation(extent={{86,14},{106,34}}),  iconTransformation(extent={{88,64},
              {108,84}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
          transformation(extent={{76,22},{96,42}}),iconTransformation(extent={{90,
              38},{110,58}})));
    Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
            extent={{80,0},{100,20}}),   iconTransformation(extent={{92,10},{112,30}})));
    NewBloodyMary_testing.OSA.PO2PCO2 pO2pCO2
      annotation (Placement(transformation(extent={{-28,-48},{58,42}})));
    Physiolibrary.Types.RealIO.TemperatureInput temp annotation (Placement(
          transformation(extent={{-120,-76},{-100,-56}}),
                                                        iconTransformation(extent=
             {{-116,-66},{-94,-44}})));
    Physiolibrary.Types.RealIO.FractionOutput sO2 annotation (Placement(
          transformation(extent={{86,-18},{106,2}}), iconTransformation(extent={{92,
              -16},{112,4}})));
    Modelica.Blocks.Interfaces.RealInput Hb_g_per_dl
      "normal 15 g/dl; mmol/l = Hb_g_dl/16.114" annotation (Placement(
          transformation(extent={{-106,68},{-76,98}}), iconTransformation(extent={
              {-112,-90},{-94,-72}})));
    Modelica.Blocks.Math.Division division
      annotation (Placement(transformation(extent={{-28,72},{-8,92}})));
    Modelica.Blocks.Sources.Constant const(k=1.6114)
      annotation (Placement(transformation(extent={{-60,60},{-40,80}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput ctHb annotation (Placement(
          transformation(extent={{26,74},{46,94}}),iconTransformation(extent={{92,-104},
              {112,-84}})));
    inner ModelSettings modelSettings
      annotation (Placement(transformation(extent={{-94,-94},{-74,-74}})));

      NewBloodyMary_testing.OSA.PO2PCO2 ctCO2_curve[numberOfIntervals+1];
      NewBloodyMary_testing.OSA.PO2PCO2 ctO2_curve[numberOfIntervals+1];

  equation
     pO2pCO2.ctAlb = modelSettings.cAlb;
     pO2pCO2.ctPi = modelSettings.cPi;
     pO2pCO2.cDPG = modelSettings.cDPG;
     pO2pCO2.FMetHb = modelSettings.FMetHb;
     pO2pCO2.FHbCO = modelSettings.FCOHb;
     pO2pCO2.FHbF = modelSettings.FHbF;

     for i in 0:numberOfIntervals loop
      pCO2array[i+1]=pCO2min + i*dPCO2;
      pO2array[i+1]=pO2min + i*dPO2;
    end for;
    for i in 1:numberOfIntervals+1 loop
     //ctCO2_array[i]=pCO2array[i]*2;

     ctCO2_curve[i].ctAlb = modelSettings.cAlb;
     ctCO2_curve[i].ctPi = modelSettings.cPi;
     ctCO2_curve[i].cDPG = modelSettings.cDPG;
     ctCO2_curve[i].FMetHb = modelSettings.FMetHb;
     ctCO2_curve[i].FHbCO = modelSettings.FCOHb;
     ctCO2_curve[i].FHbF = modelSettings.FHbF;
     ctCO2_curve[i].T=temp;
     ctCO2_curve[i].ctHb=ctHb;
     ctCO2_curve[i].BEox=BEox;
     ctCO2_curve[i].pO2=PO2;

     ctCO2_curve[i].pCO2=pCO2array[i];
     ctCO2_array[i]=ctCO2_curve[i].ctCO2;



    //ctO2_array[i]=pO2array[i]*2;


     ctO2_curve[i].ctAlb = modelSettings.cAlb;
     ctO2_curve[i].ctPi = modelSettings.cPi;
     ctO2_curve[i].cDPG = modelSettings.cDPG;
     ctO2_curve[i].FMetHb = modelSettings.FMetHb;
     ctO2_curve[i].FHbCO = modelSettings.FCOHb;
     ctO2_curve[i].FHbF = modelSettings.FHbF;
     ctO2_curve[i].T=temp;
     ctO2_curve[i].ctHb=ctHb;
     ctO2_curve[i].BEox=BEox;
     ctO2_curve[i].pCO2=PCO2;


     ctO2_curve[i].pO2=pO2array[i];
     ctO2_array[i]=ctO2_curve[i].ctO2;

    end for;

    connect(pO2pCO2.pO2,PO2)  annotation (Line(points={{-32.3,32.1},{-49.15,32.1},
            {-49.15,37},{-59,37}}, color={0,0,127}));
    connect(pO2pCO2.pCO2, PCO2) annotation (Line(points={{-32.3,23.1},{-64,23.1},{
            -64,23},{-67,23}}, color={0,0,127}));
    connect(pO2pCO2.T, temp) annotation (Line(points={{-32.3,-48},{-48,-48},{-48,-66},
            {-110,-66}},color={0,0,127}));
    connect(ctO2, pO2pCO2.ctO2) annotation (Line(points={{86,32},{76,32},{76,33},{
            62.3,33}}, color={0,0,127}));
    connect(pO2pCO2.ctCO2, ctCO2)
      annotation (Line(points={{62.3,24},{96,24}}, color={0,0,127}));
    connect(pO2pCO2.pH, pH) annotation (Line(points={{62.3,15},{70,15},{70,10},{90,
            10}}, color={0,0,127}));
    connect(pO2pCO2.sO2, sO2) annotation (Line(points={{62.3,-3},{78,-3},{78,-8},{
            96,-8}}, color={0,0,127}));
    connect(Hb_g_per_dl, division.u1) annotation (Line(points={{-91,83},{-61.5,83},
            {-61.5,88},{-30,88}}, color={0,0,127}));
    connect(const.y, division.u2) annotation (Line(points={{-39,70},{-36,70},{-36,
            76},{-30,76}}, color={0,0,127}));
    connect(pO2pCO2.BEox, BEox) annotation (Line(points={{-32.3,41.1},{-43.15,41.1},
            {-43.15,45},{-59,45}}, color={0,0,127}));
    connect(ctHb, division.y) annotation (Line(points={{36,84},{22,84},{22,82},{-7,
            82}}, color={0,0,127}));
    connect(pO2pCO2.ctHb, division.y) annotation (Line(points={{-32.3,14.1},{-82,14.1},
            {-82,54},{8,54},{8,82},{-7,82}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={244,125,35},
            fillPattern=FillPattern.Solid)}), Diagram(coordinateSystem(
            preserveAspectRatio=false)));
  end O2CO2curves;

  model ModelSettings
     import Physiolibrary.Types.*;


    parameter Physiolibrary.Types.Concentration cAlb= 0.66 annotation(Dialog(tab = "Concentrations"));
  //  parameter Physiolibrary.Types.Concentration cAlbISF = cAlb/3;
   // parameter Physiolibrary.Types.Concentration ctHb= 8.4 annotation(Dialog(tab = "Concentrations"));
    parameter Physiolibrary.Types.Concentration cPi= 1.15 annotation(Dialog(tab = "Concentrations"));
    parameter Physiolibrary.Types.Concentration cDPG= 5 annotation(Dialog(tab = "Concentrations"));
    parameter Physiolibrary.Types.Fraction FMetHb= 0.005 annotation(Dialog(tab = "Concentrations"));
    parameter Physiolibrary.Types.Fraction FCOHb= 0.005 annotation(Dialog(tab = "Concentrations"));
    parameter Physiolibrary.Types.Fraction FHbF= 0.005 annotation(Dialog(tab = "Concentrations"));
  //  parameter Physiolibrary.Types.Temperature Temperature= 310.15 annotation(Dialog(tab = "Concentrations"));
  //  parameter Physiolibrary.Types.Concentration ISFCO2conc_start=24;
   // parameter Physiolibrary.Types.Concentration ISFO2conc_start= 0.05;
  //  parameter Physiolibrary.Types.Concentration ISFBEox_start=0;
  //  parameter Physiolibrary.Types.Concentration ISFHCO3_start = 23.5;

    //  parameter Physiolibrary.Types.AmountOfSubstance ISFCO2solute_start = ISFCO2conc_start*ISFvolume_start annotation(Dialog(enable = false, tab="Calculated vars"));
  //  parameter Physiolibrary.Types.AmountOfSubstance ISFO2solute_start = ISFO2conc_start*ISFvolume_start annotation(Dialog(enable = false, tab="Calculated vars"));
  //  parameter Physiolibrary.Types.AmountOfSubstance ISFBEoxsolute_start = ISFBEox_start*ISFvolume_start annotation(Dialog(enable = false, tab="Calculated vars"));
  //  parameter Physiolibrary.Types.AmountOfSubstance ISFHCO3solute_start = ISFHCO3_start*ISFvolume_start annotation(Dialog(enable = false, tab="Calculated vars"));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Polygon(
            points={{80,100},{40,100},{40,98},{40,60},{-60,-40},{-100,-40},{-100,-80},
                {-80,-60},{-60,-80},{-80,-100},{-40,-100},{-40,-60},{60,40},{100,40},
                {100,80},{80,60},{60,80},{80,100}},
            lineColor={0,0,0},
            fillColor={28,108,200},
            fillPattern=FillPattern.Solid), Polygon(
            points={{-80,100},{-40,100},{-40,98},{-40,60},{60,-40},{100,-40},{100,
                -80},{80,-60},{60,-80},{80,-100},{40,-100},{40,-60},{-60,40},{-100,
                40},{-100,80},{-80,60},{-60,80},{-80,100}},
            lineColor={0,0,0},
            fillColor={238,46,47},
            fillPattern=FillPattern.Solid)}),                      Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end ModelSettings;

  package Test
    model testO2CO2curves
      Physiolibrary.Types.Constants.PressureConst PCO2(k=5332.8954966)
        annotation (Placement(transformation(extent={{-84,78},{-76,86}})));
      Physiolibrary.Types.Constants.PressureConst PO2(k=13332.2387415)
        annotation (Placement(transformation(extent={{-84,62},{-76,70}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-88,46},{-80,54}})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-76,-8},{-68,0}})));
      Modelica.Blocks.Sources.Constant Hb_g_per_dl(k=15)
        annotation (Placement(transformation(extent={{-88,-48},{-68,-28}})));
      O2CO2curves o2CO2curves(
        numberOfIntervals=100,
        pCO2min=133.322387415,
        pO2min=133.322387415)
        annotation (Placement(transformation(extent={{-6,6},{50,70}})));
    equation
      connect(o2CO2curves.PCO2, PCO2.y) annotation (Line(points={{-7.12,62.32},
              {-26,62.32},{-26,82},{-75,82}}, color={0,0,127}));
      connect(o2CO2curves.PO2, PO2.y) annotation (Line(points={{-7.12,50.16},{
              -36,50.16},{-36,66},{-75,66}}, color={0,0,127}));
      connect(o2CO2curves.BEox, BEox.y) annotation (Line(points={{-7.12,39.28},
              {-50,39.28},{-50,50},{-79,50}}, color={0,0,127}));
      connect(o2CO2curves.temp, temp.y) annotation (Line(points={{-7.4,20.4},{
              -50,20.4},{-50,-4},{-67,-4}}, color={0,0,127}));
      connect(Hb_g_per_dl.y, o2CO2curves.Hb_g_per_dl) annotation (Line(points={
              {-67,-38},{-36,-38},{-36,12.08},{-6.84,12.08}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end testO2CO2curves;
  end Test;
  annotation (uses(Physiolibrary(version="2.3.2-beta"), Modelica(version=
            "3.2.2")));
end O2CO2_containers;
