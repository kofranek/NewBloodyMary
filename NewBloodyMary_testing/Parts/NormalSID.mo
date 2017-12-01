within NewBloodyMary_testing.Parts;
model NormalSID
 // extends BloodPhBase;
 Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                           final displayUnit="mmol/l")
    "concentration of total plasma albumins(dofault=0.65mmol/l)"                annotation (Placement(transformation(extent={{-120,72},
            {-80,112}}),         iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,80})));

 Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                           final displayUnit="g/l")
    "concentration of total plasma globulins"                                   annotation (Placement(transformation(extent={{-120,42},
            {-80,82}}),          iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,50})));
 Physiolibrary.Types.RealIO.ConcentrationInput ctPO4_P(
                                             final displayUnit="mmol/l")
    "concentration of total inorganic phosphate in plasma"                      annotation (Placement(transformation(extent={{-120,12},
            {-80,52}}),          iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,20})));

  Physiolibrary.Types.RealIO.VolumeDensityOfChargeOutput
                                      NSID
                                    annotation (Placement(transformation(extent={{80,0},{
            120,40}}),           iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={-120,-60})));
 Physiolibrary.Types.RealIO.FractionInput Hct "hematocrit"
                                  annotation (Placement(transformation(extent={{-120,
          -14},{-80,26}}),       iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,-70})));
  Bicarbonate bicarbonate
    annotation (Placement(transformation(extent={{-38,10},{-18,30}})));
  Albumin albumin
    annotation (Placement(transformation(extent={{-38,78},{-18,98}})));
  Modelica.Blocks.Math.Sum NSIDP(nin=4, y(unit="C/m3", displayUnit=
        "mEq/l"))
    annotation (Placement(transformation(extent={{26,72},{46,92}})));
  Globulins globulins
    annotation (Placement(transformation(extent={{-38,56},{-18,76}})));
  Phosphates phosphates
    annotation (Placement(transformation(extent={{-38,34},{-18,54}})));
  Haemoglobin haemoglobin
    annotation (Placement(transformation(extent={{-38,-68},{-18,-48}})));
  OtherRBCBuffers phosphates1
    annotation (Placement(transformation(extent={{-38,-96},{-18,-76}})));
  Modelica.Blocks.Math.Sum NSIDE(nin=3, y(unit="C/m3", displayUnit=
        "mEq/l"))
    annotation (Placement(transformation(extent={{12,-78},{32,-58}})));
  Modelica.Blocks.Math.Feedback Pct      annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={26,56})));
  Modelica.Blocks.Math.Product product1(y(unit="C/m3", displayUnit=
        "mEq/l"))                       annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={50,-2})));
  Modelica.Blocks.Math.Product product2(y(unit="C/m3", displayUnit=
        "mEq/l"))                       annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={50,38})));
  Modelica.Blocks.Math.Add add(k1=-1, k2=-1)
    annotation (Placement(transformation(extent={{70,10},{90,30}})));
Physiolibrary.Types.Constants.FractionConst             const(k=1)
  annotation (Placement(transformation(extent={{-2,50},{10,62}})));
Physiolibrary.Types.Constants.pHConst                   n_pH_P(k=7.4)
  annotation (Placement(transformation(extent={{-82,44},{-70,56}})));
Physiolibrary.Types.Constants.PressureConst             n_pCO2(k=
      5332.8954966)
  annotation (Placement(transformation(extent={{-82,14},{-70,26}})));
 Physiolibrary.Types.RealIO.TemperatureInput T "temperature"
                                  annotation (Placement(transformation(extent={{-120,
            -40},{-80,0}}),      iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,-40})));
  Bicarbonate bicarbonate1
    annotation (Placement(transformation(extent={{-38,-40},{-18,-20}})));
Physiolibrary.Types.Constants.pHConst                   n_pH_E(k=7.19)
    "should be calculated, but how?"
  annotation (Placement(transformation(extent={{-86,-42},{-74,-30}})));
 Physiolibrary.Types.RealIO.ConcentrationInput tHb_E
    "haemoglobin concentration in erythrocyte"
                                  annotation (Placement(transformation(extent={{-120,
            -68},{-80,-28}}),    iconTransformation(extent={{-10,-10},{10,10}},
       rotation=180,
       origin={90,-10})));
Physiolibrary.Types.Constants.FractionConst n_sO2(k=1)
  annotation (Placement(transformation(extent={{-86,-66},{-74,-54}})));
