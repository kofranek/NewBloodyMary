within NewBloodyMary_testing.OSA;
function ceHbof "effective hemoglobin concentration in mmol/l"
  input Real ctHb "concentration of hemoglobin in mmol/l";
  input Real FCOHb "substance fraction of carboxyhemoglobin";
  input Real FMetHb "substance fraction of hemoglobin";
  output Real returnValue "effective contentration of hemoglobin";
algorithm
   returnValue := ctHb*(1 - FCOHb - FMetHb);
end ceHbof;
