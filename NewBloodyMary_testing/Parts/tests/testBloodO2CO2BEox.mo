within NewBloodyMary_testing.Parts.tests;
model testBloodO2CO2BEox

Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
  annotation (Placement(transformation(extent={{86,56},{76,64}})));
Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
  annotation (Placement(transformation(extent={{88,44},{76,52}})));
Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
  annotation (Placement(transformation(extent={{88,30},{76,38}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctPO4(k=1.16)
    annotation (Placement(transformation(extent={{88,68},{76,76}})));
  Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
          "kg/l") = 2.93)
    annotation (Placement(transformation(extent={{86,6},{76,14}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
    annotation (Placement(transformation(extent={{86,82},{76,90}})));
  Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
    annotation (Placement(transformation(extent={{5,-4},{-5,4}},
        rotation=180,
        origin={-99,-2})));
  Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
    annotation (Placement(transformation(extent={{-100,84},{-90,92}})));
  Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
    "\"norma value 0.02 mmHg for non smokers, hemoglobin FCO is 0,27% (at 0.063 mmHg hemoglobin FCO is 0,5% - as ist by Siggaard normal value)"
    annotation (Placement(transformation(extent={{90,18},{76,26}})));
  Physiolibrary.Types.Constants.VolumeDensityOfChargeConst BEox(k=0)
    annotation (Placement(transformation(extent={{-88,-94},{-78,-86}})));
  Parts.bloodCO2O2BEox bloodCO2O2BEox_
    annotation (Placement(transformation(extent={{-72,-30},{52,96}})));
  Physiolibrary.Types.Constants.ConcentrationConst tO2(k=7.95)
    annotation (Placement(transformation(extent={{-90,-60},{-78,-50}})));
  Physiolibrary.Types.Constants.ConcentrationConst tCO2(k=21.64)
    annotation (Placement(transformation(extent={{-90,-76},{-78,-66}})));
equation
  connect(temp.y,bloodCO2O2BEox_. T) annotation (Line(
      points={{-88.75,88},{-82,88},{-82,87.18},{-76.96,87.18}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FHbF.y,bloodCO2O2BEox_. FHbF) annotation (Line(
      points={{74.5,34},{74.25,34},{74.25,34.26},{59.44,34.26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctGlb.y,bloodCO2O2BEox_. ctGlb) annotation (Line(
      points={{74.75,10},{68,10},{68,9.06},{59.44,9.06}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pCO.y,bloodCO2O2BEox_. pCO) annotation (Line(
      points={{74.25,22},{66,22},{66,21.66},{59.44,21.66}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(FMetHb.y,bloodCO2O2BEox_. FMetHb) annotation (Line(
      points={{74.5,48},{66,48},{66,46.86},{59.44,46.86}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(DPG.y,bloodCO2O2BEox_. cDPG) annotation (Line(
      points={{74.75,60},{68,60},{68,59.46},{59.44,59.46}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctPO4.y,bloodCO2O2BEox_. ctPO4) annotation (Line(
      points={{74.5,72},{66,72},{66,72.06},{59.44,72.06}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctAlb.y,bloodCO2O2BEox_. ctAlb) annotation (Line(
      points={{74.75,86},{68,86},{68,84.66},{59.44,84.66}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(BEox.y,bloodCO2O2BEox_. BEox) annotation (Line(
      points={{-76.75,-90},{-11.86,-90},{-11.86,-31.89}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ctHb.y,bloodCO2O2BEox_. ctHb) annotation (Line(
      points={{-92.75,-2},{-86,-2},{-86,-1.02},{-78.2,-1.02}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tO2.y, bloodCO2O2BEox_.ctO2) annotation (Line(
      points={{-76.5,-55},{-59.6,-55},{-59.6,-31.26}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(tCO2.y, bloodCO2O2BEox_.ctCO2) annotation (Line(
      points={{-76.5,-71},{-36.04,-71},{-36.04,-31.26}},
      color={0,0,127},
      smooth=Smooth.None));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}),      graphics));
end testBloodO2CO2BEox;
