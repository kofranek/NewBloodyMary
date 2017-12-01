within NewBloodyMary_testing.Parts;
class ISF_O2
  extends MolarContent;
  Physiolibrary.Types.RealIO.PressureOutput pO2 annotation (Placement(
        transformation(extent={{94,-14},{114,6}}),    iconTransformation(extent={{94,-14},
            {114,6}})));

  Physiolibrary.Types.RealIO.TemperatureInput T annotation (Placement(
        transformation(extent={{-104,-26},{-64,14}}), iconTransformation(extent=
           {{-100,-22},{-64,14}})));

  Physiolibrary.Types.Concentration cdO2;
  Real aO2;
   parameter Physiolibrary.Types.Temperature T0 = 273.15+37
    "normal temperature";
equation
  concentration =cdO2;
  aO2 = exp(log(0.0105)+(-0.0115*(T-T0))+0.5*0.00042*(T-T0)^2)/1000; //solubility
  cdO2 = aO2*pO2;

  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
            -100,-100},{100,100}})));
end ISF_O2;
