within ;
package Simplest "simplest acid-base and electrolyte homesostasis"
  model Alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors
    "SimplestTissue"
    extends AcidBaseBalance.Icons.Alveolus;

    Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
          transformation(extent={{84,-82},{104,-62}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=90,
          origin={-13,101})));
    Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
          transformation(extent={{86,-64},{106,-44}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=90,
          origin={15,101})));
    Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation(Placement(transformation(extent={{-66,-2},
              {-54,10}}),                                                                                                     iconTransformation(extent={{-13,-13},
              {13,13}},                                                                                                    rotation = 0, origin={-59,27})));
    AcidBaseBalance.Interfaces.BloodPort_in bloodPort_in annotation (Placement(
          transformation(extent={{-106,64},{-86,84}}), iconTransformation(
            extent={{-44,50},{-24,70}})));
    AcidBaseBalance.Interfaces.BloodPort_out bloodPort_out annotation (
        Placement(transformation(extent={{86,64},{106,84}}), iconTransformation(
            extent={{14,52},{34,72}})));

    Physiolibrary.Types.RealIO.FractionInput Fsh "shunt fraction" annotation (
       Placement(transformation(extent={{-68,-38},{-54,-24}}),
          iconTransformation(extent={{-44,-86},{-26,-68}})));
    Physiolibrary.Types.RealIO.FractionInput F_q1 "alveolar perfusion fraction" annotation (
        Placement(transformation(extent={{-66,-52},{-52,-38}}),
          iconTransformation(extent={{-80,-42},{-62,-24}})));
    Physiolibrary.Types.RealIO.FractionInput F_VAi1 "alveolar ventilation fraction" annotation (
        Placement(transformation(extent={{-68,-68},{-52,-52}}),
          iconTransformation(extent={{-80,-22},{-62,-4}})));
    AcidBaseBalance.Acidbase.OSA.AlvEq_2units_with_shunts_and_mixing alvEq_2units_with_shunts_and_mixing
      annotation (Placement(transformation(extent={{-40,-82},{52,32}})));
    Physiolibrary.Types.RealIO.PressureOutput PaO2( start=13333) annotation (Placement(
          transformation(extent={{80,2},{100,22}}), iconTransformation(extent={{64,
              12},{84,32}})));
    Physiolibrary.Types.RealIO.PressureOutput PaCO2( start = 5333) annotation (Placement(
          transformation(extent={{80,-8},{100,12}}), iconTransformation(extent={{64,
              -12},{84,8}})));
    Physiolibrary.Types.RealIO.pHOutput pHa( start=7.4) annotation (Placement(transformation(
            extent={{80,-20},{100,0}}), iconTransformation(extent={{64,-36},{84,-16}})));
  equation
    // hydraulics
    bloodPort_in.bloodFlow + bloodPort_out.bloodFlow = 0;
    bloodPort_in.pressure = bloodPort_out.pressure;

    assert(bloodPort_in.bloodFlow > 0, "backward flow in lungs detected - the computation of blood concentrations are not designed for that", AssertionLevel.error);

    // output concetration - normal direction
  //   bloodPort_out.conc[1] = alvEq_2units_with_shunts_and_mixing.ctO2a;
  //   bloodPort_out.conc[2] = alvEq_2units_with_shunts_and_mixing.ctCO2a;
    bloodPort_out.conc[1] = homotopy(alvEq_2units_with_shunts_and_mixing.ctO2a, 8);
    bloodPort_out.conc[2] = homotopy(alvEq_2units_with_shunts_and_mixing.ctCO2a,20);

    bloodPort_out.conc[3] =   inStream(bloodPort_in.conc[3]);
    bloodPort_out.ions = inStream(bloodPort_in.ions);
    // backwards direction - forbidden, yet we must write equations
    bloodPort_in.conc[1] = alvEq_2units_with_shunts_and_mixing.ctO2a;
    bloodPort_in.conc[2] = alvEq_2units_with_shunts_and_mixing.ctCO2a;
    bloodPort_in.conc[3] =   inStream(bloodPort_out.conc[3]);
    bloodPort_in.ions = inStream(bloodPort_out.ions);

    // connecting the input connectors
    alvEq_2units_with_shunts_and_mixing.Q = bloodPort_in.bloodFlow;
    alvEq_2units_with_shunts_and_mixing.CvO2 = inStream(bloodPort_in.conc[1]);
    alvEq_2units_with_shunts_and_mixing.CvCO2 = inStream(bloodPort_in.conc[2]);
    alvEq_2units_with_shunts_and_mixing.BEox  = inStream(bloodPort_in.conc[3]);

    connect(alvEq_2units_with_shunts_and_mixing.VAi, VAi) annotation (Line(points=
           {{-39.2,0.65},{-50.6,0.65},{-50.6,4},{-60,4}}, color={0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.Fsh, Fsh) annotation (Line(points={{-39.4,
            -31.7688},{-48.7,-31.7688},{-48.7,-31},{-61,-31}},        color={0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.F_q1, F_q1) annotation (Line(
          points={{-39.4,-44.5938},{-48.7,-44.5938},{-48.7,-45},{-59,-45}}, color=
           {0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.F_VAi1, F_VAi1) annotation (Line(
          points={{-39.8,-58.8438},{-47.9,-58.8438},{-47.9,-60},{-60,-60}}, color=
           {0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.VO2, VO2) annotation (Line(points={{53.8,
            -21.0813},{68,-21.0813},{68,-54},{96,-54}},       color={0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.VCO2, VCO2) annotation (Line(
          points={{53.6,-27.85},{74,-28},{74,-72},{94,-72}}, color={0,0,127}));
    connect(PaO2, alvEq_2units_with_shunts_and_mixing.PaO2) annotation (Line(
          points={{90,12},{62,12},{62,12.05},{54,12.05}}, color={0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.PaCO2, PaCO2) annotation (Line(
          points={{54,4.925},{58,4.925},{58,2},{90,2}}, color={0,0,127}));
    connect(alvEq_2units_with_shunts_and_mixing.pHa, pHa) annotation (Line(points=
           {{54,-2.2},{56,-2.2},{56,-2},{58,-2},{58,-10},{90,-10}}, color={0,0,127}));
    annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
          graphics={Text(
            extent={{-86,114},{-16,88}},
            lineColor={28,108,200},
            textString="CO2"), Text(
            extent={{14,114},{82,86}},
            lineColor={28,108,200},
            textString="O2")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
          graphics={
          Line(
            points={{-42,-18},{-90,-18},{-90,62}},
            color={238,46,47},
            arrow={Arrow.Open,Arrow.None},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{-42,-12},{-86,-12},{-86,68}},
            color={238,46,47},
            arrow={Arrow.Open,Arrow.None},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{-42,-4},{-84,-4},{-84,74}},
            color={238,46,47},
            arrow={Arrow.Open,Arrow.None},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{-44,12},{-82,12},{-82,78}},
            color={238,46,47},
            arrow={Arrow.Open,Arrow.None},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{58,-34},{96,-34},{96,66}},
            color={238,46,47},
            arrow={Arrow.None,Arrow.Open},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{58,-42},{100,-42},{100,66}},
            color={238,46,47},
            arrow={Arrow.None,Arrow.Open},
            thickness=0.5,
            pattern=LinePattern.Dash),
          Line(
            points={{-78,74},{90,74}},
            color={238,46,47},
            arrow={Arrow.None,Arrow.Open},
            thickness=0.5,
            pattern=LinePattern.Dash)}));
  end Alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors;

  package Test
    model TestVentilation
      Alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors
        annotation (Placement(transformation(extent={{-42,-28},{40,46}})));
      AcidBaseBalance.Package.Junction_T junction_T(
        useO2_input=true,
        useCO2_input=true,
        useFlow_input=false)
        annotation (Placement(transformation(extent={{24,-86},{-12,-48}})));
        AcidBaseBalance.BloodComponents.Pump
                             leftHeart
          annotation (Placement(transformation(extent={{-10,-10},{10,10}},
              rotation=270,
              origin={56,-32})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2_MetabolicProduction(
          SoluteFlow=0.00016666666666667)
        annotation (Placement(transformation(extent={{-10,-102},{-30,-82}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
        O2_MetabolicConsumption(SoluteFlow=0.00018333333333333)
        annotation (Placement(transformation(extent={{22,-110},{42,-90}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "ml/min") = 8.25e-5)
        annotation (Placement(transformation(extent={{-91,42},{-83,48}})));
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-60,0},{-52,8}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-60,-16},{-52,-8}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-44,-34},{-36,-26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CaridiacOutput(k(
            displayUnit="l/min") = 8.3333333333333e-5) annotation (Placement(
            transformation(
            extent={{-4,-4},{4,4}},
            rotation=180,
            origin={84,-30})));
      inner AcidBaseBalance.Interfaces.ModelSettings
                                     modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-92,70},{-72,90}})));
      AcidBaseBalance.BloodComponents.BloodResistor
                                    bloodResistor(Resistance=799934324490)
        annotation (Placement(transformation(extent={{52,-80},{36,-56}})));
      AcidBaseBalance.BloodComponents.BloodElasticVesselCompliance
        bloodElasticVesselCompliance
        annotation (Placement(transformation(extent={{60,-60},{80,-40}})));
    equation
      connect(junction_T.bloodPort_out,
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.bloodPort_in)
        annotation (Line(
          points={{-12,-67},{-68,-67},{-68,31.2},{-14.94,31.2}},
          color={28,108,200},
          thickness=1));
      connect(leftHeart.bloodPort_in,
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.bloodPort_out)
        annotation (Line(
          points={{56,-23},{56,30},{8.84,30},{8.84,31.94}},
          color={28,108,200},
          thickness=1));
      connect(O2_MetabolicConsumption.q_in, junction_T.port_O2) annotation (
          Line(
          points={{22,-100},{18,-100},{18,-67},{17.16,-67}},
          color={107,45,134},
          thickness=1));
      connect(CO2_MetabolicProduction.q_out, junction_T.port_CO2) annotation (
          Line(
          points={{-30,-92},{-42,-92},{-42,-78},{10.68,-78},{10.68,-67}},
          color={107,45,134},
          thickness=1));
      connect(alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.VAi,
        VAi.y) annotation (Line(points={{-25.19,18.99},{-54,18.99},{-54,45},{
              -82,45}}, color={0,0,127}));
      connect(FAi1.y,
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.F_VAi1)
        annotation (Line(points={{-51,4},{-40,4},{-40,4.19},{-30.11,4.19}},
            color={0,0,127}));
      connect(Fq1.y,
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.F_q1)
        annotation (Line(points={{-51,-12},{-42,-12},{-42,-3.21},{-30.11,-3.21}},
            color={0,0,127}));
      connect(Fsh.y,
        alveolocapillary_2Units_with_shunts_and_mixing_direct_connectors.Fsh)
        annotation (Line(points={{-35,-30},{-26,-30},{-26,-19.49},{-15.35,
              -19.49}}, color={0,0,127}));
      connect(CaridiacOutput.y, leftHeart.volumeFlowRate) annotation (Line(
            points={{79,-30},{70,-30},{70,-32},{60,-32}}, color={0,0,127}));
      connect(junction_T.bloodPort_in, bloodResistor.bloodPort_out) annotation (
         Line(
          points={{23.64,-67},{29.82,-67},{29.82,-68},{36.8,-68}},
          color={28,108,200},
          thickness=1));
      connect(leftHeart.bloodPort_out, bloodElasticVesselCompliance.bloodPort_in)
        annotation (Line(
          points={{56,-41},{56,-50},{60.2,-50}},
          color={28,108,200},
          thickness=1));
      connect(bloodElasticVesselCompliance.bloodPort_out, bloodResistor.bloodPort_in)
        annotation (Line(
          points={{80,-50},{82,-50},{82,-68},{51.2,-68}},
          color={28,108,200},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestVentilation;

    model TestVentilation_withoutStream
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "l/min") = 8.3333333333333e-5)
        annotation (Placement(transformation(extent={{-97,64},{-89,70}})));
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-68,14},{-60,22}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-72,28},{-64,36}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-64,36},{-56,44}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 8.3333333333333e-5) annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,56})));
      inner AcidBaseBalance.Interfaces.ModelSettings
                                     modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-98,80},{-78,100}})));
      AcidBaseBalance.Acidbase.OSA.AlvEq_2units_with_shunts_and_mixing alvEq_2units_with_shunts_and_mixing
        annotation (Placement(transformation(extent={{-40,8},{40,82}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-66,78},{-58,86}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00018333333333333)
        annotation (Placement(transformation(extent={{-78,-50},{-70,-42}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
            0.00016666666666667)
        annotation (Placement(transformation(extent={{-80,-68},{-72,-60}})));
      SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-32,-60},{22,-14}})));
    equation
      connect(VAi.y, alvEq_2units_with_shunts_and_mixing.VAi) annotation (Line(
            points={{-88,67},{-62,67},{-62,61.65},{-39.3043,61.65}}, color={0,0,
              127}));
      connect(alvEq_2units_with_shunts_and_mixing.Q, CardiacOutput.y)
        annotation (Line(points={{-39.3043,58.875},{-42.6521,58.875},{-42.6521,
              56},{-85,56}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.Fsh, Fsh.y) annotation (Line(
            points={{-39.4783,40.6063},{-46.7391,40.6063},{-46.7391,40},{-55,40}},
            color={0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing.F_q1) annotation (Line(
            points={{-63,32},{-52,32},{-52,32.2813},{-39.4783,32.2813}}, color=
              {0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.F_VAi1, FAi1.y) annotation (
          Line(points={{-39.8261,23.0313},{-55.913,23.0313},{-55.913,18},{-59,
              18}}, color={0,0,127}));
      connect(BEox.y, alvEq_2units_with_shunts_and_mixing.BEox) annotation (
          Line(points={{-57,82},{-48,82},{-48,68.125},{-40,68.125}}, color={0,0,
              127}));
      connect(simplestTissue.O2a, alvEq_2units_with_shunts_and_mixing.ctO2a)
        annotation (Line(points={{-32,-17.22},{-48,-17.22},{-48,-4},{66,-4},{66,
              38.7563},{41.5652,38.7563}}, color={0,0,127}));
      connect(simplestTissue.CO2a, alvEq_2units_with_shunts_and_mixing.ctCO2a)
        annotation (Line(points={{-32,-22.74},{-56,-22.74},{-56,0},{58,0},{58,
              34.5938},{41.5652,34.5938}}, color={0,0,127}));
      connect(simplestTissue.Q, CardiacOutput.y) annotation (Line(points={{
              -32.81,-37.23},{-76,-37.23},{-76,56},{-85,56}}, color={0,0,127}));
      connect(VO2.y, simplestTissue.MO2) annotation (Line(points={{-69,-46},{
              -52,-46},{-52,-45.05},{-33.35,-45.05}}, color={0,0,127}));
      connect(VCO2.y, simplestTissue.MCO2) annotation (Line(points={{-71,-64},{
              -54,-64},{-54,-52.41},{-32.81,-52.41}}, color={0,0,127}));
      connect(simplestTissue.O2v, alvEq_2units_with_shunts_and_mixing.CvO2)
        annotation (Line(points={{21.46,-17.68},{28,-17.68},{28,2},{-86,2},{-86,
              53.325},{-39.3043,53.325}}, color={0,0,127}));
      connect(simplestTissue.CO2v, alvEq_2units_with_shunts_and_mixing.CvCO2)
        annotation (Line(points={{21.46,-22.74},{32,-22.74},{32,6},{-82,6},{-82,
              50.55},{-39.3043,50.55}}, color={0,0,127}));
      connect(simplestTissue.BEox, alvEq_2units_with_shunts_and_mixing.BEox)
        annotation (Line(points={{-32,-28.26},{-74,-28.26},{-74,70},{-48,70},{
              -48,68.125},{-40,68.125}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestVentilation_withoutStream;

    model TestVentilation_withoutStream2
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-68,14},{-60,22}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-72,28},{-64,36}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-64,36},{-56,44}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 8.3333333333333e-5) annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,56})));
      inner AcidBaseBalance.Interfaces.ModelSettings
                                     modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-98,80},{-78,100}})));
      AcidBaseBalance.Acidbase.OSA.AlvEq_2units_with_shunts_and_mixing alvEq_2units_with_shunts_and_mixing
        annotation (Placement(transformation(extent={{-40,8},{40,82}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-66,78},{-58,86}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00018333333333333)
        annotation (Placement(transformation(extent={{-78,-50},{-70,-42}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
            0.00016666666666667)
        annotation (Placement(transformation(extent={{-80,-68},{-72,-60}})));
      SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-32,-60},{22,-14}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "l/min") = 4.8333333333333e-5)
        annotation (Placement(transformation(extent={{-97,64},{-89,70}})));
    equation
      connect(alvEq_2units_with_shunts_and_mixing.Q, CardiacOutput.y)
        annotation (Line(points={{-39.3043,58.875},{-42.6521,58.875},{-42.6521,
              56},{-85,56}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.Fsh, Fsh.y) annotation (Line(
            points={{-39.4783,40.6063},{-46.7391,40.6063},{-46.7391,40},{-55,40}},
            color={0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing.F_q1) annotation (Line(
            points={{-63,32},{-52,32},{-52,32.2813},{-39.4783,32.2813}}, color=
              {0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.F_VAi1, FAi1.y) annotation (
          Line(points={{-39.8261,23.0313},{-55.913,23.0313},{-55.913,18},{-59,
              18}}, color={0,0,127}));
      connect(BEox.y, alvEq_2units_with_shunts_and_mixing.BEox) annotation (
          Line(points={{-57,82},{-48,82},{-48,68.125},{-40,68.125}}, color={0,0,
              127}));
      connect(simplestTissue.O2a, alvEq_2units_with_shunts_and_mixing.ctO2a)
        annotation (Line(points={{-32,-17.22},{-48,-17.22},{-48,-4},{66,-4},{66,
              38.7563},{41.5652,38.7563}}, color={0,0,127}));
      connect(simplestTissue.CO2a, alvEq_2units_with_shunts_and_mixing.ctCO2a)
        annotation (Line(points={{-32,-22.74},{-56,-22.74},{-56,0},{58,0},{58,
              34.5938},{41.5652,34.5938}}, color={0,0,127}));
      connect(simplestTissue.Q, CardiacOutput.y) annotation (Line(points={{
              -32.81,-37.23},{-76,-37.23},{-76,56},{-85,56}}, color={0,0,127}));
      connect(VO2.y, simplestTissue.MO2) annotation (Line(points={{-69,-46},{
              -52,-46},{-52,-45.05},{-33.35,-45.05}}, color={0,0,127}));
      connect(VCO2.y, simplestTissue.MCO2) annotation (Line(points={{-71,-64},{
              -54,-64},{-54,-52.41},{-32.81,-52.41}}, color={0,0,127}));
      connect(simplestTissue.O2v, alvEq_2units_with_shunts_and_mixing.CvO2)
        annotation (Line(points={{21.46,-17.68},{28,-17.68},{28,2},{-86,2},{-86,
              53.325},{-39.3043,53.325}}, color={0,0,127}));
      connect(simplestTissue.CO2v, alvEq_2units_with_shunts_and_mixing.CvCO2)
        annotation (Line(points={{21.46,-22.74},{32,-22.74},{32,6},{-82,6},{-82,
              50.55},{-39.3043,50.55}}, color={0,0,127}));
      connect(simplestTissue.BEox, alvEq_2units_with_shunts_and_mixing.BEox)
        annotation (Line(points={{-32,-28.26},{-74,-28.26},{-74,70},{-48,70},{
              -48,68.125},{-40,68.125}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.VAi, VAi.y) annotation (Line(
            points={{-39.3043,61.65},{-62.6521,61.65},{-62.6521,67},{-88,67}},
            color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestVentilation_withoutStream2;
  end Test;

  model SimplestTissue


    Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
          transformation(extent={{-100,12},{-88,24}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-103,-67})));
    Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
          transformation(extent={{-100,24},{-88,36}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-105,-35})));





    Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
          transformation(extent={{-102,36},{-86,52}}),   iconTransformation(
            extent={{-114,-12},{-92,10}})));
    Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
          transformation(extent={{-98,66},{-84,80}}),   iconTransformation(extent=
             {{-110,76},{-90,96}})));
    Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
          transformation(extent={{-100,54},{-86,68}}),  iconTransformation(extent={{-110,52},
              {-90,72}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
          transformation(extent={{24,58},{36,70}}),     iconTransformation(extent=
             {{88,52},{108,72}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
          transformation(extent={{18,68},{30,80}}),     iconTransformation(extent=
             {{88,74},{108,94}})));
    BloodGases bloodGases
      annotation (Placement(transformation(extent={{-52,32},{-8,74}})));
    AcidBaseBalance.Acidbase.OSA.O2CO2
          venBlood
      annotation (Placement(transformation(extent={{18,-48},{74,38}})));
    Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
          transformation(extent={{-30,0},{-16,14}}), iconTransformation(extent=
              {{-110,28},{-90,48}})));
    Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
        Placement(transformation(extent={{88,20},{102,34}}), iconTransformation(
            extent={{90,14},{110,34}})));
    Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
        Placement(transformation(extent={{90,12},{104,26}}), iconTransformation(
            extent={{90,-6},{110,14}})));
    Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
          transformation(
          extent={{-7,-7},{7,7}},
          rotation=0,
          origin={95,9}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-20})));
    Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
      "outgoing concentration of HCO3" annotation (Placement(transformation(
          extent={{-7,-7},{7,7}},
          rotation=0,
          origin={97,-2}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-40})));
    Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
          transformation(
          extent={{-6,-6},{6,6}},
          rotation=0,
          origin={96,-12}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-60})));
  equation



    connect(O2a, bloodGases.O2a) annotation (Line(points={{-91,73},{-72.5,73},{
            -72.5,71.06},{-52,71.06}}, color={0,0,127}));
    connect(bloodGases.CO2a, CO2a) annotation (Line(points={{-52,66.44},{-74,
            66.44},{-74,61},{-93,61}}, color={0,0,127}));
    connect(bloodGases.Q, Q) annotation (Line(points={{-52.66,52.79},{-74,52.79},
            {-74,44},{-94,44}}, color={0,0,127}));
    connect(bloodGases.MO2, MO2) annotation (Line(points={{-53.1,45.65},{-70,
            45.65},{-70,30},{-94,30}}, color={0,0,127}));
    connect(bloodGases.MCO2, MCO2) annotation (Line(points={{-52.66,38.93},{-62,
            38.93},{-62,18},{-94,18}}, color={0,0,127}));
    connect(bloodGases.CO2v, CO2v) annotation (Line(points={{-8.44,66.02},{1.78,
            66.02},{1.78,64},{30,64}}, color={0,0,127}));
    connect(bloodGases.O2v, O2v) annotation (Line(points={{-8.44,70.64},{-2,
            70.64},{-2,74},{24,74}}, color={0,0,127}));
    connect(venBlood.ctO2, O2v) annotation (Line(points={{16.6,15.2353},{-2,
            15.2353},{-2,74},{24,74}}, color={0,0,127}));
    connect(venBlood.ctCO2, CO2v) annotation (Line(points={{16.6,10.1765},{2,
            10.1765},{2,64},{30,64}}, color={0,0,127}));
    connect(venBlood.BEox, BEox) annotation (Line(points={{16.6,5.11765},{-0.7,
            5.11765},{-0.7,7},{-23,7}}, color={0,0,127}));
    connect(venBlood.pO2, pO2_v) annotation (Line(points={{75.4,13.2118},{80.7,
            13.2118},{80.7,27},{95,27}}, color={0,0,127}));
    connect(venBlood.pCO2, pCO2_v) annotation (Line(points={{75.4,8.15294},{
            81.7,8.15294},{81.7,19},{97,19}}, color={0,0,127}));
    connect(venBlood.pH, pH_v) annotation (Line(points={{75.4,2.08235},{86,
            2.08235},{86,9},{95,9}}, color={0,0,127}));
    connect(venBlood.cHCO3, cHCO3_v) annotation (Line(points={{75.4,-2.97647},{
            82.7,-2.97647},{82.7,-2},{97,-2}}, color={0,0,127}));
    connect(venBlood.sO2, sO2_v) annotation (Line(points={{75.4,-8.03529},{82,
            -8.03529},{82,-12},{96,-12}}, color={0,0,127}));
    annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
          graphics={Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-106},{114,-138}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid,
            textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
  end SimplestTissue;

  model BloodGases

    Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
          transformation(extent={{-114,-74},{-94,-54}}),
                                                       iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-103,-67})));
    Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
          transformation(extent={{-114,-44},{-94,-24}}),
                                                       iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-105,-35})));

    Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
          transformation(extent={{-104,-26},{-82,-4}}),  iconTransformation(
            extent={{-114,-12},{-92,10}})));
    Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
          transformation(extent={{-110,6},{-86,30}}),   iconTransformation(extent=
             {{-110,76},{-90,96}})));
    Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
          transformation(extent={{-110,38},{-88,60}}),  iconTransformation(extent=
             {{-110,54},{-90,74}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
          transformation(extent={{-2,38},{18,58}}),     iconTransformation(extent=
             {{88,52},{108,72}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
          transformation(extent={{-8,64},{12,84}}),     iconTransformation(extent=
             {{88,74},{108,94}})));
  equation

  CO2v=MCO2/Q+CO2a;
  O2v=O2a-MO2/Q;

    annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
          graphics={Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-106},{114,-138}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid,
            textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
  end BloodGases;

  model PlasmaVolume
    Physiolibrary.Types.RealIO.ConcentrationInput Hb annotation (Placement(
          transformation(extent={{-122,-28},{-106,-12}}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-98,60})));
    Physiolibrary.Types.RealIO.VolumeInput bloodVolume annotation (Placement(
          transformation(extent={{-192,-158},{-152,-118}}), iconTransformation(
            extent={{-110,6},{-90,26}})));
    Physiolibrary.Types.RealIO.VolumeOutput plasmaVolume annotation (Placement(
          transformation(extent={{-196,-146},{-176,-126}}), iconTransformation(
            extent={{96,58},{116,78}})));
    Physiolibrary.Types.RealIO.FractionOutput hematocrit annotation (Placement(
          transformation(extent={{-202,-206},{-182,-186}}), iconTransformation(
            extent={{96,2},{116,22}})));
    parameter  Physiolibrary.Types.Concentration ctHbE=21;
  equation

    hematocrit = Hb/ctHbE;
    plasmaVolume=bloodVolume*(1-hematocrit);

    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-102},{100,-118}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.None,
            textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
  end PlasmaVolume;

  model SID_calculation
    Physiolibrary.Types.RealIO.TemperatureInput temp annotation (Placement(
          transformation(extent={{-56,70},{-32,94}}), iconTransformation(extent={{
              -108,86},{-94,100}})));
    Physiolibrary.Types.RealIO.ConcentrationInput ctHb annotation (Placement(
          transformation(extent={{-104,-32},{-76,-4}}), iconTransformation(extent=
             {{-108,66},{-92,82}})));
    Physiolibrary.Types.RealIO.ConcentrationInput cAlb annotation (Placement(
          transformation(extent={{-106,2},{-82,26}}), iconTransformation(extent={{
              -108,42},{-92,58}})));
    Physiolibrary.Types.RealIO.ConcentrationInput cPi annotation (Placement(
          transformation(extent={{-108,24},{-82,50}}), iconTransformation(extent={
              {-108,18},{-92,34}})));
    Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
          transformation(extent={{-108,54},{-88,74}}), iconTransformation(extent={
              {-108,-8},{-92,8}})));
    Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
          transformation(extent={{-60,44},{-34,70}}), iconTransformation(extent={{
              -108,-30},{-92,-14}})));
    Physiolibrary.Types.RealIO.FractionInput sO2 annotation (Placement(
          transformation(extent={{-108,-58},{-84,-34}}), iconTransformation(
            extent={{-108,-84},{-92,-68}})));
    Physiolibrary.Types.RealIO.pHInput pH annotation (Placement(transformation(
            extent={{-60,20},{-34,46}}), iconTransformation(extent={{-106,-54},{-90,
              -38}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput SID annotation (Placement(
          transformation(extent={{80,78},{100,98}}), iconTransformation(extent={{100,
              84},{116,100}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput SIDox annotation (Placement(
          transformation(extent={{80,58},{100,78}}), iconTransformation(extent={{100,
              66},{116,82}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput NSIDox annotation (Placement(
          transformation(extent={{80,40},{100,60}}), iconTransformation(extent={{100,
              48},{116,64}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput HCO3ox annotation (Placement(
          transformation(extent={{82,-76},{102,-56}}), iconTransformation(extent={
              {100,28},{116,44}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput HCO3 annotation (Placement(
          transformation(extent={{24,38},{44,58}}), iconTransformation(extent={{100,
              8},{116,24}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Albox annotation (Placement(
          transformation(extent={{80,-32},{100,-12}}), iconTransformation(extent={
              {100,-12},{116,4}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Alb annotation (Placement(
          transformation(extent={{80,-16},{100,4}}), iconTransformation(extent={{100,
              -32},{116,-16}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Piox annotation (Placement(
          transformation(extent={{80,2},{100,22}}), iconTransformation(extent={{100,
              -52},{116,-36}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Pi annotation (Placement(
          transformation(extent={{80,22},{100,42}}), iconTransformation(extent={{100,
              -70},{116,-54}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput BE annotation (Placement(
          transformation(extent={{82,-98},{102,-78}}), iconTransformation(extent={
              {100,-92},{116,-76}})));
    AcidBaseBalance.Acidbase.OSA.plasmaHCO3 plasmaHCO3_1
      annotation (Placement(transformation(extent={{0,-24},{40,18}})));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={0,0,127},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-102},{100,-118}},
            lineColor={0,0,127},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid,
            textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));

  end SID_calculation;

  model SID
    Physiolibrary.Types.RealIO.TemperatureInput temp annotation (Placement(
          transformation(extent={{-100,58},{-76,82}}),iconTransformation(extent={{
              -108,86},{-94,100}})));
    Physiolibrary.Types.RealIO.ConcentrationInput cAlb annotation (Placement(
          transformation(extent={{-114,40},{-90,64}}),iconTransformation(extent={{
              -108,42},{-92,58}})));
    Physiolibrary.Types.RealIO.ConcentrationInput cPi annotation (Placement(
          transformation(extent={{-114,18},{-88,44}}), iconTransformation(extent={
              {-108,18},{-92,34}})));
    Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
          transformation(extent={{-48,-92},{-28,-72}}),iconTransformation(extent={
              {-108,-8},{-92,8}})));
    Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
          transformation(extent={{-96,82},{-70,108}}),iconTransformation(extent={{-108,
              -64},{-92,-48}})));
    Physiolibrary.Types.RealIO.pHInput pH annotation (Placement(transformation(
            extent={{-116,0},{-90,26}}), iconTransformation(extent={{-106,-88},{-90,
              -72}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput SID annotation (Placement(
          transformation(extent={{36,-86},{56,-66}}),iconTransformation(extent={{100,
              84},{116,100}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput NSID annotation (Placement(
          transformation(extent={{24,-2},{44,18}}), iconTransformation(extent={{100,6},
              {116,22}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput HCO3 annotation (Placement(
          transformation(extent={{-4,70},{16,90}}), iconTransformation(extent={{100,-34},
              {116,-18}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Alb annotation (Placement(
          transformation(extent={{100,28},{120,48}}),iconTransformation(extent={{100,-64},
              {116,-48}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Pi annotation (Placement(
          transformation(extent={{96,8},{116,28}}),  iconTransformation(extent={{100,-84},
              {116,-68}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Buf;
    Physiolibrary.Types.RealIO.ConcentrationOutput BufSum;
    AcidBaseBalance.Acidbase.OSA.plasmaHCO3 plasmaHCO3_norm
      annotation (Placement(transformation(extent={{-58,-50},{-18,-8}})));
    Physiolibrary.Types.Constants.PressureConst pCO240(k=5332.8954966)
      annotation (Placement(transformation(extent={{-82,-10},{-74,-2}})));
    Physiolibrary.Types.Constants.pHConst pH74(k=7.4)
      annotation (Placement(transformation(extent={{-84,-36},{-76,-28}})));
    Physiolibrary.Types.Constants.TemperatureConst t37(k=310.15)
      annotation (Placement(transformation(extent={{-90,-60},{-82,-52}})));
    AlbPiFencl albPiFencl
      annotation (Placement(transformation(extent={{-56,36},{-32,60}})));
    AlbPiFencl albPiFencl_norm
      annotation (Placement(transformation(extent={{-56,0},{-26,30}})));
    AcidBaseBalance.Acidbase.OSA.plasmaHCO3 plasmaHCO3_act
      annotation (Placement(transformation(extent={{-48,68},{-26,90}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput SIDox annotation (Placement(
          transformation(extent={{36,-58},{56,-38}}), iconTransformation(extent={{
              100,52},{116,68}})));
    Physiolibrary.Types.RealIO.ConcentrationInput BE annotation (Placement(
          transformation(extent={{-20,-84},{0,-64}}),   iconTransformation(extent=
             {{-108,-34},{-92,-18}})));
  equation
    NSID=plasmaHCO3_norm.cHCO3+albPiFencl_norm.Alb+albPiFencl_norm.Pi;
    SIDox=BEox+NSID;
    SID = BE + NSID;
    HCO3=plasmaHCO3_act.cHCO3;
    Buf=SID-HCO3;
    BufSum=albPiFencl.Alb+albPiFencl.Pi;
    Pi=albPiFencl.Pi*Buf/BufSum;
    Alb=albPiFencl.Pi*Buf/BufSum;


    connect(pCO240.y, plasmaHCO3_norm.pCO2) annotation (Line(points={{-73,-6},{-68,
            -6},{-68,-12.2},{-60,-12.2}}, color={0,0,127}));
    connect(pH74.y, plasmaHCO3_norm.pH) annotation (Line(points={{-75,-32},{-68,-32},
            {-68,-20.6},{-60,-20.6}}, color={0,0,127}));
    connect(t37.y, plasmaHCO3_norm.Temp) annotation (Line(points={{-81,-56},{-74,-56},
            {-74,-48.53},{-60.6,-48.53}}, color={0,0,127}));
    connect(albPiFencl.pH, pH) annotation (Line(points={{-55.76,40.08},{-74,
            40.08},{-74,13},{-103,13}}, color={0,0,127}));
    connect(cAlb, albPiFencl.cAlb) annotation (Line(points={{-102,52},{-88,52},
            {-88,57.36},{-55.76,57.36}}, color={0,0,127}));
    connect(albPiFencl.cPi, cPi) annotation (Line(points={{-55.52,50.4},{-84,
            50.4},{-84,31},{-101,31}}, color={0,0,127}));
    connect(albPiFencl_norm.cAlb, albPiFencl.cAlb) annotation (Line(points={{
            -55.7,26.7},{-68,26.7},{-68,57.36},{-55.76,57.36}}, color={0,0,127}));
    connect(albPiFencl_norm.cPi, cPi) annotation (Line(points={{-55.4,18},{-70,
            18},{-70,52},{-84,52},{-84,31},{-101,31}}, color={0,0,127}));
    connect(albPiFencl_norm.pH, plasmaHCO3_norm.pH) annotation (Line(points={{-55.7,
            5.1},{-64,5.1},{-64,-32},{-68,-32},{-68,-20.6},{-60,-20.6}}, color={0,
            0,127}));
    connect(NSID, NSID)
      annotation (Line(points={{34,8},{34,8}}, color={0,0,127}));
    connect(plasmaHCO3_act.Temp, temp) annotation (Line(points={{-49.43,68.77},{
            -64.715,68.77},{-64.715,70},{-88,70}}, color={0,0,127}));
    connect(plasmaHCO3_act.pCO2, pCO2) annotation (Line(points={{-49.1,87.8},{-58,
            87.8},{-58,95},{-83,95}}, color={0,0,127}));
    connect(pH, plasmaHCO3_act.pH) annotation (Line(points={{-103,13},{-74,13},{
            -74,83.4},{-49.1,83.4}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={0,0,127},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-102},{100,-118}},
            lineColor={0,0,127},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid,
            textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
  end SID;

  model AlbPiFencl
    Physiolibrary.Types.RealIO.ConcentrationInput cAlb "albumin concentration"
      annotation (Placement(transformation(extent={{-116,2},{-76,42}}),
          iconTransformation(extent={{-118,58},{-78,98}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Alb "alb charge in mmol/l"
      annotation (Placement(transformation(extent={{82,40},{102,60}}),
          iconTransformation(extent={{88,4},{108,24}})));
    Physiolibrary.Types.RealIO.pHInput pH annotation (Placement(transformation(
            extent={{-116,-58},{-76,-18}}), iconTransformation(extent={{-118,-86},
              {-78,-46}})));
    Physiolibrary.Types.RealIO.ConcentrationInput cPi "phosphate concentration"
      annotation (Placement(transformation(extent={{-118,52},{-78,92}}),
          iconTransformation(extent={{-116,0},{-76,40}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput Pi
      "Phosphate charge in mmol/l" annotation (Placement(transformation(extent={{86,
              -48},{106,-28}}), iconTransformation(extent={{88,-30},{108,-10}})));
    Real AlbG_dl = cAlb*6.646;

  equation
     Alb=(cAlb*10)*(0.123*pH - 0.631) "albumin total charge (Fencl)";

     Pi = cPi*(0.309*pH - 0.469)
      "Total charge of phosphates (Fencl)";
    annotation (Icon(graphics={Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-100},{100,-120}},
            lineColor={28,108,200},
            textString="%name")}));
  end AlbPiFencl;

  model SimplestTissueAndSID

    Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
          transformation(extent={{-100,12},{-88,24}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-103,-67})));
    Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
          transformation(extent={{-100,24},{-88,36}}), iconTransformation(
          extent={{-11,-11},{11,11}},
          rotation=0,
          origin={-105,-35})));

    Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
          transformation(extent={{-102,36},{-86,52}}),   iconTransformation(
            extent={{-114,-12},{-92,10}})));
    Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
          transformation(extent={{-98,66},{-84,80}}),   iconTransformation(extent=
             {{-110,76},{-90,96}})));
    Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
          transformation(extent={{-100,54},{-86,68}}),  iconTransformation(extent={{-110,52},
              {-90,72}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
          transformation(extent={{24,58},{36,70}}),     iconTransformation(extent={{88,58},
              {108,78}})));
    Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
          transformation(extent={{18,68},{30,80}}),     iconTransformation(extent={{88,80},
              {108,100}})));
    BloodGases bloodGases
      annotation (Placement(transformation(extent={{-52,32},{-8,74}})));
    AcidBaseBalance.Acidbase.OSA.O2CO2
          artBlood
      annotation (Placement(transformation(extent={{16,-48},{72,38}})));
    Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
          transformation(extent={{-30,0},{-16,14}}), iconTransformation(extent=
              {{-110,28},{-90,48}})));
    Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
        Placement(transformation(extent={{88,20},{102,34}}), iconTransformation(
            extent={{90,14},{110,34}})));
    Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
        Placement(transformation(extent={{90,12},{104,26}}), iconTransformation(
            extent={{90,-6},{110,14}})));
    Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
          transformation(
          extent={{-7,-7},{7,7}},
          rotation=0,
          origin={95,9}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-20})));
    Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
      "outgoing concentration of HCO3" annotation (Placement(transformation(
          extent={{-7,-7},{7,7}},
          rotation=0,
          origin={97,-2}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-40})));
    Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
          transformation(
          extent={{-6,-6},{6,6}},
          rotation=0,
          origin={96,-12}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={100,-60})));
    Physiolibrary.Types.RealIO.ConcentrationOutput BE_v annotation (Placement(
          transformation(extent={{66,76},{78,88}}), iconTransformation(extent={{88,
              36},{108,56}})));
  equation
    BE_v=BEox+0.2*artBlood.ceHb*(1-sO2_v);

    connect(O2a, bloodGases.O2a) annotation (Line(points={{-91,73},{-72.5,73},{
            -72.5,71.06},{-52,71.06}}, color={0,0,127}));
    connect(bloodGases.CO2a, CO2a) annotation (Line(points={{-52,66.44},{-74,
            66.44},{-74,61},{-93,61}}, color={0,0,127}));
    connect(bloodGases.Q, Q) annotation (Line(points={{-52.66,52.79},{-74,52.79},
            {-74,44},{-94,44}}, color={0,0,127}));
    connect(bloodGases.MO2, MO2) annotation (Line(points={{-53.1,45.65},{-70,
            45.65},{-70,30},{-94,30}}, color={0,0,127}));
    connect(bloodGases.MCO2, MCO2) annotation (Line(points={{-52.66,38.93},{-62,
            38.93},{-62,18},{-94,18}}, color={0,0,127}));
    connect(bloodGases.CO2v, CO2v) annotation (Line(points={{-8.44,66.02},{1.78,
            66.02},{1.78,64},{30,64}}, color={0,0,127}));
    connect(bloodGases.O2v, O2v) annotation (Line(points={{-8.44,70.64},{-2,
            70.64},{-2,74},{24,74}}, color={0,0,127}));
    connect(artBlood.ctO2, O2v) annotation (Line(points={{14.6,15.2353},{-2,
            15.2353},{-2,74},{24,74}}, color={0,0,127}));
    connect(artBlood.ctCO2, CO2v) annotation (Line(points={{14.6,10.1765},{2,
            10.1765},{2,64},{30,64}}, color={0,0,127}));
    connect(artBlood.BEox, BEox) annotation (Line(points={{14.6,5.11765},{-0.7,
            5.11765},{-0.7,7},{-23,7}}, color={0,0,127}));
    connect(artBlood.pO2, pO2_v) annotation (Line(points={{73.4,13.2118},{80.7,
            13.2118},{80.7,27},{95,27}}, color={0,0,127}));
    connect(artBlood.pCO2, pCO2_v) annotation (Line(points={{73.4,8.15294},{
            81.7,8.15294},{81.7,19},{97,19}}, color={0,0,127}));
    connect(artBlood.pH, pH_v) annotation (Line(points={{73.4,2.08235},{86,
            2.08235},{86,9},{95,9}}, color={0,0,127}));
    connect(artBlood.cHCO3, cHCO3_v) annotation (Line(points={{73.4,-2.97647},{
            82.7,-2.97647},{82.7,-2},{97,-2}}, color={0,0,127}));
    connect(artBlood.sO2, sO2_v) annotation (Line(points={{73.4,-8.03529},{82,
            -8.03529},{82,-12},{96,-12}}, color={0,0,127}));
    annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
          graphics={Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid), Text(
            extent={{-100,-106},{114,-138}},
            lineColor={28,108,200},
            fillColor={255,255,0},
            fillPattern=FillPattern.Solid,
            textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
  end SimplestTissueAndSID;
  annotation (uses(
      Physiolibrary(version="3.0.0-alpha10"),
      Modelica(version="4.0.0"),
      AcidBaseBalance(version="1")),
    version="2",
    conversion(noneFromVersion="", noneFromVersion="1"));
end Simplest;
