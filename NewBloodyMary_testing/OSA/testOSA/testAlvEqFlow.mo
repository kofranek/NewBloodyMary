within NewBloodyMary_testing.OSA.testOSA;
model testAlvEqFlow

  Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
    annotation (Placement(transformation(extent={{-33,66},{-25,72}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{-29,50},{-23,58}})));
  Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
    annotation (Placement(transformation(extent={{-15,44},{-9,52}})));
  Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
    annotation (Placement(transformation(extent={{-37,39},{-29,44}})));
  Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
    annotation (Placement(transformation(extent={{-15,32},{-7,38}})));
  Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
    annotation (Placement(transformation(extent={{-31,22},{-23,30}})));
  Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
    annotation (Placement(transformation(extent={{-9,16},{-3,22}})));
  Physiolibrary.Types.Constants.FractionConst fHbF(k=0.005)
    annotation (Placement(transformation(extent={{-33,6},{-25,12}})));
  Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
    annotation (Placement(transformation(extent={{-35,-10},{-29,-2}})));
  Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
    annotation (Placement(transformation(extent={{5,22},{13,28}})));
  Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
    annotation (Placement(transformation(extent={{7,12},{15,18}})));

  Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
          "m3/s") = 8.19588e-05)
    annotation (Placement(transformation(extent={{13,64},{21,70}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k(displayUnit=
          "l/min") = 8.3333333333333e-05)
    annotation (Placement(transformation(extent={{-27,-30},{-19,-22}})));
  Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
    annotation (Placement(transformation(extent={{3,30},{11,36}})));
  VenousO2CO2 venousO2CO2_1
    annotation (Placement(transformation(extent={{19,-90},{-43,-56}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
        0.00018333333333333)
    annotation (Placement(transformation(extent={{47,-48},{39,-42}})));
  Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
        0.00016666666666667)
    annotation (Placement(transformation(extent={{47,-60},{41,-54}})));
  ShuntPerfusin shuntPerfusin
    annotation (Placement(transformation(extent={{23,-40},{81,-20}})));
  ShuntMixing shuntMixing
    annotation (Placement(transformation(extent={{115,-90},{51,-48}})));
  Physiolibrary.Types.Constants.FractionConst ShFract(k=0.02)
    annotation (Placement(transformation(extent={{-3,-38},{5,-30}})));
  O2CO2 arterialBlood
    annotation (Placement(transformation(extent={{-85,12},{-143,86}})));
  O2CO2 venousBlood annotation (Placement(transformation(extent={{-87,-92},
            {-139,-12}})));
  AlveolocapillaryUnit alveolocapillaryUnit
    annotation (Placement(transformation(extent={{64,28},{126,94}})));
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{44,-8},{66,14}}),  iconTransformation(
        extent={{58,-102},{98,-62}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump O2PulmBloodFlow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{42,34},{62,54}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
    CO2PulmBloodOutflow(useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{138,54},{158,74}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2PulmBloodFlow(
      useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{40,50},{60,70}})));
  Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
    O2PulmBloodOutflow(useSoluteFlowInput=true)
    annotation (Placement(transformation(extent={{144,34},{164,54}})));
  Modelica.Blocks.Math.Product O2FlowCalc
    annotation (Placement(transformation(extent={{94,-18},{104,-8}})));
  Modelica.Blocks.Math.Product CO2FlowCalc
    annotation (Placement(transformation(extent={{116,-12},{126,-2}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
    annotation (Placement(transformation(extent={{130,18},{146,30}})));
  Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
    annotation (Placement(transformation(extent={{122,50},{138,62}})));
  Modelica.Blocks.Math.Product O2FlowCalc1
    annotation (Placement(transformation(extent={{146,-18},{156,-8}})));
  Modelica.Blocks.Math.Product CO2FlowCalc1
    annotation (Placement(transformation(extent={{148,-36},{158,-26}})));
equation

  connect(venousO2CO2_1.VO2, VO2.y) annotation (Line(points={{21.79,
          -68.75},{35,-68.75},{35,-45},{38,-45}},
                                          color={0,0,127}));
  connect(VCO2.y, venousO2CO2_1.VCO2) annotation (Line(points={{40.25,-57},
          {37,-57},{37,-72.49},{21.79,-72.49}},
                                              color={0,0,127}));
  connect(shuntPerfusin.ShuntFract, ShFract.y) annotation (Line(points={{20.1,
          -32.6},{11,-32.6},{11,-34},{6,-34}},           color={0,0,127}));
  connect(shuntMixing.Qpulm, shuntPerfusin.Qpulm) annotation (Line(points={{118.2,
          -57.66},{125,-57.66},{125,-28.2},{83.9,-28.2}}, color={0,0,127}));
  connect(shuntMixing.Qsh, shuntPerfusin.Qsh) annotation (Line(points={{118.2,
          -64.38},{127,-64.38},{127,-32.4},{83.9,-32.4}},color={0,0,127}));
  connect(venousO2CO2_1.CaO2, shuntMixing.CaO2) annotation (Line(points={{22.1,
          -77.42},{39,-77.42},{39,-65.22},{47.8,-65.22}},        color={0,
          0,127}));
  connect(shuntMixing.CaCO2, venousO2CO2_1.CaCO2) annotation (Line(points={{47.8,
          -71.94},{41,-71.94},{41,-81.5},{22.1,-81.5}},        color={0,0,
          127}));
  connect(shuntMixing.CvO2, venousO2CO2_1.CvO2) annotation (Line(points={{118.2,
          -71.1},{133,-71.1},{133,-94},{-53,-94},{-53,-69.94},{-46.1,
          -69.94}}, color={0,0,127}));
  connect(shuntMixing.CvCO2, venousO2CO2_1.CvCO2) annotation (Line(points={{118.2,
          -76.56},{121,-76.56},{121,-76},{125,-76},{125,-92},{-51,-92},{
          -51,-82},{-51,-78},{-51,-75.38},{-46.1,-75.38}},
                                        color={0,0,127}));
  connect(Q.y, shuntPerfusin.Q)
    annotation (Line(points={{-18,-26},{2,-26},{2,-28},{20.1,-28}},
                                                     color={0,0,127}));
  connect(venousO2CO2_1.Q, shuntPerfusin.Q) annotation (Line(points={{22.1,
          -63.82},{29,-63.82},{29,-50},{-11,-50},{-11,-28},{20.1,-28}},
                 color={0,0,127}));
  connect(BEox.y, arterialBlood.BEox) annotation (Line(points={{-24,69},{
          -17,69},{-17,85.26},{-82.1,85.26}},  color={0,0,127}));
  connect(venousBlood.BEox, arterialBlood.BEox) annotation (Line(points={{-84.4,
          -12.8},{-59,-12.8},{-59,85.26},{-82.1,85.26}},          color={
          0,0,127}));
  connect(cAlb.y, arterialBlood.ctAlb) annotation (Line(points={{-8.25,48},
          {-1,48},{-1,52},{-17,52},{-17,44},{-63,44},{-63,56.4},{-82.1,
          56.4}},        color={0,0,127}));
  connect(venousBlood.ctAlb, arterialBlood.ctAlb) annotation (Line(points={{-84.4,
          -44},{-63,-44},{-63,56.4},{-82.1,56.4}},          color={0,0,
          127}));
  connect(cPi.y, arterialBlood.ctPi) annotation (Line(points={{-28,41.5},
          {-23,41.5},{-23,46},{-67,46},{-67,49.74},{-82.1,49.74}},
        color={0,0,127}));
  connect(venousBlood.ctPi, arterialBlood.ctPi) annotation (Line(points={{-84.4,
          -51.2},{-67,-51.2},{-67,49.74},{-82.1,49.74}},            color=
         {0,0,127}));
  connect(cDPG.y, arterialBlood.cDPG) annotation (Line(points={{-6,35},{
          -3,35},{-3,40},{-21,40},{-21,34},{-69,34},{-69,42.34},{-82.1,
          42.34}},        color={0,0,127}));
  connect(venousBlood.cDPG, arterialBlood.cDPG) annotation (Line(points={{-84.4,
          -59.2},{-69,-59.2},{-69,42.34},{-82.1,42.34}},            color=
         {0,0,127}));
  connect(fMetHb1.y, arterialBlood.FMetHb) annotation (Line(points={{-22,26},
          {-17,26},{-17,32},{-71,32},{-71,35.68},{-82.1,35.68}},
        color={0,0,127}));
  connect(venousBlood.FMetHb, arterialBlood.FMetHb) annotation (Line(
        points={{-84.4,-66.4},{-71,-66.4},{-71,35.68},{-82.1,35.68}},
        color={0,0,127}));
  connect(fCOHb.y, arterialBlood.FCOHb) annotation (Line(points={{-2.25,
          19},{5,19},{5,12},{-17,12},{-17,16},{-73,16},{-73,28.28},{-82.1,
          28.28}},        color={0,0,127}));
  connect(venousBlood.FCOHb, arterialBlood.FCOHb) annotation (Line(points={{-84.4,
          -74.4},{-73,-74.4},{-73,28.28},{-82.1,28.28}},            color=
         {0,0,127}));
  connect(fHbF.y, arterialBlood.FHbF) annotation (Line(points={{-24,9},{
          -19,9},{-19,14},{-75,14},{-75,20.88},{-82.1,20.88}},    color={
          0,0,127}));
  connect(venousBlood.FHbF, arterialBlood.FHbF) annotation (Line(points={{-84.4,
          -82.4},{-75,-82.4},{-75,20.88},{-82.1,20.88}},            color=
         {0,0,127}));
  connect(temperature.y, arterialBlood.T) annotation (Line(points={{-28.25,
          -6},{-21,-6},{-21,2},{-77,2},{-77,13.48},{-82.1,13.48}},
                  color={0,0,127}));
  connect(venousBlood.T, arterialBlood.T) annotation (Line(points={{-84.4,
          -90.4},{-77,-90.4},{-77,13.48},{-82.1,13.48}},         color={0,
          0,127}));
  connect(shuntMixing.CaO2, arterialBlood.ctO2) annotation (Line(points={{47.8,
          -65.22},{39,-65.22},{39,-96},{-55,-96},{-55,78.6},{-82.1,78.6}},
                  color={0,0,127}));
  connect(shuntMixing.CaCO2, arterialBlood.ctCO2) annotation (Line(points={{47.8,
          -71.94},{41,-71.94},{41,-98},{-57,-98},{-57,71.2},{-82.1,71.2}},
                          color={0,0,127}));
  connect(PB.y, busConnector.PB) annotation (Line(points={{12,33},{22,33},
          {22,32},{24,32},{24,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(VAi.y, alveolocapillaryUnit.VAi) annotation (Line(points={{22,
          67},{26,67},{26,70},{78.88,70},{78.88,70.9}}, color={0,0,127}));
  connect(FiO2.y, busConnector.FiO2) annotation (Line(points={{14,25},{20,
          25},{20,24},{20,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(FiCO2.y, busConnector.FiCO2) annotation (Line(points={{16,15},{
          18,15},{18,16},{18,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(ctHb.y, arterialBlood.ctHb) annotation (Line(points={{-22.25,54},
          {-18,54},{-18,63.8},{-82.1,63.8}}, color={0,0,127}));
  connect(venousBlood.ctHb, arterialBlood.ctHb) annotation (Line(points={
          {-84.4,-36},{-60,-36},{-60,63.8},{-82.1,63.8}}, color={0,0,127}));
  connect(ctHb.y, busConnector.ctHb) annotation (Line(points={{-22.25,54},
          {-4,54},{26,54},{26,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(BEox.y, busConnector.BEox) annotation (Line(points={{-24,69},{
          -8,69},{-8,68},{10,68},{10,40},{28,40},{28,3},{55,3}}, color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cAlb.y, busConnector.ctAlb) annotation (Line(points={{-8.25,48},
          {30,48},{30,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cPi.y, busConnector.ctPi) annotation (Line(points={{-28,41.5},{
          2,41.5},{2,42},{32,42},{32,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(cDPG.y, busConnector.cDPG) annotation (Line(points={{-6,35},{-4,
          35},{-4,34},{-4,0},{32,0},{32,3},{55,3}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fMetHb1.y, busConnector.FMetHb) annotation (Line(points={{-22,
          26},{-20,26},{-16,26},{-16,-6},{40,-6},{40,3},{55,3}}, color={0,
          0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fHbF.y, busConnector.FHbF) annotation (Line(points={{-24,9},{
          -18,9},{-18,-6},{-18,-6},{-18,-10},{46,-10},{46,3},{55,3}},
        color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(fCOHb.y, busConnector.FCOHb) annotation (Line(points={{-2.25,19},
          {6,19},{6,3},{55,3}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(temperature.y, busConnector.T) annotation (Line(points={{-28.25,
          -6},{-20,-6},{-20,-14},{48,-14},{48,3},{55,3}}, color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector, alveolocapillaryUnit.busConnector) annotation (
      Line(
      points={{55,3},{119.18,3},{119.18,33.94}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(CO2PulmBloodFlow.q_out, alveolocapillaryUnit.CO2ven)
    annotation (Line(
      points={{60,60},{74.54,60},{74.54,61.66}},
      color={107,45,134},
      thickness=1));
  connect(O2PulmBloodFlow.q_out, alveolocapillaryUnit.O2ven) annotation (
      Line(
      points={{62,44},{74.54,44},{74.54,45.16}},
      color={107,45,134},
      thickness=1));
  connect(CO2PulmBloodOutflow.q_in, alveolocapillaryUnit.CO2pc)
    annotation (Line(
      points={{138,64},{114.84,64},{114.84,61.66}},
      color={107,45,134},
      thickness=1));
  connect(O2PulmBloodOutflow.q_in, alveolocapillaryUnit.O2pc) annotation (
     Line(
      points={{144,44},{114.22,44},{114.22,44.5}},
      color={107,45,134},
      thickness=1));
  connect(O2FlowCalc.u1, venousO2CO2_1.CvO2) annotation (Line(points={{93,
          -10},{69,-10},{69,-18},{-53,-18},{-53,-69.94},{-46.1,-69.94}},
        color={0,0,127}));
  connect(shuntPerfusin.Qpulm, O2FlowCalc.u2) annotation (Line(points={{
          83.9,-28.2},{90,-28.2},{90,-16},{93,-16}}, color={0,0,127}));
  connect(CO2FlowCalc.u1, venousO2CO2_1.CvCO2) annotation (Line(points={{
          115,-4},{66,-4},{66,-16},{-50,-16},{-50,-75.38},{-46.1,-75.38}},
        color={0,0,127}));
  connect(shuntPerfusin.Qpulm, CO2FlowCalc.u2) annotation (Line(points={{
          83.9,-28.2},{110,-28.2},{110,-10},{115,-10}}, color={0,0,127}));
  connect(O2FlowCalc.y, O2PulmBloodFlow.soluteFlow) annotation (Line(
        points={{104.5,-13},{108,-13},{108,32},{40,32},{40,52},{56,52},{
          56,48}}, color={0,0,127}));
  connect(CO2PulmBloodFlow.soluteFlow, CO2FlowCalc.y) annotation (Line(
        points={{54,64},{54,68},{36,68},{36,24},{130,24},{130,-7},{126.5,
          -7}}, color={0,0,127}));
  connect(concentrationMeasure1.q_in, alveolocapillaryUnit.CO2pc)
    annotation (Line(
      points={{130,56},{124,56},{124,64},{114.84,64},{114.84,61.66}},
      color={107,45,134},
      thickness=1));
  connect(shuntMixing.CpcCO2, concentrationMeasure1.concentration)
    annotation (Line(points={{118.2,-86.64},{172,-86.64},{172,32},{130,32},
          {130,51.2}}, color={0,0,127}));
  connect(concentrationMeasure.q_in, alveolocapillaryUnit.O2pc)
    annotation (Line(
      points={{138,24},{138,44},{114.22,44},{114.22,44.5}},
      color={107,45,134},
      thickness=1));
  connect(concentrationMeasure.concentration, shuntMixing.CpcO2)
    annotation (Line(points={{138,19.2},{138,19.2},{138,-78},{138,-81.18},
          {118.2,-81.18}}, color={0,0,127}));
  connect(O2FlowCalc1.u1, shuntMixing.CpcO2) annotation (Line(points={{
          145,-10},{138,-10},{138,-81.18},{118.2,-81.18}}, color={0,0,127}));
  connect(shuntPerfusin.Qpulm, O2FlowCalc1.u2) annotation (Line(points={{
          83.9,-28.2},{120,-28.2},{120,-16},{145,-16}}, color={0,0,127}));
  connect(shuntMixing.CpcCO2, CO2FlowCalc1.u2) annotation (Line(points={{
          118.2,-86.64},{142,-86.64},{142,-34},{147,-34}}, color={0,0,127}));
  connect(CO2FlowCalc1.u1, shuntPerfusin.Qpulm) annotation (Line(points={
          {147,-28},{126,-28},{125,-28.2},{83.9,-28.2}}, color={0,0,127}));
  connect(O2FlowCalc1.y, O2PulmBloodOutflow.soluteFlow) annotation (Line(
        points={{156.5,-13},{168,-13},{168,54},{158,54},{158,48}}, color=
          {0,0,127}));
  connect(CO2FlowCalc1.y, CO2PulmBloodOutflow.soluteFlow) annotation (
      Line(points={{158.5,-31},{180,-31},{180,74},{152,74},{152,68}},
        color={0,0,127}));
  connect(venousBlood.ctO2, venousO2CO2_1.CvO2) annotation (Line(points={
          {-84.4,-20},{-68,-20},{-68,-18},{-53,-18},{-53,-69.94},{-46.1,
          -69.94}}, color={0,0,127}));
  connect(venousBlood.ctCO2, venousO2CO2_1.CvCO2) annotation (Line(points=
         {{-84.4,-28},{-50,-28},{-50,-75.38},{-46.1,-75.38}}, color={0,0,
          127}));
  connect(shuntPerfusin.Qpulm, alveolocapillaryUnit.Q) annotation (Line(
        points={{83.9,-28.2},{84,-28.2},{84,20},{34,20},{34,82.78},{83.84,
          82.78}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})), Icon(coordinateSystem(preserveAspectRatio=
           false, extent={{-100,-100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid), Text(
          extent={{-72,66},{66,14}},
          lineColor={28,108,200},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Test AlvEqFLow")}));
end testAlvEqFlow;
