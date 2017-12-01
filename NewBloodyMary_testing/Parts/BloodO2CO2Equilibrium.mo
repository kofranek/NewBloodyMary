within NewBloodyMary_testing.Parts;
model BloodO2CO2Equilibrium

  Physiolibrary.Chemical.Interfaces.ChemicalPort_a BloodO2in annotation (
      Placement(transformation(extent={{-92,8},{-72,28}}),
        iconTransformation(extent={{-92,8},{-72,28}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a BloodCO2in annotation (
      Placement(transformation(extent={{-92,-38},{-72,-18}}),
        iconTransformation(extent={{-92,-38},{-72,-18}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_b BloodO2out annotation (
      Placement(transformation(extent={{74,6},{94,26}}), iconTransformation(
          extent={{74,6},{94,26}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_b BloodCO2out annotation (
      Placement(transformation(extent={{74,-34},{94,-14}}),
        iconTransformation(extent={{74,-34},{94,-14}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2equil annotation (
      Placement(transformation(extent={{-38,70},{-18,90}}),
        iconTransformation(extent={{-38,70},{-18,90}})));
  Physiolibrary.Chemical.Interfaces.ChemicalPort_b CO2equil annotation (
      Placement(transformation(extent={{10,68},{30,88}}),
        iconTransformation(extent={{10,68},{30,88}})));
  bloodCO2O2BEox Blood
    annotation (Placement(transformation(extent={{-56,-60},{20,16}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput bloodFlowRate annotation (
      Placement(transformation(extent={{-94,44},{-68,70}}),
        iconTransformation(extent={{-124,58},{-102,80}})));
  Physiolibrary.Types.BusConnector bloodParameters annotation (Placement(
        transformation(extent={{26,14},{66,54}}), iconTransformation(extent={{-100,
            66},{-60,106}})));
  Physiolibrary.Types.RealIO.ConcentrationInput
                                     BEox
                                  annotation (Placement(transformation(extent={{-9,-9},
            {9,9}},
        rotation=0,
        origin={-35,-75}),        iconTransformation(
        extent={{-11,-11},{11,11}},
        rotation=0,
        origin={-113,43})));
initial equation
  //  Blood.bloodPO2PCO2_.pO2=13332;
  //  Blood.bloodPO2PCO2_.pCO2=5332;
equation

  BloodO2in.q + O2equil.q + BloodO2out.q = 0;
  BloodCO2in.q + O2equil.q + BloodO2out.q = 0;
  O2equil.conc = Blood.cdO2;
  CO2equil.conc = Blood.cdCO2;
  BloodO2in.conc = BloodO2in.q/bloodFlowRate;
  BloodCO2in.conc = BloodCO2in.q/bloodFlowRate;
  //BloodO2out.conc = Blood.ctO2;
  //BloodCO2out.conc = Blood.ctCO2;
  Blood.ctO2 = (-BloodO2out.q/bloodFlowRate);
  Blood.ctCO2 = (-BloodCO2out.q/bloodFlowRate);

  connect(Blood.ctAlb, bloodParameters.ctAlb) annotation (Line(points={{24.56,9.16},
          {46,9.16},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.ctPO4, bloodParameters.cPi) annotation (Line(points={{24.56,1.56},
          {46,1.56},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.cDPG, bloodParameters.cDPG) annotation (Line(points={{24.56,-6.04},
          {46,-6.04},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.FHbF, bloodParameters.FHbF) annotation (Line(points={{24.56,-21.24},
          {46,-21.24},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.pCO, bloodParameters.PCO) annotation (Line(points={{24.56,-28.84},
          {46,-28.84},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.ctGlb, bloodParameters.ctGlb) annotation (Line(points={{24.56,-36.44},
          {46,-36.44},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.ctHb, bloodParameters.ctHb) annotation (Line(points={{-59.8,-42.52},
          {-68,-42.52},{-68,-82},{46,-82},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.T, bloodParameters.temp) annotation (Line(points={{-59.04,10.68},
          {-66,10.68},{-66,24},{46,24},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(Blood.FMetHb, bloodParameters.FMetHb) annotation (Line(points={{24.56,
          -13.64},{46,-13.64},{46,34}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox, Blood.BEox) annotation (Line(points={{-35,-75},{-19.14,-75},{-19.14,
          -61.14}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),      graphics={
        Rectangle(
          extent={{-102,100},{98,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-70,26},{-48,8}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="O2"),
        Text(
          extent={{-38,66},{-16,48}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="O2"),
        Text(
          extent={{50,26},{72,8}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="O2"),
        Text(
          extent={{-68,-16},{-36,-44}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CO2"),
        Text(
          extent={{36,-10},{68,-38}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CO2"),
        Text(
          extent={{10,68},{42,40}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="CO2"),
        Text(
          extent={{-100,-50},{100,-94}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="%name")}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end BloodO2CO2Equilibrium;
