within NewBloodyMary_testing.Parts;
partial model BloodO2Base
//start values is for tissues veins blood
  parameter Boolean isSaturated = false;

  Physiolibrary.Types.Concentration tO2(start=0.75*8.14);
  Real aO2;
//  Real pO2(start=5.33,           unit="kPa");
    // start=13,
  Physiolibrary.Types.Fraction sO2CO(start=0.95);
  Physiolibrary.Types.Pressure pO2CO;
  Physiolibrary.Types.Concentration cO2Hb(start=6);
  //
  Physiolibrary.Types.Fraction sCO;

  Physiolibrary.Types.Concentration ceHb;
  Real a(start=0.5);
  Real k;
  Real x;
  Real y;
  Real h;

/*  Real ex;
  Real ey;
  Real ey0;
  Real tnh;
*/
  Physiolibrary.Types.Fraction FCOHb(start=0);

    //  Real pCO;
    //  Real pCO2;
    //(start=5);
  Physiolibrary.Types.RealIO.FractionOutput sO2
                                      annotation (Placement(
        transformation(extent={{-30,-112},{10,-72}}),
                                                    iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={0,-120})));
  Physiolibrary.Types.RealIO.pHInput pH
                                  annotation (Placement(transformation(extent={{-120,70},
            {-80,110}}),          iconTransformation(extent={{-100,90},{
            -80,110}})));
  Physiolibrary.Types.RealIO.ConcentrationInput ctHb
                                   annotation (Placement(transformation(extent={{60,60},
            {100,100}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,100})));

  Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-120,
            -20},{-80,20}}),      iconTransformation(extent={{-100,10},{
            -80,30}})));
  Physiolibrary.Types.RealIO.PressureInput pCO
                                   annotation (Placement(transformation(extent={{60,-100},
            {100,-60}}),          iconTransformation(extent={{-10,-10},{
            10,10}},
        rotation=180,
        origin={90,-60})));
  Physiolibrary.Types.RealIO.PressureInput pCO2(start=5330)
                                   annotation (Placement(transformation(extent={{-120,20},
            {-80,60}}),           iconTransformation(extent={{-100,50},{-80,70}})));
  Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                   annotation (Placement(transformation(extent={{60,20},
            {100,60}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,60})));
  Physiolibrary.Types.RealIO.FractionInput FMetHb
                                   annotation (Placement(transformation(extent={{60,-20},
            {100,20}}),           iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,20})));

  Physiolibrary.Types.RealIO.FractionInput FHbF
                                   annotation (Placement(transformation(extent={{60,-60},
            {100,-20}}),          iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,-20})));

    //  Real mlTOmmol_O2(unit="mMol/ml") = 8.18/0.182
    //    "conversion constant for oxygen mass from ml to mMol";
    // Real mlTOmmol_O2(unit="mMol/ml") = 1/(740*2*16/1000)
    //   "conversion constant for oxygen mass from ml to mMol";
    //8.18 / 0.182
    //molar mass = 2*16 g/mol; density = 740 ml/g
    // constant Real MiniliterPerLiter(final unit="ml/l")=1000;
  Physiolibrary.Types.RealIO.PressureOutput pO2(start=5330)
                                      annotation (Placement(
        transformation(extent={{2,-112},{42,-72}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={40,-120})));

  Physiolibrary.Types.Concentration cdO2;
/*
  Real aa;
  Real xx;
  Real yy;
  Real ssO2CO(start=0.96);
*/

 parameter Physiolibrary.Types.Temperature T0 = 273.15+37
      "normal temperature";
 parameter Physiolibrary.Types.pH pH0 = 7.4 "normal arterial pH";
 parameter Physiolibrary.Types.Pressure pCO20 = 5330
      "normal arterial CO2 partial pressure";
 parameter Physiolibrary.Types.Concentration cDPG0 = 5 "normal DPG,used by a";
 parameter Real dadcDPG0 = 0.3 "used by a";
 parameter Real dadcDPGxHbF = -0.1 "or perhabs -0.125";
 parameter Real dadpH = -0.88 "used by a";
 parameter Real dadlnpCO2 = 0.048 "used by a";
 parameter Real dadxMetHb = -0.7 "used by a";
 parameter Real dadxHbF = -0.25 "used by a";

    //constant Real PaTOmmHg = 1/133;
equation
    //   PO2 = PaTOmmHg*1000 * pO2;
    //  pCOmmHg = PaTOmmHg*1000 * pCO;
    //  pCO2mmHg = PaTOmmHg*1000 * pCO2;
    //oxygen:
    ceHb = ctHb * (1 - FCOHb - FMetHb);
    //effective haemoglobin
    assert(tO2 <= ceHb * 1.06, "Model does not support this high level of oxygen in blood. Maximum of oxygen concentration should be connected with efective hemoglobin concentration!");
    //pO2,pCO,pCO2 .. Pa
    //TODO: check units of solubility
    aO2 = exp(log(0.0105) + (-0.0115 * (T - T0)) + 0.5 * 0.00042 * (T - T0) ^ 2) / 1000;
    //solubility
    cdO2 = aO2 * pO2;
    /*  if (isSaturated) then
    cdO2 = homotopy( tO2 - sO2*ceHb, tO2 - 0.9999*ceHb);
  else
    sO2 = homotopy( (tO2-cdO2)/ceHb,  tO2/ceHb);  // ctO2 = aO2*pO2 + ceHb*sO2;  initially sufficient to have all the oxygen bound to hemoglobin, and then add only a small amount of dissolved oxygen..
  end if; */
    //TODO: why not sO2 = homotopy( (tO2-cdO2)/ceHb,  tO2/ceHb);
    tO2 = aO2 * pO2 + ceHb * sO2;
    //  cO2Hb = tO2 - cdO2;
    sO2 = cO2Hb / ceHb;
    //TODO: check this: a=-0.88*(pH-7.4)+0.048*log(pCO2/5.33)-0.7*FMetHb+(0.3-0.25*FHbF)*cDPG/(5-1);
    //TANH
    a = dadpH * (pH - pH0) + dadlnpCO2 * log(max(1e-15 + 1e-22 * pCO2, pCO2 / pCO20)) + dadxMetHb * FMetHb + (dadcDPG0 + dadcDPGxHbF * FHbF) * (cDPG / cDPG0 - 1);
    //log(pCO2/5330)
    //orginal:
    x = log(pO2CO / 7000) - a - 0.055 * (T - T0);
    //instead of:  x=log(pO2CO/7) - a - 0.055*(T-37);
    y - 1.8747 = x + h * tanh(k * x);
  k=0.5342857;
  h=3.5 + a;
  y=log(sO2CO/(1-sO2CO));
    //simplification:
    /*  ey/ey0=ex*exp((3.5 + a)*tnh);  //TANH:  y-log(0.867/(1-0.867))=x+(3.5 + a)*tanh(0.5342857*x);
  ey0=0.867/(1-0.867);  //y0=log(0.867/(1-0.867)); //1.8747
  tnh = (ex^(2*k) - 1) / (ex^(2*k) + 1);  // = tanh(k*x)
  ex=max(1e-15*(1+1e-6*pO2CO),(pO2CO/7.000) / exp(a + 0.055*(T-37)));  // = exp(x); x=log(max(1e-15*(1+1e-6*pO2CO),pO2CO/7000)) - a - 0.055*(T_degC-37);
  k=0.5342857;
  ey=sO2CO/(1-sO2CO); // = exp(y);  y=log(max(1e-15*(1+1e-6*sO2CO/(1-sO2CO)),sO2CO/(1-sO2CO)));
  */
    /************ O2 ********************/
    /************ CO ********************/
    //Haldane:
    /* if (pCOmmHg<1e-10) then
    sCO = 0;
    pO2CO = pO2;
    sO2CO = sO2;
    FCOHb = 0;/*
  else*/
    /*   pCO = sCO*pO2CO/ 218*sO2CO;
    pO2CO = pO2 + 218*pCO;
    sO2CO = (cO2Hb + ctHb*FCOHb)/(ctHb*(1-FMetHb));
    sCO = ctHb*FCOHb/(ctHb*(1-FMetHb));*/
    {pCO, FCOHb, pO2CO, sO2CO} = homotopy({sCO * pO2CO / 218 * sO2CO, sCO * (1 - FMetHb), pO2 + 218 * pCO, (cO2Hb + ctHb * FCOHb) / (ctHb * (1 - FMetHb))}, {0, 0, pO2, sO2});
    //  end if;
    /*  ceHb = ctHb * (1-FCOHb-FMetHb); //effective haemoglobin
  aO2 = exp(log(0.0105)+(-0.0115*(T-37))+0.5*0.00042*(T-37)^2); //solubility
  tO2 = aO2*pO2 + ceHb*sO2;
  //Haldane:
  sCO*pO2CO = 218*pCO*sO2CO;
  pO2CO = pO2 + 218*pCO;
  //saturation definitions: "result: sO2CO = (sO2*(ceHb/ctHb)+FCOHb)/(1-FMetHb);"
  sO2 = cO2Hb/ceHb;
  sO2CO = (cO2Hb + ctHb*FCOHb)/(ctHb*(1-FMetHb));
  sCO = ctHb*FCOHb/(ctHb*(1-FMetHb));
  //TANH
//  a=-0.88*(pH-7.4)+0.048*log(pCO2/5.33)-0.7*FMetHb+(0.3-0.25*FHbF)*cDPG/(5-1); //Bohr coefficient: -der(log10(pO2),pH)=0.88/ln(10)=0.38, -der(ln(pO2),pH)=0.88
//  x=log(pO2CO/7); //namiesto:  x=log(pO2CO/7) - a - 0.055*(T-37);
  y-y0=x+h*tanh(k*x);
  y0=log(0.867/(1-0.867)); //1.8747

  k=0.5342857;
  h=3.5 + a;
//  y=log(sO2CO/(1-sO2CO));

//corrected:
  a=-0.88*(pH-7.4)+0.048*log(max(1e-15+1e-24*pCO2,pCO2/5.33))-0.7*FMetHb+(0.3-0.1*FHbF)*(cDPG/5 - 1);
  x=log(max(1e-15+1e-24*pO2CO,pO2CO/7)) - a - 0.055*(T-37);
  y=log(max(1e-15+1e-24*sO2CO/(1-sO2CO),sO2CO/(1-sO2CO)));

*/
    //oxygen: working well:
    //TANH
    //  a=-0.88*(pH-7.4)+0.048*log(max(1e-15+1e-19*pCO2,pCO2/5.33))-0.7*FMetHb+(0.3-0.25*FHbF)*cDPG/(5-1); //Bohr coefficient: -der(log10(pO2),pH)=0.88/ln(10)=0.38, -der(ln(pO2),pH)=0.88
    //  x=log(pO2CO/7);
    //  x=log(max(1e-15+1e-19*pO2CO,pO2CO/7)) - a - 0.055*(T-37); //namiesto:  x=log(pO2CO/7) - a - 0.055*(T-37);
    //  y=log(max(1e-15+1e-19*sO2CO/(1-sO2CO),sO2CO/(1-sO2CO)));
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid), Text(
          extent={{-74,-32},{74,-64}},
          lineColor={0,0,255},
          textString="%name")}));
end BloodO2Base;
