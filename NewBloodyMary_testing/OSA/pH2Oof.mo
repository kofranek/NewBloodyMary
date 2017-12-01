within NewBloodyMary_testing.OSA;
function pH2Oof
  input Real temp "temperature in ?C";
  output Real vaporPressure "in mmHg";
algorithm
  if (temp < 0) then
     vaporPressure :=0;
  else
     if (temp > 100) then
        vaporPressure := 760;
     else
 vaporPressure :=  exp(18.6686 - (4030.183 / (temp + 235)));
     end if;
  end if;
end pH2Oof;
