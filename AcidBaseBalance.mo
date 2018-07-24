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
      Physiolibrary.Types.Constants.MolarFlowRateConst electrolytesFlowConstant(k=
            6.6666666666667e-07)                                                                         annotation(Placement(transformation(extent = {{-36, 70}, {-24, 82}})));
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

</html>", info="<html>
<p>Taken from Hummod 1.6, norm pH 7.4</p>
</html>"), Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-100,
                -100},{100,100}}), graphics={
            Text(
              extent={{-6,54},{18,60}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Left,
              textString="Proximal tubule"),
            Text(
              extent={{-6,42},{18,48}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Left,
              textString="Proximal tubule"),
            Text(
              extent={{-6,26},{18,32}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Left,
              textString="distal nefron (collecting duct)")}));
    end Ammonium;

    package Test
      model AmmoniumExcretion
        Ammonium ammonium annotation(Placement(transformation(extent = {{44, 50}, {88, 90}})));
        Physiolibrary.Types.Constants.ConcentrationConst Chloride(k = 100) annotation(Placement(transformation(extent = {{-70, 46}, {-54, 64}})));
        Physiolibrary.Types.Constants.pHConst pH(k=7.2)   annotation(Placement(transformation(extent = {{-65.25, 74}, {-47.25, 88}}, origin={-30.75,4},   rotation = 0), visible = true));
        Physiolibrary.Types.BusConnector busConnector annotation(Placement(transformation(extent = {{4, 38}, {44, 78}}), iconTransformation(extent = {{-118, 22}, {-78, 62}})));
        TitratableAcid titratableAcid(HalfTime = 8280) annotation(Placement(transformation(extent = {{-50, -68}, {-8, -30}}, origin = {16.105, 0}, rotation = 0), visible = true));
        Physiolibrary.Types.Constants.pHConst pHu(k = 6) annotation(Placement(transformation(extent = {{-94, -38}, {-86, -30}})));
        Physiolibrary.Types.Constants.FractionConst fAld(k = 1) annotation(Placement(transformation(extent={{-92,-60},
                  {-84,-52}})));
        Physiolibrary.Types.Constants.ConcentrationConst Phosphate(k = 1.1) "1.1" annotation(Placement(transformation(extent = {{6, 0}, {22, 18}})));
        Physiolibrary.Types.Constants.ConcentrationConst OrgAnions(k = 6) annotation(Placement(transformation(extent = {{4, -24}, {20, -6}})));
        Physiolibrary.Types.Constants.VolumeFlowRateConst GFR(k(displayUnit = "l/min") = 1.6666666666667e-06) annotation(Placement(transformation(extent = {{-8, -7}, {8, 7}}, rotation = 180, origin={84,-10}),    visible = true));
        Physiolibrary.Types.Constants.MolarFlowRateConst HCO3excretion(k=0)
          annotation (Placement(transformation(extent={{42,16},{50,24}})));
        TotalAcidExcretion totalAcidExcretion
          annotation (Placement(transformation(extent={{70,14},{90,34}})));
        pHUrine_New pHUrine_New1
          annotation (Placement(transformation(extent={{48,-76},{80,-40}})));
      equation
        connect(pH.y, busConnector.pH_art) annotation(Line(points={{-75.75,83},
                {2,83},{2,56},{24,56}},                                                                         color = {0, 0, 127}, visible = true, origin = {0, 2}), Text(string = "%second", index = 1, extent = {{6, 3}, {6, 3}}));
        connect(Chloride.y, busConnector.Cl_art) annotation(Line(points = {{-52, 55}, {-26, 55}, {-26, 46}, {24, 46}, {24, 58}}, color = {0, 0, 127}), Text(string = "%second", index = 1, extent = {{6, 3}, {6, 3}}));
        connect(busConnector, ammonium.busConnector) annotation(Line(points = {{24, 58}, {38, 58}, {38, 87.6}, {47.96, 87.6}}, color = {0, 0, 255}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}));
        connect(titratableAcid.pHa, pH.y) annotation(Line(visible = true, origin = {-40.201, 23.08}, points={{7.146,
                -59.92},{0.201,-59.92},{0.201,61.92},{-35.549,61.92}},                                                                                                    color = {0, 0, 127}));
        connect(titratableAcid.fald, fAld.y) annotation(Line(visible = true, origin = {-51.55, -57.585}, points={{17.865,
                0.415},{-3.207,0.415},{-3.207,1.585},{-31.45,1.585}},                                                                                                    color = {0, 0, 127}));
        connect(totalAcidExcretion.HCO3excretion, HCO3excretion.y) annotation (
            Line(points={{70.6,18.4},{60,18.4},{60,20},{51,20}}, color={0,0,127}));
        connect(totalAcidExcretion.NH4, ammonium.molarflowrate) annotation (
            Line(points={{70.4,24.8},{62,24.8},{62,42},{96,42},{96,72.8},{88.44,
                72.8}}, color={0,0,127}));
        connect(totalAcidExcretion.TA, titratableAcid.TA) annotation (Line(
              points={{70.2,30.4},{-10,30.4},{-10,-32},{16,-32},{16,-48.62},{
                7.685,-48.62}}, color={0,0,127}));
        connect(pHUrine_New1.GlomerularFiltration, GFR.y) annotation (Line(
              points={{74.24,-43.24},{74.24,-24},{60,-24},{60,-10},{74,-10}},
              color={0,0,127}));
        connect(pHUrine_New1.PhosphateConc, Phosphate.y) annotation (Line(
              points={{64.32,-43.24},{64.32,-28},{48,-28},{48,9},{24,9}},
              color={0,0,127}));
        connect(pHUrine_New1.OrgAnionsConc, OrgAnions.y) annotation (Line(
              points={{54.4,-42.88},{54.4,-30},{36,-30},{36,-15},{22,-15}},
              color={0,0,127}));
        connect(titratableAcid.TA, pHUrine_New1.TA) annotation (Line(points={{7.685,
                -48.62},{16,-48.62},{16,-50},{48,-50},{48,-50.8},{50.88,-50.8}},
                         color={0,0,127}));
        connect(pHUrine_New1.NH4exretion, ammonium.molarflowrate) annotation (
            Line(points={{50.24,-71.32},{46,-71.32},{46,-82},{96,-82},{96,72.8},
                {88.44,72.8}},       color={0,0,127}));
        connect(pHUrine_New1.pHu, titratableAcid.pHu) annotation (Line(points={{80,
                -55.84},{80,-55.84},{98,-55.84},{98,-86},{-46,-86},{-46,-47.48},
                {-33.055,-47.48}},         color={0,0,127}));
        connect(pHUrine_New1.pHa, pH.y) annotation (Line(points={{50.88,-62.68},
                {20,-62.68},{20,-74},{-40,-74},{-40,-36},{-40,85},{-75.75,85}},
              color={0,0,127}));
        annotation(Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-100,
                  -100},{100,100}})));
      end AmmoniumExcretion;

      model testABflow
        Package.BloodPort bloodGasesAcidBase annotation (Placement(
              transformation(extent={{-84,-2},{-64,18}}), iconTransformation(
                extent={{-76,-10},{-56,10}})));
        Package.BloodPort bloodGasesAcidBase1 annotation (Placement(
              transformation(extent={{56,-18},{76,2}}), iconTransformation(
                extent={{12,-12},{32,8}})));
        annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
              coordinateSystem(preserveAspectRatio=false)));
      end testABflow;
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
                fillPattern =                                                                                                    FillPattern.Solid, textString = "TA")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Text(
              extent={{60,-8},{102,10}},
              lineColor={28,108,200},
              textString="Damping effect of H+-urine pump  to pH",
              horizontalAlignment=TextAlignment.Left), Text(
              extent={{62,-48},{104,-30}},
              lineColor={28,108,200},
              textString="Damping effect of H+-urine pump  to pH",
              horizontalAlignment=TextAlignment.Left)}),
        Documentation(info="<html>
<p>Taken from ikeda</p>
</html>"));
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
      "prefix Y - flows, X - concentrations. All in SI units"

      Physiolibrary.Types.RealIO.MolarFlowRateInput TA annotation (Placement(
            transformation(extent={{-102,20},{-62,60}}), iconTransformation(extent={
                {-102,20},{-62,60}})));
      Physiolibrary.Types.RealIO.pHInput pHa annotation (Placement(transformation(
              extent={{-102,-46},{-62,-6}}), iconTransformation(extent={{-102,-46},{
                -62,-6}})));
      Physiolibrary.Types.RealIO.ConcentrationInput OrgAnionsConc
        "organic acid anions" annotation (Placement(transformation(extent={{-114,58},
                {-74,98}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-60,84})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput GlomerularFiltration
        "Glomerular filtation rate" annotation (Placement(transformation(extent={{24,
                62},{64,102}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={64,82})));
      Physiolibrary.Types.RealIO.ConcentrationInput PhosphateConc
        "Phosphate concentrations" annotation (Placement(transformation(extent={{-80,58},
                {-40,98}}),     iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={2,82})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput NH4exretion annotation (
          Placement(transformation(extent={{-102,20},{-62,60}}), iconTransformation(
              extent={{-106,-94},{-66,-54}})));

      Real YPO4=if XPO4*GFR <= 0.11 then 5/22*XPO4*GFR else XPO4*GFR - 0.085
        "mmol/min renal outflow of Phosphates. Ikeda F55";
      Real YORG=if XOGE*GFR <= 0.6 then XOGE*GFR/60 else XOGE*GFR/3 - 0.19
        "mmol/min renal outflow of Organic acids, Ikeda F56";
      // Real STPG;
      // Real STPO;
      parameter Real GFR=0.1;
      //mmol/min
      parameter Real XPO4=1.1;
      //mmol/l
      parameter Real XOGE=6;
      //mmol/l
      Real YTA=TA*60000 "mmol/min, mol/sec = 60000 mmol/min";

      Real YTAP=YPO4*(10^(-pHa) + 2*10^(-6.66))/(10^(-pHa) + 10^(-6.66)) - YPO4*(10^
          (-pHu) + 2*10^(-6.66))/(10^(-pHu) + 10^(-6.66))
        "HPO4+H2PO4 flow in mmol/min";
      Real YTAORG=YORG*10^(-4.3)/(10^(-pHa) + 10^(-4.3)) - YORG*10^(-4.3)/(10^(
          -pHu) + 10^(-4.3)) "ORG+HORG flow in mmol/min";
      Real YTANH3=YNH34*10^(-9)/(10^(-pHa) + 10^(-9)) - YNH3
        "NH3 consumed (converted to NH4) due to changes from pHA to pHU in mmol/min";
      Real YNH34=NH4exretion*60000 "NH4+NH3 flow in mmol/min";
      Real YNH3=YNH30 - FNH3 "Flow NH3 to urine mmol/min";
      Real YNH4=YNH40 + FNH3 "Flow NH4 to urine mmol/min";
      Real YNH30 "Flow NH3 to collecting ducts in mmol/min";
      Real YNH40 "Flow NH4 to collecting ducts in mmol/min";

      parameter Real NH3Resorb=1.2;
      Real FNH3=NH3Resorb*YNH34*YTA
        "Flow NH3 to medullar connective duckts through intercallar cells";

      Physiolibrary.Types.RealIO.pHOutput pHu annotation (Placement(transformation(
              extent={{90,2},{110,22}}), iconTransformation(extent={{90,2},{110,22}})));
    equation

      YTA =YTAP + YTAORG + YTANH3 + FNH3;
      YNH3 = YNH34*10^(-9)/(10^(-pHu) + 10^(-9));
      YNH34 = YNH30 + YNH40;
      //   YNH4 = YNH40 + FNH3;
      //   YNH3 = YNH30 - FNH3;



      //   GFR = 0.1;
      //   //mmol/min
      //   XPO4 = 1.1;
      //   //mmol/min
      //   XOGE = 6;
      //   //mmol/l
      /*
  GFR = GlomerularFiltration*60000;
  XPO4 = PhosphateConc; 
  XOGE = OrgAnionsConc;
  */
      //   YTA = TA*60000;
      //YTA mmol/min TA=mol/sev; mol/sec = 60000 mmol/min
      // YNH34 = NH4exretion*60000;
      //mmol/min

      // F55
      //  YPO4 = if XPO4*GFR <= 0.11 then 5/22*XPO4*GFR else XPO4*GFR - 0.085;
      //mM/min
      // F56
      //YORG = if XOGE*GFR <= 0.6 then XOGE*GFR/60 else XOGE*GFR/3 - 0.19;
      // mM/min

      //   YTAP = YPO4*(10^(-pHa) + 2*10^(-6.66))/(10^(-pHa) + 10^(-6.66)) - YPO4*(10^(-
      //     pHu) + 2*10^(-6.66))/(10^(-pHu) + 10^(-6.66));
      //   YTAORG = YORG*10^(-4.3)/(10^(-pHa) + 10^(-4.3)) - YORG*10^(-4.3)/(10^(-pHu) +
      //     10^(-4.3));


      //   FNH3 = 10*YNH34*YTA;
      //this must be adjusted in future


      //   YTANH3 = YNH34*10^(-9)/(10^(-pHa) + 10^(-9)) - YNH3;


      /*
  STPO = YPO4 * (1 + 1 / (1 + 10 ^ (6.8 - PHA)));
  // mM/min
  // F65;  // NB: no line breaks in the equation for the actual program
  pHu = -log10(((-((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG)) + (((10 ^ (-4.3) + 10 ^ (-6.8)) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) - 10 ^ (-6.8) * YPO4 - 10 ^ (-4.3) * YORG) ^ 2 - 4 * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG) * (10 ^ (-4.3) * 10 ^ (-6.8) * (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG - YPO4 - YORG))) ^ 0.5) / 2 / (STPG - YPO4 - 1 / (1 + 10 ^ (PHA - 4.3)) * YORG));
  STPG = max(0, STPO + YORG - YTA);
  */
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}), graphics={
            Rectangle(
              extent={{-100,80},{100,-80}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-68,64},{-6,18}},
              lineColor={28,108,200},
              textString="TA"),
            Text(
              extent={{-54,0},{8,-46}},
              lineColor={28,108,200},
              textString="pHa"),
            Text(
              extent={{16,38},{78,-8}},
              lineColor={28,108,200},
              textString="pHu")}), Diagram(coordinateSystem(preserveAspectRatio=false,
              extent={{-100,-100},{100,100}})));
    end pHUrine_New;
  end Kidney;

  package Package
    connector BloodPort
      "Hydraulical connector with pressure and volumetric flow"

      parameter Integer numberOfSubstances=3;

      Physiolibrary.Types.Pressure pressure "Pressure";
      flow Physiolibrary.Types.VolumeFlowRate bloodFlow "Volume flow";

      Physiolibrary.Types.Concentration conc[numberOfSubstances] "Solute concentration";
      flow Physiolibrary.Types.MolarFlowRate q[numberOfSubstances] "Solute flow";

      annotation (Icon(coordinateSystem(preserveAspectRatio=false)),
                                                Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end BloodPort;

    connector BloodPort_a
       extends BloodPort
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));

      annotation (Icon(graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              lineThickness=0.5)}), Diagram(graphics={
                      Rectangle(
              extent={{-40,40},{40,-40}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid),
       Text(extent={{-102,102},{98,42}},   lineColor = {107,45,134}, textString = "%name")}));
    end BloodPort_a;

    connector BloodPort_b
       extends BloodPort
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));

      annotation (Icon(graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid,
              lineThickness=0.5)}), Diagram(graphics={
       Text(  extent={{-102,102},{98,42}},
              lineColor={107,45,134},
              textString="%name",
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid),
                      Rectangle(
              extent={{-40,40},{40,-40}},
              lineColor={107,45,134},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid)}));
    end BloodPort_b;

    model BloodPort_a_Extension


      BloodPort_a bloodPort_a(numberOfSubstances=3)
                              annotation (Placement(transformation(extent={{-110,
                -10},{-90,10}}),
                            iconTransformation(extent={{-110,-10},{-90,10}})));

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_a bloodFlow annotation (
          Placement(transformation(extent={{90,90},{110,110}}),iconTransformation(
              extent={{90,90},{110,110}})));

      Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2 annotation (Placement(
            transformation(extent={{90,-10},{110,10}}),iconTransformation(extent={{90,-10},
                {110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a CO2 annotation (Placement(
            transformation(extent={{70,-50},{90,-30}}),iconTransformation(extent={{90,-52},
                {110,-32}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a BEox annotation (Placement(
            transformation(extent={{90,-90},{110,-70}}),
                                                       iconTransformation(extent={{90,-90},
                {110,-70}})));



    equation

        O2.conc=bloodPort_a.conc[1];
        O2.q=bloodPort_a.q[1];
        CO2.conc=bloodPort_a.conc[2];
        CO2.q=bloodPort_a.q[2];
        BEox.conc=bloodPort_a.conc[3];
        BEox.q=bloodPort_a.q[3];


        bloodFlow.pressure=bloodPort_a.pressure;
        bloodFlow.q=bloodPort_a.bloodFlow
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Text(
              extent={{-4,20},{92,-20}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="O2"),
            Text(
              extent={{-20,-20},{76,-60}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="CO2"),
            Text(
              extent={{-24,-58},{72,-98}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="BEox"),
            Text(
              extent={{-58,126},{66,58}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="bloodFlow")}),                             Diagram(
            coordinateSystem(preserveAspectRatio=false)));
      annotation (Diagram(coordinateSystem(extent={{-120,-100},{100,100}})),
          Icon(coordinateSystem(extent={{-120,-100},{100,100}})));
    end BloodPort_a_Extension;

    model BloodPort_b_Extension

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_b bloodFlow annotation (
          Placement(transformation(extent={{-94,36},{-74,56}}),iconTransformation(
              extent={{-110,90},{-90,110}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b O2 annotation (Placement(
            transformation(extent={{-98,-6},{-78,14}}), iconTransformation(extent={{-110,
                -10},{-90,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3)
                              annotation (Placement(transformation(extent={{90,-10},
                {110,10}}), iconTransformation(extent={{90,-10},{110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b CO2 annotation (Placement(
            transformation(extent={{-98,-44},{-78,-24}}),
                                                        iconTransformation(extent={{-110,
                -50},{-90,-30}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b BEox annotation (
          Placement(transformation(extent={{-94,-82},{-74,-62}}),
            iconTransformation(extent={{-110,-90},{-90,-70}})));
    equation
        O2.conc=bloodPort_b.conc[1];
        O2.q=bloodPort_b.q[1];
        CO2.conc=bloodPort_b.conc[2];
        CO2.q=bloodPort_b.q[2];
        BEox.conc=bloodPort_b.conc[3];
        BEox.q=bloodPort_b.q[3];
        bloodPort_b.pressure=bloodFlow.pressure;
        bloodPort_b.bloodFlow=bloodFlow.q;


      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Text(
              extent={{-62,14},{-18,-30}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="O2"),
            Text(
              extent={{-76,-30},{20,-70}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="CO2"),
            Text(
              extent={{-72,-64},{24,-104}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="BEox"),
            Text(
              extent={{-58,134},{66,66}},
              lineColor={107,45,134},
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              textString="bloodFlow")}),                             Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end BloodPort_b_Extension;

    model BloodResistor
      extends Physiolibrary.Icons.HydraulicResistor;
        parameter Physiolibrary.Types.HydraulicResistance Resistance;
      Physiolibrary.Hydraulic.Components.Resistor resistor(Resistance=
            bloodResistance)
        annotation (Placement(transformation(extent={{-20,0},{0,20}})));

      BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{60,-10},{80,10}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{6,-36},{26,-16}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{20,20},{40,0}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{6,-58},{26,-38}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{6,-78},{26,-58}})));
    equation
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{90,0},{80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, resistor.q_in) annotation (Line(
          points={{-50,10},{-20,10}},
          color={0,0,0},
          thickness=1));
      connect(resistor.q_out, flowMeasure.q_in) annotation (Line(
          points={{0,10},{20,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{40,10},{60,10}},
          color={0,0,0},
          thickness=1));
      connect(O2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{16,-19},{16,-18},{30,-18},{30,-2}},               color={0,
              0,127}));
      connect(CO2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{16,-41},{16,-40},{30,-40},{30,-2}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{16,-61},{16,-60},{30,-60},{30,-2}},   color={0,0,127}));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-38,0},{-38,-26},{6,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_b_Extension.O2) annotation (Line(
          points={{26,-26},{42,-26},{42,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-40,-4.2},{-40,-48},{6,-48}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_b_Extension.CO2) annotation (Line(
          points={{26,-48},{44,-48},{44,-4},{60,-4}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-44,-8},{-44,-68},{6,-68}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_b_Extension.BEox) annotation (Line(
          points={{26,-68},{46,-68},{46,-8},{60,-8}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}),
                       graphics={Text(
              extent={{-220,-40},{200,-80}},
              lineColor={0,0,255},
              fillColor={58,117,175},
              fillPattern=FillPattern.Solid,
              textString="%name")}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodResistor;

    model BloodConductor
      extends Physiolibrary.Icons.HydraulicResistor;
        parameter Physiolibrary.Types.HydraulicConductance Conductance;

      BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));
      Physiolibrary.Hydraulic.Components.Conductor conductor(Conductance=
            Conductance)
        annotation (Placement(transformation(extent={{-16,-6},{4,14}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-24,-36},{-4,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-8,-58},{12,-38}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{10,-78},{30,-58}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{18,14},{40,-8}})));
    equation
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{90,0},{70,0},{70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, conductor.q_in) annotation (Line(
          points={{-50,10},{-34,10},{-34,4},{-16,4}},
          color={0,0,0},
          thickness=1));
      connect(conductor.q_out, flowMeasure.q_in) annotation (Line(
          points={{4,4},{12,4},{12,3},{18,3}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{40,3},{46,3},{46,10},{50,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(
            points={{29,-10.2},{29,-12},{-14,-12},{-14,-19}}, color={0,0,127}));
      connect(CO2flow.solutionFlow, O2flow.solutionFlow) annotation (Line(
            points={{2,-41},{2,-12},{-14,-12},{-14,-19}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, O2flow.solutionFlow) annotation (Line(
            points={{20,-61},{20,-12},{-14,-12},{-14,-19}}, color={0,0,127}));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-28,0},{-28,-26},{-24,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-30,-4.2},{-30,-38},{-30,-48},{-8,-48}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-30,-8},{-30,-68},{10,-68}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_b_Extension.O2) annotation (Line(
          points={{-4,-26},{20,-26},{44,-26},{44,0},{50,0}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_b_Extension.CO2) annotation (Line(
          points={{12,-48},{32,-48},{46,-48},{46,-4},{50,-4}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_b_Extension.BEox) annotation (Line(
          points={{30,-68},{42,-68},{48,-68},{48,-8},{50,-8}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}),
                       graphics={Text(
              extent={{-220,-40},{200,-80}},
              lineColor={0,0,255},
              fillColor={58,117,175},
              fillPattern=FillPattern.Solid,
              textString="%name")}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodConductor;

    model BloodValve
      parameter Physiolibrary.Types.HydraulicConductance Blood_Goff=0;
      parameter Physiolibrary.Types.Pressure Blood_Pknee=0;
      parameter Physiolibrary.Types.HydraulicResistance Blood_Ron=0;

      BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance idealValveResistance(
        _Goff=Blood_Goff,
        _Ron=Blood_Ron,
        Pknee=Blood_Pknee)
        annotation (Placement(transformation(extent={{-12,0},{8,20}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-28,-44},{-8,-24}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-12,-66},{8,-46}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{6,-86},{26,-66}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{20,20},{40,0}})));
    equation
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{100,0},{70,0},{70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-98,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, idealValveResistance.q_in)
        annotation (Line(
          points={{-50,10},{-12,10}},
          color={0,0,0},
          thickness=1));
      connect(CO2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-2,-49},{-2,-22},{30,-22},{30,-2}},   color={0,0,127}));
      connect(flowMeasure.q_out, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{40,10},{50,10}},
          color={0,0,0},
          thickness=1));
      connect(idealValveResistance.q_out, flowMeasure.q_in) annotation (Line(
          points={{8,10},{20,10}},
          color={0,0,0},
          thickness=1));
      connect(O2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-18,-27},{-18,-22},{30,-22},{30,-2}},   color={0,0,127}));
      connect(BEoxflow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{16,-69},{16,-22},{30,-22},{30,-2}},            color={0,0,
              127}));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-32,0},{-32,-34},{-28,-34}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-34,-4.2},{-34,-56},{-12,-56}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-36,-8},{-36,-76},{6,-76}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_b_Extension.O2) annotation (Line(
          points={{-8,-34},{12,-34},{40,-34},{40,0},{50,0}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_b_Extension.CO2) annotation (Line(
          points={{8,-56},{44,-56},{44,-4},{50,-4}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_b_Extension.BEox) annotation (Line(
          points={{26,-76},{48,-76},{48,-8},{50,-8}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                       Polygon(
              points={{-76,66},{-76,-82},{34,-10},{34,12},{-66,68},{-76,74},{
                  -76,66}},
              lineColor={0,0,127},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid), Rectangle(
              extent={{40,96},{68,-94}},
              lineColor={0,0,127},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-188,-96},{192,-118}},
              lineColor={255,0,0},
              fillPattern=FillPattern.Sphere,
              fillColor={255,85,85},
              textString="%name")}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodValve;

    model BloodElasticVesselCompliance
      extends Physiolibrary.Icons.ElasticBalloon;
      parameter Physiolibrary.Types.Volume ZeroPressureVolume;
      parameter Physiolibrary.Types.Pressure ExternalPressure;
      parameter Physiolibrary.Types.HydraulicCompliance Compliance;
      parameter Physiolibrary.Types.Volume volume_start=1e-3;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;
      parameter Physiolibrary.Types.Concentration O2_concentration = 0;
      parameter Physiolibrary.Types.Concentration CO2_concentration = 0;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.Concentration BEox_concentration = 0;//=Blood_volume_start* BEox_startConcentration;

      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

      Physiolibrary.Hydraulic.Components.ElasticVessel elasticVesselCompliance(
        ZeroPressureVolume=ZeroPressureVolume,
        ExternalPressure=ExternalPressure,
        volume_start=volume_start,
        useComplianceInput=false,
        Compliance=Compliance)
        annotation (Placement(transformation(extent={{14,18},{34,38}})));
      Physiolibrary.Chemical.Components.Substance O2(useNormalizedVolume=false,
          solute_start=O2_concentration*volume_start)
        annotation (Placement(transformation(extent={{4,-36},{24,-16}})));
      Physiolibrary.Chemical.Components.Substance CO2(useNormalizedVolume=false,
          solute_start=CO2_concentration*volume_start)
        annotation (Placement(transformation(extent={{4,-60},{24,-40}})));
      Physiolibrary.Chemical.Components.Substance BEox(useNormalizedVolume=false,
          solute_start=BEox_concentration*volume_start)
        annotation (Placement(transformation(extent={{4,-84},{24,-64}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-16,21},{6,-1}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-28,-36},{-8,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-28,-60},{-8,-40}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-28,-84},{-8,-64}})));
      Physiolibrary.Chemical.Components.Stream O2flow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{36,-36},{56,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{36,-60},{56,-40}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{36,-84},{56,-64}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure3
        annotation (Placement(transformation(extent={{42,21},{64,-1}})));
      BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(extent=
               {{-108,-10},{-88,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(extent={{
                90,-10},{110,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{72,-10},{92,10}})));
    equation

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-98,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(elasticVesselCompliance.volume, O2.solutionVolume) annotation (Line(
            points={{30,18},{30,-12},{10,-12},{10,-22}}, color={0,0,127}));
      connect(bloodPort_a_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-50,10},{-16,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-36,0},{-36,-26},{-28,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, O2.q_out) annotation (Line(
          points={{-8,-26},{14,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-38,-4.2},{-38,-50},{-28,-50}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, CO2.q_out) annotation (Line(
          points={{-8,-50},{14,-50}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, BEox.q_out) annotation (Line(
          points={{-8,-74},{14,-74}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_in, bloodPort_a_Extension.BEox) annotation (Line(
          points={{-28,-74},{-40,-74},{-40,-8},{-50,-8}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(points={{-5,-3.2},
              {-5,-14},{-18,-14},{-18,-19}},           color={0,0,127}));
      connect(CO2flow.solutionFlow, O2flow.solutionFlow) annotation (Line(points={{-18,-43},
              {-18,-19}},                      color={0,0,127}));
      connect(flowMeasure.volumeFlow, CO2flow.solutionFlow)
        annotation (Line(points={{-5,-3.2},{-5,-43},{-18,-43}}, color={0,0,127}));
      connect(flowMeasure.volumeFlow, BEoxflow.solutionFlow)
        annotation (Line(points={{-5,-3.2},{-5,-67},{-18,-67}}, color={0,0,127}));
      connect(elasticVesselCompliance.volume, CO2.solutionVolume)
        annotation (Line(points={{30,18},{30,-46},{10,-46}}, color={0,0,127}));
      connect(elasticVesselCompliance.volume, BEox.solutionVolume)
        annotation (Line(points={{30,18},{30,-70},{10,-70}}, color={0,0,127}));
      connect(O2.q_out, O2flow1.q_in) annotation (Line(
          points={{14,-26},{36,-26}},
          color={107,45,134},
          thickness=1));
      connect(CO2.q_out, CO2flow1.q_in) annotation (Line(
          points={{14,-50},{36,-50}},
          color={107,45,134},
          thickness=1));
      connect(BEox.q_out, BEoxflow1.q_in) annotation (Line(
          points={{14,-74},{36,-74}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.q_out, flowMeasure3.q_in) annotation (Line(
          points={{6,10},{42,10}},
          color={0,0,0},
          thickness=1));
      connect(elasticVesselCompliance.q_in, flowMeasure3.q_in) annotation (Line(
          points={{24,28},{24,10},{42,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure3.volumeFlow, O2flow1.solutionFlow) annotation (Line(
            points={{53,-3.2},{53,-17.6},{46,-17.6},{46,-19}}, color={0,0,127}));
      connect(flowMeasure3.volumeFlow, CO2flow1.solutionFlow) annotation (Line(
            points={{53,-3.2},{53,-41.6},{46,-41.6},{46,-43}}, color={0,0,127}));
      connect(flowMeasure3.volumeFlow, BEoxflow1.solutionFlow) annotation (Line(
            points={{53,-3.2},{53,-66.6},{46,-66.6},{46,-67}}, color={0,0,127}));
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{100,0},{92,0}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure3.q_out, bloodPort_b_Extension.bloodFlow) annotation (Line(
          points={{64,10},{72,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_b_Extension.O2, O2flow1.q_out) annotation (Line(
          points={{72,0},{64,0},{64,-26},{56,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_b_Extension.CO2, CO2flow1.q_out) annotation (Line(
          points={{72,-4},{66,-4},{66,-50},{56,-50}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_b_Extension.BEox, BEoxflow1.q_out) annotation (Line(
          points={{72,-8},{68,-8},{68,-74},{56,-74}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-318,-140},{160,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodElasticVesselCompliance;

    model BloodElasticVesselElastance
      extends AcidBaseBalance.Package.BloodElasticVesselCompliance(
          elasticVesselCompliance(Compliance=1/Elastance));
      parameter Physiolibrary.Types.HydraulicElastance Elastance;
    end BloodElasticVesselElastance;

    model BloodInertia
      extends Physiolibrary.Icons.Inertance;
      parameter Physiolibrary.Types.HydraulicInertance BloodInertance;
      parameter Physiolibrary.Types.VolumeFlowRate Blood_volume_start;

      BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));

      Physiolibrary.Hydraulic.Components.Inertia inertia(volumeFlow_start=
            Blood_volume_start, I=BloodInertance)
        annotation (Placement(transformation(extent={{-14,0},{6,20}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-24,-38},{-4,-18}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-8,-60},{12,-40}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{10,-80},{30,-60}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{18,21},{40,-1}})));
    equation

      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{90,0},{70,0},{70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, inertia.q_in) annotation (Line(
          points={{-50,10},{-14,10}},
          color={0,0,0},
          thickness=1));
      connect(inertia.q_out, flowMeasure.q_in) annotation (Line(
          points={{6,10},{18,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{40,10},{50,10}},
          color={0,0,0},
          thickness=1));
      connect(O2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-14,-21},{-14,-14},{29,-14},{29,-3.2}}, color={0,0,127}));
      connect(CO2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{2,-43},{2,-14},{29,-14},{29,-3.2}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{20,-63},{20,-14},{29,-14},{29,-3.2}}, color={0,0,127}));
      connect(O2flow.q_in, bloodPort_a_Extension.O2) annotation (Line(
          points={{-24,-28},{-38,-28},{-38,0},{-50,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-40,-4.2},{-40,-50},{-8,-50}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-42,-8},{-42,-70},{10,-70}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_b_Extension.BEox) annotation (Line(
          points={{30,-70},{46,-70},{46,-8},{50,-8}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_b_Extension.CO2) annotation (Line(
          points={{12,-50},{28,-50},{42,-50},{42,-4},{50,-4}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_b_Extension.O2) annotation (Line(
          points={{-4,-28},{40,-28},{40,0},{50,0}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-248,-140},{230,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodInertia;

    model BloodElasticVesselComplianceInput
      extends AcidBaseBalance.Package.BloodElasticVesselElastance(
          elasticVesselCompliance(useComplianceInput=true));

      Physiolibrary.Types.RealIO.HydraulicComplianceInput hydrauliccompliance
        annotation (Placement(transformation(extent={{-120,70},{-80,110}}),
            iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={6,98})));
    equation

      connect(hydrauliccompliance, elasticVesselCompliance.compliance)
        annotation (Line(points={{-100,90},{24,90},{24,36}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-318,-140},{160,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodElasticVesselComplianceInput;

    model Pump
      BloodPort_a bloodPort_a
        annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
      BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      BloodPort_b bloodPort_b
        annotation (Placement(transformation(extent={{90,-10},{110,10}})));
      BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{60,-10},{80,10}})));
      Physiolibrary.Hydraulic.Components.Pump pump(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-20,0},{0,20}})));
      Physiolibrary.Chemical.Components.Stream StreamO2(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-20,-30},{0,-10}})));
      Physiolibrary.Chemical.Components.Stream StreamCO2(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-20,-50},{0,-30}})));
      Physiolibrary.Chemical.Components.Stream StreamBEox(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-20,-70},{0,-50}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput volumeflowrate annotation
        (Placement(transformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,108}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,40})));
    equation
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{100,0},{80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-100,0},{-80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, pump.q_in) annotation (Line(
          points={{-60,10},{-20,10}},
          color={0,0,0},
          thickness=1));
      connect(pump.q_out, bloodPort_b_Extension.bloodFlow) annotation (Line(
          points={{0,10},{60,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a_Extension.O2, StreamO2.q_in) annotation (Line(
          points={{-60,0},{-52,0},{-52,-20},{-20,-20}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, StreamCO2.q_in) annotation (Line(
          points={{-60,-4.2},{-54,-4.2},{-54,-40},{-20,-40}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, StreamBEox.q_in) annotation (Line(
          points={{-60,-8},{-56,-8},{-56,-60},{-20,-60}},
          color={107,45,134},
          thickness=1));
      connect(StreamO2.q_out, bloodPort_b_Extension.O2) annotation (Line(
          points={{0,-20},{54,-20},{54,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_b_Extension.CO2, StreamCO2.q_out) annotation (Line(
          points={{60,-4},{56,-4},{56,-40},{0,-40}},
          color={107,45,134},
          thickness=1));
      connect(StreamBEox.q_out, bloodPort_b_Extension.BEox) annotation (Line(
          points={{0,-60},{58,-60},{58,-8},{60,-8}},
          color={107,45,134},
          thickness=1));
      connect(volumeflowrate, pump.solutionFlow)
        annotation (Line(points={{0,108},{0,17},{-10,17}}, color={0,0,127}));
      connect(volumeflowrate, StreamO2.solutionFlow)
        annotation (Line(points={{0,108},{0,-13},{-10,-13}}, color={0,0,127}));
      connect(volumeflowrate, StreamCO2.solutionFlow)
        annotation (Line(points={{0,108},{0,-33},{-10,-33}}, color={0,0,127}));
      connect(volumeflowrate, StreamBEox.solutionFlow)
        annotation (Line(points={{0,108},{0,-53},{-10,-53}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,-50},{100,50}},
              lineColor={0,0,0},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{-80,25},{80,0},{-80,-25},{-80,25}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-150,-94},{150,-54}},
              textString="%name",
              lineColor={0,0,255})}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end Pump;
  end Package;

  package Test

    model test
      Package.BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{54,-16},{32,16}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-32,-12},{-58,16}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump(SolutionFlow=
            1.6666666666667e-06)
        annotation (Placement(transformation(extent={{-82,50},{-62,70}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedVolume unlimitedVolume(P=
            1333.22387415)
        annotation (Placement(transformation(extent={{-12,42},{8,62}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-102,4},{-82,24}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage(Conc=10)
        annotation (Placement(transformation(extent={{70,-60},{84,-48}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump1(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-102,-16},{-82,4}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump2(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-100,-36},{-80,-16}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage1(Conc=10)
        annotation (Placement(transformation(extent={{34,-46},{48,-34}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage2(Conc=10)
        annotation (Placement(transformation(extent={{-8,-32},{6,-20}})));
      Package.BloodElasticVesselElastance bloodElasticVesselElastance(
        ZeroPressureVolume=2e-05,
        ExternalPressure=0,
        Elastance=59995074.33675,
        volume_start=0.0001,
        O2_solute_start=0.01,
        CO2_solute_start=0.01,
        BEox_solute_start=0)
        annotation (Placement(transformation(extent={{-12,-6},{8,14}})));
    equation
      connect(unlimitedPump.q_out, bloodPort_a_Extension.bloodFlow) annotation (
         Line(
          points={{-62,60},{-60,60},{-60,7.6},{-56.7,7.6}},
          color={0,0,0},
          thickness=1));
      connect(unlimitedVolume.y, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{8,52},{36,52},{52.9,52},{52.9,5.44}},
          color={0,0,0},
          thickness=1));
      connect(unlimitedSolutePump.q_out, bloodPort_a_Extension.O2) annotation (
          Line(
          points={{-82,14},{-64,14},{-64,2},{-56.7,2}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage.q_out, bloodPort_b_Extension.O2)
        annotation (Line(
          points={{84,-54},{88,-54},{88,-1.6},{52.9,-1.6}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutePump1.q_out, bloodPort_a_Extension.CO2)
        annotation (Line(
          points={{-82,-6},{-68,-6},{-68,-4.16},{-56.7,-4.16}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutePump2.q_out, bloodPort_a_Extension.BEox)
        annotation (Line(
          points={{-80,-26},{-68,-26},{-68,-9.2},{-56.7,-9.2}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_b_Extension.BEox, unlimitedSolutionStorage2.q_out)
        annotation (Line(
          points={{52.9,-13.76},{61.45,-13.76},{61.45,-26},{6,-26}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage1.q_out, bloodPort_b_Extension.CO2)
        annotation (Line(
          points={{48,-40},{80,-40},{80,-7.68},{52.9,-7.68}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.bloodPort_a, bloodElasticVesselElastance.bloodPort_a)
        annotation (Line(
          points={{-33.3,2},{-18,2},{-18,4.2},{-2.2,4.2}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodElasticVesselElastance.bloodPort_a, bloodPort_b_Extension.bloodPort_b)
        annotation (Line(
          points={{-2.2,4.2},{15.9,4.2},{15.9,0},{33.1,0}},
          color={28,108,200},
          thickness=0.5));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end test;

    model test1
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump(SolutionFlow=
            1.6666666666667e-06)
        annotation (Placement(transformation(extent={{-94,40},{-74,60}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedVolume unlimitedVolume(P=
            1333.22387415)
        annotation (Placement(transformation(extent={{-12,42},{8,62}})));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end test1;

    model test3
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-102,4},{-82,24}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage(Conc=10)
        annotation (Placement(transformation(extent={{70,-60},{84,-48}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump1(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-102,-16},{-82,4}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump unlimitedSolutePump2(
          SoluteFlow=0.0016666666666667)
        annotation (Placement(transformation(extent={{-100,-36},{-80,-16}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage1(Conc=10)
        annotation (Placement(transformation(extent={{34,-46},{48,-34}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage2(Conc=10)
        annotation (Placement(transformation(extent={{-8,-32},{6,-20}})));
    equation
      connect(unlimitedSolutePump.q_out, unlimitedSolutionStorage2.q_out)
        annotation (Line(
          points={{-82,14},{-28,14},{-28,12},{6,12},{6,-26}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutePump1.q_out, unlimitedSolutionStorage1.q_out)
        annotation (Line(
          points={{-82,-6},{-16,-6},{-16,-4},{48,-4},{48,-40}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutePump2.q_out, unlimitedSolutionStorage.q_out)
        annotation (Line(
          points={{-80,-26},{-54,-26},{-54,-54},{84,-54}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end test3;

    model HemodynamicsMeurs_flatNorm
    extends Physiolibrary.Icons.CardioVascular;
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance LAtrialElastance(
        Tav(displayUnit="s"),
        EMIN=15998686.4898,
        EMAX=37330268.4762)
        annotation (Placement(transformation(extent={{56,92},{94,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance LVentricularElastance(EMIN=
            11999014.86735, EMAX=533289549.66)
        annotation (Placement(transformation(extent={{164,88},{200,120}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance RAtrialElastance(EMIN=
            6666119.37075, EMAX=19998358.11225)
        annotation (Placement(transformation(extent={{-244,86},{-206,118}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance RVentricularElastance(EMIN=
            7599376.082655, EMAX=65327969.83335)
        annotation (Placement(transformation(extent={{-180,88},{-150,122}})));
      replaceable Physiolibrary.Types.Constants.FrequencyConst HeartRate(k(displayUnit = "1/min") = 1.2) annotation(Placement(visible = true, transformation(origin={-243,
                148.5},                                                                                                                                                              extent = {{-11, -6.5}, {11, 6.5}}, rotation = 0)));
      Package.BloodElasticVesselElastance Eitha(
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        Elastance=190651014.00345,
        volume_start=0.000204,
        O2_solute_start=2.04,
        CO2_solute_start=2.04,
        BEox_solute_start=2.04)
        annotation (Placement(transformation(extent={{174,-10},{194,10}})));
      Package.BloodInertia inertia(BloodInertance=335972416.2858,
          Blood_volume_start=2.1666666666667e-05)
        annotation (Placement(transformation(extent={{158,-8},{134,8}})));
      Package.BloodResistor Rlain(bloodResistance=23998029.7347)
        annotation (Placement(transformation(extent={{10,50},{30,70}})));
      Package.BloodValve AorticValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron=63994745.9592)
        annotation (Placement(transformation(extent={{196,30},{216,50}})));
      Package.BloodResistor Retha(bloodResistance=479960594.694)
        annotation (Placement(transformation(extent={{100,-10},{120,10}})));
      Package.BloodElasticVesselElastance Eetha(
        ExternalPressure=0,
        ZeroPressureVolume=0.00037,
        Elastance=74127247.40274,
        volume_start=0.000526,
        O2_solute_start=5.26,
        CO2_solute_start=5.26,
        BEox_solute_start=5.26)
        annotation (Placement(transformation(extent={{68,-10},{88,10}})));
      Package.BloodResistor RsartRsart(bloodResistance=6399474595.92)
        annotation (Placement(transformation(extent={{26,-10},{46,10}})));
      Package.BloodElasticVesselElastance Est(
        ExternalPressure=0,
        ZeroPressureVolume=0.000185,
        Elastance=34930465.50273,
        volume_start=0.000283,
        O2_solute_start=2.83,
        CO2_solute_start=2.83,
        BEox_solute_start=2.83)
        annotation (Placement(transformation(extent={{-14,-10},{6,10}})));
      Package.BloodResistor Rsven(bloodResistance=1599868648.98)
        annotation (Placement(transformation(extent={{-62,-10},{-42,10}})));
      Package.BloodElasticVesselElastance Eethv(
        ExternalPressure=0,
        ZeroPressureVolume=0.001,
        Elastance=2253148.3473135,
        volume_start=0.00153,
        O2_solute_start=13.5,
        CO2_solute_start=13.5,
        BEox_solute_start=13.5)
        annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
      Package.BloodResistor Rethv(bloodResistance=719940892.041)
        annotation (Placement(transformation(extent={{-138,-10},{-118,10}})));
      Package.BloodElasticVesselElastance Eithv(
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        Elastance=2426467.450953,
        volume_start=0.00148,
        O2_solute_start=14.8,
        CO2_solute_start=14.8,
        BEox_solute_start=14.8)
        annotation (Placement(transformation(extent={{-182,-10},{-162,10}})));
      Package.BloodResistor Rrain(bloodResistance=23998029.7347)
        annotation (Placement(transformation(extent={{-226,-10},{-206,10}})));
      Package.BloodValve TricuspidValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron=23998029.7347)
        annotation (Placement(transformation(extent={{-218,51},{-194,29}})));
      Package.BloodValve PulmonaryValve(Blood_Ron=23998029.7347)
        annotation (Placement(transformation(extent={{-140,30},{-120,50}})));
      Package.BloodElasticVesselElastance Epa(
        ZeroPressureVolume=5e-05,
        ExternalPressure=-533.28954966,
        Elastance=31064116.267695,
        volume_start=0.000106,
        O2_solute_start=1.06,
        CO2_solute_start=1.06,
        BEox_solute_start=1.06)
        annotation (Placement(transformation(extent={{-96,50},{-76,70}})));
      Package.BloodResistor Rpp(bloodResistance=879927756.939)
        annotation (Placement(transformation(extent={{-62,50},{-42,70}})));
      Package.BloodElasticVesselElastance Epv(
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        Elastance=6066168.6273825,
        volume_start=0.000518,
        O2_solute_start=5.18,
        CO2_solute_start=5.18,
        BEox_solute_start=5.18)
        annotation (Placement(transformation(extent={{-26,50},{-6,70}})));
      Package.BloodValve MitralValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron=23998029.7347)
        annotation (Placement(transformation(extent={{100,30},{120,50}})));
      Package.BloodElasticVesselComplianceInput LeftVentricle(
        ZeroPressureVolume=6e-05,
        ExternalPressure=-533.28954966,
        volume_start=0.000144,
        O2_solute_start=1.44,
        CO2_solute_start=1.44,
        BEox_solute_start=1.44)
        annotation (Placement(transformation(extent={{154,30},{174,50}})));
      Package.BloodElasticVesselComplianceInput RightAtrium(
        ZeroPressureVolume=3e-05,
        ExternalPressure=-533.28954966,
        volume_start=0.000135,
        O2_solute_start=1.35,
        CO2_solute_start=1.35,
        BEox_solute_start=1.35)
        annotation (Placement(transformation(extent={{-252,30},{-232,50}})));
      Package.BloodElasticVesselComplianceInput RightVentricle(
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000131)
        annotation (Placement(transformation(extent={{-178,30},{-158,50}})));
      Package.BloodElasticVesselComplianceInput bloodElasticVesselCompliance1(
        ZeroPressureVolume=3e-05,
        ExternalPressure=-533.28954966,
        volume_start=9.31e-05,
        O2_solute_start=0.931,
        CO2_solute_start=0.931,
        BEox_solute_start=0.931)
        annotation (Placement(transformation(extent={{52,30},{72,50}})));
    equation
      connect(HeartRate.y,RAtrialElastance. HR) annotation(Line(points={{-229.25,
              148.5},{-225,148.5},{-225,114.8}},                                                                           color = {0, 0, 127}, smooth = Smooth.None));
      connect(RVentricularElastance.HR, HeartRate.y) annotation(Line(points={{-165,
              118.6},{-165,148.5},{-229.25,148.5}},                                                                             color = {0, 0, 127}, smooth = Smooth.None));
      connect(LAtrialElastance.HR, HeartRate.y) annotation (Line(
          points={{75,120.8},{75,148.5},{-229.25,148.5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(LVentricularElastance.HR, HeartRate.y) annotation (Line(
          points={{182,116.8},{182,148.5},{-229.25,148.5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(Eitha.bloodPort_a, inertia.bloodPort_a) annotation (Line(
          points={{174.2,0},{166.9,0},{166.9,0},{156.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Retha.bloodPort_b, inertia.bloodPort_b) annotation (Line(
          points={{119,0},{135.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Retha.bloodPort_a, Eetha.bloodPort_a) annotation (Line(
          points={{101,0},{68.2,0},{68.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RsartRsart.bloodPort_b, Eetha.bloodPort_a) annotation (Line(
          points={{45,0},{68.2,0},{68.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RsartRsart.bloodPort_a, Est.bloodPort_a) annotation (Line(
          points={{27,0},{-13.8,0},{-13.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Rsven.bloodPort_b, Est.bloodPort_a) annotation (Line(
          points={{-43,0},{-13.8,0},{-13.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Rsven.bloodPort_a, Eethv.bloodPort_a) annotation (Line(
          points={{-61,0},{-99.8,0},{-99.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Eethv.bloodPort_a, Rethv.bloodPort_b) annotation (Line(
          points={{-99.8,0},{-105.1,0},{-105.1,0},{-119,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Rethv.bloodPort_a, Eithv.bloodPort_a) annotation (Line(
          points={{-137,0},{-181.8,0},{-181.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Rrain.bloodPort_b, Eithv.bloodPort_a) annotation (Line(
          points={{-207,0},{-181.8,0},{-181.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(PulmonaryValve.bloodPort_b, Epa.bloodPort_a) annotation (Line(
          points={{-120,40},{-106,40},{-106,60},{-95.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(Epa.bloodPort_a, Rpp.bloodPort_a) annotation (Line(
          points={{-95.8,60},{-65.1,60},{-65.1,60},{-61,60}},
          color={28,108,200},
          thickness=0.5));
      connect(Epv.bloodPort_a, Rlain.bloodPort_a) annotation (Line(
          points={{-25.8,60},{-3.1,60},{-3.1,60},{11,60}},
          color={28,108,200},
          thickness=0.5));
      connect(Rpp.bloodPort_b, Epv.bloodPort_a) annotation (Line(
          points={{-43,60},{-25.8,60},{-25.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_b, Eitha.bloodPort_a) annotation (Line(
          points={{216,40},{216,40},{244,40},{244,0},{174.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_b, LeftVentricle.bloodPort_a) annotation (
          Line(
          points={{120,40},{154.2,40},{154.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_a, LeftVentricle.bloodPort_a) annotation (
          Line(
          points={{196.2,40},{154.2,40},{154.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_a, bloodElasticVesselCompliance1.bloodPort_a)
        annotation (Line(
          points={{100.2,40},{52.2,40},{52.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(Rlain.bloodPort_b, bloodElasticVesselCompliance1.bloodPort_a)
        annotation (Line(
          points={{29,60},{34,60},{42,60},{42,40},{52.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightVentricle.bloodPort_a, PulmonaryValve.bloodPort_a)
        annotation (Line(
          points={{-177.8,40},{-152.1,40},{-152.1,40},{-139.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(TricuspidValve.bloodPort_b, RightVentricle.bloodPort_a)
        annotation (Line(
          points={{-194,40},{-177.8,40},{-177.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.bloodPort_a, TricuspidValve.bloodPort_a) annotation (
          Line(
          points={{-251.8,40},{-251.8,40},{-217.76,40}},
          color={28,108,200},
          thickness=0.5));
      connect(Rrain.bloodPort_a, RightAtrium.bloodPort_a) annotation (Line(
          points={{-225,0},{-248,0},{-274,0},{-274,40},{-251.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.hydrauliccompliance, RAtrialElastance.Ct) annotation (
         Line(points={{-241.4,49.8},{-241.4,70},{-190,70},{-190,101.84},{
              -202.39,101.84}}, color={0,0,127}));
      connect(RVentricularElastance.Ct, RightVentricle.hydrauliccompliance)
        annotation (Line(points={{-147.15,108.91},{-120,108.91},{-120,66},{
              -167.4,66},{-167.4,49.8}}, color={0,0,127}));
      connect(bloodElasticVesselCompliance1.hydrauliccompliance,
        LAtrialElastance.Ct) annotation (Line(points={{62.6,49.8},{62.6,74},{
              118,74},{118,107.84},{97.61,107.84}}, color={0,0,127}));
      connect(LeftVentricle.hydrauliccompliance, LVentricularElastance.Ct)
        annotation (Line(points={{164.6,49.8},{164.6,74},{220,74},{220,107.68},
              {203.42,107.68}}, color={0,0,127}));
      annotation(Diagram(coordinateSystem(extent={{-280,-140},{280,180}},      preserveAspectRatio=false)),             Icon(coordinateSystem(extent = {{-280, -140}, {280, 180}}, preserveAspectRatio = false), graphics),
        Documentation(info="<html>
<p>Model of cardiovascular system using to demonstrate elastic and resistance features of veins and arteries in pulmonary and systemic circulation and influence of cardiac output on it.</p>
<ul>
<li>J. A. Goodwin, W. L. van Meurs, C. D. Sa Couto, J. E. W.Beneken, S. A. Graves, A model for educational simulation of infant cardiovascular physiology., Anesthesia and analgesia 99 (6)(2004) 1655&ndash;1664. doi:10.1213/01.ANE.0000134797.52793.AF.</li>
<li>C. D. Sa Couto, W. L. van Meurs, J. A. Goodwin, P. Andriessen,A Model for Educational Simulation of Neonatal Cardiovascular Pathophysiology, Simulation in Healthcare 1 (Inaugural) (2006) 4&ndash;12.</li>
<li>W. van Meurs, Modeling and Simulation in Biomedical Engineering: Applications in Cardiorespiratory Physiology, McGraw-Hill Professional, 2011.</li>
</ul>
</html>",     revisions="<html>
<ul>
<li><i>Jul 2015 </i>by Tomas Kulhanek: Created. </li>
</ul>
</html>"),
        experiment(StopTime=5));
    end HemodynamicsMeurs_flatNorm;

    model TestElastance
      Package.BloodElasticVesselElastance bloodElasticVesselElastance(
        ExternalPressure=0,
        O2_concentration=10,
        ZeroPressureVolume=0.001,
        Elastance=1333223874.15,
        volume_start=0.0005)
        annotation (Placement(transformation(extent={{-10,-20},{10,0}})));
      Package.BloodResistor bloodResistor(bloodResistance=100.0)
        annotation (Placement(transformation(extent={{20,-20},{40,0}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{44,-20},{64,0}})));
      Package.BloodPort_b_Extension
                            bloodPort_b_Extension
        annotation (Placement(transformation(extent={{-34,-20},{-14,0}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-68,-40},{-48,-20}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-60,10},{-40,-10}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-68,-70},{-48,-50}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-68,-100},{-48,-80}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump(SolutionFlow=
            1.6666666666667e-5)
        annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageO2(Conc=10)
        annotation (Placement(transformation(extent={{-100,-40},{-80,-20}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageCO2(Conc=20)
        annotation (Placement(transformation(extent={{-100,-70},{-80,-50}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageBEox(Conc=0)
        annotation (Placement(transformation(extent={{-100,-100},{-80,-80}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageO1(Conc=10)
        annotation (Placement(transformation(extent={{124,-40},{104,-20}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageCO1(Conc=20)
        annotation (Placement(transformation(extent={{124,-70},{104,-50}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorageBEox1(Conc=0)
        annotation (Placement(transformation(extent={{124,-100},{104,-80}})));
      Physiolibrary.Chemical.Components.Stream O2flow1(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{74,-40},{94,-20}})));
      Physiolibrary.Chemical.Components.Stream CO2flow1(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{76,-70},{96,-50}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow1(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{76,-100},{96,-80}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedVolume unlimitedVolume
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure1
        annotation (Placement(transformation(extent={{80,10},{100,-10}})));
    equation
      connect(bloodResistor.bloodPort_b, bloodPort_a_Extension.bloodPort_a)
        annotation (Line(
          points={{39,-10},{44,-10}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure.q_out,bloodPort_b_Extension. bloodFlow) annotation (
          Line(
          points={{-40,0},{-34,0}},
          color={0,0,0},
          thickness=1));
      connect(O2flow.solutionFlow,flowMeasure. volumeFlow) annotation (Line(
            points={{-58,-23},{-58,-22},{-50,-22},{-50,-12}},          color={0,
              0,127}));
      connect(CO2flow.solutionFlow,flowMeasure. volumeFlow) annotation (Line(
            points={{-58,-53},{-58,-52},{-50,-52},{-50,-12}},
                                                         color={0,0,127}));
      connect(BEoxflow.solutionFlow,flowMeasure. volumeFlow) annotation (Line(
            points={{-58,-83},{-58,-82},{-50,-82},{-50,-12}},
                                                           color={0,0,127}));
      connect(O2flow.q_out,bloodPort_b_Extension. O2) annotation (Line(
          points={{-48,-30},{-40,-30},{-40,-10},{-34,-10}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out,bloodPort_b_Extension. CO2) annotation (Line(
          points={{-48,-60},{-38,-60},{-38,-14},{-34,-14}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out,bloodPort_b_Extension. BEox) annotation (Line(
          points={{-48,-90},{-36,-90},{-36,-18},{-34,-18}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_b_Extension.bloodPort_b, bloodElasticVesselElastance.bloodPort_a)
        annotation (Line(
          points={{-14,-10},{-9.8,-10}},
          color={28,108,200},
          thickness=0.5));
      connect(unlimitedPump.q_out, flowMeasure.q_in) annotation (Line(
          points={{-80,0},{-60,0}},
          color={0,0,0},
          thickness=1));
      connect(unlimitedSolutionStorageO2.q_out, O2flow.q_in) annotation (Line(
          points={{-80,-30},{-68,-30}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorageCO2.q_out, CO2flow.q_in) annotation (Line(
          points={{-80,-60},{-68,-60}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorageBEox.q_out, BEoxflow.q_in) annotation (
          Line(
          points={{-80,-90},{-68,-90}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorageBEox1.q_out, BEoxflow1.q_out) annotation
        (Line(
          points={{104,-90},{96,-90}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedVolume.y, flowMeasure1.q_out) annotation (Line(
          points={{104,0},{100,0}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure1.q_in, bloodPort_a_Extension.bloodFlow) annotation (
          Line(
          points={{80,0},{64,0}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure1.volumeFlow, O2flow1.solutionFlow) annotation (Line(
            points={{90,-12},{90,-20.1},{84,-20.1},{84,-23}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, CO2flow1.solutionFlow) annotation (Line(
            points={{90,-12},{90,-53},{86,-53}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, BEoxflow1.solutionFlow) annotation (Line(
            points={{90,-12},{90,-83},{86,-83}}, color={0,0,127}));
      connect(O2flow1.q_out, unlimitedSolutionStorageO1.q_out) annotation (Line(
          points={{94,-30},{104,-30}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow1.q_out, unlimitedSolutionStorageCO1.q_out) annotation (
          Line(
          points={{96,-60},{104,-60}},
          color={107,45,134},
          thickness=1));
      connect(O2flow1.q_in, bloodPort_a_Extension.O2) annotation (Line(
          points={{74,-30},{74,-10},{64,-10}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow1.q_in) annotation (Line(
          points={{64,-14.2},{64,-14},{68,-14},{68,-60},{76,-60}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, BEoxflow1.q_in) annotation (Line(
          points={{64,-18},{64,-90},{76,-90}},
          color={107,45,134},
          thickness=1));
      connect(bloodElasticVesselElastance.bloodPort_b, bloodResistor.bloodPort_a)
        annotation (Line(
          points={{10,-10},{21,-10}},
          color={28,108,200},
          thickness=0.5));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -120,-120},{140,20}})), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-120,-120},{140,20}})));
    end TestElastance;

    model CardiovascularSystem_GCG_Extension
      "Cardiovascular part of Guyton-Coleman-Granger's model from 1972"
       extends Modelica.Icons.Example;
       import Physiolibrary.Hydraulic;
    Package.BloodElasticVesselCompliance pulmonaryVeinsAndLeftAtrium(
        volume_start(displayUnit="l") = 0.0004,
        ZeroPressureVolume(displayUnit="l") = 0.0004,
        Compliance(displayUnit="l/mmHg") = 7.5006157584566e-08)
        annotation (Placement(transformation(extent={{4,74},{24,94}})));
      Package.BloodElasticVesselCompliance pulmonaryArteries(
        ZeroPressureVolume(displayUnit="l") = 0.00030625,
        Compliance(displayUnit="l/mmHg") = 3.6002955640592e-08,
        volume_start(displayUnit="l") = 0.00038)
        annotation (Placement(transformation(extent={{-62,74},{-42,94}})));
      Package.BloodConductor
               pulmonary(Conductance(displayUnit="l/(mmHg.min)") = 4.1665920538226e-08)
        annotation (Placement(transformation(extent={{-30,74},{-10,94}})));
      Package.BloodElasticVesselCompliance arteries(
        volume_start(displayUnit="l") = 0.00085,
        ZeroPressureVolume(displayUnit="l") = 0.000495,
        Compliance(displayUnit="l/mmHg") = 2.6627185942521e-08)
        annotation (Placement(transformation(extent={{14,-46},{34,-26}})));
      Package.BloodElasticVesselCompliance veins(
        Compliance(displayUnit="l/mmHg") = 6.1880080007267e-07,
        volume_start(displayUnit="l") = 0.00325,
        ZeroPressureVolume(displayUnit="l") = 0.00295)
        annotation (Placement(transformation(extent={{-64,-46},{-44,-26}})));
      Package.BloodConductor
               nonMuscle(Conductance(displayUnit="l/(mmHg.min)") = 3.5627924852669e-09)
        annotation (Placement(transformation(extent={{-24,-46},{-4,-26}})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure
        annotation (Placement(transformation(extent={{-78,30},{-58,50}})));
      Package.Pump              rightHeart
        annotation (Placement(transformation(extent={{-56,8},{-36,28}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst RNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-60,40},{-52,48}})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure1
        annotation (Placement(transformation(extent={{62,26},{82,46}})));
      Package.Pump              leftHeart
        annotation (Placement(transformation(extent={{16,6},{36,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst LNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{12,42},{20,50}})));
      Package.BloodConductor
               kidney(Conductance(displayUnit="l/(mmHg.min)") = 1.4126159678427e-09)
        annotation (Placement(transformation(extent={{-24,-64},{-4,-44}})));
      Package.BloodConductor
               muscle(Conductance(displayUnit="l/(mmHg.min)") = 1.3001067314658e-09)
        annotation (Placement(transformation(extent={{-24,-28},{-4,-8}})));
      Package.BloodConductor
               largeVeins(Conductance(displayUnit="l/(mmHg.min)") = 1.6888886482791e-07)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-84,-10})));
      Package.BloodElasticVesselCompliance rightAtrium(
        volume_start(displayUnit="l") = 0.0001,
        ZeroPressureVolume(displayUnit="l") = 0.0001,
        Compliance(displayUnit="l/mmHg") = 3.7503078792283e-08)
        annotation (Placement(transformation(extent={{-82,8},{-62,28}})));
      Physiolibrary.Blocks.Factors.Spline rightStarling(data={{-6,0,0},{-3,0.15,0.104},
            {-1,0.52,0.48},{2,1.96,0.48},{4,2.42,0.123},{8,2.7,0}}, Xscale=101325/760)
        "At filling pressure 0mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{-56,22},{-36,42}})));
      Physiolibrary.Blocks.Factors.Spline leftStarling(data={{-4,0,0},{-1,0.72,0.29},
            {0,1.01,0.29},{3,1.88,0.218333},{10,2.7,0}}, Xscale=101325/760)
        "At filling pressure -0.0029mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{36,22},{16,42}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-98,38},{-78,58}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension1
        annotation (Placement(transformation(extent={{36,38},{56,58}})));
    equation
      connect(RNormalCO.y, rightStarling.yBase) annotation (Line(
          points={{-51,44},{-46,44},{-46,34}},
          color={0,0,127}));
      connect(LNormalCO.y, leftStarling.yBase) annotation (Line(
          points={{21,46},{26,46},{26,34}},
          color={0,0,127}));
      connect(pressureMeasure.pressure, rightStarling.u) annotation (Line(
          points={{-62,36},{-58,36},{-58,32},{-54,32}},
          color={0,0,127}));
      connect(pressureMeasure1.pressure, leftStarling.u) annotation (Line(
          points={{78,32},{34,32}},
          color={0,0,127}));
      connect(largeVeins.bloodPort_a, rightAtrium.bloodPort_a) annotation (Line(
          points={{-84,-1},{-84,18},{-81.8,18}},
          color={28,108,200},
          thickness=0.5));
      connect(largeVeins.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-84,-19},{-84,-36},{-63.8,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_b, muscle.bloodPort_a) annotation (Line(
          points={{-44,-36},{-34,-36},{-34,-18},{-23,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_b, nonMuscle.bloodPort_a) annotation (Line(
          points={{-44,-36},{-23,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_b, kidney.bloodPort_a) annotation (Line(
          points={{-44,-36},{-34,-36},{-34,-54},{-23,-54}},
          color={28,108,200},
          thickness=0.5));
      connect(kidney.bloodPort_b, arteries.bloodPort_a) annotation (Line(
          points={{-5,-54},{4,-54},{4,-36},{14.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(nonMuscle.bloodPort_b, arteries.bloodPort_a) annotation (Line(
          points={{-5,-36},{4,-36},{4,-36},{14.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(muscle.bloodPort_b, arteries.bloodPort_a) annotation (Line(
          points={{-5,-18},{4,-18},{4,-36},{14.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(rightAtrium.bloodPort_b, rightHeart.bloodPort_a) annotation (Line(
          points={{-62,18},{-56,18}},
          color={28,108,200},
          thickness=0.5));
      connect(rightHeart.bloodPort_b, pulmonaryArteries.bloodPort_a)
        annotation (Line(
          points={{-36,18},{-26,18},{-26,64},{-82,64},{-82,84},{-61.8,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_b, pulmonary.bloodPort_a) annotation
        (Line(
          points={{-42,84},{-29,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary.bloodPort_b, pulmonaryVeinsAndLeftAtrium.bloodPort_a)
        annotation (Line(
          points={{-11,84},{-4,84},{-4,84},{4.2,84}},
          color={28,108,200},
          thickness=0.5));
      connect(leftStarling.y, leftHeart.volumeflowrate)
        annotation (Line(points={{26,28},{26,20}}, color={0,0,127}));
      connect(leftHeart.bloodPort_a, pulmonaryVeinsAndLeftAtrium.bloodPort_b)
        annotation (Line(
          points={{16,16},{-12,16},{-12,64},{38,64},{38,84},{24,84}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_b, arteries.bloodPort_b) annotation (Line(
          points={{36,16},{48,16},{48,-38},{34,-38},{34,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodPort_a, rightAtrium.bloodPort_a)
        annotation (Line(
          points={{-98,48},{-98,18},{-81.8,18}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.bloodFlow, pressureMeasure.q_in)
        annotation (Line(
          points={{-78,58},{-72,58},{-72,34}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a_Extension1.bloodPort_a, pulmonaryVeinsAndLeftAtrium.bloodPort_b)
        annotation (Line(
          points={{36,48},{38,48},{38,84},{24,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure1.q_in, bloodPort_a_Extension1.bloodFlow)
        annotation (Line(
          points={{68,30},{68,58},{56,58},{56,58}},
          color={0,0,0},
          thickness=1));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={Text(
              extent={{-82,-80},{80,-100}},
              lineColor={175,175,175},
              textString=
                  "Circulation part of Guyton-Coleman-Granger's model from 1972")}),
                                              Documentation(info="<html>
<p>Cardiovascular subsystem in famous Guyton-Coleman-Granger model from 1972. </p>
<p><br/>Model, all parameters and all initial values are from article: </p>
<p>A.C. Guyton, T.G. Coleman, H.J. Granger (1972). &quot;Circulation: overall regulation.&quot; Annual review of physiology 34(1): 13-44.</p>
</html>", revisions="<html>
<p><i>2014</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),
        experiment(StopTime=300));
    end CardiovascularSystem_GCG_Extension;
  end Test;

  package Trash

    model BloodConductor_error
      extends Physiolibrary.Icons.HydraulicResistor;

       parameter Boolean useConductanceInput = false
        "=true, if external conductance value is used";

       parameter Physiolibrary.Types.HydraulicConductance bloodConductance=0
        "Hydraulic conductance if useConductanceInput=false";

      Package.BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-100,-10},{-80,10}})));
      Package.BloodPort_b bloodPort_b(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{80,-10},{100,10}}),
            iconTransformation(extent={{80,-10},{100,10}})));
      Physiolibrary.Hydraulic.Components.Conductor conductor(cond=bloodConductance,
          useConductanceInput=true)
        annotation (Placement(transformation(extent={{-10,-3},{10,17}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      Package.BloodPort_b_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));
      Physiolibrary.Types.RealIO.HydraulicConductanceInput
                                             cond(start=bloodConductance)=conductor.cond if useConductanceInput
                                                       annotation (Placement(
            transformation(extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,60}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,60})));
    equation
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_b) annotation (Line(
          points={{90,0},{69,0},{69,0}},
          color={28,108,200},
          thickness=0.5));
      connect(conductor.q_out, bloodPort_b_Extension.bloodFlow) annotation (
          Line(
          points={{10,7},{51,7},{51,3.4}},
          color={0,0,0},
          thickness=1));
      connect(conductor.q_in, bloodPort_a_Extension.bloodFlow) annotation (Line(
          points={{-10,7},{-51,7},{-51,4}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-69,0},{-69,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_a_Extension.O2, bloodPort_b_Extension.O2) annotation (
          Line(
          points={{-51,0},{-34,0},{-34,-10},{38,-10},{38,-1},{51,-1}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, bloodPort_b_Extension.CO2) annotation (
         Line(
          points={{-51,-4.4},{-38,-4.4},{-38,-12},{40,-12},{40,-4.8},{51,-4.8}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.BEox, bloodPort_b_Extension.BEox)
        annotation (Line(
          points={{-51,-8},{-40,-8},{-40,-14},{42,-14},{42,-8.6},{51,-8.6}},
          color={107,45,134},
          thickness=1));

      connect(conductor.cond, cond)
        annotation (Line(points={{0,13},{0,60}},        color={0,0,127}));
        annotation (Line(points={{0,60},{0,13}},        color={0,0,127}),
                  Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}),
                       graphics={Text(
              extent={{-220,-40},{200,-80}},
              lineColor={0,0,255},
              fillColor={58,117,175},
              fillPattern=FillPattern.Solid,
              textString="%name")}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodConductor_error;

    model BloodElasticVesselElastance
      extends Physiolibrary.Icons.ElasticBalloon;
      parameter Physiolibrary.Types.Volume BloodZeroPressureVolume;
      parameter Physiolibrary.Types.Pressure BloodExternalPressure;
      parameter Physiolibrary.Types.HydraulicElastance BloodElastance;
      parameter Physiolibrary.Types.Volume Blood_volume_start;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;

      parameter Physiolibrary.Types.AmountOfSubstance O2_solute_start;//=Blood_volume_start* O2_startConcentration;
      parameter Physiolibrary.Types.AmountOfSubstance CO2_solute_start;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.AmountOfSubstance BEox_solute_start;//=Blood_volume_start* BEox_startConcentration;

      Package.BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-12,-8},{8,12}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      Physiolibrary.Types.RealIO.HydraulicComplianceInput
                          BloodCompliance(start=1/BloodElastance) = 1/BloodElastance if useComplianceInput
                                                            annotation (Placement(
            transformation(extent={{-20,-20},{20,20}},
            rotation=270,
            origin={4,80}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,80})));
        parameter Boolean useComplianceInput = false
        "=true, if external pressure input is used"
        annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance
        elasticVesselElastance( ZeroPressureVolume=
            BloodZeroPressureVolume,
        ExternalPressure=BloodExternalPressure,
        volume_start=Blood_volume_start,
        useComplianceInput=false)
        annotation (Placement(transformation(extent={{52,-6},{72,14}})));
      Physiolibrary.Chemical.Components.Substance O2(useNormalizedVolume=false,
          solute_start=O2_solute_start)
        annotation (Placement(transformation(extent={{62,-36},{82,-16}})));
      Physiolibrary.Chemical.Components.Substance CO2(useNormalizedVolume=false,
          solute_start=CO2_solute_start)
        annotation (Placement(transformation(extent={{48,-60},{68,-40}})));
      Physiolibrary.Chemical.Components.Substance BEox(useNormalizedVolume=false,
          solute_start=BEox_solute_start)
        annotation (Placement(transformation(extent={{40,-84},{60,-64}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-24,15},{-2,-7}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-18,-36},{2,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-2,-60},{18,-40}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{14,-84},{34,-64}})));
    equation

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-69,0},{-69,0}},
          color={28,108,200},
          thickness=0.5));
      connect(elasticVesselElastance.volume, O2.solutionVolume)
        annotation (Line(points={{68,-6},{68,-14},{68,-22}},color={0,0,127}));
      connect(CO2.solutionVolume, O2.solutionVolume) annotation (Line(points={{54,-46},
              {54,-10},{68,-10},{68,-22}},color={0,0,127}));
      connect(BEox.solutionVolume, O2.solutionVolume) annotation (Line(points={{46,-70},
              {46,-34},{46,-10},{68,-10},{68,-22}},              color={0,0,127}));
      connect(bloodPort_a_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-51,4},{-37.5,4},{-24,4}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, elasticVesselElastance.q_in) annotation (Line(
          points={{-2,4},{62,4}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-51,0},{-42,0},{-32,0},{-32,-26},{-18,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, O2.q_out) annotation (Line(
          points={{2,-26},{2,-26},{72,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-51,-4.4},{-34,-4.4},{-34,-50},{-2,-50}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, CO2.q_out) annotation (Line(
          points={{18,-50},{18,-50},{58,-50}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, BEox.q_out) annotation (Line(
          points={{34,-74},{50,-74}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_in, bloodPort_a_Extension.BEox) annotation (Line(
          points={{14,-74},{-40,-74},{-40,-8},{-51,-8}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(points={
              {-13,-9.2},{-13,-14},{-8,-14},{-8,-19}}, color={0,0,127}));
      connect(CO2flow.solutionFlow, O2flow.solutionFlow) annotation (Line(points={{8,
              -43},{8,-16},{-8,-16},{-8,-19}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, O2flow.solutionFlow) annotation (Line(points={{
              24,-67},{24,-40},{8,-40},{8,-16},{-8,-16},{-8,-19}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-318,-140},{160,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodElasticVesselElastance;

    model BloodElasticVesselComplianceInput
      extends Package.BloodElasticVesselElastance;

      Physiolibrary.Types.RealIO.HydraulicComplianceInput Compl annotation (
          Placement(transformation(extent={{-88,66},{-48,106}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-6,114})));
    equation

            annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"),
                  Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-318,-140},{160,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodElasticVesselComplianceInput;

    model BloodElasticVesselElastanceParam
      extends Physiolibrary.Icons.ElasticBalloon;
      parameter Physiolibrary.Types.Volume BloodZeroPressureVolume;
      parameter Physiolibrary.Types.Pressure BloodExternalPressure;
      parameter Physiolibrary.Types.HydraulicElastance BloodElastance;
      parameter Physiolibrary.Types.Volume Blood_volume_start;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;

      parameter Physiolibrary.Types.AmountOfSubstance O2_solute_start;//=Blood_volume_start* O2_startConcentration;
      parameter Physiolibrary.Types.AmountOfSubstance CO2_solute_start;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.AmountOfSubstance BEox_solute_start;//=Blood_volume_start* BEox_startConcentration;

      Package.BloodPort_a bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-12,-8},{8,12}})));
      Package.BloodPort_a_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

      Physiolibrary.Hydraulic.Components.ElasticVesselElastance
        elasticVesselElastance( ZeroPressureVolume=
            BloodZeroPressureVolume,
        ExternalPressure=BloodExternalPressure,
        volume_start=Blood_volume_start,
        useComplianceInput=false)
        annotation (Placement(transformation(extent={{52,-6},{72,14}})));
      Physiolibrary.Chemical.Components.Substance O2(useNormalizedVolume=false,
          solute_start=O2_solute_start)
        annotation (Placement(transformation(extent={{62,-36},{82,-16}})));
      Physiolibrary.Chemical.Components.Substance CO2(useNormalizedVolume=false,
          solute_start=CO2_solute_start)
        annotation (Placement(transformation(extent={{48,-60},{68,-40}})));
      Physiolibrary.Chemical.Components.Substance BEox(useNormalizedVolume=false,
          solute_start=BEox_solute_start)
        annotation (Placement(transformation(extent={{40,-84},{60,-64}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-24,15},{-2,-7}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-18,-36},{2,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-2,-60},{18,-40}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{14,-84},{34,-64}})));
    equation

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-94,0},{-69,0},{-69,0}},
          color={28,108,200},
          thickness=0.5));
      connect(elasticVesselElastance.volume, O2.solutionVolume)
        annotation (Line(points={{68,-6},{68,-14},{68,-22}},color={0,0,127}));
      connect(CO2.solutionVolume, O2.solutionVolume) annotation (Line(points={{54,-46},
              {54,-10},{68,-10},{68,-22}},color={0,0,127}));
      connect(BEox.solutionVolume, O2.solutionVolume) annotation (Line(points={{46,-70},
              {46,-34},{46,-10},{68,-10},{68,-22}},              color={0,0,127}));
      connect(bloodPort_a_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-51,4},{-37.5,4},{-24,4}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, elasticVesselElastance.q_in) annotation (Line(
          points={{-2,4},{62,4}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_a_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-51,0},{-42,0},{-32,0},{-32,-26},{-18,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, O2.q_out) annotation (Line(
          points={{2,-26},{2,-26},{72,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_a_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-51,-4.4},{-34,-4.4},{-34,-50},{-2,-50}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, CO2.q_out) annotation (Line(
          points={{18,-50},{18,-50},{58,-50}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, BEox.q_out) annotation (Line(
          points={{34,-74},{50,-74}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_in, bloodPort_a_Extension.BEox) annotation (Line(
          points={{14,-74},{-40,-74},{-40,-8},{-51,-8}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(points={
              {-13,-9.2},{-13,-14},{-8,-14},{-8,-19}}, color={0,0,127}));
      connect(CO2flow.solutionFlow, O2flow.solutionFlow) annotation (Line(points={{8,
              -43},{8,-16},{-8,-16},{-8,-19}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, O2flow.solutionFlow) annotation (Line(points={{
              24,-67},{24,-40},{8,-40},{8,-16},{-8,-16},{-8,-19}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
                                      Text(
              extent={{-318,-140},{160,-100}},
              textString="%name",
              lineColor={0,0,255})}),
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>", info="<html>
<p>This hydraulic conductance (resistance) element contains two connector sides. No hydraulic medium volume is changing in this element during simulation. That means that sum of flow in both connector sides is zero. The flow through element is determined by <b>Ohm&apos;s law</b>. It is used conductance (=1/resistance) because it could be numerical zero better then infinity in resistance. </p>
</html>"));
    end BloodElasticVesselElastanceParam;
  end Trash;
  annotation(uses(
        Modelica(version="3.2.2"), Physiolibrary(version="2.3.1")));
end AcidBaseBalance;