equation
  connect(ctAlb, albumin.tAlb) annotation (Line(
      points={{-100,92},{-70,92},{-70,88},{-38,88}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bicarbonate.y, NSIDP.u[1])          annotation (Line(
      points={{-18,12},{-8,12},{-8,80.5},{24,80.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(albumin.y, NSIDP.u[2])          annotation (Line(
      points={{-18,80},{-6,80},{-6,81.5},{24,81.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(globulins.y, NSIDP.u[3])          annotation (Line(
      points={{-18,58},{-8,58},{-8,82.5},{24,82.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(phosphates.y, NSIDP.u[4])          annotation (Line(
      points={{-18,36},{-8,36},{-8,83.5},{24,83.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Hct, Pct.u2)      annotation (Line(
      points={{-100,6},{26,6},{26,48}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(add.y, NSID)
                      annotation (Line(
      points={{91,20},{100,20}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(product1.y, add.u2) annotation (Line(
      points={{50,9},{50,14},{68,14}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(product2.y, add.u1) annotation (Line(
      points={{50,27},{50,26},{68,26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Pct.y, product2.u2)      annotation (Line(
      points={{35,56},{44,56},{44,50}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Hct, product1.u1) annotation (Line(
      points={{-100,6},{26,6},{26,-20},{44,-20},{44,-14}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(NSIDE.y, product1.u2)                annotation (Line(
      points={{33,-68},{56,-68},{56,-14}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(NSIDP.y, product2.u1)          annotation (Line(
      points={{47,82},{56,82},{56,50}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(const.y, Pct.u1)      annotation (Line(
      points={{11.5,56},{18,56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_P.y, albumin.pH)    annotation (Line(
      points={{-68.5,50},{-62,50},{-62,94},{-38,94}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_P.y, globulins.pH)    annotation (Line(
      points={{-68.5,50},{-62,50},{-62,72},{-38,72}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_P.y, phosphates.pH)    annotation (Line(
      points={{-68.5,50},{-38,50}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_P.y, bicarbonate.pH)    annotation (Line(
      points={{-68.5,50},{-62,50},{-62,26},{-38,26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(T, bicarbonate.T) annotation (Line(
      points={{-100,-20},{-56,-20},{-56,16},{-38,16}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(bicarbonate1.y, NSIDE.u[1])                annotation (Line(
      points={{-18,-38},{-4,-38},{-4,-69.3333},{10,-69.3333}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(haemoglobin.y, NSIDE.u[2])                annotation (Line(
      points={{-18,-66},{-4,-66},{-4,-68},{10,-68}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(phosphates1.y, NSIDE.u[3])                annotation (Line(
      points={{-18,-94},{-4,-94},{-4,-66.6667},{10,-66.6667}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pCO2.y, bicarbonate.pCO2)      annotation (Line(
      points={{-68.5,20},{-38,20}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pCO2.y, bicarbonate1.pCO2)      annotation (Line(
      points={{-68.5,20},{-64,20},{-64,-30},{-38,-30}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_E.y, bicarbonate1.pH)        annotation (Line(
      points={{-72.5,-36},{-60,-36},{-60,-24},{-38,-24}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_E.y, haemoglobin.pH)        annotation (Line(
      points={{-72.5,-36},{-60,-36},{-60,-52},{-38,-52}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pH_E.y, phosphates1.pH)        annotation (Line(
      points={{-72.5,-36},{-60,-36},{-60,-80},{-38,-80}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(T, bicarbonate1.T) annotation (Line(
      points={{-100,-20},{-56,-20},{-56,-34},{-38,-34}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctPO4_P, phosphates.tPO4) annotation (Line(
      points={{-100,32},{-74,32},{-74,34},{-48,34},{-48,44},{-38,44}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tHb_E, haemoglobin.tHb_E) annotation (Line(
      points={{-100,-48},{-70,-48},{-70,-56},{-38,-56}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(n_pCO2.y, haemoglobin.pCO2)      annotation (Line(
      points={{-68.5,20},{-64,20},{-64,-64},{-38,-64}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(T, haemoglobin.T) annotation (Line(
      points={{-100,-20},{-56,-20},{-56,-68},{-38,-68}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctGlb, globulins.ctGlb) annotation (Line(
      points={{-100,62},{-69,62},{-69,64},{-38,64}},
      color={0,0,127},
      smooth=Smooth.None));
  //  NBB = (1-Hct)( [HCO3]P(40mmHg,7.4) + tAlbP*-zAlbP(7.4) + tGlbP*-zGlb(7.4) + tPO4P*-zPO4(7.4) + tORGP*-zORG(7.4) + .. ) + Hct ( [HCO3]E(40mmHg,NpHE) + tHb*-zHb(sO2,sCO2,NpHE) + tPO4E*-zPO4(NpHE) ..)
  //  NBB = 0;//_cTHox;
connect(n_sO2.y, haemoglobin.sO2) annotation (Line(
    points={{-72.5,-60},{-38,-60}},
    color={0,0,127},
    smooth=Smooth.None));
  annotation (        Documentation(revisions="<html>

<table cellspacing=\"2\" cellpadding=\"0\" border=\"0\"><tr>
<td><p>Author:</p></td>
<td><p>Marek Matejak</p></td>
</tr>
<tr>
<td><p>License:</p></td>
<td><p><a href=\"http://www.physiomodel.org/license.html\">Physiomodel License 1.0</a> </p></td>
</tr>

<tr>
<td><p>Date of:</p></td>
<td><p>2013</p></td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"), Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}})));
end NormalSID;
