within NewBloodyMary_testing.OSA;
function BEINVof
  input Real BEox "Base excess in virtually oxygenated blood in mmol/l";
  input Real pCO2 "pCO2 in kPa";
  input Real cHb "hemoglobin concentration in mmol/l";
  input Real cAlb "albumin concentration in plasma in mmol/l";
  input Real cPi "plasma phosphate concentration in mmol/l";
  input Real sO2 "O2 hemoglobin saturation";
  input Real temp "temperature in ?C";
  output Real pH "plasma pH";
protected
  Real epsilon = 0.000001;
  Real pHx = 7.4;
  Real xBEox;
  Real dBEox;
  Real dpH;
  Real pHlow = 0;
  Real pHhigh = 0;
  Real pHmean;
  Boolean done=false;
algorithm
  dpH:=0.1;
  while (not done) loop
    xBEox := cBEoxOf(pHx,pCO2,cHb,temp,cAlb,cPi,sO2);
    dBEox:=BEox-xBEox;
    if (dBEox>0) then
      pHlow := pHx;
      pHx := pHx+dpH;
    else
      pHhigh := pHx;
      pHx := pHx - dpH;
    end if;
    done := (pHlow<>0 and pHhigh<>0);
  end while;

  while abs(pHhigh-pHlow)>epsilon loop
    pHmean := (pHlow + pHhigh)/2;

    if ((BEox - cBEoxOf(pHlow,pCO2,cHb,temp,cAlb,cPi,sO2))*
    (BEox - cBEoxOf(pHmean,pCO2,cHb,temp,cAlb,cPi,sO2))>0) then
      pHlow := pHmean;
    else
      pHhigh := pHmean;
    end if;
  end while;

  pH := (pHlow + pHhigh)/2;

end BEINVof;
