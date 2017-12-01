within NewBloodyMary_testing.OSA;
model PulmonaryShunts
  extends Icons.Shunts;
  Physiolibrary.Types.RealIO.FractionInput FractionShunts annotation (
      Placement(transformation(extent={{-100,-20},{-60,20}}),
        iconTransformation(extent={{-104,40},{-80,64}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput CardiacOutput annotation (
      Placement(transformation(extent={{-100,40},{-60,80}}),
        iconTransformation(extent={{-108,0},{-82,26}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput PulmonaryPerfusion
    annotation (Placement(transformation(extent={{52,50},{72,70}}),
        iconTransformation(extent={{-44,-32},{-24,-12}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateOutput ShuntFlow annotation (
      Placement(transformation(extent={{42,10},{62,30}}),
        iconTransformation(extent={{8,-54},{28,-34}})));
  Parts.MolarInflowConnector CO2v annotation (Placement(transformation(extent=
           {{-96,76},{-84,88}}), iconTransformation(extent={{-104,-76},{-84,
            -56}})));
  Parts.MolarInflowConnector O2v annotation (Placement(transformation(extent={
            {-96,34},{-84,46}}), iconTransformation(extent={{-104,-56},{-84,
            -36}})));
  Parts.MolarOutflowConnector CO2a annotation (Placement(transformation(extent={{58,78},
            {70,90}}),         iconTransformation(extent={{68,-76},{88,-56}})));
  Parts.MolarOutflowConnector O2a annotation (Placement(transformation(extent={{
            60,34},{72,46}}), iconTransformation(extent={{68,-56},{88,-36}})));
  Parts.MolarInflowConnector O2epc annotation (Placement(transformation(extent={{-96,20},
            {-84,32}}),          iconTransformation(extent={{28,-12},{48,8}})));
  Parts.MolarInflowConnector CO2epc annotation (Placement(transformation(extent={{-78,80},
            {-66,92}}),          iconTransformation(extent={{28,-32},{48,-12}})));
  Physiolibrary.Types.Concentration O2aconc( start=8);
  Physiolibrary.Types.Concentration CO2aconc( start=21);
  Physiolibrary.Types.Concentration O2vconc;
  Physiolibrary.Types.Concentration CO2vconc;
equation
  O2a.conc=O2aconc;
  CO2a.conc=CO2aconc;
  O2v.conc=O2vconc;
  CO2v.conc=CO2vconc;
  ShuntFlow = CardiacOutput*FractionShunts;
  PulmonaryPerfusion = CardiacOutput - ShuntFlow;
  CardiacOutput * O2aconc = ShuntFlow * O2vconc + PulmonaryPerfusion * O2epc.conc;
  CardiacOutput * CO2aconc = ShuntFlow * CO2vconc + PulmonaryPerfusion * CO2epc.conc;
  O2a.q = - O2a.conc*CardiacOutput;
  CO2a.q = - CO2a.conc*CardiacOutput;
  O2epc.q=O2epc.conc*PulmonaryPerfusion;
  CO2epc.q=CO2epc.conc*PulmonaryPerfusion;
  // O2a.q = O2v.conc *ShuntFlow + O2epc.q;
  // CO2a.q = CO2v.conc *ShuntFlow + CO2epc.q;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Text(
          extent={{-82,-56},{-42,-80}},
          lineColor={0,0,0},
          fontSize=16,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Left,
          textString="CO2"),
        Text(
          extent={{-82,-32},{-42,-56}},
          lineColor={0,0,0},
          fontSize=16,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Left,
          textString="O2"),
        Text(
          extent={{18,-36},{66,-52}},
          lineColor={0,0,0},
          fontSize=16,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Right,
          textString="O2"),
        Text(
          extent={{6,-60},{66,-72}},
          lineColor={0,0,0},
          fontSize=16,
          textStyle={TextStyle.Bold},
          horizontalAlignment=TextAlignment.Right,
          textString="CO2")}),       Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end PulmonaryShunts;
