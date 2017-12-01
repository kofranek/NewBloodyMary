within NewBloodyMary_testing.Parts;
model TissuesO2
 extends Physiolibrary.Icons.Tissues;
Physiolibrary.Chemical.Interfaces.ChemicalPort_a arty annotation (
    Placement(transformation(extent={{80,-20},{120,20}}),
      iconTransformation(extent={{100,-20},{140,20}})));
Physiolibrary.Chemical.Interfaces.ChemicalPort_b vein annotation (Placement(
        transformation(extent={{-120,-20},{-80,20}}), iconTransformation(extent=
           {{-140,-20},{-100,20}})));

 Physiolibrary.Types.MolarFlowRate O2ToTissues(displayUnit="mmol/min");
// Real O2ToTissues2(displayUnit="mmol/min");
  // Real O2ToTissues3(displayUnit="ml/min");
  BloodO2_Siggaard O2Tissue
    annotation (Placement(transformation(extent={{2,1},{-18,-19}})));
Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
                                              Metabolism_O2Use(
      useSoluteFlowInput=true) annotation (Placement(transformation(
      extent={{-10,10},{10,-10}},
      rotation=270,
      origin={-8,-82})));
  Physiolibrary.Types.RealIO.FractionOutput sO2
                                           annotation (Placement(
        transformation(extent={{8,16},{14,22}}),     iconTransformation(
          extent={{-10,-10},{10,10}},
        rotation=270,
        origin={0,-110})));
  Physiolibrary.Types.RealIO.PressureOutput pO2       annotation (Placement(
        transformation(extent={{10,10},{18,18}}),    iconTransformation(
          extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-20,-110})));
Physiolibrary.Types.BusConnector busConnector
  annotation (Placement(transformation(extent={{-102,54},{-62,94}})));
equation
O2ToTissues = vein.q + arty.q;

  connect(O2Tissue.sO2,sO2)           annotation (Line(
      points={{-8,3},{-8,19},{11,19}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(O2Tissue.pO2,pO2)  annotation (Line(
      points={{-12,3},{-12,14},{14,14}},
      color={0,0,127},
      smooth=Smooth.None));
connect(O2Tissue.alveolar,Metabolism_O2Use. q_in) annotation (Line(
    points={{-7.6,-17.2},{-7.6,-42.1},{-8,-42.1},{-8,-72}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
  connect(O2Tissue.BloodFlow, busConnector.CardiacOutput) annotation (Line(
        points={{2,-5.6},{32,-5.6},{32,74},{-82,74}},     color={0,0,127}),
      Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.VO2, Metabolism_O2Use.soluteFlow) annotation (Line(
      points={{-82,74},{-64,74},{-46,74},{-46,-86},{-12,-86}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Tissue.q_in, arty) annotation (Line(
      points={{1,0},{52.5,0},{100,0}},
      color={107,45,134},
      thickness=1));
  connect(O2Tissue.q_out, vein) annotation (Line(
      points={{-17,0},{-58.5,0},{-100,0}},
      color={107,45,134},
      thickness=1));
  connect(O2Tissue.sO2, busConnector.tissueVein_sO2) annotation (Line(
        points={{-8,3},{-8,3},{-8,74},{-82,74}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(busConnector.pCO, O2Tissue.pCO) annotation (Line(
      points={{-82,74},{-64,74},{-46,74},{-46,-3},{-17,-3}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FHbF, O2Tissue.FHbF) annotation (Line(
      points={{-82,74},{-46,74},{-46,-7},{-17,-7}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.FMetHb, O2Tissue.FMetHb) annotation (Line(
      points={{-82,74},{-64,74},{-46,74},{-46,-11},{-17,-11}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.cDPG, O2Tissue.cDPG) annotation (Line(
      points={{-82,74},{-64,74},{-46,74},{-46,-15},{-17,-15}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(busConnector.ctHb, O2Tissue.ctHb) annotation (Line(
      points={{-82,74},{-46,74},{-46,-19},{-17,-19}},
      color={0,0,255},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}}));
  connect(O2Tissue.T, busConnector.core_T) annotation (Line(points={{1,-11},
          {32,-11},{32,74},{-82,74}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Tissue.pCO2, busConnector.tissueVein_pCO2) annotation (Line(
        points={{1,-15},{32,-15},{32,74},{-82,74}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  connect(O2Tissue.pH, busConnector.tissueVein_pH) annotation (Line(points=
          {{1,-19},{32,-19},{32,74},{-82,74}}, color={0,0,127}), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}),
                   graphics={Rectangle(extent={{-120,100},{120,-100}},
            lineColor={0,0,0})}), Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}})));
end TissuesO2;
