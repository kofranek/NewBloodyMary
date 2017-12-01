within NewBloodyMary_testing.Parts;
model VaporPressure

  Physiolibrary.Types.RealIO.TemperatureInput
                                     T(
                                  displayUnit="degC")   annotation (Placement(transformation(extent={
            {-118,42},{-78,82}}), iconTransformation(extent={{-100,-14},{-72,14}})));
  Physiolibrary.Types.RealIO.PressureOutput
                                      VaporPressure_(
                                              displayUnit="mmHg")
                                                    annotation (Placement(transformation(extent=
            {{56,54},{96,94}}), iconTransformation(extent={{100,-14},{128,14}})));
equation
 VaporPressure_ =  if T<273.15 then 0 else if T>373.15 then 101325 else
                    (101325/760)*exp(18.6686-(4030.183/(T-273.15+235)));
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Rectangle(
          extent={{-100,40},{100,-40}},
          lineColor={0,0,0},
          fillColor={170,213,255},
          fillPattern=FillPattern.Solid)}));
end VaporPressure;
