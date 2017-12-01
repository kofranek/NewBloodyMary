within NewBloodyMary_testing.Parts;
model VentilationInputs
  extends Physiolibrary.Icons.Ventilation;
Physiolibrary.Types.BusConnector busConnector annotation (Placement(
      transformation(extent={{66,-30},{86,-10}}), iconTransformation(
        extent={{80,40},{120,80}})));
  Physiolibrary.Types.Constants.FractionConst constBronchiDilution(k=0.96)
    "Not in physiomodel"
    annotation (Placement(transformation(extent={{-78,-18},{-70,-14}})));
  Physiolibrary.Types.Constants.VolumeFlowRateConst constAlveolarVentilation_Env(k=6e-05)
    annotation (Placement(transformation(extent={{-80,36},{-72,40}})));
equation
  connect(constBronchiDilution.y, busConnector.BronchiDilution)
    annotation (Line(
      points={{-69,-16},{76,-16},{76,-20}},
      color={0,0,127},
      smooth=Smooth.None), Text(
      string="%second",
      index=1,
      extent={{6,3},{6,3}}));
connect(constAlveolarVentilation_Env.y, busConnector.AlveolarVentilation_Env)
  annotation (Line(
    points={{-71,38},{76,38},{76,-20}},
    color={0,0,127},
    smooth=Smooth.None), Text(
    string="%second",
    index=1,
    extent={{6,3},{6,3}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false,extent={{-100,-100},
            {100,100}}),       graphics={Text(
          extent={{-120,-108},{130,-126}},
          lineColor={0,0,255},
          textString="%name"), Line(
          points={{-88,-88},{60,40}},
          color={28,108,200},
          arrow={Arrow.None,Arrow.Filled},
          thickness=0.5)}),      Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}})));
end VentilationInputs;
