within NewBloodyMary_testing.Parts;
class ISF_CO2
  extends MolarContent;

  Physiolibrary.Types.RealIO.TemperatureInput T annotation (Placement(
        transformation(extent={{-104,-14},{-64,26}}), iconTransformation(extent={{-100,
            -10},{-64,26}})));

  Physiolibrary.Types.Concentration cdCO2( displayUnit="mmol/l");
  Real aCO2( final displayUnit="mmol/(l.kPa)");
  Real pK;
  Real pH;
  Real NormalSID;             //SID in pH=7.4 - at pCO2=40 torr - SID is independent of pCO2
  Real pCO240torr=40*101325/760;

  Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3 annotation (Placement(
        transformation(extent={{94,-48},{114,-28}}), iconTransformation(extent={
            {94,-48},{114,-28}})));
  Physiolibrary.Types.RealIO.ConcentrationInput dSID annotation (Placement(
        transformation(extent={{-100,-62},{-60,-22}}), iconTransformation(
          extent={{-100,-62},{-60,-22}})));
  Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
        transformation(extent={{94,-72},{114,-52}}), iconTransformation(extent={
            {94,-72},{114,-52}})));

equation
  //Henderson-Hasselbalch equation:
  pK = 6.1 + (-0.0026) * (T - 310.15);
  aCO2 = 0.00023 * 10^(-0.0092*(T-310.15));
  //solubility depends on temperature
  cdCO2 = aCO2 * pCO2;
  // pH = if ( cdCO2 > 1e-8) then  pK + log10(max(1e-15,cHCO3/cdCO2)) else pK;
  cdCO2 * 10 ^ (pH - pK) = cHCO3;
  concentration = cdCO2+cHCO3;
  NormalSID=aCO2*pCO240torr*10^(7.4-pK);
  //normaSID=concetration of HCO3 at pH=7.4, pCO2 = 40 torr
  cHCO3 = NormalSID + dSID annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
end ISF_CO2;
