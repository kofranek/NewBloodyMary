within NewBloodyMary_testing.OSA;
model TissuesBloodGases
  extends Physiolibrary.Icons.Tissues;
  Parts.MolarInflowConnector O2a annotation (Placement(transformation(extent={
            {-96,34},{-84,46}}), iconTransformation(extent={{80,0},{100,20}})));
  Parts.MolarInflowConnector CO2a annotation (Placement(transformation(extent=
           {{-96,76},{-84,88}}), iconTransformation(extent={{80,-20},{100,0}})));
  Parts.MolarOutflowConnector O2v annotation (Placement(transformation(extent={{
            60,34},{72,46}}), iconTransformation(extent={{-100,-2},{-80,18}})));
  Parts.MolarOutflowConnector CO2v annotation (Placement(transformation(extent={
            {58,78},{70,90}}), iconTransformation(extent={{-100,-20},{-80,0}})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
        transformation(extent={{-112,-84},{-72,-42}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-26,-100})));
  Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
        transformation(extent={{-112,-84},{-72,-42}}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={8,-100})));
  Physiolibrary.Types.VolumeFlowRate CardiacOutput;

equation
  O2v.q + O2a.q + VO2=0;
  CO2v.q + CO2a.q + VCO2=0;
  (O2a.conc - O2v.conc) * O2a.q/O2a.conc = VO2;
  (CO2v.conc - CO2a.conc) * CO2a.q/CO2a.conc = VCO2;

  CardiacOutput = O2a.q/O2a.conc;
  //  (O2a.conc - O2v.conc) * CardiacOutput = VO2;
  //  (CO2v.conc - CO2a.conc) * CardiacOutput = VCO2;
   annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics={
        Text(
          extent={{-78,-2},{-32,-22}},
          lineColor={0,0,0},
          fontSize=16,
          horizontalAlignment=TextAlignment.Left,
          textString="CO2",
          textStyle={TextStyle.Bold}),
        Text(
          extent={{-78,18},{-32,-2}},
          lineColor={0,0,0},
          fontSize=16,
          horizontalAlignment=TextAlignment.Left,
          textStyle={TextStyle.Bold},
          textString="O2"),
        Text(
          extent={{32,0},{78,-20}},
          lineColor={0,0,0},
          fontSize=16,
          horizontalAlignment=TextAlignment.Right,
          textStyle={TextStyle.Bold},
          textString="CO2"),
        Text(
          extent={{32,20},{78,0}},
          lineColor={0,0,0},
          fontSize=16,
          horizontalAlignment=TextAlignment.Right,
          textStyle={TextStyle.Bold},
          textString="O2")}),
                          Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-100},{100,100}})));
end TissuesBloodGases;
