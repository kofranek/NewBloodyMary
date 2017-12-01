within NewBloodyMary_testing.OSA;
function sCO
  input Real FCOHb;
  input Real FMetHb;
  output Real returnValue;
protected
  Real xFCOHb;
algorithm
  if FCOHb < 0 then
     xFCOHb := 0;
  else xFCOHb := FCOHb;
  end if;
  returnValue := xFCOHb/(1.0 - FMetHb);
end sCO;
