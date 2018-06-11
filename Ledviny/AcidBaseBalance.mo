within ;
package AcidBaseBalance
  package Electrolytes

  end Electrolytes;

  package Kidney
    model Ammonium
      extends Physiolibrary.Icons.Amonium;
      Physiolibrary.Blocks.Factors.Spline PT_NH3_AcuteEffect(data={{7.00,2.0,0},
            {7.4,1.0,-3.0},{7.80,0.0,0}})
        "marek: normal pH corrected from 7.45 to 7.42"                                                                                                     annotation(Placement(transformation(extent = {{-28, 48}, {-8, 68}})));
      Physiolibrary.Blocks.Factors.SplineLag PT_NH3_ChronicEffect(                                             stateName = "PT_NH3.ChronicPhEffect",
        data={{7.00,3.0,0},{7.4,1.0,-4.0},{7.80,0.0,0}},
        HalfTime=1.5*86400*Modelica.Math.log(2))
        "marek: normal pH corrected from 7.45 to 7.42"                                                                                                     annotation(Placement(transformation(extent = {{-28, 36}, {-8, 56}})));
      Physiolibrary.Blocks.Factors.Spline CD_NH4_PhOnFlux(data={{7.00,1.0,0},{
            7.4,0.6,-2.0},{7.80,0.0,0}})
        "marek: normal pH corrected from 7.45 to 7.42"                                                                                                     annotation(Placement(transformation(extent = {{-28, 20}, {-8, 40}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst electrolytesFlowConstant(k = 6.6666666666667e-07) annotation(Placement(transformation(extent = {{-36, 70}, {-24, 82}})));
      Physiolibrary.Blocks.Factors.Spline ChloridePoolEffect(data = {{0.00, 0.0, 0}, {80, 1.0, 0.0}})
        "electroneutrality does not allow to extract cation without anion"                                                                                               annotation(Placement(transformation(extent = {{-28, -6}, {-8, 14}})));
      Physiolibrary.Types.BusConnector busConnector annotation(Placement(transformation(extent = {{-96, 62}, {-64, 94}}), iconTransformation(extent = {{-102, 68}, {-62, 108}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput molarflowrate annotation(Placement(transformation(extent = {{0, -32}, {20, -12}}), iconTransformation(extent = {{92, 4}, {112, 24}})));
    equation
      connect(PT_NH3_AcuteEffect.y, PT_NH3_ChronicEffect.yBase) annotation(Line(points = {{-18, 54}, {-18, 48}}, color = {0, 0, 127}, smooth = Smooth.None));
      connect(PT_NH3_ChronicEffect.y, CD_NH4_PhOnFlux.yBase) annotation(Line(points = {{-18, 42}, {-18, 32}}, color = {0, 0, 127}, smooth = Smooth.None));
      connect(electrolytesFlowConstant.y, PT_NH3_AcuteEffect.yBase) annotation(Line(points = {{-22.5, 76}, {-18, 76}, {-18, 60}}, color = {0, 0, 127}, smooth = Smooth.None));
      connect(CD_NH4_PhOnFlux.y, ChloridePoolEffect.yBase) annotation(Line(points = {{-18, 26}, {-18, 6}}, color = {0, 0, 127}, smooth = Smooth.None));
      connect(busConnector.pH_art, PT_NH3_AcuteEffect.u) annotation(Line(points = {{-80, 78}, {-80, 58}, {-78, 58}, {-26, 58}}, color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
      connect(busConnector.pH_art, PT_NH3_ChronicEffect.u) annotation(Line(points = {{-80, 78}, {-80, 46}, {-26, 46}}, color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
      connect(busConnector.pH_art, CD_NH4_PhOnFlux.u) annotation(Line(points = {{-80, 78}, {-80, 78}, {-80, 30}, {-26, 30}}, color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
      connect(busConnector.Cl_art, ChloridePoolEffect.u) annotation(Line(points = {{-80, 78}, {-80, 78}, {-80, 12}, {-80, 4}, {-26, 4}}, color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
      connect(ChloridePoolEffect.y, molarflowrate) annotation(Line(points = {{-18, 0}, {-18, 0}, {-18, -22}, {10, -22}}, color = {0, 0, 127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Text(extent = {{-112, -102}, {108, -128}}, lineColor = {0, 0, 255}, textString = "%name")}), Documentation(revisions = "<html>

<table>
<tr>
<td>Author:</td>
<td>Marek Matejak</td>
</tr>
<tr>
<td>License:</td>
<td><a href=\"http://www.physiomodel.org/license.html\">Physiomodel License 1.0</a> </td>
</tr>
<tr>
<td>By:</td>
<td>Charles University, Prague</td>
</tr>
<tr>
<td>Date of:</td>
<td>2009</td>
</tr>
<tr>
<td>References:</td>
<td>Tom Coleman: QHP 2008 beta 3, University of Mississippi Medical Center</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"), Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-100,
                -100},{100,100}})));
    end Ammonium;

    package Test
      model AmmoniumExcretion
        Ammonium ammonium annotation(Placement(transformation(extent={{18,50},{
                  62,90}})));
        Physiolibrary.Types.Constants.ConcentrationConst Chloride(k = 100) annotation(Placement(transformation(extent={{-96,46},
                  {-80,64}})));
        Physiolibrary.Types.Constants.pHConst pH(k=7.4)   annotation(Placement(transformation(extent = {{-65.25, 74}, {-47.25, 88}}, origin={-28.75,2},   rotation = 0), visible = true));
        Physiolibrary.Types.BusConnector busConnector annotation(Placement(transformation(extent={{-22,38},
                  {18,78}}),                                                                                             iconTransformation(extent = {{-118, 22}, {-78, 62}})));
        TitratableAcid titratableAcid(HalfTime = 8280) annotation(Placement(transformation(extent = {{-50, -68}, {-8, -30}}, origin={-9.895,0},    rotation = 0), visible = true));
        Physiolibrary.Types.Constants.pHConst pHu(k = 6) annotation(Placement(transformation(extent={{-82,18},
                  {-74,26}})));
        Physiolibrary.Types.Constants.FractionConst fAld(k = 1) annotation(Placement(transformation(extent={{-98,-60},
                  {-90,-52}})));
        pHUrine pHUrine1 annotation(Placement(transformation(extent={{2,-68},{
                  42,-34}})));
        Physiolibrary.Types.Constants.ConcentrationConst Phosphate(k = 1.1) "1.1" annotation(Placement(transformation(extent={{-20,0},
                  {-4,18}})));
        Physiolibrary.Types.Constants.ConcentrationConst OrgAnions(k = 6) annotation(Placement(transformation(extent={{-22,-24},
                  {-6,-6}})));
        Physiolibrary.Types.Constants.VolumeFlowRateConst GFR(k(displayUnit = "l/min") = 1.6666666666667e-06) annotation(Placement(transformation(extent = {{-8, -7}, {8, 7}}, rotation = 180, origin={64,-10}),    visible = true));
        Physiolibrary.Types.Constants.MolarFlowRateConst HCO3excretion(k=0)
          annotation (Placement(transformation(extent={{16,16},{24,24}})));
        TotalAcidExcretion totalAcidExcretion
          annotation (Placement(transformation(extent={{44,14},{64,34}})));
        pHUrine_New pHUrine_New1
          annotation (Placement(transformation(extent={{72,-80},{104,-44}})));
      equation
        connect(pH.y, busConnector.pH_art) annotation(Line(points = {{-47.75, 81}, {2, 81}, {2, 58}, {24, 56}}, color = {0, 0, 127}, visible = true, origin={-26,2}),  Text(string = "%second", index = 1, extent = {{6, 3}, {6, 3}}));
        connect(Chloride.y, busConnector.Cl_art) annotation(Line(points={{-78,55},
                {-52,55},{-52,46},{-2,46},{-2,58}},                                                                              color = {0, 0, 127}), Text(string = "%second", index = 1, extent = {{6, 3}, {6, 3}}));
        connect(busConnector, ammonium.busConnector) annotation(Line(points={{-2,58},
                {12,58},{12,87.6},{21.96,87.6}},                                                                               color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
        connect(pHUrine1.PhosphateConc, Phosphate.y) annotation(Line(visible = true, origin={10.2,
                -2.015},                                                                                      points = {{12.2, -35.045}, {12.2, 12.015}, {-12.2, 12.015}, {-12.2, 11.015}}, color = {0, 0, 127}));
        connect(OrgAnions.y, pHUrine1.OrgAnionsConc) annotation(Line(visible = true, origin={6.906,
                -25.86},                                                                                        points = {{-10.906, 10.86}, {3.906, 10.86}, {3.906, -10.86}, {3.094, -10.86}}, color = {0, 0, 127}));
        connect(GFR.y, pHUrine1.GlomerularFiltration) annotation(Line(visible = true, origin={40.03,
                -23.53},                                                                                        points = {{13.97, 13.53}, {-4.37, 13.53}, {-4.37, -13.53}, {-5.23, -13.53}}, color = {0, 0, 127}));
        connect(pHUrine1.pHa, pH.y) annotation(Line(visible = true, origin={-35.358,
                -23.473},                                                                       points={{40.958,
                -31.947},{29.358,-31.947},{29.358,-62.527},{-30.642,-62.527},{
                -30.642,106.473},{-38.392,106.473}},                                                                                                    color = {0, 0, 127}));
        connect(titratableAcid.pHa, pH.y) annotation(Line(visible = true, origin={-66.201,
                23.08},                                                                              points = {{7.146, -59.92}, {0.201, -59.92}, {0.201, 59.92}, {-7.549, 59.92}}, color = {0, 0, 127}));
        connect(titratableAcid.TA, pHUrine1.TA) annotation(Line(visible = true, origin={-8.126,
                -46.41},                                                                                   points = {{-10.189, -2.21}, {-1.769, -2.21}, {-1.769, 2.21}, {13.726, 2.21}}, color = {0, 0, 127}));
        connect(titratableAcid.fald, fAld.y) annotation(Line(visible = true, origin={-77.55,
                -57.585},                                                                                points={{17.865,
                0.415},{-3.207,0.415},{-3.207,1.585},{-11.45,1.585}},                                                                                                    color = {0, 0, 127}));
        connect(totalAcidExcretion.HCO3excretion, HCO3excretion.y) annotation (
            Line(points={{44.6,18.4},{34,18.4},{34,20},{25,20}}, color={0,0,127}));
        connect(totalAcidExcretion.NH4, ammonium.molarflowrate) annotation (
            Line(points={{44.4,24.8},{36,24.8},{36,42},{70,42},{70,72.8},{62.44,
                72.8}}, color={0,0,127}));
        connect(totalAcidExcretion.TA, titratableAcid.TA) annotation (Line(
              points={{44.2,30.4},{-36,30.4},{-36,-32},{-10,-32},{-10,-48.62},{
                -18.315,-48.62}},
                                color={0,0,127}));
        connect(pHUrine_New1.GlomerularFiltration, GFR.y) annotation (Line(
              points={{98.24,-47.24},{98.24,-24},{34,-24},{34,-10},{54,-10}},
              color={0,0,127}));
        connect(pHUrine_New1.PhosphateConc, Phosphate.y) annotation (Line(
              points={{88.32,-47.24},{88.32,-28},{22,-28},{22,9},{-2,9}},
              color={0,0,127}));
        connect(pHUrine_New1.OrgAnionsConc, OrgAnions.y) annotation (Line(
              points={{78.4,-46.88},{78.4,-30},{10,-30},{10,-15},{-4,-15}},
              color={0,0,127}));
        connect(pHUrine_New1.pHa, pH.y) annotation (Line(points={{74.88,-66.68},
                {64,-66.68},{64,-88},{-66,-88},{-66,84},{-66,83},{-73.75,83}},
              color={0,0,127}));
        connect(titratableAcid.TA, pHUrine_New1.TA) annotation (Line(points={{-18.315,
                -48.62},{-14,-48.62},{-14,-68},{54,-68},{54,-54.8},{74.88,-54.8}},
                         color={0,0,127}));
        connect(pHUrine_New1.pHu, titratableAcid.pHu) annotation (Line(points={{104,
                -59.84},{110,-59.84},{110,-108},{100,-108},{-78,-108},{-78,
                -47.48},{-59.055,-47.48}},                     color={0,0,127}));
        connect(pHUrine_New1.NH4exretion, ammonium.molarflowrate) annotation (
            Line(points={{74.24,-75.32},{70,-75.32},{70,-80},{120,-80},{120,
                72.8},{62.44,72.8}}, color={0,0,127}));
        annotation(Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-100,
                  -120},{140,100}})), Icon(coordinateSystem(extent={{-100,-120},
                  {140,100}})));
      end AmmoniumExcretion;
    end Test;

    model F62
      Modelica.Blocks.Interfaces.RealOutput y annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {-2, -54}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, -38})));
      Modelica.Blocks.Interfaces.RealInput yBase annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 42}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 32})));
      Modelica.Blocks.Interfaces.RealInput u annotation(Placement(transformation(extent = {{-100, -20}, {-60, 20}}), iconTransformation(extent = {{-128, -20}, {-88, 20}})));
    equation
      y = yBase * 60000 * ((-2.5 * u) + 19.5) / 60000;
      annotation(Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})), Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 20}, {100, -20}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "F62")}));
    end F62;

    model F63
      Modelica.Blocks.Interfaces.RealOutput y annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {-2, -54}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, -38})));
      Modelica.Blocks.Interfaces.RealInput yBase annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 42}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 32})));
      Modelica.Blocks.Interfaces.RealInput u annotation(Placement(transformation(extent = {{-100, -20}, {-60, 20}}), iconTransformation(extent = {{-128, -20}, {-88, 20}})));
      Real yBase1;
      Real y1;
    equation
      yBase1 = yBase * 60000;
      //mmol/min = mol/sec*60000
      y * 60000 = y1;
      //mol/sec *60000 = mmol/min
      y1 = if u <= 4 then 0 elseif u > 4 and u <= 5 then yBase1 * (u - 4) else yBase1 annotation(Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})), Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 20}, {100, -20}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "F63")}));
      annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = true, initialScale = 0.1, grid = {10, 10}), graphics = {Rectangle(visible = true, fillColor = {255, 255, 0}, fillPattern = FillPattern.Solid, extent = {{-100, -20}, {100, 20}}), Text(visible = true, origin = {-3.907, 0}, textColor = {0, 0, 255}, extent = {{-69.022, -12.502}, {69.022, 12.502}}, textString = "F63")}));
    end F63;

    model AldEffect
      Modelica.Blocks.Interfaces.RealOutput y annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {-2, -54}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, -38})));
      Modelica.Blocks.Interfaces.RealInput yBase annotation(Placement(transformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 42}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {0, 32})));
      Modelica.Blocks.Interfaces.RealInput u annotation(Placement(transformation(extent = {{-100, -20}, {-60, 20}}), iconTransformation(extent = {{-128, -20}, {-88, 20}})));
    equation
      y = (yBase * 60000 + 0.009 + u * 0.001) / 60000;
      // y = (yBase*60000+0.01)/60000;
      annotation(Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})), Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 20}, {100, -20}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "AldEffect")}));
    end AldEffect;

    model TitratableAcid
      Physiolibrary.Types.RealIO.FractionInput fald
        "aldocterone - ratio to normal"                                             annotation(Placement(transformation(extent = {{-48, -56}, {-16, -24}}), iconTransformation(extent = {{-114, -58}, {-84, -28}})));
      Physiolibrary.Types.RealIO.pHInput pHu "urine pH" annotation(Placement(transformation(extent = {{-48, -16}, {-16, 16}}), iconTransformation(extent = {{-110, -6}, {-82, 22}})));
      Physiolibrary.Types.RealIO.pHInput pHa "arterial pH" annotation(Placement(transformation(extent = {{-106, 40}, {-82, 64}}), iconTransformation(extent = {{-110, 50}, {-82, 78}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput TA "titratable acid flow" annotation(Placement(transformation(extent = {{50, -90}, {70, -70}}), iconTransformation(extent = {{88, -8}, {108, 12}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst YTA0(k(displayUnit = "mmol/min") = 1.1333333333333e-07)
        "Basal rate of titratable acids"                                                                                                     annotation(Placement(transformation(extent = {{-58, 78}, {-44, 94}})));
      F62 f62_1 annotation(Placement(transformation(extent = {{16, 36}, {56, 68}})));
      AldEffect aldEffect annotation(Placement(transformation(extent = {{14, -58}, {60, -22}})));
      Physiolibrary.Blocks.Math.Integrator int(k = Modelica.Math.log(2) / HalfTime, y_start = 7.4) annotation(Placement(transformation(extent = {{-36, 42}, {-16, 62}})));
      Modelica.Blocks.Math.Feedback feedback annotation(Placement(transformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {-64, 52})));
      parameter Physiolibrary.Types.Time HalfTime = 8340;
      //(displayUnit="d");
      //Tau(unit="day");
      Modelica.Blocks.Sources.Constant const(k = 0.0068) annotation(Placement(transformation(extent = {{66, 72}, {86, 92}})));
      F63 f63_1 annotation(Placement(transformation(extent = {{14, -18}, {58, 18}})));
    equation
      connect(aldEffect.u, fald) annotation(Line(points = {{12.16, -40}, {-32, -40}}, color = {0, 0, 127}));
      connect(int.y, f62_1.u) annotation(Line(points = {{-15, 52}, {14.4, 52}}, color = {0, 0, 127}));
      connect(feedback.u1, pHa) annotation(Line(points = {{-72, 52}, {-94, 52}, {-94, 52}}, color = {0, 0, 127}));
      connect(feedback.y, int.u) annotation(Line(points = {{-55, 52}, {-46, 52}, {-38, 52}}, color = {0, 0, 127}));
      connect(feedback.u2, f62_1.u) annotation(Line(points = {{-64, 44}, {-64, 26}, {8, 26}, {8, 52}, {14.4, 52}}, color = {0, 0, 127}));
      connect(YTA0.y, f62_1.yBase) annotation(Line(points = {{-42.25, 86}, {36, 86}, {36, 57.12}}, color = {0, 0, 127}));
      connect(f63_1.u, pHu) annotation(Line(points = {{12.24, 0}, {-32, 0}}, color = {0, 0, 127}));
      connect(f63_1.yBase, f62_1.y) annotation(Line(visible = true, origin = {36, 25.84}, points = {{0, -20.08}, {0, 20.08}}, color = {0, 0, 127}));
      connect(f63_1.y, aldEffect.yBase) annotation(Line(visible = true, origin = {36.5, -20.77}, points = {{-0.5, 13.93}, {-0.5, -0.23}, {0.5, -0.23}, {0.5, -13.47}}, color = {0, 0, 127}));
      connect(aldEffect.y, TA) annotation(Line(visible = true, origin = {44.667, -68.947}, points = {{-7.667, 22.107}, {-7.667, -11.053}, {15.333, -11.053}}, color = {0, 0, 127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 80}, {100, -80}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-76, 82}, {-40, 48}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "pHa"), Text(extent = {{-78, 28}, {-42, -6}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "pHu"), Text(extent = {{-78, -24}, {-42, -58}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "fald"), Text(extent = {{38, 18}, {74, -16}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid, textString = "TA")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end TitratableAcid;

    model pHUrine

      Physiolibrary.Types.RealIO.MolarFlowRateInput TA annotation(Placement(transformation(extent = {{-102, 20}, {-62, 60}}), iconTransformation(extent = {{-102, 20}, {-62, 60}})));
      Physiolibrary.Types.RealIO.pHOutput pHu annotation(Placement(transformation(extent = {{90, 2}, {110, 22}}), iconTransformation(extent = {{90, 2}, {110, 22}})));
      Physiolibrary.Types.RealIO.pHInput pHa annotation(Placement(transformation(extent = {{-102, -46}, {-62, -6}}), iconTransformation(extent = {{-102, -46}, {-62, -6}})));
      Real YPO4;
      Real YORG;
      Real STPG;
      Real STPO;
      Real PHA;
      Real GFR;
      Real XPO4;
      Real XOGE;
      Real YTA;
      Physiolibrary.Types.RealIO.ConcentrationInput OrgAnionsConc
        "organic acid anions"                                                           annotation(Placement(transformation(extent = {{-114, 58}, {-74, 98}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {-60, 84})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput GlomerularFiltration
        "Glomerular filtation rate"                                                                   annotation(Placement(transformation(extent = {{24, 62}, {64, 102}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {64, 82})));
      Physiolibrary.Types.RealIO.ConcentrationInput PhosphateConc
        "Phosphate concentrations"                                                           annotation(Placement(transformation(extent = {{-114, 58}, {-74, 98}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {2, 82})));
    equation
      GFR = 0.1;
      XPO4 = 1.1;
      XOGE = 6;
      /*
  GFR = GlomerularFiltration-60000;
  XPO4 = PhosphateConc; 
  XOGE = OrgAnionsConc;
  */
      YTA = TA * 60000;
      PHA = pHa;
      // F55
      YPO4 = if XPO4 * GFR <= 0.11 then 5 / 22 * XPO4 * GFR else XPO4 * GFR - 0.085;
      //mM/min
      // F56
      YORG = if XOGE * GFR <= 0.6 then XOGE * GFR / 60 else XOGE * GFR / 3 - 0.19;
      // mM/min
      STPO = YPO4 * (1 + 1 / (1 + 10 ^ (6.66 - PHA)));
      // mM/min
      // F65;  // NB: no line breaks in the equation for the actual program
     // pHu = -log10(((-((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG)) + (((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG) ^ 2 - 4 * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) * (10 ^ (-4.3) * 10 ^ (-6.8) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG - YPO4 - YORG))) ^ 0.5) / 2 / (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG));
      pHu = -log10(((-((10 ^ (-4.3) + 10 ^ (-6.66)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.66) * YPO4 - 10 ^ (-4.3) * YORG)) + (((10 ^ (-4.3) + 10 ^ (-6.66)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.66) * YPO4 - 10 ^ (-4.3) * YORG) ^ 2 - 4 * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) * (10 ^ (-4.3) * 10 ^ (-6.66) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG - YPO4 - YORG))) ^ 0.5) / 2 / (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG));

      STPG = max(0, STPO + YORG - YTA);
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 80}, {100, -80}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-68, 64}, {-6, 18}}, lineColor = {28, 108, 200}, textString = "TA"), Text(extent = {{-54, 0}, {8, -46}}, lineColor = {28, 108, 200}, textString = "pHa"), Text(extent = {{16, 38}, {78, -8}}, lineColor = {28, 108, 200}, textString = "pHu")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end pHUrine;

    model TotalAcidExcretion
      Physiolibrary.Types.RealIO.MolarFlowRateInput TA annotation (Placement(
            transformation(extent={{-112,50},{-72,90}}), iconTransformation(
              extent={{-112,50},{-84,78}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput TotalFlowRate annotation (
          Placement(transformation(extent={{96,-2},{116,18}}),
            iconTransformation(extent={{96,-2},{116,18}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput NH4 annotation (Placement(
            transformation(extent={{-110,6},{-70,46}}), iconTransformation(
              extent={{-110,-6},{-82,22}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput HCO3excretion annotation (
          Placement(transformation(extent={{-114,-46},{-74,-6}}),
            iconTransformation(extent={{-108,-70},{-80,-42}})));
      Modelica.Blocks.Math.Add3 add3_1(k3=-1)
        annotation (Placement(transformation(extent={{-8,8},{12,28}})));
    equation
      connect(HCO3excretion, add3_1.u3) annotation (Line(points={{-94,-26},{-62,
              -26},{-62,-20},{-62,10},{-58,10},{-10,10}}, color={0,0,127}));
      connect(NH4, add3_1.u2) annotation (Line(points={{-90,26},{-42,26},{-42,
              18},{-10,18}}, color={0,0,127}));
      connect(TA, add3_1.u1) annotation (Line(points={{-92,70},{-26,70},{-26,26},
              {-10,26}}, color={0,0,127}));
      connect(add3_1.y, TotalFlowRate) annotation (Line(points={{13,18},{56,18},
              {56,8},{106,8}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,127},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-54,32},{56,-14}},
              lineColor={0,0,127},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="TAC")}), Diagram(coordinateSystem(preserveAspectRatio=
               false, extent={{-100,-100},{100,100}})));
    end TotalAcidExcretion;

    model pHUrine_New

      Physiolibrary.Types.RealIO.MolarFlowRateInput TA annotation(Placement(transformation(extent = {{-102, 20}, {-62, 60}}), iconTransformation(extent = {{-102, 20}, {-62, 60}})));
      Physiolibrary.Types.RealIO.pHOutput pHu annotation(Placement(transformation(extent = {{90, 2}, {110, 22}}), iconTransformation(extent = {{90, 2}, {110, 22}})));
      Physiolibrary.Types.RealIO.pHInput pHa annotation(Placement(transformation(extent = {{-102, -46}, {-62, -6}}), iconTransformation(extent = {{-102, -46}, {-62, -6}})));
      Real YPO4;
      Real YORG;
     // Real STPG;
     // Real STPO;
      Real PHA;
      Real GFR;
      Real XPO4;
      Real XOGE;
      Real YTA;

      Real YTAP;
      Real YTAORG;
      Real YTANH3;
      Real PHU;
      Real YNH4;

     // parameter Real k1=0.2

      Physiolibrary.Types.RealIO.ConcentrationInput OrgAnionsConc
        "organic acid anions"                                                           annotation(Placement(transformation(extent = {{-114, 58}, {-74, 98}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {-60, 84})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput GlomerularFiltration
        "Glomerular filtation rate"                                                                   annotation(Placement(transformation(extent = {{24, 62}, {64, 102}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {64, 82})));
      Physiolibrary.Types.RealIO.ConcentrationInput PhosphateConc
        "Phosphate concentrations"                                                           annotation(Placement(transformation(extent = {{-114, 58}, {-74, 98}}), iconTransformation(extent = {{-20, -20}, {20, 20}}, rotation = 270, origin = {2, 82})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput NH4exretion annotation (
          Placement(transformation(extent={{-102,20},{-62,60}}), iconTransformation(
              extent={{-106,-94},{-66,-54}})));
    equation
      GFR = 0.1;
      XPO4 = 1.1;
      XOGE = 6;
      /*
  GFR = GlomerularFiltration-60000;
  XPO4 = PhosphateConc; 
  XOGE = OrgAnionsConc;
  */
      YTA = TA * 60000;
      YNH4 = NH4exretion*60000;
      PHA = pHa;
      PHU = pHu;

      // F55
      YPO4 = if XPO4 * GFR <= 0.11 then 5 / 22 * XPO4 * GFR else XPO4 * GFR - 0.085;
      //mM/min
      // F56
      YORG = if XOGE * GFR <= 0.6 then XOGE * GFR / 60 else XOGE * GFR / 3 - 0.19;
      // mM/min



      YTAP = YPO4*(10^(-PHA)+2*10^(-6.66))/(10^(-PHA) +10^(-6.66)) - YPO4*(10^(-PHU)+2*10^(-6.66))/(10^(-PHU) +10^(-6.66));
      YTAORG = YORG*10^(-4.3)/(10^(-PHA)+10^(-4.3))-YORG*10^(-4.3)/(10^(-PHU)+10^(-4.3));
      YTANH3 =YNH4*10^(-9)/(10^(-PHA)+10^(-9))-YNH4*10^(-9)/(10^(-PHU)+10^(-9));
      YTA=YTAP+YTAORG+YTANH3;

    // YTA=YTAP+YTAORG;
      /*
  STPO = YPO4 * (1 + 1 / (1 + 10 ^ (6.8 - PHA)));
  // mM/min
  // F65;  // NB: no line breaks in the equation for the actual program
  pHu = -log10(((-((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG)) + (((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG) ^ 2 - 4 * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) * (10 ^ (-4.3) * 10 ^ (-6.8) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG - YPO4 - YORG))) ^ 0.5) / 2 / (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG));
  STPG = max(0, STPO + YORG - YTA);
  */
      annotation(Icon(coordinateSystem(preserveAspectRatio=false,   extent={{-100,-100},
                {100,100}}),                                                                              graphics={  Rectangle(extent = {{-100, 80}, {100, -80}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                    FillPattern.Solid), Text(extent = {{-68, 64}, {-6, 18}}, lineColor = {28, 108, 200}, textString = "TA"), Text(extent = {{-54, 0}, {8, -46}}, lineColor = {28, 108, 200}, textString = "pHa"), Text(extent = {{16, 38}, {78, -8}}, lineColor = {28, 108, 200}, textString = "pHu")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end pHUrine_New;
  end Kidney;
  annotation(uses(                             Physiolibrary(version = "2.3.1"),
        Modelica(version="3.2.2")));
end AcidBaseBalance;
