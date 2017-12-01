within NewBloodyMary_testing.Parts;
partial model BufferInterface

  Physiolibrary.Types.RealIO.pHInput pH
    annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
  Physiolibrary.Types.RealIO.VolumeDensityOfChargeOutput
                                      y(displayUnit="mEq/l")
    "charge of buffer"                                                      annotation (Placement(
        transformation(extent={{80,-100},{120,-60}}), iconTransformation(extent=
           {{80,-100},{120,-60}})));
  annotation ( Icon(graphics={Rectangle(extent={{-100,
              100},{100,-100}}, lineColor={0,0,255})}));
end BufferInterface;
