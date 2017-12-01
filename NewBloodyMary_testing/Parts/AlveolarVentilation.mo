within NewBloodyMary_testing.Parts;
model AlveolarVentilation
  extends Physiolibrary.Icons.Lungs;
//  parameter Real EnvironmentPressure(final displayUnit="mmHg");
  //  parameter Real EnvironmentTemperature(final displayUnit="degC");
Physiolibrary.Chemical.Interfaces.ChemicalPort_b expired annotation (
    extent=[-10,-110; 10,-90], Placement(transformation(extent={{68,18},{
          88,38}}), iconTransformation(extent={{90,70},{110,90}})));

Physiolibrary.Chemical.Interfaces.ChemicalPort_a inspired annotation (
    Placement(transformation(extent={{-82,18},{-62,38}}),
      iconTransformation(extent={{-110,70},{-90,90}})));
  Physiolibrary.Types.RealIO.VolumeFlowRateInput AlveolarVentilation_Env
  annotation (Placement(transformation(extent={{-14,44},{0,58}}),
      iconTransformation(
      extent={{-20,-20},{20,20}},
      rotation=180,
      origin={80,20})));
Physiolibrary.Chemical.Components.Stream solventFlowPump(q_out(conc(start=
         0.13686)), useSolutionFlowInput=true)
  annotation (Placement(transformation(extent={{-2,18},{18,38}})));
Physiolibrary.Chemical.Components.Dilution dilution(useDilutionInput=true)
                                                    annotation (Placement(
      transformation(
      extent={{-8,8},{12,-12}},
      origin={-26,30})));
Physiolibrary.Chemical.Components.Stream solventFlowPump1(
    useSolutionFlowInput=true)
  annotation (Placement(transformation(extent={{44,18},{64,38}})));
Physiolibrary.Chemical.Interfaces.ChemicalPort_b   alveolar annotation (
    extent=[-10,-110; 10,-90], Placement(transformation(extent={{20,-14},
          {40,6}}), iconTransformation(extent={{-8,-110},{12,-90}})));
  Physiolibrary.Types.RealIO.FractionInput BronchiDilution
                                         annotation (Placement(
        transformation(
        extent={{-10.0004,-10.0004},{4.00021,4.00021}},
        origin={-70.0002,9.9998}),
                           iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={80,-40})));
equation

  connect(solventFlowPump1.q_out, expired) annotation (Line(
      points={{64,28},{78,28}},
      color={200,0,0},
      smooth=Smooth.None,
      thickness=1));
  connect(solventFlowPump.q_out, solventFlowPump1.q_in) annotation (Line(
      points={{18,28},{44,28}},
      color={200,0,0},
      smooth=Smooth.None,
      thickness=1));

connect(AlveolarVentilation_Env, solventFlowPump.solutionFlow)
  annotation (Line(
    points={{-7,51},{8,51},{8,35}},
    color={0,0,127},
    smooth=Smooth.None));
connect(AlveolarVentilation_Env, solventFlowPump1.solutionFlow)
  annotation (Line(
    points={{-7,51},{54,51},{54,35}},
    color={0,0,127},
    smooth=Smooth.None));
  connect(BronchiDilution, dilution.dilution) annotation (Line(
      points={{-73.0003,6.9997},{-46,6.9997},{-46,20},{-34,20}},
      color={0,0,127},
      smooth=Smooth.None));
connect(dilution.q_out, solventFlowPump.q_in) annotation (Line(
    points={{-14,28},{-2,28}},
    color={200,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(inspired, dilution.q_in) annotation (Line(
    points={{-72,28},{-34,28}},
    color={200,0,0},
    thickness=1,
    smooth=Smooth.None));
connect(solventFlowPump.q_out, alveolar) annotation (Line(
    points={{18,28},{36,28},{36,-4},{30,-4}},
    color={107,45,134},
    thickness=1,
    smooth=Smooth.None));
 annotation (
    Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
            100,100}}), graphics={Polygon(
          points={{-38,93},{40,80},{-38,66},{-38,93}},
          lineColor={0,0,127},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid), Text(
          extent={{-92,-90},{84,-60}},
          textString="%name",
          lineColor={0,0,255})}), Diagram(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end AlveolarVentilation;
