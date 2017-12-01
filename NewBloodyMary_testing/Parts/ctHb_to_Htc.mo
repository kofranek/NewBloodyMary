within NewBloodyMary_testing.Parts;
model ctHb_to_Htc
  "\"Conversion blood hemoglobin concentration (ctHb in mmol/l) to hematocrit (Htc, expressed as a fraction)"

  Physiolibrary.Types.RealIO.FractionOutput Htc
    "Hematocrit (expressed as a fraction)" annotation (Placement(
        transformation(extent={{92,-12},{112,8}}), iconTransformation(extent=
            {{100,-28},{156,28}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
    "Total concentration of hemoglobin in blood (mmol/l)" annotation (
      Placement(transformation(extent={{-124,-8},{-84,32}}),
        iconTransformation(extent={{-156,-28},{-100,28}})));
equation
  // by:
  // http://noblood.org/forum/threads/5533-Hemoglobin-relationship-to-Hematocrit
  // Htc = 0.0485 x ctHb (mmol/L) + 0.0083;
  // ctHb = (Htc-0.0083)/0.0485 = 20.61856 *Ht - 0.171134;
  // in Physimodel is hemoglobin concetration calculated higher in given hematocrit:
  // ctHb = Htc*8.4/norm Htc = ctHb 8.4/0.44 = Htc * 19.09091;
  // in hematocrit  0.44 in Physiomodel Hb concentration is 8.4 mmol/l while
  // in other caculation is only 7.36
  // See - different results of different equations:
  // Hb=15g/dL: Hct (%) = (0.0485 *ctHb (mmol/L) + 0.0083) * 100 result is Hct of 45.98
  // Hb=15g/dL: Hct (%) = 2.8 * ctHb (g/dL) + 0.8 result is Hct of 42.80
  // Hb=15g/dL: Hct (%) = ctHb (g/dL) / 0.34 result is Hct of 44.12
  // Hb=15g/dL: Hct (%) = 2.941 * ctHb (g/dL) result is Hct of 44.12
  // * Conversion factor: g/dL * 0.62058 = mmol/L
  // Notice that all of the results for the same Hgb level are not identical.
  // The conclusion to all of this is, that while it is generally assumed that
  // the conversion from hemoglobin to hematocrit is pretty straightforward,
  // since most methods measuring ctHb are considered to be fairly accurate,
  // when looking at Hct levels, the healthcare professional needs to remember
  // that different analyzers use different conversion factors, which may
  // compromise the reliability of the hematocrit result.
  // In this calculation we use Siggaard-Andersen calculation from OSA programm
  // see http:http://www.siggaard-andersen.dk/Unit_Calcul.pas
  // in FUNCTION ctCO2Bof(pH, pCO2, T, ctHb, sO2: Double): Double;
  // ctHBE=21;
  // phiEB=ctHb/ctHBE; (phiEB=Htc);
  // Htc = ctHb/21;
  // This calculation is based on the assumption that concentration in hemoglobin
  // in erythrocytes ctHBE = 21 mmol/l if erythrocytes = 33.9 g/dl of erythrocytes
  // Htc = ctHb/(33.9*0.62058)=ctHb/21.037662
  Htc=ctHb/21;

  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics),   Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
        Rectangle(
          extent={{-100,48},{100,-46}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{20,24},{92,-22}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="Hct"),
        Text(
          extent={{-92,32},{-20,-32}},
          lineColor={0,0,255},
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid,
          textString="ctHb")}));
end ctHb_to_Htc;
