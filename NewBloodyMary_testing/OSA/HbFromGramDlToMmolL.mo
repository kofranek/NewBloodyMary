within NewBloodyMary_testing.OSA;
function HbFromGramDlToMmolL
  "recalculation of hemoglobin concentration form g/dl to mmol/l"
  input Real Hbg "concentration of hemoglobin in g/dl";
  output Real ctHb "concentration of hemoglobin concentration in mmol/l";
algorithm
  ctHb := Hbg/1.6114;
end HbFromGramDlToMmolL;
