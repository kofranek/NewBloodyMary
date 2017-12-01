within NewBloodyMary_testing.Parts;
model kidneyABRcompensation

  Physiolibrary.Types.RealIO.pHInput pH
    annotation (Placement(transformation(extent={{-100,-20},{-60,20}})));
  Physiolibrary.Types.RealIO.MolarFlowRateOutput molarflowrate=-action* actionSize
  annotation (Placement(transformation(extent={{80,-10},{100,10}})));

  Real action;
  parameter Real actionSize=1e-8;
  parameter Real actionTimeConst=3600*12;
  parameter Real actionLimit=1;
  constant Real referencepH=7.4;
equation
  // hard anti-windup limiter
  if action > actionLimit and pH > referencepH or action < -actionLimit and pH <
      referencepH then
    der(action) = 0;
  else
    der(action)*actionTimeConst = (pH - referencepH) - action;
  end if;

end kidneyABRcompensation;
