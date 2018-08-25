﻿within ;
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
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "F62")}));
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
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "F63")}));
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
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-78, 14}, {84, -14}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "AldEffect")}));
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
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-76, 82}, {-40, 48}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "pHa"), Text(extent = {{-78, 28}, {-42, -6}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "pHu"), Text(extent = {{-78, -24}, {-42, -58}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "fald"), Text(extent = {{38, 18}, {74, -16}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, textString = "TA")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
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
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-68, 64}, {-6, 18}}, lineColor = {28, 108, 200}, textString = "TA"), Text(extent = {{-54, 0}, {8, -46}}, lineColor = {28, 108, 200}, textString = "pHa"), Text(extent = {{16, 38}, {78, -8}}, lineColor = {28, 108, 200}, textString = "pHu")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
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

    model pHUrine_New "prefix Y - flows, X - concentrations. All in SI units"

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

      stream Physiolibrary.Types.Concentration conc[numberOfSubstances]
        "Solute concentration";

      annotation (Icon(coordinateSystem(preserveAspectRatio=false)),
                                                Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end BloodPort;

    connector BloodPort_in
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
    end BloodPort_in;

    connector BloodPort_out
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
    end BloodPort_out;

    model BloodPort_in_Extension

      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-106,-10},{-86,10}}), iconTransformation(
              extent={{-110,-10},{-90,10}})));

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_a bloodFlow annotation (
          Placement(transformation(extent={{84,86},{104,106}}),iconTransformation(
              extent={{90,90},{110,110}})));

      Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2 annotation (Placement(
            transformation(extent={{86,-10},{106,10}}),iconTransformation(extent={{90,-10},
                {110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a CO2 annotation (Placement(
            transformation(extent={{86,-50},{106,-30}}),
                                                       iconTransformation(extent={{90,-52},
                {110,-32}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a BEox annotation (Placement(
            transformation(extent={{86,-90},{106,-70}}),
                                                       iconTransformation(extent={{90,-90},
                {110,-70}})));

      Physiolibrary.Types.Concentration O2_concentration, CO2_concentration, BEox_concentration;

    equation
        O2_concentration =actualStream(bloodPort_in.conc[1]);
        CO2_concentration =actualStream(bloodPort_in.conc[2]);
        BEox_concentration =actualStream(bloodPort_in.conc[3]);

        O2.conc=actualStream(bloodPort_in.conc[1]);
      O2.q + actualStream(bloodPort_in.conc[1])*bloodPort_in.bloodFlow = 0;
        CO2.conc=actualStream(bloodPort_in.conc[2]);
      CO2.q + actualStream(bloodPort_in.conc[2])*bloodPort_in.bloodFlow = 0;
        BEox.conc=actualStream(bloodPort_in.conc[3]);
      BEox.q + actualStream(bloodPort_in.conc[3])*bloodPort_in.bloodFlow = 0;

        bloodFlow.pressure=bloodPort_in.pressure;
      bloodFlow.q + bloodPort_in.bloodFlow = 0 annotation (Icon(
            coordinateSystem(preserveAspectRatio=false), graphics={
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
              textString="bloodFlow")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
      annotation (Diagram(coordinateSystem(extent={{-120,-100},{100,100}})),
          Icon(coordinateSystem(extent={{-120,-100},{100,100}})));
    end BloodPort_in_Extension;

    model BloodPort_out_Extension

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_b bloodFlow annotation (
          Placement(transformation(extent={{-94,36},{-74,56}}),iconTransformation(
              extent={{-110,90},{-90,110}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b O2 annotation (Placement(
            transformation(extent={{-98,-6},{-78,14}}), iconTransformation(extent={{-110,
                -10},{-90,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b CO2 annotation (Placement(
            transformation(extent={{-98,-44},{-78,-24}}),
                                                        iconTransformation(extent={{-110,
                -50},{-90,-30}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b BEox annotation (
          Placement(transformation(extent={{-94,-82},{-74,-62}}),
            iconTransformation(extent={{-110,-90},{-90,-70}})));
    Physiolibrary.Types.Concentration O2_concentration, CO2_concentration, BEox_concentration;
    equation
        O2_concentration =actualStream(bloodPort_out.conc[1]);
        CO2_concentration =actualStream(bloodPort_out.conc[2]);
        BEox_concentration =actualStream(bloodPort_out.conc[3]);

        O2.conc=actualStream(bloodPort_out.conc[1]);
      O2.q + actualStream(bloodPort_out.conc[1])*bloodPort_out.bloodFlow = 0;
        CO2.conc=actualStream(bloodPort_out.conc[2]);
      CO2.q + actualStream(bloodPort_out.conc[2])*bloodPort_out.bloodFlow = 0;
        BEox.conc=actualStream(bloodPort_out.conc[3]);
      BEox.q + actualStream(bloodPort_out.conc[3])*bloodPort_out.bloodFlow = 0;

        bloodFlow.pressure=bloodPort_out.pressure;
      bloodFlow.q + bloodPort_out.bloodFlow = 0 annotation (Icon(
            coordinateSystem(preserveAspectRatio=false), graphics={
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
              textString="bloodFlow")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));

    end BloodPort_out_Extension;

    model BloodResistor
      extends Physiolibrary.Icons.HydraulicResistor;
        parameter Physiolibrary.Types.HydraulicResistance Resistance;
      Physiolibrary.Hydraulic.Components.Resistor resistor(Resistance=
            Resistance)
        annotation (Placement(transformation(extent={{-20,0},{0,20}})));

      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
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
      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{90,0},{80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-94,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, resistor.q_in) annotation (Line(
          points={{-50,10},{-20,10}},
          color={0,0,0},
          thickness=1));
      connect(resistor.q_out, flowMeasure.q_in) annotation (Line(
          points={{0,10},{20,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
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
      connect(bloodPort_in_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-38,0},{-38,-26},{6,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{26,-26},{42,-26},{42,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-40,-4.2},{-40,-48},{6,-48}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_out_Extension.CO2) annotation (Line(
          points={{26,-48},{44,-48},{44,-4},{60,-4}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-44,-8},{-44,-68},{6,-68}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_out_Extension.BEox) annotation (Line(
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

      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-110,-10},{-90,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{60,-10},{80,10}})));
      Physiolibrary.Hydraulic.Components.Conductor conductor(useConductanceInput=true)
        annotation (Placement(transformation(extent={{-10,0},{10,20}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-24,-36},{-4,-16}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-8,-58},{12,-38}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{10,-78},{30,-58}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{20,20},{40,0}})));

    // conditional conductance construction
      parameter Boolean useConductanceInput = false
        "=true, if external conductance value is used"
        annotation(Evaluate=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));
    //    annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));
      parameter Physiolibrary.Types.HydraulicConductance   Conductance=1e-6
        "Hydraulic conductance if useConductanceInput=false"
        annotation (Dialog(enable=not useConductanceInput));

        Physiolibrary.Types.RealIO.HydraulicConductanceInput cond(start=Conductance)=c if useConductanceInput
                                                       annotation (Placement(
            transformation(extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,66})));
    protected
         Physiolibrary.Types.HydraulicConductance c;
    equation
      if not useConductanceInput then
        c=Conductance;
      end if;
      conductor.cond = c;

      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{100,0},{80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-100,0},{-80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, conductor.q_in) annotation (
          Line(
          points={{-60,10},{-10,10}},
          color={0,0,0},
          thickness=1));
      connect(conductor.q_out, flowMeasure.q_in) annotation (Line(
          points={{10,10},{20,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
         Line(
          points={{40,10},{60,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(
            points={{30,-2},{30,-12},{-14,-12},{-14,-19}},    color={0,0,127}));
      connect(CO2flow.solutionFlow, O2flow.solutionFlow) annotation (Line(
            points={{2,-41},{2,-12},{-14,-12},{-14,-19}}, color={0,0,127}));
      connect(BEoxflow.solutionFlow, O2flow.solutionFlow) annotation (Line(
            points={{20,-61},{20,-12},{-14,-12},{-14,-19}}, color={0,0,127}));
      connect(bloodPort_in_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-60,0},{-28,0},{-28,-26},{-24,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-60,-4.2},{-30,-4.2},{-30,-48},{-8,-48}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-60,-8},{-30,-8},{-30,-68},{10,-68}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{-4,-26},{44,-26},{44,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_out_Extension.CO2) annotation (Line(
          points={{12,-48},{46,-48},{46,-4},{60,-4}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_out_Extension.BEox) annotation (Line(
          points={{30,-68},{48,-68},{48,-8},{60,-8}},
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
</html>"),
        Diagram(graphics={Line(
              points={{0,16},{0,60}},
              color={28,108,200},
              pattern=LinePattern.Dash,
              thickness=0.5)}));
    end BloodConductor;

    model BloodValve
      parameter Physiolibrary.Types.HydraulicConductance _Goff=1.2501026264094e-12;
      parameter Physiolibrary.Types.Pressure Pknee=0;
      parameter Physiolibrary.Types.HydraulicResistance _Ron= 79.993432449
        "forward state resistance";

      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance
        idealValveResistance(
        _Goff=_Goff,
        _Ron=_Ron,
        Pknee=Pknee)
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
      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{100,0},{70,0},{70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-98,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, idealValveResistance.q_in)
        annotation (Line(
          points={{-50,10},{-12,10}},
          color={0,0,0},
          thickness=1));
      connect(CO2flow.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-2,-49},{-2,-22},{30,-22},{30,-2}},   color={0,0,127}));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
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
      connect(bloodPort_in_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-32,0},{-32,-34},{-28,-34}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-34,-4.2},{-34,-56},{-12,-56}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-36,-8},{-36,-76},{6,-76}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{-8,-34},{12,-34},{40,-34},{40,0},{50,0}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_out_Extension.CO2) annotation (Line(
          points={{8,-56},{44,-56},{44,-4},{50,-4}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_out_Extension.BEox) annotation (Line(
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
      parameter Physiolibrary.Types.Volume ZeroPressureVolume = 0;
      parameter Physiolibrary.Types.Pressure ExternalPressure=0
        "External pressure. Set zero if internal pressure is relative to external. Valid only if useExternalPressureInput=false."
        annotation (Dialog(enable=not useExternalPressureInput));
      parameter Boolean useExternalPressureInput = false
        "=true, if external pressure input is used"
        annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));

     Physiolibrary.Types.RealIO.PressureInput externalPressure(start=ExternalPressure) = ep if useExternalPressureInput
                                                       annotation (Placement(transformation(
              extent={{-20,-20},{20,20}},
            rotation=270,
            origin={80,80})));

      parameter Physiolibrary.Types.HydraulicCompliance Compliance = 1
        "Compliance if useComplianceInput=false"
        annotation (Dialog(enable=not useComplianceInput));

        parameter Boolean useComplianceInput = false
        "=true, if compliance input is used"
        annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));
      Physiolibrary.Types.RealIO.HydraulicComplianceInput compliance(start=Compliance) = c if useComplianceInput
                                                            annotation (Placement(
            transformation(extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,80})));

      parameter Physiolibrary.Types.Volume volume_start=1e-3;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;
      parameter Physiolibrary.Types.Concentration O2_concentration = 0;
      parameter Physiolibrary.Types.Concentration CO2_concentration = 0;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.Concentration BEox_concentration = 0;//=Blood_volume_start* BEox_startConcentration;

      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

      Physiolibrary.Hydraulic.Components.ElasticVessel elasticVesselCompliance(
        ZeroPressureVolume=ZeroPressureVolume,
        volume_start=volume_start,
        useExternalPressureInput=true,
        useComplianceInput=true)
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
      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{72,-10},{92,10}})));

    protected
      Physiolibrary.Types.Pressure ep;
      Physiolibrary.Types.HydraulicCompliance c;
    equation
      if not useComplianceInput then
        c=Compliance;
      end if;
      if not useExternalPressureInput then
        ep=ExternalPressure;
      end if;
      elasticVesselCompliance.externalPressure =  ep;
      elasticVesselCompliance.compliance = c;

      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-98,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(elasticVesselCompliance.volume, O2.solutionVolume) annotation (Line(
            points={{30,18},{30,-12},{10,-12},{10,-22}}, color={0,0,127}));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (
          Line(
          points={{-50,10},{-16,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2, O2flow.q_in) annotation (Line(
          points={{-50,0},{-36,0},{-36,-26},{-28,-26}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, O2.q_out) annotation (Line(
          points={{-8,-26},{14,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, CO2flow.q_in) annotation (Line(
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
      connect(BEoxflow.q_in, bloodPort_in_Extension.BEox) annotation (Line(
          points={{-28,-74},{-40,-74},{-40,-8},{-50,-8}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow, O2flow.solutionFlow) annotation (Line(points={{-5,-3.2},
              {-5,-14},{-18,-14},{-18,-19}},           color={0,0,127}));
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
      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{100,0},{92,0}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure3.q_out, bloodPort_out_Extension.bloodFlow)
        annotation (Line(
          points={{64,10},{72,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_out_Extension.O2, O2flow1.q_out) annotation (Line(
          points={{72,0},{64,0},{64,-26},{56,-26}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.CO2, CO2flow1.q_out) annotation (Line(
          points={{72,-4},{66,-4},{66,-50},{56,-50}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.BEox, BEoxflow1.q_out) annotation (Line(
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
</html>"),
        Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}),
                        graphics={Line(points={{38,38},{82,38},{82,64}}, color={28,
                  108,200},
              pattern=LinePattern.Dash,
              thickness=0.5), Line(
              points={{-2,70},{-2,38},{20,38}},
              color={28,108,200},
              pattern=LinePattern.Dash,
              thickness=0.5)}));
    end BloodElasticVesselCompliance;

    model BloodElasticVesselElastance
      extends AcidBaseBalance.Package.BloodElasticVesselCompliance(Compliance=1/Elastance);
      parameter Physiolibrary.Types.HydraulicElastance Elastance;
    end BloodElasticVesselElastance;

    model BloodInertia
      extends Physiolibrary.Icons.Inertance;
      parameter Physiolibrary.Types.HydraulicInertance I;
      parameter Physiolibrary.Types.VolumeFlowRate volumeFlow_start=0.3
        "Volumetric flow start value"
         annotation (Dialog(group="Initialization"));

      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{50,-10},{70,10}})));

      Physiolibrary.Hydraulic.Components.Inertia inertia(volumeFlow_start=
            volumeFlow_start, I=I)
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

      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{90,0},{70,0},{70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-94,0},{-70,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, inertia.q_in) annotation (Line(
          points={{-50,10},{-14,10}},
          color={0,0,0},
          thickness=1));
      connect(inertia.q_out, flowMeasure.q_in) annotation (Line(
          points={{6,10},{18,10}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
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
      connect(O2flow.q_in, bloodPort_in_Extension.O2) annotation (Line(
          points={{-24,-28},{-38,-28},{-38,0},{-50,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, CO2flow.q_in) annotation (Line(
          points={{-50,-4.2},{-40,-4.2},{-40,-50},{-8,-50}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, BEoxflow.q_in) annotation (Line(
          points={{-50,-8},{-42,-8},{-42,-70},{10,-70}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out, bloodPort_out_Extension.BEox) annotation (Line(
          points={{30,-70},{46,-70},{46,-8},{50,-8}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, bloodPort_out_Extension.CO2) annotation (Line(
          points={{12,-50},{28,-50},{42,-50},{42,-4},{50,-4}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, bloodPort_out_Extension.O2) annotation (Line(
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

    model Pump
      BloodPort_in bloodPort_in
        annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      BloodPort_out bloodPort_out
        annotation (Placement(transformation(extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
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
      Physiolibrary.Types.RealIO.VolumeFlowRateInput volumeFlowRate annotation (
         Placement(transformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,108}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,40})));
    equation
      connect(bloodPort_out, bloodPort_out_Extension.bloodPort_out) annotation (
         Line(
          points={{100,0},{80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-100,0},{-80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, pump.q_in) annotation (Line(
          points={{-60,10},{-20,10}},
          color={0,0,0},
          thickness=1));
      connect(pump.q_out, bloodPort_out_Extension.bloodFlow) annotation (Line(
          points={{0,10},{60,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2, StreamO2.q_in) annotation (Line(
          points={{-60,0},{-52,0},{-52,-20},{-20,-20}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, StreamCO2.q_in) annotation (Line(
          points={{-60,-4.2},{-54,-4.2},{-54,-40},{-20,-40}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, StreamBEox.q_in) annotation (Line(
          points={{-60,-8},{-56,-8},{-56,-60},{-20,-60}},
          color={107,45,134},
          thickness=1));
      connect(StreamO2.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{0,-20},{54,-20},{54,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.CO2, StreamCO2.q_out) annotation (Line(
          points={{60,-4},{56,-4},{56,-40},{0,-40}},
          color={107,45,134},
          thickness=1));
      connect(StreamBEox.q_out, bloodPort_out_Extension.BEox) annotation (Line(
          points={{0,-60},{58,-60},{58,-8},{60,-8}},
          color={107,45,134},
          thickness=1));
      connect(volumeFlowRate, pump.solutionFlow)
        annotation (Line(points={{0,108},{0,17},{-10,17}}, color={0,0,127}));
      connect(volumeFlowRate, StreamO2.solutionFlow)
        annotation (Line(points={{0,108},{0,-13},{-10,-13}}, color={0,0,127}));
      connect(volumeFlowRate, StreamCO2.solutionFlow)
        annotation (Line(points={{0,108},{0,-33},{-10,-33}}, color={0,0,127}));
      connect(volumeFlowRate, StreamBEox.solutionFlow)
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

    model PressureMeasure "Hydraulic pressure at port"
      extends Physiolibrary.Icons.PressureMeasure;
      Physiolibrary.Types.RealIO.PressureOutput pressure "Pressure" annotation (
          Placement(transformation(extent={{60,30},{100,70}}), iconTransformation(
              extent={{38,-48},{78,-8}})));
      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{-112,26},
                {-92,46}}), iconTransformation(extent={{-62,-82},{-36,-58}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-48,-10},{-28,10}})));
      BloodPort_out bloodPort_out annotation (Placement(transformation(extent={{70,-2},
                {92,22}}), iconTransformation(extent={{72,-84},{100,-58}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{34,-10},{58,12}})));
      Physiolibrary.Hydraulic.Sensors.PressureMeasure pressureMeasure
        annotation (Placement(transformation(extent={{2,40},{32,70}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concO2 = bloodPort_in_Extension.O2.conc annotation (Placement(
            transformation(extent={{60,-80},{80,-60}}),
                                                      iconTransformation(extent={{80,
                80},{100,100}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concCO2 = bloodPort_in_Extension.CO2.conc annotation (Placement(
            transformation(extent={{60,-60},{80,-40}}),iconTransformation(extent={{80,
                40},{100,60}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concBEox = bloodPort_in_Extension.BEox.conc annotation (Placement(
            transformation(extent={{60,-40},{80,-20}}), iconTransformation(extent={{
                80,0},{100,20}})));
    equation

      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-102,36},{-76,36},{-76,0},{-48,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
         Line(
          points={{58,1},{70,1},{70,10},{81,10}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.O2, bloodPort_out_Extension.O2) annotation (
          Line(
          points={{-28,0},{4,0},{4,1},{34,1}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, bloodPort_out_Extension.CO2) annotation (
          Line(
          points={{-28,-4.2},{4,-4.2},{4,-3.4},{34,-3.4}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, bloodPort_out_Extension.BEox)
        annotation (Line(
          points={{-28,-8},{4,-8},{4,-7.8},{34,-7.8}},
          color={107,45,134},
          thickness=1));
      connect(pressureMeasure.q_in, bloodPort_in_Extension.bloodFlow) annotation (
          Line(
          points={{11,46},{-8,46},{-8,10},{-28,10}},
          color={0,0,0},
          thickness=1));
      connect(pressureMeasure.pressure, pressure) annotation (Line(points={{26,49},
              {48,49},{48,50},{80,50}},color={0,0,127}));
      connect(bloodPort_out_Extension.bloodFlow, bloodPort_in_Extension.bloodFlow)
        annotation (Line(
          points={{34,12},{4,12},{4,10},{-28,10}},
          color={0,0,0},
          thickness=1));
     annotation (
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(graphics={
            Text(
              extent={{70,80},{10,100}},
              lineColor={28,108,200},
              textString="O2",
              horizontalAlignment=TextAlignment.Right),
            Text(
              extent={{70,40},{10,60}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Right,
              textString="CO2"),
            Text(
              extent={{70,0},{10,20}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Right,
              textString="BEox")}));
    end PressureMeasure;

    model FlowMeasure "Volumetric flow between ports"
      //extends Physiolibrary.Hydraulic.Interfaces.OnePort;
      //extends Icons.FlowMeasure;
      extends Modelica.Icons.RotationalSensor;

      Physiolibrary.Types.RealIO.VolumeFlowRateOutput volumeFlow
        "Actual volume flow rate" annotation (Placement(transformation(
            extent={{-9,-9},{9,9}},
            rotation=0,
            origin={-1,69}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=90,
            origin={0,120})));
      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{-102,-8},
                {-82,12}}), iconTransformation(extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out annotation (Placement(transformation(extent={{64,-14},
                {84,6}}), iconTransformation(extent={{80,-10},{100,10}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput O2flow annotation (Placement(
            transformation(extent={{4,-34},{24,-14}}), iconTransformation(
            extent={{-17,-17},{17,17}},
            rotation=270,
            origin={-53,-117})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput CO2flow annotation (Placement(
            transformation(extent={{6,-70},{26,-50}}), iconTransformation(
            extent={{-17,-17},{17,17}},
            rotation=270,
            origin={63,-117})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-26,30},{-6,50}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-72,-8},{-52,12}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{34,-14},{54,6}})));
      Physiolibrary.Chemical.Sensors.MolarFlowMeasure molarFlowMeasure
        annotation (Placement(transformation(extent={{-24,-8},{-4,12}})));
      Physiolibrary.Chemical.Sensors.MolarFlowMeasure molarFlowMeasure1
        annotation (Placement(transformation(extent={{-18,-48},{2,-28}})));
    equation

      connect(bloodPort_in_Extension.bloodPort_in, bloodPort_in) annotation (Line(
          points={{-72,2},{-92,2}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-52,12},{-52,40},{-26,40}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_out_Extension.bloodFlow, flowMeasure.q_out) annotation (
          Line(
          points={{34,6},{34,40},{-6,40}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2, molarFlowMeasure.q_in) annotation (Line(
          points={{-52,2},{-24,2}},
          color={107,45,134},
          thickness=1));
      connect(molarFlowMeasure.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{-4,2},{16,2},{16,-4},{34,-4}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow, volumeFlow)
        annotation (Line(points={{-16,52},{-16,69},{-1,69}}, color={0,0,127}));
      connect(O2flow, molarFlowMeasure.molarFlowRate) annotation (Line(points={{14,-24},
              {2,-24},{2,-26},{-14,-26},{-14,-6}}, color={0,0,127}));
      connect(bloodPort_in_Extension.CO2, molarFlowMeasure1.q_in) annotation (Line(
          points={{-52,-2.2},{-40,-2.2},{-40,-2},{-28,-2},{-28,-38},{-18,-38}},
          color={107,45,134},
          thickness=1));
      connect(molarFlowMeasure1.q_out, bloodPort_out_Extension.CO2) annotation (
          Line(
          points={{2,-38},{26,-38},{26,-8},{34,-8}},
          color={107,45,134},
          thickness=1));
      connect(molarFlowMeasure1.molarFlowRate, CO2flow)
        annotation (Line(points={{-8,-46},{-8,-60},{16,-60}}, color={0,0,127}));
      connect(bloodPort_in_Extension.BEox, bloodPort_out_Extension.BEox)
        annotation (Line(
          points={{-52,-6},{-44,-6},{-44,-76},{32,-76},{32,-12},{34,-12}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
          Line(
          points={{54,-4},{74,-4}},
          color={28,108,200},
          thickness=0.5));
      annotation (
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),
                             graphics={
            Line(
              points={{-60,80},{80,80},{62,60}},
              color={0,0,255}),
            Line(
              points={{62,100},{80,80}},
              color={0,0,255}),
            Text(
              extent={{-25,-11},{34,-70}},
              lineColor={0,0,0},
              textString="V'"),
            Text(
              extent={{-42,-96},{-102,-76}},
              lineColor={28,108,200},
              textString="O2",
              horizontalAlignment=TextAlignment.Right),
            Text(
              extent={{78,-96},{18,-76}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Right,
              textString="CO2")}));
    end FlowMeasure;

    model FlowConcentrationMeasure "Volumetric flow between ports"
      //extends Physiolibrary.Hydraulic.Interfaces.OnePort;
      //extends Icons.FlowMeasure;
      extends Modelica.Icons.RotationalSensor;

      Physiolibrary.Types.RealIO.VolumeFlowRateOutput volumeFlow
        "Actual volume flow rate" annotation (Placement(transformation(
            extent={{-9,-9},{9,9}},
            rotation=0,
            origin={-1,69}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=90,
            origin={0,120})));
      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{-102,-8},
                {-82,12}}), iconTransformation(extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out annotation (Placement(transformation(extent={{64,-14},
                {84,6}}), iconTransformation(extent={{80,-10},{100,10}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-26,30},{-6,50}})));
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-72,-8},{-52,12}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{34,-14},{54,6}})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure
        O2_concentrationMeasure annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-24,14})));
      Physiolibrary.Types.RealIO.ConcentrationOutput O2_conc annotation (
          Placement(transformation(extent={{-6,14},{14,34}}),
            iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-80,-120})));
      Physiolibrary.Types.RealIO.ConcentrationOutput CO2_conc annotation (
          Placement(transformation(extent={{-10,-26},{10,-6}}),
            iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={3.55271e-15,-120})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure
        CO2_concentrationMeasure annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-18,-28})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure
        BEox_concentrationMeasure annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-16,-60})));
      Physiolibrary.Types.RealIO.ConcentrationOutput BEox_conc annotation (
          Placement(transformation(extent={{-2,-56},{18,-36}}),
            iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={80,-120})));
    equation

      connect(bloodPort_in_Extension.bloodPort_in, bloodPort_in) annotation (Line(
          points={{-72,2},{-92,2}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-52,12},{-52,40},{-26,40}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_out_Extension.bloodFlow, flowMeasure.q_out) annotation (
          Line(
          points={{34,6},{34,40},{-6,40}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.volumeFlow, volumeFlow)
        annotation (Line(points={{-16,52},{-16,69},{-1,69}}, color={0,0,127}));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
          Line(
          points={{54,-4},{74,-4}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.O2, O2_concentrationMeasure.q_in)
        annotation (Line(
          points={{-52,2},{-38,2},{-38,14},{-24,14}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.O2, O2_concentrationMeasure.q_in)
        annotation (Line(
          points={{34,-4},{4,-4},{4,14},{-24,14}},
          color={107,45,134},
          thickness=1));
      connect(O2_concentrationMeasure.concentration, O2_conc)
        annotation (Line(points={{-24,22},{-24,24},{4,24}}, color={0,0,127}));
      connect(CO2_concentrationMeasure.concentration, CO2_conc) annotation (
          Line(points={{-18,-20},{-18,-16},{0,-16}}, color={0,0,127}));
      connect(bloodPort_in_Extension.CO2, CO2_concentrationMeasure.q_in)
        annotation (Line(
          points={{-52,-2.2},{-44,-2.2},{-44,-2},{-32,-2},{-32,-28},{-18,-28}},
          color={107,45,134},
          thickness=1));

      connect(CO2_concentrationMeasure.q_in, bloodPort_out_Extension.CO2)
        annotation (Line(
          points={{-18,-28},{18,-28},{18,-8},{34,-8}},
          color={107,45,134},
          thickness=1));
      connect(BEox_concentrationMeasure.concentration, BEox_conc) annotation (
          Line(points={{-16,-52},{-16,-46},{8,-46}}, color={0,0,127}));
      connect(bloodPort_in_Extension.BEox, BEox_concentrationMeasure.q_in)
        annotation (Line(
          points={{-52,-6},{-46,-6},{-46,-60},{-16,-60}},
          color={107,45,134},
          thickness=1));
      connect(BEox_concentrationMeasure.q_in, bloodPort_out_Extension.BEox)
        annotation (Line(
          points={{-16,-60},{26,-60},{26,-12},{34,-12}},
          color={107,45,134},
          thickness=1));
      annotation (
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),
                             graphics={
            Line(
              points={{-60,80},{80,80},{62,60}},
              color={0,0,255}),
            Line(
              points={{62,100},{80,80}},
              color={0,0,255}),
            Text(
              extent={{-25,-11},{34,-70}},
              lineColor={0,0,0},
              textString="V'"),
            Text(
              extent={{-76,-96},{-136,-76}},
              lineColor={28,108,200},
              textString="O2",
              horizontalAlignment=TextAlignment.Right),
            Text(
              extent={{24,-96},{-36,-76}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Right,
              textString="CO2"),
            Text(
              extent={{100,-96},{40,-76}},
              lineColor={28,108,200},
              horizontalAlignment=TextAlignment.Right,
              textString="BEox")}));
    end FlowConcentrationMeasure;

    model junction_T
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-86,-26},{-58,10}})));
      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-18},{-84,2}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{52,-24},{82,12}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{82,-10},{102,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_O2 if useO2PortInput annotation (
          Placement(transformation(extent={{8,-10},{28,10}}),
            iconTransformation(extent={{-72,-10},{-52,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_CO2 if useCO2PortInput annotation (
          Placement(transformation(extent={{-16,-38},{4,-18}}),
            iconTransformation(extent={{-36,-10},{-16,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_BEox if useBEoxPortInput annotation (
          Placement(transformation(extent={{-54,-78},{-34,-58}}),
            iconTransformation(extent={{6,-10},{26,10}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{14,48},{40,20}})));
      FickPrinciplePort fickPrinciple
        annotation (Placement(transformation(extent={{12,-28},{32,-8}})));
      FickPrinciplePort fickPrinciple1
        annotation (Placement(transformation(extent={{-12,-56},{8,-36}})));
      FickPrinciplePort fickPrinciple2
        annotation (Placement(transformation(extent={{-50,-98},{-30,-78}})));
      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_a port_Flow if useFlowPortInput annotation (
          Placement(transformation(extent={{-12,62},{8,82}}),
            iconTransformation(extent={{46,-12},{70,12}})));

      parameter Boolean useO2PortInput = false;
      parameter Boolean useCO2PortInput = false;
      parameter Boolean useBEoxPortInput = false;
      parameter Boolean useFlowPortInput = false;

    initial equation

    equation

      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-94,-8},{-86,-8}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
         Line(
          points={{82,-6},{88,-6},{88,0},{92,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (
          Line(
          points={{-58,10},{-58,34},{14,34}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
         Line(
          points={{40,34},{52,34},{52,12}},
          color={0,0,0},
          thickness=1));
      connect(port_Flow, flowMeasure.q_in) annotation (Line(
          points={{-2,72},{-2,34},{14,34}},
          color={0,0,0},
          thickness=1));
      connect(fickPrinciple1.volumeFlow, flowMeasure.volumeFlow) annotation (
          Line(points={{1.4,-40},{1.4,12},{27,12},{27,17.2}}, color={0,0,127}));
      connect(fickPrinciple2.volumeFlow, flowMeasure.volumeFlow) annotation (
          Line(points={{-36.6,-82},{-28,-82},{-28,12},{27,12},{27,17.2}}, color=
             {0,0,127}));
      connect(fickPrinciple.volumeFlow, flowMeasure.volumeFlow) annotation (
          Line(points={{25.4,-12},{24,12},{27,12},{27,17.2}}, color={0,0,127}));
      connect(fickPrinciple.port_add, port_O2) annotation (Line(
          points={{18.2,-11},{18.2,-5.5},{18,-5.5},{18,0}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple1.port_add, port_CO2) annotation (Line(
          points={{-5.8,-39},{-5.8,-33.5},{-6,-33.5},{-6,-28}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple2.port_add, port_BEox) annotation (Line(
          points={{-43.8,-81},{-43.8,-75.5},{-44,-75.5},{-44,-68}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple2.port_in, bloodPort_in_Extension.BEox) annotation (
          Line(
          points={{-49,-87.8},{-76,-87.8},{-76,-40},{-58,-40},{-58,-22.4}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple1.port_in, bloodPort_in_Extension.CO2) annotation (
          Line(
          points={{-11,-45.8},{-48,-45.8},{-48,-15.56},{-58,-15.56}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple.port_in, bloodPort_in_Extension.O2) annotation (
          Line(
          points={{13,-17.8},{-34,-17.8},{-34,-8},{-58,-8}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple.port_out, bloodPort_out_Extension.O2) annotation (
          Line(
          points={{31,-18},{38,-18},{38,-6},{52,-6}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple1.port_out, bloodPort_out_Extension.CO2) annotation (
         Line(
          points={{7,-46},{42,-46},{42,-13.2},{52,-13.2}},
          color={107,45,134},
          thickness=1));
      connect(fickPrinciple2.port_out, bloodPort_out_Extension.BEox)
        annotation (Line(
          points={{-31,-88},{46,-88},{46,-20.4},{52,-20.4}},
          color={107,45,134},
          thickness=1));
      connect(port_BEox, port_BEox) annotation (Line(
          points={{-44,-68},{16,-68},{16,-68},{-44,-68}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(
              points={{-88,0},{90,0}},
              color={0,0,0},
              thickness=0.5)}), Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end junction_T;

    model FickPrinciplePort
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_in annotation (
          Placement(transformation(extent={{-70,-10},{-50,10}}),
            iconTransformation(extent={{-100,-8},{-80,12}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_add annotation (
          Placement(transformation(extent={{-48,48},{-28,68}}), iconTransformation(
              extent={{-48,60},{-28,80}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b port_out annotation (
          Placement(transformation(extent={{66,-10},{86,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput volumeFlow annotation (
          Placement(transformation(extent={{0,50},{40,90}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={34,60})));
    equation
      //mass balance
      port_in.q+port_add.q+port_out.q=0;
      //Fick principle
      port_in.conc*volumeFlow+port_add.q=port_out.conc*volumeFlow;
      //concentration in added flow = outflow concentration
      port_add.conc=(if volumeFlow>0 then port_out.conc else port_in.conc);
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-84,6},{54,-4}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{-29,5},{29,-5}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              origin={-37,41},
              rotation=90),
            Polygon(
              points={{80,0},{40,12},{40,-10},{80,0}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{-1,2},{-20,11},{-20,-11},{-1,2}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid,
              origin={-38,-3},
              rotation=270)}),  Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end FickPrinciplePort;

    model junction_T_flows
      BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-86,-26},{-58,10}})));
      BloodPort_in bloodPort_in(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-18},{-84,2}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{52,-24},{82,12}})));
      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_a port_Flow if useFlowPortInput annotation (
          Placement(transformation(extent={{-12,62},{8,82}}),
            iconTransformation(extent={{50,-12},{74,12}})));
      BloodPort_out bloodPort_out(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{82,-10},{102,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{14,48},{40,20}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput O2_inflowInput(
                                    start=O2_inflow) if useO2Input annotation (Placement(
            transformation(extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-83,39}),                             iconTransformation(
            extent={{-12,-12},{12,12}},
            rotation=270,
            origin={-64,12})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput CO2_inflowInput(
                                    start=CO2_inflow) if useCO2Input annotation (
          Placement(transformation(extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-85,83}),
            iconTransformation(
            extent={{-12,-12},{12,12}},
            rotation=270,
            origin={-22,12})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput BEox_inflowInput(
                                    start=BEox_inflow) if useBEoxInput annotation (
          Placement(transformation(extent={{-9,-9},{9,9}},
            rotation=0,
            origin={-85,61}),
            iconTransformation(
            extent={{-12,-12},{12,12}},
            rotation=270,
            origin={22,12})));

      parameter Physiolibrary.Types.MolarFlowRate O2_inflow=0;
      parameter Physiolibrary.Types.MolarFlowRate CO2_inflow=0;
      parameter Physiolibrary.Types.MolarFlowRate BEox_inflow=0;

      parameter Boolean useO2Input = false;
      parameter Boolean useCO2Input = false;
      parameter Boolean useBEoxInput = false;
      parameter Boolean useFlowPortInput = false;

      Physiolibrary.Types.MolarFlowRate inflowO2;
      Physiolibrary.Types.MolarFlowRate inflowCO2;
      Physiolibrary.Types.MolarFlowRate inflowBEox;

      FickPrinciple fickPrincipleO2
        annotation (Placement(transformation(extent={{-10,-24},{28,12}})));
      FickPrinciple fickPrincipleCO2
        annotation (Placement(transformation(extent={{-22,-52},{16,-16}})));
      FickPrinciple fickPrincipleBEox
        annotation (Placement(transformation(extent={{-50,-76},{-12,-40}})));
    equation

      if not useO2Input then
        inflowO2=O2_inflow;
      end if;

      if not useCO2Input then
        inflowCO2=CO2_inflow;
      end if;

      if not useBEoxInput then
        inflowBEox=BEox_inflow;
      end if;

      fickPrincipleO2.molarFlow=inflowO2;
      fickPrincipleCO2.molarFlow=inflowCO2;
      fickPrincipleBEox.molarFlow=inflowBEox;

      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-94,-8},{-86,-8}},
          color={28,108,200},
          thickness=0.5));

      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
         Line(
          points={{82,-6},{88,-6},{88,0},{92,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (
          Line(
          points={{-58,10},{-58,34},{14,34}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
         Line(
          points={{40,34},{52,34},{52,12}},
          color={0,0,0},
          thickness=1));
      connect(port_Flow, flowMeasure.q_in) annotation (Line(
          points={{-2,72},{-2,34},{14,34}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2, fickPrincipleO2.port_in) annotation (Line(
          points={{-58,-8},{-34,-8},{-34,-5.64},{-8.1,-5.64}},
          color={107,45,134},
          thickness=1));
      connect(fickPrincipleO2.port_out, bloodPort_out_Extension.O2) annotation (
          Line(
          points={{26.1,-6},{52,-6}},
          color={107,45,134},
          thickness=1));
      connect(fickPrincipleCO2.port_in, bloodPort_in_Extension.CO2) annotation (
          Line(
          points={{-20.1,-33.64},{-44,-33.64},{-44,-15.56},{-58,-15.56}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, fickPrincipleBEox.port_in) annotation (
          Line(
          points={{-58,-22.4},{-56,-22.4},{-56,-58},{-48.1,-58},{-48.1,-57.64}},
          color={107,45,134},
          thickness=1));
      connect(fickPrincipleCO2.port_out, bloodPort_out_Extension.CO2) annotation (
          Line(
          points={{14.1,-34},{26,-34},{26,-13.2},{52,-13.2}},
          color={107,45,134},
          thickness=1));
      connect(fickPrincipleBEox.port_out, bloodPort_out_Extension.BEox) annotation (
         Line(
          points={{-13.9,-58},{34,-58},{34,-20.4},{52,-20.4}},
          color={107,45,134},
          thickness=1));
      connect(fickPrincipleO2.volumeFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{15.46,4.8},{15.46,17.2},{27,17.2}}, color={0,0,127}));
      connect(fickPrincipleCO2.volumeFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{3.46,-23.2},{3.46,18},{16,18},{27,17.2}}, color={0,0,127}));
      connect(fickPrincipleBEox.volumeFlow, flowMeasure.volumeFlow) annotation (
          Line(points={{-24.54,-47.2},{-24.54,18},{16,18},{27,17.2}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(
              points={{-82,0},{92,0}},
              color={0,0,0},
              thickness=0.5)}), Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end junction_T_flows;

    model FickPrinciple

      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_in annotation (
          Placement(transformation(extent={{-70,-10},{-50,10}}),
            iconTransformation(extent={{-100,-8},{-80,12}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b port_out annotation (
          Placement(transformation(extent={{66,-10},{86,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput volumeFlow
                 annotation (
          Placement(transformation(extent={{0,50},{40,90}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={34,60})));
        //(start=volumeFlowInput) if  useVolumeFlowInput

      Physiolibrary.Types.RealIO.MolarFlowRateInput molarFlow
         annotation (Placement(
            transformation(extent={{-202,44},{-162,84}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-56,60})));
        //(start=molarFlowInput) if useMolarFlowInput

      //parameter Boolean useVolumeFlowInput=false;
      //parameter Boolean useMolarFlowInput=false;

      //parameter Physiolibrary.Types.VolumeFlowRate volumeFlowInput=0;
      //parameter Physiolibrary.Types.MolarFlowRate molarFlowInput=0;

      //Physiolibrary.Types.VolumeFlowRate volumeFlowRate;
      //Physiolibrary.Types.MolarFlowRate molarFlowRate;

    equation
      /* 
  if not useVolumeFlowInput then
    volumeFlowRate=volumeFlowInput;
  end if;

  if not useMolarFlowInput then
    molarFlowRate=molarFlowInput;
  end if;
  */
      //mass balance
      port_in.q+molarFlow+port_out.q=0;
       //port_in.q+molarFlowRate+port_out.q=0;
       //Fick principle
       //port_in.conc*volumeFlowRate+molarFlowRate=port_out.conc*volumeFlowRate;
      port_in.conc*volumeFlow+molarFlow=port_out.conc*volumeFlow;

      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-84,6},{54,-4}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{80,0},{40,12},{40,-10},{80,0}},
              lineColor={255,0,0},
              lineThickness=0.5,
              fillColor={255,0,0},
              fillPattern=FillPattern.Solid)}),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end FickPrinciple;

    model BloodEmbranchment
      parameter Integer numberOfFlows=2;
      parameter Real relativeWeights[ numberOfFlows];
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(extent=
               {{84,-8},{104,12}}), iconTransformation(extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(
              extent={{-106,-10},{-86,10}}), iconTransformation(extent={{-100,-10},{
                -80,10}})));

      Real sumOfWeights = sum(relativeWeights);
      Pump pump[numberOfFlows] annotation (Placement(transformation(extent={{14,-14},{-12,16}})));

    equation
         for i in 1:numberOfFlows loop
            connect(pump[i].bloodPort_out, bloodPort_out[i]);
            connect(pump[i].bloodPort_in, bloodPort_in);
            pump[i].volumeFlowRate = relativeWeights[i]/sumOfWeights*bloodPort_in.bloodFlow;
         end for;
        annotation (Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodEmbranchment;

    model BloodSplitting
      parameter Integer splitFraction[numberOfFlows];
      parameter Integer numberOfFlows=2;
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{68,-10},
                {88,10}}),          iconTransformation(extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(
              extent={{-98,-10},{-78,10}}),  iconTransformation(extent={{-100,-10},{
                -80,10}})));

      Pump pump[numberOfFlows] annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={2,0})));

    equation
      for i in 1:numberOfFlows loop
      pump[i].volumeFlowRate=bloodPort_in.bloodFlow*splitFraction[i];
      connect(pump[i].bloodPort_in, bloodPort_in);
      connect(bloodPort_out[i], pump[i].bloodPort_out);
      end for;

      /* 
  pump[1].volumeFlowRate=bloodPort_in.bloodFlow*(1-splitFraction);
  pump[2].volumeFlowRate=bloodPort_in.bloodFlow*splitFraction;
  */
    /*
  connect(pump[1].bloodPort_in, bloodPort_in);
  connect(pump[2].bloodPort_in, bloodPort_in);
  connect(bloodPort_out[1], pump[1].bloodPort_out);
  connect(bloodPort_out[2],pump[2].bloodPort_out);
  */
       annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodSplitting;

    model BloodEmbranchment_
      parameter Integer numberOfFlows;
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(extent=
               {{84,-8},{104,12}}), iconTransformation(extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out annotation (Placement(transformation(
              extent={{-106,-10},{-86,10}}), iconTransformation(extent={{-100,-10},{
                -80,10}})));

      BloodPort_out         bloodPort_out1
                                          annotation (Placement(transformation(
              extent={{-106,-42},{-86,-22}}),iconTransformation(extent={{-100,-10},{
                -80,10}})));
      Pump pump annotation (Placement(transformation(extent={{18,-12},{-8,18}})));
      Pump pump1 annotation (Placement(transformation(extent={{18,-54},{-8,-24}})));
    equation
      pump1.volumeFlowRate=21;
      pump.volumeFlowRate=21;
      connect(pump.bloodPort_out, bloodPort_out) annotation (Line(
          points={{-8,3},{-54,3},{-54,0},{-96,0}},
          color={28,108,200},
          thickness=0.5));
      connect(pump.bloodPort_in, bloodPort_in) annotation (Line(
          points={{18,3},{56,3},{56,2},{94,2}},
          color={28,108,200},
          thickness=0.5));
      connect(pump1.bloodPort_in, bloodPort_in) annotation (Line(
          points={{18,-39},{56,-39},{56,2},{94,2}},
          color={28,108,200},
          thickness=0.5));
      connect(pump1.bloodPort_out, bloodPort_out1) annotation (Line(
          points={{-8,-39},{-52,-39},{-52,-32},{-96,-32}},
          color={28,108,200},
          thickness=0.5));
        annotation (Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodEmbranchment_;

    model BloodSplitting_2
      parameter Real splitFraction=0.02;

      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{72,-8},
                {92,12}}), iconTransformation(extent={{-40,-10},{-20,10}})));
      BloodPort_out bloodPort_out1 annotation (Placement(transformation(extent={{-98,10},
                {-78,30}}),     iconTransformation(extent={{20,-32},{40,-12}})));
      Pump pump1 annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-2,20})));
      BloodPort_out bloodPort_out2 annotation (Placement(transformation(extent={{-98,-44},
                {-78,-24}}),    iconTransformation(extent={{20,-10},{40,10}})));
      Pump pump2 annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-6,-34})));

    equation
      pump1.volumeFlowRate=bloodPort_in.bloodFlow*(1-splitFraction);
      pump2.volumeFlowRate=bloodPort_in.bloodFlow*splitFraction;
      connect(pump1.bloodPort_out, bloodPort_out1) annotation (Line(
          points={{-12,20},{-88,20}},
          color={28,108,200},
          thickness=0.5));
      connect(pump1.bloodPort_in, bloodPort_in) annotation (Line(
          points={{8,20},{40,20},{40,2},{82,2}},
          color={28,108,200},
          thickness=0.5));
      connect(pump2.bloodPort_out, bloodPort_out2) annotation (Line(
          points={{-16,-34},{-88,-34}},
          color={28,108,200},
          thickness=0.5));
      connect(pump2.bloodPort_in, bloodPort_in) annotation (Line(
          points={{4,-34},{40,-34},{40,2},{82,2}},
          color={28,108,200},
          thickness=0.5));
       annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Line(points={{20,-20},{-20,0},{20,0}}, color={28,108,200})}),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodSplitting_2;

    model BloodSplitting_2_Array

      constant Integer numberOfFlows = 2;
      parameter Real splitRelation[numberOfFlows];

      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{72,-8},
                {92,12}}), iconTransformation(extent={{-100,-8},{-80,12}})));
      BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(extent={{-98,-10},
                {-78,10}}),     iconTransformation(extent={{80,-10},{100,10}})));
      Pump pump[numberOfFlows] annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-4,0})));

    equation
      pump[1].volumeFlowRate=bloodPort_in.bloodFlow*splitRelation[1]*sum(splitRelation);
      pump[2].volumeFlowRate=bloodPort_in.bloodFlow*splitRelation[2]*sum(splitRelation);
      connect(pump[1].bloodPort_out, bloodPort_out[1]);
      connect(pump[1].bloodPort_in, bloodPort_in);
      connect(pump[2].bloodPort_out, bloodPort_out[2]);
      connect(pump[2].bloodPort_in, bloodPort_in);
     annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-6,-34})),
                   Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Line(points={{80,10},{-80,0},{80,-10},{80,-10}}, color={28,108,
                  200})}),      Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodSplitting_2_Array;

    model BloodSplitting_Array

      parameter Integer numberOfFlows = 2;
      parameter Real splitRelation[numberOfFlows];

      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{72,-8},
                {92,12}}), iconTransformation(extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(extent={{-98,-10},
                {-78,10}}),     iconTransformation(extent={{80,-10},{100,10}})));
      Pump pump[numberOfFlows] annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-4,0})));

    equation
      for i in 1:numberOfFlows loop
      connect(pump[i].bloodPort_out, bloodPort_out[i]);
      connect(pump[i].bloodPort_in, bloodPort_in);
      pump[i].volumeFlowRate=bloodPort_in.bloodFlow*splitRelation[i]*sum(splitRelation);
      end for;

      connect(bloodPort_in, bloodPort_in) annotation (Line(
          points={{82,2},{-90,2},{-90,2},{82,2}},
          color={28,108,200},
          thickness=0.5));
     annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-6,-34})),
                   Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Line(points={{80,10},{-80,0},{80,-10}}, color={28,108,200})}),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodSplitting_Array;

    model Shunt "resistance divider to model shunt"

      parameter Physiolibrary.Types.HydraulicConductance G_total
        "Total resistance of the lungs";
      Physiolibrary.Types.RealIO.HydraulicConductanceOutput G_main
        "Conductance of the primary (main) branch"
          annotation (Placement(transformation(extent={{80,80},{100,100}}),
            iconTransformation(extent={{80,80},{100,100}})));
      Physiolibrary.Types.RealIO.HydraulicConductanceOutput G_shunt
        "Conductance of the secondary (shunt) branch"
        annotation (Placement(transformation(extent={{80,-100},{100,-80}}),
            iconTransformation(extent={{80,-100},{100,-80}})));

    Physiolibrary.Types.RealIO.FractionInput shunt_fraction
        "Percentage of venous blood mixing with arterial"
        annotation (Placement(transformation(extent={{-100,-20},{-60,20}}),
            iconTransformation(extent={{-100,-20},{-60,20}})));
    equation
      G_total = G_main + G_shunt;
      (1 - shunt_fraction) * G_main = shunt_fraction * G_shunt;

      annotation (Diagram(graphics), Documentation(info="<html>
<p>The <i>shunt</i> divides the resistance between <i>alveolar ventilation</i> and <i>blood resistor</i> according to desired pulmonary shunt. It defines what percentage of venous blood will be mixed with arterial blood. </p>
</html>"),
        Icon(graphics={Line(points={{40,80},{-60,40},{60,-40},{-40,-80}}, color={28,
                  108,200})}));
    end Shunt;

    model AlveolocapillaryUnit
      extends Icons.Alveolus;

      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{84,-82},{104,-62}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={-13,101})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
            transformation(extent={{86,-64},{106,-44}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={15,101})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation(Placement(transformation(extent={{-98,-32},
                {-86,-20}}),                                                                                                    iconTransformation(extent={{-13,-13},
                {13,13}},                                                                                                    rotation = 0, origin={-77,-7})));
      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{-106,64},
                {-86,84}}),          iconTransformation(extent={{-44,50},{-24,
                70}})));
      BloodPort_out bloodPort_out annotation (Placement(transformation(extent={{86,64},
                {106,84}}),          iconTransformation(extent={{14,52},{34,72}})));
      junction_T         junction_T1(useO2PortInput=true, useCO2PortInput=true)
        annotation (Placement(transformation(extent={{14,-16},{-14,16}},
            rotation=180,
            origin={24,74})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut CO2_outflow(
          useSoluteFlowInput=true, SoluteFlow=0.00016666666666667) annotation (
          Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=180,
            origin={70,64})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump O2_inflow(
          useSoluteFlowInput=true, SoluteFlow=0.00018333333333333) annotation (
          Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=180,
            origin={-30,64})));
      FlowConcentrationMeasure flowConcentrationMeasure
        annotation (Placement(transformation(extent={{-76,64},{-56,84}})));

      OSA.AlvEq alvEq
        annotation (Placement(transformation(extent={{-46,-98},{66,-16}})));
      Physiolibrary.Types.Constants.VolumeConst nearToZeroVolume(k=1e-15)
        annotation (Placement(transformation(extent={{2,86},{18,98}})));
      Physiolibrary.Chemical.Components.Substance BufferCO2(useNormalizedVolume=false,
          solute_start=0)
        annotation (Placement(transformation(extent={{44,60},{52,68}})));
      Physiolibrary.Chemical.Components.Substance BufferO2(useNormalizedVolume=false,
          solute_start=0)
        annotation (Placement(transformation(extent={{-14,60},{-4,68}})));
    equation

      connect(alvEq.VO2, VO2) annotation (Line(points={{63.0783,-54.4375},{
              59.68,-54.4375},{59.68,-54},{96,-54}},
                                   color={0,0,127}));
      connect(VO2, VO2)
        annotation (Line(points={{96,-54},{96,-54}},   color={0,0,127}));
      connect(bloodPort_in, flowConcentrationMeasure.bloodPort_in) annotation (
          Line(
          points={{-96,74},{-75,74}},
          color={28,108,200},
          thickness=0.5));
      connect(flowConcentrationMeasure.bloodPort_out, junction_T1.bloodPort_in)
        annotation (Line(
          points={{-57,74},{10.28,74}},
          color={28,108,200},
          thickness=0.5));
      connect(alvEq.Q, flowConcentrationMeasure.volumeFlow) annotation (Line(
            points={{-45.0261,-41.625},{-45.0261,-42},{-54,-42},{-54,92},{-66,
              92},{-66,86}},
            color={0,0,127}));
      connect(flowConcentrationMeasure.O2_conc, alvEq.CvO2) annotation (Line(
            points={{-74,62},{-74,-47.775},{-45.0261,-47.775}},
            color={0,0,127}));
      connect(alvEq.CvCO2, flowConcentrationMeasure.CO2_conc) annotation (Line(
            points={{-45.0261,-50.85},{-66,-50.85},{-66,62}},
            color={0,0,127}));
      connect(alvEq.BEox, flowConcentrationMeasure.BEox_conc) annotation (Line(
            points={{-46,-31.375},{-58,-31.375},{-58,62}},
            color={0,0,127}));
      connect(O2_inflow.q_out, BufferO2.q_out) annotation (Line(
          points={{-20,64},{-9,64}},
          color={107,45,134},
          thickness=1));
      connect(CO2_outflow.q_in, BufferCO2.q_out) annotation (Line(
          points={{60,64},{48,64}},
          color={107,45,134},
          thickness=1));
      connect(BufferCO2.solutionVolume, nearToZeroVolume.y)
        annotation (Line(points={{46.4,65.6},{46.4,92},{20,92}},
                                                            color={0,0,127}));
      connect(BufferO2.solutionVolume, nearToZeroVolume.y) annotation (Line(points={{-11,
              65.6},{-11,92},{20,92}},                  color={0,0,127}));
      connect(O2_inflow.soluteFlow, VO2) annotation (Line(points={{-26,60},{-26,
              54},{68,54},{68,-54},{96,-54}},
                                           color={0,0,127}));
      connect(CO2_outflow.soluteFlow, VCO2) annotation (Line(points={{74,60},{
              74,-72},{94,-72}},          color={0,0,127}));
      connect(BufferO2.q_out, junction_T1.port_O2) annotation (Line(
          points={{-9,64},{15.32,64},{15.32,74}},
          color={107,45,134},
          thickness=1));
      connect(junction_T1.bloodPort_out, bloodPort_out) annotation (Line(
          points={{38,74},{96,74}},
          color={28,108,200},
          thickness=0.5));
      connect(BufferCO2.q_out, junction_T1.port_CO2) annotation (Line(
          points={{48,64},{20.36,64},{20.36,74}},
          color={107,45,134},
          thickness=1));
      connect(alvEq.VCO2, VCO2) annotation (Line(points={{63.0783,-59.05},{74,
              -59.05},{74,-72},{94,-72}}, color={0,0,127}));
      connect(VAi, alvEq.VAi) annotation (Line(points={{-92,-26},{-92,-38},{
              -45.0261,-38},{-45.0261,-38.55}}, color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Text(
              extent={{-86,114},{-16,88}},
              lineColor={28,108,200},
              textString="CO2"), Text(
              extent={{14,114},{82,86}},
              lineColor={28,108,200},
              textString="O2")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end AlveolocapillaryUnit;

    model AlvEqUnit_
      extends Icons.Alveolus;

      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2( start=10) annotation (Placement(
            transformation(extent={{84,-84},{104,-64}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={-13,101})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2( start=11) annotation (Placement(
            transformation(extent={{84,-64},{104,-44}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={15,101})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation(Placement(transformation(extent={{-76,-48},
                {-64,-36}}),                                                                                                    iconTransformation(extent={{-13,-13},
                {13,13}},                                                                                                    rotation = 0, origin={-77,-7})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2_v annotation (Placement(
            transformation(extent={{-72,-30},{-46,-4}}), iconTransformation(extent={
                {-102,-58},{-82,-38}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2_v annotation (Placement(
            transformation(extent={{-104,-4},{-82,18}}), iconTransformation(extent={
                {-102,-76},{-82,-56}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox_v annotation (Placement(
            transformation(extent={{-58,-20},{-38,0}}), iconTransformation(extent={{
                -102,-94},{-82,-74}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-86,-52},{-74,-40}}), iconTransformation(
            extent={{-13,-13},{13,13}},
            rotation=0,
            origin={-49,45})));

      OSA.AlvEq alvEq
        annotation (Placement(transformation(extent={{6,-86},{54,-32}})));
    equation
      //balance equation
     // bloodPort_in_Extension.O2.q+bloodPort_out_Extension.O2.q+alvEq.VO2=0;
      //bloodPort_in_Extension.CO2.q+bloodPort_out_Extension.CO2.q-alvEq.VCO2=0;
      //concentration of O2 and CO2 in outflowing blood;
      //bloodPort_out_Extension.O2.conc=alvEq.CpcO2;
      //bloodPort_out_Extension.CO2.conc=alvEq.CpcCO2;
      //concentration input
      //alvEq.cvO2

      connect(alvEq.VCO2, VCO2) annotation (Line(points={{52.7478,-60.35},{
              75.68,-60.35},{75.68,-74},{94,-74}},
                                     color={0,0,127}));
      connect(alvEq.VO2, VO2) annotation (Line(points={{52.7478,-57.3125},{
              79.68,-57.3125},{79.68,-54},{94,-54}},
                                   color={0,0,127}));
      connect(alvEq.VAi, VAi) annotation (Line(points={{6.41739,-46.85},{-57.26,
              -46.85},{-57.26,-42},{-70,-42}},
                           color={0,0,127}));
      connect(VO2, VO2)
        annotation (Line(points={{94,-54},{94,-54}},   color={0,0,127}));
      connect(Q, alvEq.Q) annotation (Line(points={{-80,-46},{-52,-46},{-52,
              -48.875},{6.41739,-48.875}},
                              color={0,0,127}));
      connect(alvEq.BEox, BEox_v) annotation (Line(points={{6,-42.125},{-32,
              -42.125},{-32,-10},{-48,-10}},
                                    color={0,0,127}));
      connect(alvEq.CvO2, O2_v) annotation (Line(points={{6.41739,-52.925},{-36,
              -52.925},{-36,-17},{-59,-17}},
                                    color={0,0,127}));
      connect(alvEq.CvCO2, CO2_v) annotation (Line(points={{6.41739,-54.95},{
              -52,-54.95},{-52,-24},{-70,-24},{-70,7},{-93,7}},
                                                    color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Text(
              extent={{-86,114},{-16,88}},
              lineColor={28,108,200},
              textString="CO2"), Text(
              extent={{14,114},{82,86}},
              lineColor={28,108,200},
              textString="O2")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end AlvEqUnit_;

    model BloodResistorsArray
    extends Physiolibrary.Icons.HydraulicResistor;
      parameter Integer numberOfFlows = 2;
      parameter Real splitRelation[numberOfFlows];
      parameter Physiolibrary.Types.HydraulicResistance Resistance;

      BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{72,-8},
                {92,12}}), iconTransformation(extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(extent={{-100,-8},
                {-80,12}}),     iconTransformation(extent={{82,-8},{102,12}})));

      BloodConductor bloodConductor[ numberOfFlows](useConductanceInput=true)
        annotation (Placement(transformation(extent={{18,-14},{-20,16}})));
    equation
      for i in 1:numberOfFlows loop
        bloodConductor[i].cond=(1/Resistance)*splitRelation[i]*sum(splitRelation);
        connect(bloodPort_in, bloodConductor[i].bloodPort_in);
        connect(bloodConductor[i].bloodPort_out, bloodPort_out[i]);
      end for;

     annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-6,-34})),
                   Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodResistorsArray;

    package OSA
      function O2totalSI "Calculation of concentration of total oxygen"
        input Real ctHb "conentration of hemoglobin in mmol/l";
        input Real pO2 "pO2 at givent temperature in Pa";
        input Real pHp "pH in plasma at given temperature";
        input Real pCO2 "pCO2 at given temperature in Pa";
        input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
        input Real FCOHb "substance fraction of carboxyhemoglobin";
        input Real FMetHb "substance fraction of hemiglobin";
        input Real FHbF "substance fraction of fetal hemogobin";
        input Real temp "temperature in °K";
        output Real ctO2
          "concentration of total blood oxygen concentration in mmol/l";
        output Real sO2t "oxygen saturation of hemoglobin at given temperature";
        output Real dissO2t
          "koncentration of dissolved oxygen in blood in mmol/l";
        output Real ceHb "effective hemoglobin concentration in mmol/l";
      algorithm
        //sO2t := NewBloodyMary_testing.OSA.sO2of(
        sO2t := OSA.sO2of(
          pO2/1000,
          pHp,
          pCO2/1000,
          cDPG,
          FCOHb,
          FMetHb,
          FHbF,
          temp - 273.15);
        ceHb := OSA.ceHbof(
          ctHb,
          FCOHb,
          FMetHb);
        dissO2t := OSA.dissO2(pO2/1000, temp - 273.15);
        ctO2 := dissO2t + sO2t * ceHb;
      end O2totalSI;

      function sO2of "calculation of oxygen hemoglobin saturation"
        input Real pO2T "Po2 at given temperature in kPa";
        input Real pHT "pH at given temperature";
        input Real pCO2T "pCO2 at given temperature in kPa";
        input Real cDPG "2'3 DPG koncentration in mmol/l";
        input Real FCOHb "substance fraction of carboxyhemoglobin";
        input Real FMetHb "substance fraction of hemiglobin";
        input Real FHbF "substance fraction of fetal hemoglobin";
        input Real TPt "temperature in?C";
        output Real returnValue "oxygen hemoglobin saturation";
      protected
        Real MpCOa;
        Real MpCOb;
        Real sCOc;
        Boolean doit;
        Real a;
        Real Epsilon = 0.000001;
      algorithm
        a := OSA.aFrom(
          pHT,
          pCO2T,
          FMetHb,
          FHbF,
          cDPG);
        sCOc := OSA.sCO(FCOHb, FMetHb);
        if sCOc > 0 then
          MpCOa := OSA.pO2fr(
            sCOc,
            a,
            TPt,
            0,
            FMetHb);
        else
          MpCOa := 0;
        end if;
        MpCOb := MpCOa;
        doit := false;
        while not doit loop
          MpCOb := 0.6 * MpCOa + 0.4 * MpCOb;
          MpCOa := OSA.MpCOof(
            pO2T + MpCOb,
            a,
            TPt,
            FCOHb,
            FMetHb);
          doit := abs(MpCOa - MpCOb) < Epsilon;
        end while;
        returnValue := OSA.sO2fr(
          pO2T + MpCOa,
          a,
          TPt,
          FCOHb,
          FMetHb);
      end sO2of;

      function aFrom
        input Real pH;
        input Real pCO2;
        input Real MetHb;
        input Real HbF;
        input Real cDPG;
        output Real returnValue;
      protected
        Real dadpH = -0.88;
        Real dadlnpCO2 = 0.048;
        Real dadxMetHb = -0.7;
        Real dadxHbF = -0.25;
        Real dadcDPG0 = 0.3;
        Real pH0 = 7.40;
        Real pCO20 = 5.33;
        Real dadcDPGxHbF = -0.1;
        Real cDPG0 = 5.0;
      algorithm
        returnValue := dadpH * (pH - pH0) + dadlnpCO2 * log(pCO2 / pCO20) + dadxMetHb * MetHb + dadxHbF * HbF + (dadcDPG0 + dadcDPGxHbF * HbF) * (cDPG / cDPG0 - 1.0);
      end aFrom;

      function sCO
        input Real FCOHb;
        input Real FMetHb;
        output Real returnValue;
      protected
        Real xFCOHb;
      algorithm
        if FCOHb < 0 then
          xFCOHb := 0;
        else
          xFCOHb := FCOHb;
        end if;
        returnValue := xFCOHb / (1.0 - FMetHb);
      end sCO;

      function pO2fr
        input Real sO2;
        input Real a;
        input Real T;
        input Real FCOHb;
        input Real FMetHb;
        output Real returnValue;
      protected
        Real pO2CO;
        Real sO2CO;
        Real ym;
        Real yc;
        Real dydxc;
        Real p0 = 7.0;
        Real dbdT = 0.055;
        Real T0 = 37;
        Boolean doit;
        Real Epsilon = 0.000001;
      algorithm
        pO2CO := exp(log(p0) + a + dbdT * (T - T0));
        sO2CO := sO2 + OSA.sCO(FCOHb, FMetHb)*(1 - sO2);
        ym := OSA.logit(sO2CO);
        doit := false;
        while not doit loop
          yc := OSA.y(
            pO2CO,
            a,
            T);
          dydxc := OSA.dydx(
            pO2CO,
            a,
            T);
          pO2CO := exp(log(pO2CO) + (ym - yc) / dydxc);
          doit := abs(ym - yc) < Epsilon;
        end while;
        returnValue := pO2CO - OSA.MpCOof(
          pO2CO,
          a,
          T,
          FCOHb,
          FMetHb);
      end pO2fr;

      function logit
        input Real x;
        output Real returnValue;
      algorithm
        returnValue := log(x / (1 - x));
      end logit;

      function y
        input Real pO2CO;
        input Real a;
        input Real T;
        output Real returnValue;
      protected
        Real y0 = 1.8747;
        Real k = 0.5342857;
      algorithm
        returnValue := y0 + OSA.x(
          pO2CO,
          a,
          T) + h(a)*tanh(k*OSA.x(
          pO2CO,
          a,
          T));
      end y;

      function x
        input Real pO2CO;
        input Real a;
        input Real T;
        output Real returnValue;
      protected
        Real p0 = 7.0;
        Real T0 = 37.0;
        Real dbdT = 0.055;
      algorithm
        returnValue := log(pO2CO / p0) - a - dbdT * (T - T0);
      end x;

      function h
        input Real a;
        output Real returnValue;
      protected
        Real h0 = 3.5;
      algorithm
        returnValue := h0 + a;
      end h;

      function dydx
        input Real pO2CO;
        input Real a;
        input Real T;
        output Real returnValue;
      protected
        Real k = 0.5342857;
      algorithm
        returnValue := 1 + OSA.h(a)*k*(1 - tanh(k*
          OSA.x(
          pO2CO,
          a,
          T))^2);
      end dydx;

      function MpCOof
        input Real pO2CO;
        input Real a;
        input Real T;
        input Real FCOHb;
        input Real FMetHb;
        output Real returnValue;
      algorithm
        returnValue := pO2CO/OSA.sO2CO(
          pO2CO,
          a,
          T)*OSA.sCO(FCOHb, FMetHb);
      end MpCOof;

      function antilogit
        input Real x;
        output Real returnValue;
      algorithm
        returnValue := exp(x) / (1.0 + exp(x));
      end antilogit;

      function sO2fr
        input Real pO2CO;
        input Real a;
        input Real T;
        input Real FCOHb;
        input Real FMetHb;
        output Real returnValue;
      protected
        Real sO2COc;
        Real sCOc;
      algorithm
        sO2COc := OSA.sO2CO(
          pO2CO,
          a,
          T);
        sCOc := OSA.sCO(FCOHb, FMetHb);
        returnValue := (sO2COc - sCOc) / (1 - sCOc);
      end sO2fr;

      function sO2CO
        input Real pO2CO;
        input Real a;
        input Real T;
        output Real returnValue;
      algorithm
        returnValue := OSA.antilogit(
          OSA.y(
          pO2CO,
          a,
          T));
      end sO2CO;

      function ceHbof "effective hemoglobin concentration in mmol/l"
        input Real ctHb "concentration of hemoglobin in mmol/l";
        input Real FCOHb "substance fraction of carboxyhemoglobin";
        input Real FMetHb "substance fraction of hemoglobin";
        output Real returnValue "effective contentration of hemoglobin";
      algorithm
        returnValue := ctHb * (1 - FCOHb - FMetHb);
      end ceHbof;

      function dissO2 "concentration of dissolved oxygen in blood"
        input Real pO2;
        input Real temp;
        output Real returnValue "dissolved blood oxygen in mmol/l";
      algorithm
        returnValue := OSA.aO2(temp)*pO2;
      end dissO2;

      function aO2
        input Real temp;
        output Real returnValue;
      algorithm
        returnValue := exp(log(0.0105) - 0.0115 * (temp - 37.0) + 0.5 * 0.00042 * (temp - 37.0) ^ 2);
      end aO2;

      function CO2totalSI "Calculation of blood total CO2 concentration"
        input Real pH "plasma pH at given temperature";
        input Real pCO2 "pCO2 at given temperatura in Pa";
        input Real T "temperature in ?C";
        input Real ctHb "Hemoglobin concentration in mmol/l";
        input Real sO2 "O2 hemoglobin saturation";
        output Real ctCO2B "Total blood CO2 concetratoin in mmol/l";
        output Real cHCO3 "plasma concentration of bicarbonate in mmol/l";
        output Real dCO2 "dissolved CO2 concentration in plasma";
      protected
        Real dpHEdpHP = 0.77;
        Real dpHEdsO2 = 0.035;
        Real pHEx = 7.84;
        Real sO2x = 0.06;
        Real aCO2E0 = 0.195;
        Real ctHbE = 21;
        Real pHE0 = 7.19;
        Real pKE0 = 6.125;
        Real pHT0;
        Real pCO2T0;
        Real pKE;
        Real pHE;
        Real ctCO2E;
        Real phiEB;
        Real T0 = 37;
        Real cAlbN = 0.66;
        Real cAlb;
        Real pH0 = 7.40;
        Real aCO2;
        Real tCO2p;
      algorithm
        // pCO2T0 := pCO22of (pCO2, T, T0, ctHb);
        cAlb := cAlbN;
        // albumin has minimal influence on total CO2 concentration
        pCO2T0 := OSA.pCO22of(
          pCO2/1000,
          T - 273.15,
          T0,
          ctHb,
          cAlb,
          pH);
        // pHT0 := pH2of (pH, T, T0, ctHb);
        pHT0 := OSA.pH2of(
          pH,
          T - 273.15,
          T0,
          ctHb,
          cAlb,
          pCO2);
        pHE := pHE0 + dpHEdpHP * (pHT0 - pH0) + dpHEdsO2 * (1 - sO2);
        //or : (pHE - 6.9) = alpha*(pHP - pH0), where alpha = 0.7 + f*(1 - sO2)
        pKE := pKE0 - OSA.lg(1 +
          OSA.antilg(pHE - pHEx - sO2x*sO2));
        ctCO2E := aCO2E0*pCO2T0*(1 + OSA.antilg(pHE - pKE));
        phiEB := ctHb / ctHbE;
        // !! !! it is hematokrit!!!!!!!
        //tCO2p := pCO2T0 * aCO2of(T0)*(1 + antilg(pHT0-pKof(T0)));
        aCO2 := OSA.aCO2of(T0);
        cHCO3 := aCO2*pCO2T0*OSA.antilg(pHT0 -
          OSA.pKof(T0));
        dCO2 := aCO2 * pCO2T0;
        ctCO2B := ctCO2E * phiEB + (dCO2 + cHCO3) * (1 - phiEB);
        //ctCO2B :=  ctCO2E*phiEB + ctCO2Pof( pHT0, pCO2T0, T0)*(1 - phiEB);
        //ctCO2B :=  ctCO2E*phiEB + tCO2p*(1 - phiEB);
      end CO2totalSI;

      function pCO22of
        input Real pCO21;
        input Real T1;
        input Real T2;
        input Real cHb;
        input Real cAlb;
        input Real pH1;
        output Real result;
      protected
        Real betaX;
        Real dpHdT1;
        Real pH2;
        Real cHCO3;
        Real dlgpCO2dT1;
        Real pCO22;
        Real dpHdT2;
        Real dlgpCO2dT2;
        Real dpHdTmean;
        Real dlgpCO2dTmean;
        Real cAlbN = 0.66;
      algorithm
        betaX := 7.7 + 8 * (cAlb - cAlbN) + 2.3 * cHb;
        dpHdT1 := ((-0.0026) - betaX*0.016*(1/(2.3*OSA.cHCO3of(
          pH1,
          pCO21,
          T1)) + 1/(2.3*pCO21*OSA.aCO2of(T1))))/(1 + betaX*(1/(2.3
          *OSA.cHCO3of(
          pH1,
          pCO21,
          T1)) + 1/(2.3*pCO21*OSA.aCO2of(T1))));
        pH2 := pH1 + dpHdT1 * (T2 - T1);
        cHCO3 := OSA.cHCO3of(
          pH1,
          pCO21,
          T1);
        dlgpCO2dT1 := (-0.0026) - (-0.0092) - dpHdT1 + 1 / (2.3 * cHCO3) * (betaX * dpHdT1 + betaX * 0.016);
        pCO22 := OSA.antilg(OSA.lg(pCO21) +
          dlgpCO2dT1*(T2 - T1));
        dpHdT2 := ((-0.0026) - betaX*0.016*(1/(2.3*OSA.cHCO3of(
          pH2,
          pCO22,
          T2)) + 1/(2.3*pCO22*OSA.aCO2of(T2))))/(1 + betaX*(1/(2.3
          *OSA.cHCO3of(
          pH2,
          pCO22,
          T2)) + 1/(2.3*pCO22*OSA.aCO2of(T2))));
        dpHdTmean := (dpHdT1 + dpHdT2) / 2;
        pH2 := pH1 + dpHdTmean * (T2 - T1);
        cHCO3 := OSA.cHCO3of(
          pH2,
          pCO22,
          T2);
        dlgpCO2dT2 := (-0.0026) - (-0.0092) - dpHdT2 + 1 / (2.3 * cHCO3) * (betaX * dpHdT2 + betaX * 0.016);
        dlgpCO2dTmean := (dlgpCO2dT1 + dlgpCO2dT2) / 2;
        result := OSA.antilg(OSA.lg(pCO21)
           + dlgpCO2dTmean*(T2 - T1));
      end pCO22of;

      function aCO2of
        input Real T;
        output Real result;
      protected
        Real aCO2T0 = 0.23;
        //mM/kPa
        Real dlgaCO2dT = -0.0092;
        // lg(mM/kPa)/K
        Real T0 = 37;
      algorithm
        result := aCO2T0*OSA.antilg(dlgaCO2dT*(T - T0));
      end aCO2of;

      function antilg
        input Real x;
        output Real result;
      algorithm
        result := exp(log(10) * x);
      end antilg;

      function cHCO3of "calculation of plasma bicarbonate concentration"
        input Real pH "plasma pH at given temperature in mmol/l";
        input Real pCO2 "pCO2 in kPa";
        input Real T "temperature in °C";
        output Real HCO3p "plasma bicarbonate concentration in mmol/l";
      algorithm
        HCO3p := pCO2*OSA.aCO2of(T)*
          OSA.antilg(pH - OSA.pKof(T));
      end cHCO3of;

      function pKof
        input Real T;
        output Real result;
      protected
        Real pKT0 = 6.1;
        Real dpKdT = -0.0026;
        Real T0 = 37;
      algorithm
        result := pKT0 + dpKdT * (T - T0);
      end pKof;

      function pH2of
        input Real pH1;
        input Real T1;
        input Real T2;
        input Real cHb;
        input Real cAlb;
        input Real pCO21;
        output Real result;
      protected
        Real betaX;
        Real dpHdT1;
        Real pH2;
        Real cHCO3;
        Real dlgpCO2dT1;
        Real pCO22;
        Real dpHdT2;
        Real dpHdTmean;
        Real cAlbN = 0.66;
      algorithm
        betaX := 7.7 + 8 * (cAlb - cAlbN) + 2.3 * cHb;
        dpHdT1 := ((-0.0026) - betaX*0.016*(1/(2.3*OSA.cHCO3of(
          pH1,
          pCO21,
          T1)) + 1/(2.3*pCO21*OSA.aCO2of(T1))))/(1 + betaX*(1/(2.3
          *OSA.cHCO3of(
          pH1,
          pCO21,
          T1)) + 1/(2.3*pCO21*OSA.aCO2of(T1))));
        pH2 := pH1 + dpHdT1 * (T2 - T1);
        cHCO3 := OSA.cHCO3of(
          pH1,
          pCO21,
          T1);
        dlgpCO2dT1 := (-0.0026) - (-0.0092) - dpHdT1 + 1 / (2.3 * cHCO3) * (betaX * dpHdT1 + betaX * 0.016);
        pCO22 := OSA.antilg(OSA.lg(pCO21) +
          dlgpCO2dT1*(T2 - T1));
        dpHdT2 := ((-0.0026) - betaX*0.016*(1/(2.3*OSA.cHCO3of(
          pH2,
          pCO22,
          T2)) + 1/(2.3*pCO22*OSA.aCO2of(T2))))/(1 + betaX*(1/(2.3
          *OSA.cHCO3of(
          pH2,
          pCO22,
          T2)) + 1/(2.3*pCO22*OSA.aCO2of(T2))));
        dpHdTmean := (dpHdT1 + dpHdT2) / 2;
        result := pH1 + dpHdTmean * (T2 - T1);
      end pH2of;

      function lg
        input Real x;
        output Real result;
      algorithm
        result := log(x) / log(10);
        //it is not necessary, in Modelica exists embeded function log10
      end lg;

      function AlveolarGases "Calculation of partial pressures of O2 and CO2"
        input Real VAi_BTPS "inspired alveolar ventilation in l BTPS/min";
        input Real FiO2 "fraction concentration of O2 in dry inspired gas";
        input Real FiCO2 "fraction concentationo of CO2 in dry inspired gas";
        input Real temp "?core body temperature in ?C";
        input Real PB "barometric pressure";
        input Real VO2 "rate of oxygen comsumption [mmol/min]";
        input Real VCO2 "rate of carbon dioxide production [mmol/min]";
        output Real PAO2 "alveolar pO2 [mmHg]";
        output Real PACO2 "alveolar PCO2 [mmHg]";
        output Real VAe_BTPS "expired alveolar ventilation in l BTPS/min";
      protected
        Real VCO2_STPD "rate of carbon dioxide production in l STPD/min";
        Real VO2_STPD "rate of oxygen consumtion in l STPD/min";
        Real kBTPS_to_STPD "conversion factor form BTPS to STPD";
        Real VAi_STPD "inspired alveolar ventilation in l/min STPD";
        Real VO2i_STPD "inspired O2 in l STPD/min";
        Real VCO2i_STPD "inspired CO2 in l STPD/min";
        Real VAe_STPD "expired alveolar ventilation in l/min STPD";
        Real VO2e_STPD "exspired O2 in l STPD/min";
        Real VCO2e_STPD "exspired CO2 in l STPD/min";
        Real FeO2_D "fraction concentationo of O2 in dry expired gas";
        Real FeCO2_D "fraction concentationo of CO2 in dry expired gas";
      algorithm
        //conversion of metabolic gases flow from mmol/min to l STPD/min
        VCO2_STPD := VCO2 * 0.022414;
        VO2_STPD := VO2 * 0.022414;
        //calculation of VAi_STPD
        kBTPS_to_STPD := OSA.BTPS_to_STPD(PB, temp);
        VAi_STPD := VAi_BTPS * kBTPS_to_STPD;
        //l STPD/min
        // calculation of inspired gases flow in l STPD/min
        VO2i_STPD := VAi_STPD * FiO2;
        VCO2i_STPD := VAi_STPD * FiCO2;
        //calculation of expired alveolar ventilation in l STPD/min
        VAe_STPD := VAi_STPD + VCO2_STPD - VO2_STPD;
        //calculation of expired gases flow in STPD
        VO2e_STPD := VO2i_STPD - VO2_STPD;
        VCO2e_STPD := VCO2i_STPD + VCO2_STPD;
        //calculation of FeO2 and FeCO2 in dry expired gas
        FeO2_D := VO2e_STPD / VAe_STPD;
        FeCO2_D := VCO2e_STPD / VAe_STPD;
        //calculation of expired alveolar ventilation in l BTPS/min (VAe_BTPS)
        VAe_BTPS := VAe_STPD / kBTPS_to_STPD;
        //calculation of PAO2 and PACO2 (at BTPS)
        PAO2 := FeO2_D*(PB - OSA.pH2Oof(temp));
        PACO2 := FeCO2_D*(PB - OSA.pH2Oof(temp));
      end AlveolarGases;

      function BTPS_to_STPD
        "coefficient for conversion volume from BTPS to STPD"
        input Real PB "barometric pressure in mmHg";
        input Real temp "temperature in ?C";
        output Real coefficient_BTPS_to_STP
          "from BTPS to STPD conversion coefficient";
      protected
        Real pH2O;
      algorithm
        pH2O := OSA.pH2Oof(temp);
        coefficient_BTPS_to_STP := (PB - pH2O) * 273.15 / (760 * (273.15 + temp));
      end BTPS_to_STPD;

      function pH2Oof
        input Real temp "temperature in ?C";
        output Real vaporPressure "in mmHg";
      algorithm
        if temp < 0 then
          vaporPressure := 0;
        else
          if temp > 100 then
            vaporPressure := 760;
          else
            vaporPressure := exp(18.6686 - 4030.183 / (temp + 235));
          end if;
        end if;
      end pH2Oof;

      function cBEoxOf "Van Slyke equation"
        input Real pH "pH at given temperature";
        input Real pCO2 "pCO2 in kPA at given temperature";
        input Real cHb "hemoglobin concentration in mmol/l";
        input Real T "temperature in ?C";
        input Real cAlb "albumin concentration in mmol/l";
        input Real cPi "phosphate concentration in mmol/l";
        input Real sO2 "O2 hemoglobin saturation (as fraction)";
        output Real result_cBEox
          "BE on virtually fully oxygenated blood in mmol/l";
      protected
        Real cAlbN = 0.66;
        Real T0 = 37;
        Real ctHbb = 43.0;
        Real betaHb = 2.3;
        Real betaP = 7.7;
        Real pH0 = 7.40;
        Real pCO20 = 5.33;
        Real cPiN = 1.15;
        Real pHT0;
        Real pCO2T0;
      algorithm
        //pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
        pCO2T0 := OSA.pCO22of(
          pCO2,
          T,
          T0,
          cHb,
          cAlb,
          pH);
        //pHT0   := pH2of(pH, T, T0, ctHb);
        pHT0 := OSA.pH2of(
          pH,
          T,
          T0,
          cHb,
          cAlb,
          pCO2);
        result_cBEox := (1 - cHb/ctHbb)*(OSA.cHCO3of(
          pHT0,
          pCO2T0,
          T0) - OSA.cHCO3of(
          pH0,
          pCO20,
          T0) + (betaHb*cHb + betaP + 8*(cAlb - cAlbN) + 0.309*(cPi - cPiN))*(pHT0 -
          pH0)) - 0.2*cHb*(1 - sO2);
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end cBEoxOf;

      model ctO2content
        Physiolibrary.Types.RealIO.pHInput pH annotation(Placement(transformation(extent = {{-120, 70}, {-80, 110}}), iconTransformation(extent = {{-120, 32}, {-100, 52}})));
        Physiolibrary.Types.RealIO.PressureInput pCO2(start = 5330) annotation(Placement(transformation(extent = {{-120, 20}, {-80, 60}}), iconTransformation(extent = {{-120, -10}, {-100, 10}})));
        Physiolibrary.Types.RealIO.PressureInput pO2 annotation(Placement(transformation(extent={{-118,
                  -30},{-78,10}}),                                                                                            iconTransformation(extent = {{-120, 70}, {-100, 90}})));
        Physiolibrary.Types.RealIO.FractionOutput sO2 annotation(Placement(transformation(extent = {{-30, -112}, {10, -72}}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 270, origin = {60, -110})));
        Physiolibrary.Types.RealIO.ConcentrationOutput totalO2 annotation(Placement(transformation(extent={{-14,-70},
                  {6,-50}}),                                                                                                    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 270, origin = {20, -110})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cdO2p
          "dissolved O2 concentration in plasma"                                                    annotation(Placement(transformation(extent={{-14,-20},
                  {6,0}}),                                                                                                    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 270, origin = {-20, -110})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
          "effective concentration of hemoglobin"                                                   annotation(Placement(transformation(extent={{-14,-42},
                  {6,-22}}),                                                                                                    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 270, origin = {-60, -110})));
        outer ModelSettings modelSettings
          annotation (Placement(transformation(extent={{-100,-100},{-80,-80}})));
      algorithm
          (totalO2,sO2,cdO2p,ceHb) :=OSA.O2totalSI(
          modelSettings.ctHb,
          pO2,
          pH,
          pCO2,
          modelSettings.cDPG,
          modelSettings.FCOHb,
          modelSettings.FMetHb,
          modelSettings.FHbF,
          modelSettings.Temperature);
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent={{
                    -30,66},{94,-34}},                                                                                                    lineColor = {28, 108, 200}, textString = "O2 total"),
              Text(
                extent={{-96,66},{-40,98}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pO2"),
              Text(
                extent={{-98,30},{-42,62}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pH"),
              Text(
                extent={{-96,-14},{-40,18}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pCO2")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end ctO2content;

      model ctCO2content
        Physiolibrary.Types.RealIO.PressureInput pCO2(start = 5330)
          "pCO2 in Pa"                                                           annotation(Placement(transformation(extent = {{-120, 20}, {-80, 60}}), iconTransformation(extent = {{-120, 70}, {-100, 90}})));
        Physiolibrary.Types.RealIO.pHInput pH annotation(Placement(transformation(extent = {{-120, 70}, {-80, 110}}), iconTransformation(extent = {{-120, 30}, {-100, 50}})));
        Physiolibrary.Types.RealIO.FractionInput sO2
          "O2 hemoglobin saturation "                                            annotation(Placement(transformation(extent={{-120,
                  -10},{-80,30}}),                                                                                                    iconTransformation(extent = {{-120, -90}, {-100, -70}})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2
          "total blood CO2 concentration (in mmol/l)"                                                    annotation(Placement(transformation(extent = {{100, 30}, {120, 50}}), iconTransformation(extent = {{100, 30}, {120, 50}})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3
          "plasma HCO3 concentration (in mmol/l)"                                                    annotation(Placement(transformation(extent = {{100, 60}, {120, 80}}), iconTransformation(extent = {{100, -10}, {120, 10}})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2p
          "plasma CO2 dissolved concentration (in mmol/l)"                                                     annotation(Placement(transformation(extent = {{100, 60}, {120, 80}}), iconTransformation(extent = {{100, -50}, {120, -30}})));
        outer ModelSettings modelSettings
          annotation (Placement(transformation(extent={{-100,-100},{-80,-80}})));
      algorithm
        (ctCO2,cHCO3,cdCO2p) := OSA.CO2totalSI(
          pH,
          pCO2,
          modelSettings.Temperature,
          modelSettings.ctHb,
          sO2);
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent={{
                    -84,26},{64,-46}},                                                                                                    lineColor=
                    {28,108,200},                                                                                                    fillColor=
                    {255,255,0},
                  fillPattern=FillPattern.Solid,
                textString="CO2 
total"),      Text(
                extent={{-96,66},{-40,98}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pCO2"),
              Text(
                extent={{-98,30},{-42,62}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pH"),
              Text(
                extent={{-98,-92},{-42,-60}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="sO2"),
              Text(
                extent={{40,24},{96,56}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="tO2"),
              Text(
                extent={{40,-16},{96,16}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="tHCO3"),
              Text(
                extent={{40,-56},{96,-24}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="dHCO3p")}));
      end ctCO2content;

      model BEINV
        Physiolibrary.Types.RealIO.PressureInput pCO2
          "pCO2 at given temperature in Pa"                                             annotation(Placement(transformation(extent = {{-69, 25}, {-53, 41}}), iconTransformation(extent = {{-120, 30}, {-100, 50}})));
        Physiolibrary.Types.RealIO.pHOutput pH "plasma pH at given temperature" annotation(Placement(transformation(extent={{148,68},
                  {168,88}}),                                                                                                    iconTransformation(extent={{148,68},
                  {168,88}})));
        Physiolibrary.Types.RealIO.ConcentrationInput BEox "BEox in mmol/l" annotation(Placement(transformation(extent = {{-60, 51}, {-42, 69}}), iconTransformation(extent = {{-120, 70}, {-100, 90}})));
        OSA.bloodBEox vanSlykeEquation
          annotation (Placement(transformation(extent={{-36,-32},{44,40}})));
        Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1 annotation(Placement(transformation(extent={{38,44},
                  {96,76}})));
        Physiolibrary.Types.RealIO.FractionInput sO2 "O2 hemoglobin saturation" annotation(Placement(transformation(extent={{-70,-28},
                  {-54,-12}}),                                                                                                    iconTransformation(extent = {{-120, -84}, {-100, -64}})));
      equation
        connect(vanSlykeEquation.pCO2, pCO2) annotation(Line(points = {{-40, 37.12}, {-56, 37.12}, {-56, 33}, {-61, 33}}, color = {0, 0, 127}));
        connect(inverseBlockConstraints1.u1, BEox) annotation(Line(points={{35.1,60},
                {-51,60}},                                                                                       color = {0, 0, 127}));
        connect(vanSlykeEquation.BEox, inverseBlockConstraints1.u2) annotation(Line(points={{48,4},{
                60,4},{60,60},{43.8,60}},                                                                                                    color = {0, 0, 127}));
        connect(vanSlykeEquation.pH, inverseBlockConstraints1.y2) annotation(Line(points={{-40,
                24.88},{-64,24.88},{-64,-4},{86,-4},{86,60},{91.65,60}},                                                                                          color = {0, 0, 127}));
        connect(pH, inverseBlockConstraints1.y1) annotation(Line(points={{158,78},
                {138,78},{138,60},{97.45,60}},                                                                       color = {0, 0, 127}));
        connect(vanSlykeEquation.sO2, sO2) annotation(Line(points={{-40,-20.48},
                {-70,-20.48},{-70,-20},{-62,-20}},                                                                          color = {0, 0, 127}));
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-84, 22}, {94, -12}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, textString = "BEINV")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end BEINV;

      model bloodBEox
        Physiolibrary.Types.RealIO.PressureInput pCO2
          "pCO2 at given temperature in Pa"                                             annotation(Placement(transformation(extent = {{-140, 62}, {-100, 102}}), iconTransformation(extent = {{-120, 82}, {-100, 102}})));
        Physiolibrary.Types.RealIO.pHInput pH "pH at given temperature" annotation(Placement(transformation(extent = {{-140, 28}, {-100, 68}}), iconTransformation(extent = {{-120, 48}, {-100, 68}})));
        Physiolibrary.Types.RealIO.ConcentrationOutput BEox
          "Base Excess (in fully oxygenated blood) in mmol/l"                                                   annotation(Placement(transformation(extent = {{100, -10}, {120, 10}}), iconTransformation(extent = {{100, -10}, {120, 10}})));
        Physiolibrary.Types.RealIO.FractionInput sO2 "O2 hemoglobin saturation" annotation(Placement(transformation(extent={{-140,4},
                  {-100,44}}),                                                                                                    iconTransformation(extent = {{-120, -78}, {-100, -58}})));
        outer ModelSettings modelSettings
          annotation (Placement(transformation(extent={{-100,-100},{-80,-80}})));
      algorithm
        BEox := OSA.cBEoxOf(
          pH,
          pCO2/1000,
          modelSettings.ctHb,
          modelSettings.Temperature - 273.15,
          modelSettings.cAlb,
          modelSettings.cPi,
          sO2);
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {28, 108, 200}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent={{
                    -102,36},{62,-50}},                                                                                                    lineColor=
                    {28,108,200},                                                                                                    fillColor=
                    {255,255,0},
                  fillPattern=FillPattern.Solid,
                textString="blood 
BEox"),       Text(
                extent={{-96,66},{-40,98}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pCO2"),
              Text(
                extent={{-98,28},{-42,60}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="pH"),
              Text(
                extent={{-98,-92},{-42,-60}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="sO2"),
              Text(
                extent={{40,-16},{96,16}},
                lineColor={0,0,0},
                fillColor={28,108,200},
                fillPattern=FillPattern.Solid,
                textString="BEox")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end bloodBEox;

      model O2CO2Balance
        Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation(Placement(transformation(extent={{-110,3},
                  {-92,21}}),                                                                                                    iconTransformation(extent = {{-120, 34}, {-100, 54}})));
        Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation(Placement(transformation(extent={{-108,46},
                  {-92,62}}),                                                                                                    iconTransformation(extent = {{-120, 10}, {-100, 30}})));
        Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation(Placement(transformation(extent = {{108, -6}, {120, 6}}), iconTransformation(extent = {{100, -4}, {116, 12}})));
        Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation(Placement(transformation(extent = {{88, 18}, {98, 28}}), iconTransformation(extent = {{100, -22}, {116, -6}})));
        Physiolibrary.Types.RealIO.ConcentrationInput CpcO2 annotation(Placement(transformation(extent={{-108,25},
                  {-90,43}}),                                                                                                    iconTransformation(extent = {{-120, -18}, {-100, 2}})));
        Physiolibrary.Types.RealIO.ConcentrationInput CpcCO2 annotation(Placement(transformation(extent={{-108,66},
                  {-92,82}}),                                                                                                    iconTransformation(extent = {{-120, -42}, {-100, -22}})));
        Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation(Placement(transformation(extent={{-110,
                  -18},{-92,0}}),                                                                                                iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {-110, 72})));
      equation
        VO2 = Q * (CpcO2 - CvO2);
        VCO2 = Q * (CvCO2 - CpcCO2);
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 102}, {100, -98}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-96, 6}, {96, -6}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {2, 44}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "CvO2"), Text(extent = {{-97, 10}, {97, -10}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {3, 20}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "CvCO2"), Text(extent = {{-50, 116}, {74, 38}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, textString = "O2CO2Balance"), Text(extent = {{36, 8}, {94, -2}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "VO2"), Text(extent = {{12, -12}, {94, -20}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "VCO2"), Text(extent = {{-90, 13}, {90, -13}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {-4, -33}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "CpcCO2"), Text(extent = {{-81, 8}, {81, -8}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {-13, -8}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "CpcO2"), Text(extent = {{-94, 80}, {98, 64}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "Q")}), Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end O2CO2Balance;

      model PO2PCO2
        Physiolibrary.Types.RealIO.FractionOutput sO2 annotation(Placement(transformation(extent = {{-8, -8}, {8, 8}}, rotation = 0, origin = {30, 6}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, 0})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(displayUnit = "mmol/l")
          "outgoing concentration of HCO3"                                                                            annotation(Placement(transformation(extent = {{-7, -7}, {7, 7}}, rotation = 0, origin={5,116}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, 20})));
        Physiolibrary.Types.RealIO.PressureInput pO2 annotation(Placement(transformation(extent={{-118,58},
                  {-106,70}}),                                                                                              iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {-110, 98})));
        Physiolibrary.Types.RealIO.PressureInput pCO2 annotation(Placement(transformation(extent={{-122,99},
                  {-108,113}}),                                                                                          iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {-110, 78})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation(Placement(transformation(extent = {{-7, -7}, {7, 7}}, rotation = 0, origin={5,128}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, 60})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation(Placement(transformation(extent = {{7.5, -7}, {-7.5, 7}}, rotation = 180, origin = {-28.5, 0}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, 80})));
        Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation(Placement(transformation(extent={{-122,
                  -28},{-106,-12}}),                                                                                               iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {-110, 58})));
        Physiolibrary.Types.RealIO.pHOutput pH(start = 7.4) annotation(Placement(transformation(extent = {{-8, -8}, {8, 8}}, rotation = 0, origin={6,-44}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, 40})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation(Placement(transformation(extent={{-6,6},{
                  6,-6}},                                                                                                    rotation = 0, origin={-46,0}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, -58})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation(Placement(transformation(extent = {{-7, 7}, {7, -7}}, rotation = 0, origin={5,104}),    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, -78})));
        ctO2content bloodctO2content
          annotation (Placement(transformation(extent={{-80,10},{-20,70}})));
        ctCO2content bloodctCO2content
          annotation (Placement(transformation(extent={{-80,86},{-20,146}})));
        BEINV vanSlykeEquation
          annotation (Placement(transformation(extent={{-80,-74},{-18,-14}})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
          "effiective concentration of hemoglobin (mmol/l)"                                                   annotation(Placement(transformation(extent = {{-6, 6}, {6, -6}}, rotation = 0, origin = {-58, 0}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin = {110, -38})));
      equation
        connect(bloodctCO2content.pCO2, pCO2) annotation(Line(points={{-83,140},
                {-84,140},{-84,140},{-86,140},{-100,140},{-100,106},{-115,106}},                       color = {0, 0, 127}));
        connect(bloodctO2content.pCO2, pCO2) annotation(Line(points={{-83,40},{
                -100,40},{-100,106},{-115,106}},                                                                                         color = {0, 0, 127}));
        connect(bloodctO2content.pO2, pO2) annotation(Line(points={{-83,64},{
                -112,64}},                                                                  color = {0, 0, 127}));
        connect(vanSlykeEquation.BEox, BEox) annotation(Line(points={{-83.1,-20},
                {-114,-20}},                                                                      color = {0, 0, 127}));
        connect(vanSlykeEquation.pCO2, pCO2) annotation(Line(points={{-83.1,-32},
                {-100,-32},{-100,106},{-115,106}},                                                                                           color = {0, 0, 127}));
        connect(bloodctO2content.sO2, bloodctCO2content.sO2) annotation(Line(points={{-32,7},
                {-32,6},{16,6},{16,92},{-83,92}},                                                                                         color = {0, 0, 127}));
        connect(vanSlykeEquation.pH, bloodctCO2content.pH) annotation(Line(points={{-0.02,
                -20.6},{-120,-20.6},{-120,128},{-83,128}},                                                                                            color = {0, 0, 127}));
        connect(bloodctO2content.pH, bloodctCO2content.pH) annotation(Line(points={{-83,
                52.6},{-120,52.6},{-120,128},{-83,128}},                                                                                               color = {0, 0, 127}));
        connect(sO2, bloodctCO2content.sO2) annotation(Line(points={{30,6},{16,
                6},{16,92},{-83,92}},                                                                        color = {0, 0, 127}));
        connect(bloodctO2content.totalO2, ctO2) annotation(Line(points={{-44,7},
                {-44,0},{-28.5,0}},                                                                         color = {0, 0, 127}));
        connect(bloodctCO2content.ctCO2, ctCO2) annotation(Line(points={{-17,128},
                {5,128}},                                                                       color = {0, 0, 127}));
        connect(bloodctCO2content.cHCO3, cHCO3) annotation(Line(points={{-17,116},
                {5,116}},                                                                       color = {0, 0, 127}));
        connect(bloodctO2content.ceHb, ceHb) annotation(Line(points={{-68,7},{
                -68,0},{-58,0}},                                                                       color = {0, 0, 127}));
        connect(vanSlykeEquation.sO2, bloodctCO2content.sO2) annotation(Line(points={{-83.1,
                -66.2},{16,-66.2},{16,-66},{16,-66},{16,92},{-83,92}},                                                                                                    color = {0, 0, 127}));
        connect(bloodctCO2content.cdCO2p, cdCO2)
          annotation (Line(points={{-17,104},{5,104}},         color={0,0,127}));
        connect(bloodctO2content.cdO2p, cdO2)
          annotation (Line(points={{-56,7},{-56,0},{-46,0}},  color={0,0,127}));
        connect(vanSlykeEquation.pH, pH) annotation (Line(points={{-0.02,-20.6},
                {2,-20.6},{2,-44},{6,-44}}, color={0,0,127}));
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-66, 4}, {94, -6}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "sO2"), Text(extent = {{-66, 26}, {94, 8}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "HCO3"), Text(extent = {{-94, -88}, {10, -96}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "T"), Text(extent = {{-44, 44}, {92, 34}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "pH"), Text(extent = {{-96, 44}, {54, 34}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "ctHb"), Text(extent = {{-73, 7}, {73, -7}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {19, 81}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "ctO2"), Text(extent = {{-75, 6}, {75, -6}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {19, 58}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "ctCO2"), Text(extent = {{-44, 32}, {66, -56}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, textString = "PO2CO2"), Text(extent = {{-94, 98}, {104, 88}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "pO2"), Text(extent = {{-94, 86}, {58, 72}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "pCO2"), Text(extent = {{-94, -74}, {102, -82}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "FHbF"), Text(extent = {{-94, -34}, {104, -48}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "FMetHb"), Text(extent = {{-92, -14}, {102, -28}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "cDPG"), Text(extent = {{-94, 22}, {68, 12}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "ctAlb"), Text(extent = {{-74, 8}, {74, -8}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {18, -56}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "cdO2"), Text(extent = {{-80, 11.5}, {80, -11.5}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {14, -79.5}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "cdCO2"), Text(extent = {{-94, -54}, {58, -64}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "FCOHb"), Text(extent = {{-78, 7}, {78, -7}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, origin = {14, -37}, rotation = 180, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "ceHb"), Text(extent = {{-94, 4}, {52, -8}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "ctPi"), Text(extent = {{-96, 66}, {52, 50}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "BEox")}), Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-100,
                  -100},{100,100}})));
      end PO2PCO2;

      model AlvGases
        Physiolibrary.Types.RealIO.PressureOutput PAO2 annotation(Placement(transformation(extent = {{36, 41}, {50, 55}}), iconTransformation(extent = {{100, 46}, {120, 66}})));
        Physiolibrary.Types.RealIO.PressureOutput PACO2 annotation(Placement(transformation(extent = {{36, 70}, {48, 82}}), iconTransformation(extent = {{100, 24}, {120, 44}})));
        Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation(Placement(transformation(extent = {{-92, 6}, {-62, 36}}), iconTransformation(extent = {{-6, -6}, {6, 6}}, rotation = 0, origin = {-106, 12})));
        Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAe annotation(Placement(transformation(extent = {{100, 2}, {120, 22}}), iconTransformation(extent = {{100, 2}, {120, 22}})));
        Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation(Placement(transformation(extent = {{-142, -10}, {-102, 30}}), iconTransformation(extent = {{-112, -26}, {-100, -14}})));
        Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation(Placement(transformation(extent = {{-142, -10}, {-102, 30}}), iconTransformation(extent = {{-112, -46}, {-100, -34}})));
        Real VAi_BTPS_l_per_min "inspired alveolar ventilation in l BTPS/min";
        Real temp_cels "?core body temperature in ?C";
        Real PB_mmHg "barometric pressure";
        Real VO2_mmol_per_min(start = 11)
          "rate of oxygen comsumption [mmol/min]";
        Real VCO2_mmol_per_min(start = 10)
          "rate of carbon dioxide production [mmol/min]";
        Real PAO2_mmHg "alveolar pO2 [mmHg]";
        Real PACO2_mmHg "alveolar PCO2 [mmHg]";
        Real VAe_BTPS_l_per_min "expired alveolar ventilation in l BTPS/min";
        outer ModelSettings modelSettings
          annotation (Placement(transformation(extent={{-100,80},{-80,100}})));
      algorithm
        (PAO2_mmHg,PACO2_mmHg,VAe_BTPS_l_per_min) :=
          OSA.AlveolarGases(
          VAi_BTPS_l_per_min,
          modelSettings.FiO2,
          modelSettings.FiCO2,
          temp_cels,
          PB_mmHg,
          VO2_mmol_per_min,
          VCO2_mmol_per_min);
      equation
        temp_cels = modelSettings.Temperature - 273.15;
        //from grad C to grad K conversion
        PB_mmHg = modelSettings.PB / 133.322365;
        // from mmHg to Pa conversion
        PAO2_mmHg = PAO2 / 133.322365;
        // from mmHg to Pa conversion
        PACO2_mmHg = PACO2 / 133.322365;
        // from mmHg to Pa conversion
        VAi_BTPS_l_per_min = VAi * 60000;
        // from m^3/sec to l/min conversion
        VAe = VAe_BTPS_l_per_min / 60000;
        //from l/min to m^3/sec conversion
        VO2 = VO2_mmol_per_min / 60 / 1000;
        //from mmol/min to mol/sec conversion
        VCO2 = VCO2_mmol_per_min / 60 / 1000;
        //from mmol/min to mol/sec conversion
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(extent = {{-100, 100}, {100, -100}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid), Text(extent = {{-42, -40}, {82, -86}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, textString = "AlvGases"),   Text(extent = {{-46, 44}, {94, 24}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "PACO2"), Text(extent = {{-80, 62}, {94, 52}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "PAO2"), Text(extent = {{-94, 16}, {0, 6}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "VAi"), Text(extent = {{-46, 20}, {94, 4}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "VAe"), Text(extent = {{-94, -14}, {52, -28}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "VO2"), Text(extent = {{-94, -36}, {66, -50}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                  fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                  horizontalAlignment =                                                                                                   TextAlignment.Left, textString = "VCO2")}),
                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
      end AlvGases;

      model AlvEq

        Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation (Placement(
              transformation(extent={{-24,79},{-8,96}}),  iconTransformation(extent={{-202,10},
                  {-190,22}})));
        Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation (Placement(
              transformation(extent={{-26,64},{-8,82}}),  iconTransformation(extent={{-202,-2},
                  {-190,10}})));
        Physiolibrary.Types.RealIO.PressureOutput PAO2 annotation (Placement(
              transformation(extent={{224,80},{234,91}}),
                                                        iconTransformation(extent={{240,76},
                  {254,90}})));
        Physiolibrary.Types.RealIO.PressureOutput PACO2 annotation (Placement(
              transformation(extent={{240,70},{250,80}}),
                                                        iconTransformation(extent={{240,54},
                  {254,68}})));
        Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
              transformation(extent={{-26,94},{-8,112}}),  iconTransformation(
              extent={{-6,-6},{6,6}},
              rotation=0,
              origin={-196,40})));
        Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
              transformation(extent={{98,96},{114,112}}),  iconTransformation(
              extent={{-6,-6},{6,6}},
              rotation=0,
              origin={-196,52})));
        Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAe annotation (Placement(
              transformation(extent={{230,54},{244,68}}), iconTransformation(
                extent={{240,-94},{256,-78}})));
        Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
              transformation(extent={{130,16},{142,28}}), iconTransformation(
                extent={{240,-18},{256,-2}})));
        Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
              transformation(extent={{130,8},{140,18}}),  iconTransformation(
                extent={{240,-36},{256,-20}})));

        OSA.AlvGases alvGases
          annotation (Placement(transformation(extent={{130,48},{202,100}})));
        OSA.O2CO2Balance o2CO2Balance
          annotation (Placement(transformation(extent={{36,38},{100,98}})));
        Physiolibrary.Types.RealIO.FractionOutput sO2 annotation(Placement(transformation(extent = {{-8, -8}, {8, 8}}, rotation = 0, origin={-10,-54}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={250,6})));
        Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(displayUnit = "mmol/l")
          "outgoing concentration of HCO3"                                                                            annotation(Placement(transformation(extent = {{-7, -7}, {7, 7}}, rotation = 0, origin={-35,48}),    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={250,28})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation(Placement(transformation(extent = {{-7, -7}, {7, 7}}, rotation = 0, origin={-35,68}),    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={250,-68})));
        Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation(Placement(transformation(extent = {{7.5, -7}, {-7.5, 7}}, rotation = 180, origin={-80.5,
                  -70}),                                                                                                    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={250,-46})));
        Physiolibrary.Types.RealIO.pHOutput pH(start = 7.4) annotation(Placement(transformation(extent = {{-8, -8}, {8, 8}}, rotation = 0, origin={142,-90}),   iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={250,46})));
        ctO2content bloodctO2content
          annotation (Placement(transformation(extent={{-120,-50},{-60,10}})));
        ctCO2content bloodctCO2content
          annotation (Placement(transformation(extent={{-120,18},{-60,78}})));
        bloodBEox     vanSlykeEquation
          annotation (Placement(transformation(extent={{-30,-152},{24,-98}})));
        Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1 annotation(Placement(transformation(extent={{28,-108},
                  {86,-76}})));
        Physiolibrary.Types.RealIO.ConcentrationInput BEox "BEox in mmol/l" annotation(Placement(transformation(extent={{-68,
                  -101},{-50,-83}}),                                                                                                    iconTransformation(extent={{-210,70},
                  {-190,90}})));
      initial equation

      equation
        connect(alvGases.PACO2, PACO2) annotation (Line(points={{205.6,82.84},{
                237.6,82.84},{237.6,75},{245,75}}, color={0,0,127}));
        connect(alvGases.PAO2, PAO2) annotation (Line(points={{205.6,88.56},{
                205.6,85.5},{229,85.5}},        color={0,0,127}));
        connect(alvGases.VAe, VAe) annotation (Line(points={{205.6,77.12},{
                205.6,61},{237,61}},        color={0,0,127}));
        connect(o2CO2Balance.VCO2, VCO2) annotation (Line(points={{102.56,63.8},
                {108,63.8},{108,12},{132,12},{132,14},{134,14},{134,13},{135,13}},
                                                            color={0,0,127}));
        connect(o2CO2Balance.VO2, VO2) annotation (Line(points={{102.56,69.2},{
                112,69.2},{112,22},{136,22}},
                                        color={0,0,127}));

        connect(alvGases.VAi, VAi) annotation (Line(points={{127.84,77.12},{
                127.84,103.56},{106,103.56},{106,104}}, color={0,0,127}));
        connect(o2CO2Balance.VCO2, alvGases.VCO2) annotation (Line(points={{
                102.56,63.8},{114.28,63.8},{114.28,63.6},{127.84,63.6}}, color=
                {0,0,127}));
        connect(o2CO2Balance.VO2, alvGases.VO2) annotation (Line(points={{
                102.56,69.2},{114.28,69.2},{114.28,68.8},{127.84,68.8}}, color=
                {0,0,127}));
        connect(Q, o2CO2Balance.Q) annotation (Line(points={{-17,103},{21,103},
                {21,89.6},{32.8,89.6}}, color={0,0,127}));
        connect(CvO2, o2CO2Balance.CvO2) annotation (Line(points={{-16,87.5},{
                17.5,87.5},{17.5,81.2},{32.8,81.2}}, color={0,0,127}));
        connect(CvCO2, o2CO2Balance.CvCO2) annotation (Line(points={{-17,73},{
                19.5,73},{19.5,74},{32.8,74}}, color={0,0,127}));
        connect(bloodctO2content.sO2,bloodctCO2content. sO2) annotation(Line(points={{-72,-53},
                {-72,-54},{-26,-54},{-26,16},{-132,16},{-132,24},{-123,24}},                                                              color = {0, 0, 127}));
        connect(bloodctO2content.totalO2,ctO2)  annotation(Line(points={{-84,-53},
                {-84,-70},{-80.5,-70}},                                                                     color = {0, 0, 127}));
        connect(bloodctCO2content.ctCO2,ctCO2)  annotation(Line(points={{-57,60},
                {-46,60},{-46,68},{-35,68}},                                                    color = {0, 0, 127}));
        connect(bloodctCO2content.cHCO3,cHCO3)  annotation(Line(points={{-57,48},
                {-35,48}},                                                                      color = {0, 0, 127}));
        connect(bloodctCO2content.ctCO2, o2CO2Balance.CpcCO2) annotation (Line(
              points={{-57,60},{-14,60},{-14,58.4},{32.8,58.4}}, color={0,0,127}));
        connect(bloodctO2content.totalO2, o2CO2Balance.CpcO2) annotation (Line(
              points={{-84,-53},{-84,-62},{20,-62},{20,65.6},{32.8,65.6}},
              color={0,0,127}));
        connect(alvGases.PAO2, bloodctO2content.pO2) annotation (Line(points={{
                205.6,88.56},{212,88.56},{212,118},{-180,118},{-180,4},{-123,4}},
              color={0,0,127}));
        connect(alvGases.PACO2, bloodctCO2content.pCO2) annotation (Line(points=
               {{205.6,82.84},{214,82.84},{214,120},{-182,120},{-182,72},{-123,
                72}}, color={0,0,127}));
        connect(alvGases.PACO2, bloodctO2content.pCO2) annotation (Line(points=
                {{205.6,82.84},{214,82.84},{214,120},{-182,120},{-182,-20},{
                -123,-20}}, color={0,0,127}));
        connect(inverseBlockConstraints1.u1,BEox)  annotation(Line(points={{25.1,
                -92},{-59,-92}},                                                                                 color = {0, 0, 127}));
        connect(vanSlykeEquation.BEox,inverseBlockConstraints1. u2) annotation(Line(points={{26.7,
                -125},{56,-125},{56,-92},{33.8,-92}},                                                                                                    color = {0, 0, 127}));
        connect(vanSlykeEquation.pH,inverseBlockConstraints1. y2) annotation(Line(points={{-32.7,
                -109.34},{-34,-109.34},{-34,-110},{-60,-110},{-60,-160},{72,
                -160},{72,-92},{81.65,-92}},                                                                                                    color = {0, 0, 127}));
        connect(pH,inverseBlockConstraints1. y1) annotation(Line(points={{142,-90},
                {136,-92},{87.45,-92}},                                                                              color = {0, 0, 127}));
        connect(bloodctO2content.sO2, vanSlykeEquation.sO2) annotation (Line(
              points={{-72,-53},{-72,-142},{-42,-142},{-42,-143.36},{-32.7,
                -143.36}}, color={0,0,127}));
        connect(alvGases.PACO2, vanSlykeEquation.pCO2) annotation (Line(points=
                {{205.6,82.84},{214,82.84},{214,120},{-182,120},{-182,-100.16},
                {-32.7,-100.16}}, color={0,0,127}));
        connect(inverseBlockConstraints1.y2, bloodctO2content.pH) annotation (
            Line(points={{81.65,-92},{72,-92},{72,-160},{-152,-160},{-152,-7.4},
                {-123,-7.4}}, color={0,0,127}));
        connect(inverseBlockConstraints1.y2, bloodctCO2content.pH) annotation (
            Line(points={{81.65,-92},{72,-92},{72,-160},{-152,-160},{-152,60},{
                -123,60}}, color={0,0,127}));
        connect(bloodctO2content.sO2, sO2) annotation (Line(points={{-72,-53},{
                -44,-53},{-44,-54},{-10,-54}}, color={0,0,127}));
        annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,
                  -180},{260,140}}),
                         graphics={
              Rectangle(
                extent={{-198,140},{260,-180}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-68,36},{64,-12}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                textString="AlvEq"),
              Text(
                extent={{-24,6},{24,-6}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                origin={-160,14},
                rotation=180,
                fontSize=12,
                horizontalAlignment=TextAlignment.Left,
                textString="CvO2"),
              Text(
                extent={{-36,6},{36,-6}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                origin={-148,4},
                rotation=180,
                fontSize=12,
                horizontalAlignment=TextAlignment.Left,
                textString="CvCO2"),
              Text(
                extent={{-51,5},{51,-5}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                origin={183,-49},
                rotation=180,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="CpcO2"),
              Text(
                extent={{-52,9.5},{52,-9.5}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                origin={182,-69.5},
                rotation=180,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="CpcCO2"),
              Text(
                extent={{136,14},{234,2}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="sO2pc"),
              Text(
                extent={{140,36},{234,16}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="HCO3pc"),
              Text(
                extent={{118,52},{234,40}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="pHpc"),
              Text(
                extent={{142,72},{234,56}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="PACO2"),
              Text(
                extent={{134,86},{234,78}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="PAO2"),
              Text(
                extent={{-184,42},{-148,36}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Left,
                textString="Q"),
              Text(
                extent={{-184,56},{-138,50}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Left,
                textString="VAi"),
              Text(
                extent={{168,-82},{234,-92}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="VA"),
              Text(
                extent={{132,-6},{234,-16}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="VO2"),
              Text(
                extent={{112,-24},{234,-34}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Right,
                textString="VCO2"),
              Text(
                extent={{-186,82},{-140,76}},
                lineColor={0,0,255},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid,
                fontSize=12,
                horizontalAlignment=TextAlignment.Left,
                textString="BEox")}),
                                    Diagram(coordinateSystem(preserveAspectRatio=false,
                extent={{-200,-180},{260,140}})));
      end AlvEq;
    end OSA;

    package Icons
      model Alveolus
        annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Bitmap(extent={{
                    -104,98},{104,-98}},
                  imageSource =                                                                                                    "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DhPHHX+shN2solWNgxgAkghON6EAoHCFeHcIaIoQVAgwNGFoqnBT1X022Fex+sGOff1bD9un7t9oD2b6beKYU6x9zKlBW5PpNKxPwndUaQ3lUlbKdMNWbBVJu8hEQoLcBHqVL6fXIRrRJOcktNhaDdALT+EgDjkAL1oedqqAEG4IymAygbwOMjsCERJ98ke4RmYUHl6iV57YnKpswV91xil2iYztG58KP9e325EZxUsR6Xl+OH9+NVAARpp4uF0rwIy+wHZed955p83OVAMortcAXPy0H9kfs9isNls91DcWktfHyyHypC8BAKFVq1bZn//5n9vb3va24A8YZtJGP33ySX4m/5g9+OCDAUTRHx1A9ZLn721xOOdxe6+96fUCNL/3uBA89I4TnD/zzv3cn3g+vvCjfKFvzztPn3vaxeuEcLSRO8Yg8bOqO7TDmEEQp1nXJFJt09bEpcukMJsP7RbMaDUTZBFh6OsCjNwrxwB2A/pEY0xmIvycF/0JV2yOHaWGrdcIF8aPQLEufqod79nrmDTaWfnlInMTtaBVN+601ck+e8vZl9uGe9fb889tsZmp6TDGgykUk91eJ+DLfuJcu20BXE2gGc85gfesXKGYFrDeL17bduqpp9rpp59p+/aO29eu/bp94QtfsWodINwUqKZNxHfvRJcCxBTTzzG9vC90TDG92mj+4x79PIiYa9nTG56067/5T3bLzffYkkVr7Z2//B4768xzLCPAjCAZGilaJseik0gQB4EqwQvIgHiGXLijyXFtDsKYOIRdOVC0Qq1lX/vaLfZX37jDHhhaagfPv9gO6GqJig0l6jbYqduouBpKpa0iUFXO56xSzNhANn3InhgBl8vwnAqAOBl+Gm1apVQKp1whMINgVr7RgQESliq3X3nHFUHKPYC5KHCXkQDl4I+0JLSggN6FQIoQlS8XFhkJeCh8J62JQSobFugh9JHvL5cc+Lh7tRDt7CCOegN4op296aab7L/+1/8aNHG4yMQmbYMDHLSQtm9+80b7N//m33zfJAoK7SD3w5LH8f63du3akDbbjwEOafewRZd4efbZZ4O2GI0y/oejH5aP3rT8nivt+X3l4jr//GI2xFCIMx+PewfPkI859/d08fN7xiLlJazXL+FDuj3hAchoZZk4BK29vgGMl75yxVYuWRbShzwN4uAg/AKgnuctgF78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", fileName = "modelica://NewBloodyMary/../../ikony/alveolus.png",
                origin={-4,0},
                rotation=180)}));
      end Alveolus;
    end Icons;

    model ModelSettings
      parameter Physiolibrary.Types.Pressure PB= 101325.0144354
        "Barometric Pressure";
      parameter Physiolibrary.Types.Fraction FiO2= 0.21 "Frattion of O2";
      parameter Physiolibrary.Types.Fraction FiCO2= 0.0004;
      parameter Physiolibrary.Types.Concentration cAlb= 0.66;
      parameter Physiolibrary.Types.Concentration ctHb= 8.4;
      parameter Physiolibrary.Types.Concentration cPi= 1.15;
      parameter Physiolibrary.Types.Concentration cDPG= 5;
      parameter Physiolibrary.Types.Fraction FMetHb= 0.005;
      parameter Physiolibrary.Types.Fraction FCOHb= 0.005;
      parameter Physiolibrary.Types.Fraction FHbF= 0.005;
      parameter Physiolibrary.Types.Temperature Temperature= 310.15;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Polygon(
              points={{80,100},{40,100},{40,98},{40,60},{-60,-40},{-100,-40},{-100,-80},
                  {-80,-60},{-60,-80},{-80,-100},{-40,-100},{-40,-60},{60,40},{100,40},
                  {100,80},{80,60},{60,80},{80,100}},
              lineColor={0,0,0},
              fillColor={28,108,200},
              fillPattern=FillPattern.Solid), Polygon(
              points={{-80,100},{-40,100},{-40,98},{-40,60},{60,-40},{100,-40},{100,
                  -80},{80,-60},{60,-80},{80,-100},{40,-100},{40,-60},{-60,40},{-100,
                  40},{-100,80},{-80,60},{-60,80},{-80,100}},
              lineColor={0,0,0},
              fillColor={238,46,47},
              fillPattern=FillPattern.Solid)}),                      Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end ModelSettings;
  end Package;

  package Test

    model TestElastance
      Package.BloodElasticVesselElastance bloodElasticVesselElastance(
        ExternalPressure=0,
        O2_concentration=0.0,
        ZeroPressureVolume=0.001,
        Compliance=3.7503078792283e-6,
        volume_start=0.0005,
        Elastance=1333223874.15,
        CO2_concentration=0.0)
        annotation (Placement(transformation(extent={{-10,-20},{10,0}})));
      Package.BloodResistor bloodResistor(Resistance=799934324490)
        annotation (Placement(transformation(extent={{20,-20},{40,0}})));
      Package.BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{44,-20},{64,0}})));
      Package.BloodPort_out_Extension bloodPort_b_Extension
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
        unlimitedSolutionStorageCO1(Conc=60)
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
      connect(bloodResistor.bloodPort_out, bloodPort_a_Extension.bloodPort_in)
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
      connect(bloodPort_b_Extension.bloodPort_out, bloodElasticVesselElastance.bloodPort_in)
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
      connect(unlimitedSolutionStorageBEox1.q_out, BEoxflow1.q_out) annotation (
         Line(
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
      connect(bloodElasticVesselElastance.bloodPort_out, bloodResistor.bloodPort_in)
        annotation (Line(
          points={{10,-10},{21,-10}},
          color={28,108,200},
          thickness=0.5));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -120,-120},{140,20}})), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-120,-120},{140,20}})),
        experiment(StopTime=50));
    end TestElastance;

    model HemodynamicsMeurs_flatNorm
    extends Physiolibrary.Icons.CardioVascular;
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance LAtrialElastance(
        Tav(displayUnit="s"),
        EMIN=15998686.4898,
        EMAX=37330268.4762)
        annotation (Placement(transformation(extent={{56,92},{94,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance LVentricularElastance(EMIN=
            11999014.86735, EMAX=533289549.66)
        annotation (Placement(transformation(extent={{122,92},{158,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance RAtrialElastance(EMIN=
            6666119.37075, EMAX=19998358.11225)
        annotation (Placement(transformation(extent={{-244,86},{-206,118}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance RVentricularElastance(EMIN=
            7599376.082655, EMAX=65327969.83335)
        annotation (Placement(transformation(extent={{-180,88},{-150,122}})));
      replaceable Physiolibrary.Types.Constants.FrequencyConst HeartRate(k(displayUnit = "1/min") = 1.2) annotation(Placement(visible = true, transformation(origin={-243,
                148.5},                                                                                                    extent = {{-11, -6.5}, {11, 6.5}}, rotation = 0)));
      Package.BloodElasticVesselElastance intrathoracicArteries(
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        Elastance=190651014.00345,
        volume_start=0.000204) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={188,0})));
      Package.BloodInertia aorticFlowInertia(I(displayUnit="mmHg.s2/ml")=
          93325.6711905, volumeFlow_start(displayUnit="ml/min") = 5e-9)
                         annotation (
          Placement(transformation(
            extent={{12,-8},{-12,8}},
            rotation=0,
            origin={146,0})));
      Package.BloodResistor pulmonaryVenousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{10,50},{30,70}})));
      Package.BloodValve AorticValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{196,30},{216,50}})));
      Package.BloodResistor extrathoracicArterialResistance(Resistance(
            displayUnit="(mmHg.s)/ml") = 7999343.2449) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={108,0})));
      Package.BloodElasticVesselElastance extrathoracicArteries(
        ExternalPressure=0,
        ZeroPressureVolume=0.00037,
        Elastance=74127247.40274,
        volume_start=0.000526) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={66,0})));
      Package.BloodResistor systemicArterioalResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 106657909.932) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={32,0})));
      Package.BloodElasticVesselElastance systemicTissues(
        ExternalPressure=0,
        ZeroPressureVolume=0.000185,
        Elastance=34930465.50273,
        volume_start=0.000283) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,0})));
      Package.BloodResistor smallVenuleResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 26664477.483) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-58,0})));
      Package.BloodElasticVesselElastance extrathoracicVeins(
        ExternalPressure=0,
        ZeroPressureVolume=0.001,
        Elastance=2253148.3473135,
        volume_start=0.00153) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-100,0})));
      Package.BloodResistor venousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 11999014.86735) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-140,0})));
      Package.BloodElasticVesselElastance intrathoracicVeins(
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        Elastance=2426467.450953,
        volume_start=0.00148) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-182,0})));
      Package.BloodResistor centralVenousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 399967.162245) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-236,0})));
      Package.BloodValve TricuspidValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{-218,51},{-194,29}})));
      Package.BloodValve PulmonaryValve(_Ron(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{-140,30},{-120,50}})));
      Package.BloodElasticVesselElastance pulmonaryArteries(
        ZeroPressureVolume=5e-5,
        ExternalPressure=-533.28954966,
        Elastance=31064116.267695,
        volume_start=0.000106)
        annotation (Placement(transformation(extent={{-94,50},{-74,70}})));
      Package.BloodResistor pulmonaryResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 14665462.61565)
        annotation (Placement(transformation(extent={{-62,50},{-42,70}})));
      Package.BloodElasticVesselElastance pulmonaryVeins(
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        Elastance=6066168.6273825,
        volume_start=0.000518)
        annotation (Placement(transformation(extent={{-20,50},{0,70}})));
      Package.BloodValve MitralValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{100,30},{120,50}})));
      Package.BloodElasticVesselCompliance      LeftVentricle(
        ZeroPressureVolume=6e-5,
        ExternalPressure=-533.28954966,
        useComplianceInput=true,
        volume_start=0.000144)
        annotation (Placement(transformation(extent={{160,30},{180,50}})));
      Package.BloodElasticVesselCompliance      RightAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        useComplianceInput=true,
        volume_start=0.000135)
        annotation (Placement(transformation(extent={{-252,30},{-232,50}})));
      Package.BloodElasticVesselCompliance      RightVentricle(
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966,
        useComplianceInput=true,
        volume_start=0.000131)
        annotation (Placement(transformation(extent={{-178,30},{-158,50}})));
      Package.BloodElasticVesselCompliance      leftAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        useComplianceInput=true,
        volume_start=9.31e-5)
        annotation (Placement(transformation(extent={{66,30},{86,50}})));
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
          points={{140,120.8},{140,148.5},{-229.25,148.5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(PulmonaryValve.bloodPort_out, pulmonaryArteries.bloodPort_in)
        annotation (Line(
          points={{-120,40},{-106,40},{-106,60},{-93.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryResistance.bloodPort_out, pulmonaryVeins.bloodPort_in)
        annotation (Line(
          points={{-43,60},{-19.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_out, LeftVentricle.bloodPort_in)
        annotation (Line(
          points={{120,40},{160.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_out, leftAtrium.bloodPort_in)
        annotation (Line(
          points={{29,60},{48,60},{48,40},{66.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(TricuspidValve.bloodPort_out, RightVentricle.bloodPort_in)
        annotation (Line(
          points={{-194,40},{-177.8,40},{-177.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_out, pulmonaryResistance.bloodPort_in)
        annotation (Line(
          points={{-74,60},{-61,60}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_in, pulmonaryVeins.bloodPort_out)
        annotation (Line(
          points={{11,60},{0,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_in, leftAtrium.bloodPort_out) annotation (
          Line(
          points={{100.2,40},{86,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_in, LeftVentricle.bloodPort_out)
        annotation (Line(
          points={{196.2,40},{180,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_out, intrathoracicArteries.bloodPort_in)
        annotation (Line(
          points={{216,40},{230,40},{230,-1.77636e-15},{197.8,-1.77636e-15}},
          color={28,108,200},
          thickness=0.5));
      connect(aorticFlowInertia.bloodPort_in, intrathoracicArteries.bloodPort_out)
        annotation (Line(
          points={{156.8,0},{168,0},{168,6.66134e-16},{178,6.66134e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArterialResistance.bloodPort_in, aorticFlowInertia.bloodPort_out)
        annotation (Line(
          points={{117,-1.55431e-15},{126,-1.55431e-15},{126,0},{135.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArteries.bloodPort_in,
        extrathoracicArterialResistance.bloodPort_out) annotation (Line(
          points={{75.8,-1.77636e-15},{88,-1.77636e-15},{88,0},{99,0}},
          color={28,108,200},
          thickness=0.5));
      connect(systemicArterioalResistance.bloodPort_in, extrathoracicArteries.bloodPort_out)
        annotation (Line(
          points={{41,-1.55431e-15},{48,-1.55431e-15},{48,7.21645e-16},{56,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(systemicTissues.bloodPort_in, systemicArterioalResistance.bloodPort_out)
        annotation (Line(
          points={{-4.2,-1.77636e-15},{14,-1.77636e-15},{14,5.55112e-16},{23,
              5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(smallVenuleResistance.bloodPort_in, systemicTissues.bloodPort_out)
        annotation (Line(
          points={{-49,0},{-24,0}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicVeins.bloodPort_in, smallVenuleResistance.bloodPort_out)
        annotation (Line(
          points={{-90.2,-1.72085e-15},{-78,-1.72085e-15},{-78,5.55112e-16},{-67,
              5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(venousResistance.bloodPort_in, extrathoracicVeins.bloodPort_out)
        annotation (Line(
          points={{-131,-1.55431e-15},{-120,-1.55431e-15},{-120,7.21645e-16},{-110,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(intrathoracicVeins.bloodPort_in, venousResistance.bloodPort_out)
        annotation (Line(
          points={{-172.2,-1.77636e-15},{-160,-1.77636e-15},{-160,4.44089e-16},
              {-149,4.44089e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_in, intrathoracicVeins.bloodPort_out)
        annotation (Line(
          points={{-227,-1.77636e-15},{-200,-1.77636e-15},{-200,0},{-192,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RightVentricle.bloodPort_out, PulmonaryValve.bloodPort_in)
        annotation (Line(
          points={{-158,40},{-139.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_out, RightAtrium.bloodPort_in)
        annotation (Line(
          points={{-245,4.44089e-16},{-256,4.44089e-16},{-256,0},{-268,0},{-268,
              40},{-251.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.bloodPort_out, TricuspidValve.bloodPort_in)
        annotation (Line(
          points={{-232,40},{-217.76,40}},
          color={28,108,200},
          thickness=0.5));
      connect(leftAtrium.compliance, LAtrialElastance.Ct) annotation (Line(
            points={{76,48},{78,48},{78,70},{108,70},{108,107.84},{97.61,107.84}},
            color={0,0,127}));
      connect(LVentricularElastance.Ct, LeftVentricle.compliance) annotation (
          Line(points={{161.42,111.68},{170,111.68},{170,48}}, color={0,0,127}));
      connect(RightVentricle.compliance, RVentricularElastance.Ct) annotation (
          Line(points={{-168,48},{-168,76},{-130,76},{-130,108.91},{-147.15,
              108.91}}, color={0,0,127}));
      connect(RightAtrium.compliance, RAtrialElastance.Ct) annotation (Line(
            points={{-242,48},{-242,70},{-196,70},{-196,101.84},{-202.39,101.84}},
            color={0,0,127}));
      annotation(Diagram(coordinateSystem(extent={{-280,-180},{280,180}},      preserveAspectRatio=false)),             Icon(coordinateSystem(extent={{-280,
                -180},{280,180}},                                                                                                    preserveAspectRatio = false), graphics),
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

    model CardiovascularSystem_GCG_Physiolibrary
      "Cardiovascular part of Guyton-Coleman-Granger's model from 1972"
       extends Modelica.Icons.Example;
       import Physiolibrary.Hydraulic;
      Hydraulic.Components.ElasticVessel pulmonaryVeinsAndLeftAtrium(
        volume_start(displayUnit="l") = 0.0004,
        ZeroPressureVolume(displayUnit="l") = 0.0004,
        Compliance(displayUnit="l/mmHg") = 7.5006157584566e-08)
        annotation (Placement(transformation(extent={{4,74},{24,94}})));
      Hydraulic.Components.ElasticVessel pulmonaryArteries(
        ZeroPressureVolume(displayUnit="l") = 0.00030625,
        Compliance(displayUnit="l/mmHg") = 3.6002955640592e-08,
        volume_start(displayUnit="l") = 0.00038)
        annotation (Placement(transformation(extent={{-62,74},{-42,94}})));
      Hydraulic.Components.Conductor
               pulmonary(Conductance(displayUnit="l/(mmHg.min)")=
          4.1665920538226e-8)
        annotation (Placement(transformation(extent={{-30,74},{-10,94}})));
      Hydraulic.Components.ElasticVessel arteries(
        volume_start(displayUnit="l") = 0.00085,
        ZeroPressureVolume(displayUnit="l") = 0.000495,
        Compliance(displayUnit="l/mmHg") = 2.6627185942521e-8)
        annotation (Placement(transformation(extent={{14,-46},{34,-26}})));
      Hydraulic.Components.ElasticVessel veins(
        volume_start(displayUnit="l") = 0.00325,
        ZeroPressureVolume(displayUnit="l") = 0.00295,
        Compliance(displayUnit="l/mmHg") = 6.1880080007267e-7)
        annotation (Placement(transformation(extent={{-64,-46},{-44,-26}})));
      Hydraulic.Components.Conductor
               nonMuscle(Conductance(displayUnit="l/(mmHg.min)")=
          3.5627924852669e-9)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-36})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure
        annotation (Placement(transformation(extent={{-78,26},{-58,46}})));
      Hydraulic.Components.Pump rightHeart(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-56,8},{-36,28}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst RNormalCO(k(displayUnit=
             "l/min") = 8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-60,40},{-52,48}})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure1
        annotation (Placement(transformation(extent={{-8,26},{12,46}})));
      Hydraulic.Components.Pump leftHeart(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{16,6},{36,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst LNormalCO(k(displayUnit=
             "l/min") = 8.3333333333333e-05)
        annotation (Placement(transformation(extent={{12,42},{20,50}})));
      Hydraulic.Components.Conductor
               kidney(Conductance(displayUnit="l/(mmHg.min)") = 1.4126159678427e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-54})));
      Hydraulic.Components.Conductor
               muscle(Conductance(displayUnit="l/(mmHg.min)")=
          1.3001067314658e-9)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-18})));
      Hydraulic.Components.Conductor
               largeVeins(Conductance(displayUnit="l/(mmHg.min)")=
          1.6888886482791e-7)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-84,-8})));
      Hydraulic.Components.ElasticVessel rightAtrium(
        volume_start(displayUnit="l") = 0.0001,
        ZeroPressureVolume(displayUnit="l") = 0.0001,
        Compliance(displayUnit="l/mmHg") = 3.7503078792283e-08)
        annotation (Placement(transformation(extent={{-82,8},{-62,28}})));
      Physiolibrary.Blocks.Factors.Spline rightStarling(data={{-6,0,0},{-3,0.15,
            0.104},{-1,0.52,0.48},{2,1.96,0.48},{4,2.42,0.123},{8,2.7,0}},
          Xscale=101325/760)
        "At filling pressure 0mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{-56,22},{-36,42}})));
      Physiolibrary.Blocks.Factors.Spline leftStarling(data={{-4,0,0},{-1,0.72,
            0.29},{0,1.01,0.29},{3,1.88,0.218333},{10,2.7,0}}, Xscale=101325/
            760)
        "At filling pressure -0.0029mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{16,22},{36,42}})));
    equation
      connect(pulmonaryArteries.q_in,pulmonary. q_in) annotation (Line(
          points={{-52,84},{-30,84}},
          thickness=1));
      connect(pulmonary.q_out, pulmonaryVeinsAndLeftAtrium.q_in) annotation (
          Line(
          points={{-10,84},{14,84}},
          thickness=1));
      connect(rightHeart.q_out,pulmonaryArteries. q_in) annotation (Line(
          points={{-36,18},{-28,18},{-28,60},{-70,60},{-70,84},{-52,84}},
          thickness=1));
      connect(leftHeart.q_in, pulmonaryVeinsAndLeftAtrium.q_in) annotation (
          Line(
          points={{16,16},{-4,16},{-4,60},{32,60},{32,84},{14,84}},
          thickness=1));
      connect(leftHeart.q_out,arteries. q_in) annotation (Line(
          points={{36,16},{44,16},{44,-36},{24,-36}},
          thickness=1));
      connect(pressureMeasure.q_in,rightHeart. q_in) annotation (Line(
          points={{-72,30},{-72,18},{-56,18}},
          thickness=1));
      connect(pressureMeasure1.q_in, pulmonaryVeinsAndLeftAtrium.q_in)
        annotation (Line(
          points={{-2,30},{-4,30},{-4,60},{32,60},{32,84},{14,84}},
          thickness=1));
      connect(rightAtrium.q_in, rightHeart.q_in) annotation (Line(
          points={{-72,18},{-56,18}},
          thickness=1));
      connect(RNormalCO.y, rightStarling.yBase) annotation (Line(
          points={{-51,44},{-46,44},{-46,34}},
          color={0,0,127}));
      connect(LNormalCO.y, leftStarling.yBase) annotation (Line(
          points={{21,46},{26,46},{26,34}},
          color={0,0,127}));
      connect(pressureMeasure.q_in, rightAtrium.q_in) annotation (Line(
          points={{-72,30},{-72,18}},
          thickness=1));
      connect(rightHeart.solutionFlow, rightStarling.y) annotation (Line(
          points={{-46,25},{-46,28},{-46,28}},
          color={0,0,127}));
      connect(leftStarling.y, leftHeart.solutionFlow) annotation (Line(
          points={{26,28},{26,23}},
          color={0,0,127}));
      connect(pressureMeasure.pressure, rightStarling.u) annotation (Line(
          points={{-62,32},{-54,32}},
          color={0,0,127}));
      connect(pressureMeasure1.pressure, leftStarling.u) annotation (Line(
          points={{8,32},{18,32}},
          color={0,0,127}));
      connect(kidney.q_in, arteries.q_in) annotation (Line(
          points={{-4,-54},{10,-54},{10,-36},{24,-36}},
          color={0,0,0},
          thickness=1));
      connect(nonMuscle.q_in, arteries.q_in) annotation (Line(
          points={{-4,-36},{24,-36}},
          color={0,0,0},
          thickness=1));
      connect(muscle.q_in, arteries.q_in) annotation (Line(
          points={{-4,-18},{10,-18},{10,-36},{24,-36}},
          color={0,0,0},
          thickness=1));
      connect(muscle.q_out, veins.q_in) annotation (Line(
          points={{-24,-18},{-40,-18},{-40,-36},{-54,-36}},
          color={0,0,0},
          thickness=1));
      connect(nonMuscle.q_out, veins.q_in) annotation (Line(
          points={{-24,-36},{-54,-36}},
          color={0,0,0},
          thickness=1));
      connect(kidney.q_out, veins.q_in) annotation (Line(
          points={{-24,-54},{-40,-54},{-40,-36},{-54,-36}},
          color={0,0,0},
          thickness=1));
      connect(veins.q_in, largeVeins.q_in) annotation (Line(
          points={{-54,-36},{-84,-36},{-84,-18}},
          color={0,0,0},
          thickness=1));
      connect(largeVeins.q_out, rightAtrium.q_in) annotation (Line(
          points={{-84,2},{-84,18},{-72,18}},
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
    end CardiovascularSystem_GCG_Physiolibrary;

    model CardiovascularSystem_GCG_Extension_simple
      "Cardiovascular part of Guyton-Coleman-Granger's model from 1972"
       extends Modelica.Icons.Example;
       import Physiolibrary.Hydraulic;
    Package.BloodElasticVesselCompliance pulmonaryVeinsAndLeftAtrium(
        volume_start(displayUnit="l") = 0.0004,
        ZeroPressureVolume(displayUnit="l") = 0.0004,
        Compliance(displayUnit="l/mmHg") = 7.5006157584566e-8)
        annotation (Placement(transformation(extent={{4,74},{24,94}})));
      Package.BloodElasticVesselCompliance pulmonaryArteries(
        ZeroPressureVolume(displayUnit="l") = 0.00030625,
        volume_start(displayUnit="l") = 0.00038,
        Compliance(displayUnit="l/mmHg") = 3.6002955640592e-8)
        annotation (Placement(transformation(extent={{-62,74},{-42,94}})));
      Package.BloodConductor
               pulmonary(Conductance(displayUnit="l/(mmHg.min)") = 4.1665920538226e-08)
        annotation (Placement(transformation(extent={{-30,74},{-10,94}})));
      Package.BloodElasticVesselCompliance arteries(
        volume_start(displayUnit="l") = 0.00085,
        ZeroPressureVolume(displayUnit="l") = 0.000495,
        Compliance(displayUnit="l/mmHg") = 2.6627185942521e-8,
        CO2_concentration=10)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={24,-36})));
      Package.BloodElasticVesselCompliance veins(
        volume_start(displayUnit="l") = 0.00325,
        ZeroPressureVolume(displayUnit="l") = 0.00295,
        Compliance(displayUnit="l/mmHg") = 6.1880080007267e-7,
        CO2_concentration=20)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-54,-36})));
      Package.BloodConductor
               nonMuscle(Conductance(displayUnit="l/(mmHg.min)") = 3.5627924852669e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-36})));
      Package.Pump              rightHeart
        annotation (Placement(transformation(extent={{-56,8},{-36,28}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst RNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-60,40},{-52,48}})));
      Package.Pump              leftHeart
        annotation (Placement(transformation(extent={{16,6},{36,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst LNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{12,42},{20,50}})));
      Package.BloodConductor
               kidney(Conductance(displayUnit="l/(mmHg.min)") = 1.4126159678427e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-54})));
      Package.BloodConductor
               muscle(Conductance(displayUnit="l/(mmHg.min)") = 1.3001067314658e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-18})));
      Package.BloodConductor
               largeVeins(Conductance(displayUnit="l/(mmHg.min)") = 1.6888886482791e-07)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-84,-10})));
      Package.BloodElasticVesselCompliance rightAtrium(
        volume_start(displayUnit="l") = 0.0001,
        ZeroPressureVolume(displayUnit="l") = 0.0001,
        Compliance(displayUnit="l/mmHg") = 3.7503078792283e-08)
        annotation (Placement(transformation(extent={{-82,8},{-62,28}})));
    equation
      connect(rightAtrium.bloodPort_out, rightHeart.bloodPort_in) annotation (
          Line(
          points={{-62,18},{-56,18}},
          color={28,108,200},
          thickness=0.5));
      connect(rightHeart.bloodPort_out, pulmonaryArteries.bloodPort_in)
        annotation (Line(
          points={{-36,18},{-26,18},{-26,64},{-82,64},{-82,84},{-61.8,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_out, pulmonary.bloodPort_in)
        annotation (Line(
          points={{-42,84},{-29,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary.bloodPort_out, pulmonaryVeinsAndLeftAtrium.bloodPort_in)
        annotation (Line(
          points={{-10,84},{-4,84},{-4,84},{4.2,84}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_in, pulmonaryVeinsAndLeftAtrium.bloodPort_out)
        annotation (Line(
          points={{16,16},{-12,16},{-12,64},{38,64},{38,84},{24,84}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_out, largeVeins.bloodPort_in) annotation (Line(
          points={{-64,-36},{-84,-36},{-84,-19}},
          color={28,108,200},
          thickness=0.5));
      connect(largeVeins.bloodPort_out, rightAtrium.bloodPort_in) annotation (
          Line(
          points={{-84,0},{-84,18},{-81.8,18}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_out, arteries.bloodPort_in) annotation (Line(
          points={{36,16},{60,16},{60,-36},{33.8,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_out, muscle.bloodPort_in) annotation (Line(
          points={{14,-36},{4,-36},{4,-18},{-5,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_out, nonMuscle.bloodPort_in) annotation (Line(
          points={{14,-36},{-5,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_out, kidney.bloodPort_in) annotation (Line(
          points={{14,-36},{4,-36},{4,-54},{-5,-54}},
          color={28,108,200},
          thickness=0.5));
      connect(nonMuscle.bloodPort_out, veins.bloodPort_in) annotation (Line(
          points={{-24,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(muscle.bloodPort_out, veins.bloodPort_in) annotation (Line(
          points={{-24,-18},{-34,-18},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(kidney.bloodPort_out, veins.bloodPort_in) annotation (Line(
          points={{-24,-54},{-34,-54},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(LNormalCO.y,leftHeart.volumeFlowRate)
        annotation (Line(points={{21,46},{26,46},{26,20}}, color={0,0,127}));
      connect(RNormalCO.y,rightHeart.volumeFlowRate)  annotation (Line(points={
              {-51,44},{-46,44},{-46,22}}, color={0,0,127}));
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
        experiment(StopTime=300),
        Icon(coordinateSystem(extent={{-100,-100},{100,120}})));
    end CardiovascularSystem_GCG_Extension_simple;

    model TestAlvEq
      Package.AlvEqUnit_ alvEqUnit_
        annotation (Placement(transformation(extent={{-18,2},{60,58}})));
      Physiolibrary.Types.Constants.ConcentrationConst O2(k=6.0332)
        annotation (Placement(transformation(extent={{-78,18},{-70,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k=8.4166666666667e-5)
        annotation (Placement(transformation(extent={{-44,56},{-36,64}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "ml/min") = 8.25e-5)
        annotation (Placement(transformation(extent={{-63,42},{-55,48}})));
      Physiolibrary.Types.Constants.ConcentrationConst CO2(k=23.6727)
        annotation (Placement(transformation(extent={{-64,6},{-56,14}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-52,-14},{-44,-6}})));
      inner Package.ModelSettings modelSettings
        annotation (Placement(transformation(extent={{-100,80},{-80,100}})));
    equation
      connect(Q.y, alvEqUnit_.Q) annotation (Line(points={{-35,60},{-10,60},{
              -10,42.6},{1.89,42.6}}, color={0,0,127}));
      connect(VAi.y, alvEqUnit_.VAi) annotation (Line(points={{-54,45},{-54,
              28.04},{-9.03,28.04}}, color={0,0,127}));
      connect(O2.y, alvEqUnit_.O2_v) annotation (Line(points={{-69,22},{-26,22},
              {-26,16.56},{-14.88,16.56}}, color={0,0,127}));
      connect(CO2.y, alvEqUnit_.CO2_v) annotation (Line(points={{-55,10},{-34,
              10},{-34,11.52},{-14.88,11.52}}, color={0,0,127}));
      connect(BEox.y, alvEqUnit_.BEox_v) annotation (Line(points={{-43,-10},{
              -30,-10},{-30,6.48},{-14.88,6.48}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestAlvEq;

    model AlvVentilation_withShuntByFilip_GCG_TestRefactor
      "Cardiovascular part of Guyton-Coleman-Granger's model from 1972"
       extends Modelica.Icons.Example;
       import Physiolibrary.Hydraulic;
      Package.BloodElasticVesselCompliance pulmonaryArteries(
        ZeroPressureVolume(displayUnit="l") = 0.00030625,
        volume_start(displayUnit="l") = 0.00038,
        Compliance(displayUnit="l/mmHg") = 3.6002955640592e-8,
        BEox_concentration=0,
        O2_concentration=6.02579,
        CO2_concentration=23.6461)
        annotation (Placement(transformation(extent={{-102,100},{-82,120}})));
    Package.BloodElasticVesselCompliance pulmonaryVeinsAndLeftAtrium(
        volume_start(displayUnit="l") = 0.0004,
        ZeroPressureVolume(displayUnit="l") = 0.0004,
        Compliance(displayUnit="l/mmHg") = 7.5006157584566e-8,
        O2_concentration=8.29769,
        CO2_concentration=21.6053)
        annotation (Placement(transformation(extent={{40,100},{60,120}})));
      Package.BloodConductor
               pulmonary(Conductance(displayUnit="l/(mmHg.min)")=
          4.1665920538226e-8, useConductanceInput=true)
        annotation (Placement(transformation(extent={{-74,120},{-54,100}})));
      Package.BloodElasticVesselCompliance arteries(
        volume_start(displayUnit="l") = 0.00085,
        ZeroPressureVolume(displayUnit="l") = 0.000495,
        Compliance(displayUnit="l/mmHg") = 2.6627185942521e-8,
        O2_concentration=8.29769,
        CO2_concentration=21.6053)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={54,-36})));
      Package.BloodElasticVesselCompliance veins(
        volume_start(displayUnit="l") = 0.00325,
        ZeroPressureVolume(displayUnit="l") = 0.00295,
        Compliance(displayUnit="l/mmHg") = 6.1880080007267e-7,
        O2_concentration=6.02579,
        CO2_concentration=23.6461)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-94,-62})));
      Package.BloodConductor
               nonMuscle(Conductance(displayUnit="l/(mmHg.min)") = 3.5627924852669e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={16,-36})));
      Package.Pump              rightHeart
        annotation (Placement(transformation(extent={{-52,8},{-32,28}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst RNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-56,40},{-48,48}})));
      Package.Pump              leftHeart
        annotation (Placement(transformation(extent={{16,6},{36,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst LNormalCO(k(displayUnit="l/min")=
             8.3333333333333e-05)
        annotation (Placement(transformation(extent={{12,42},{20,50}})));
      Package.BloodConductor
               kidney(Conductance(displayUnit="l/(mmHg.min)") = 1.4126159678427e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={16,-54})));
      Package.BloodConductor
               muscle(Conductance(displayUnit="l/(mmHg.min)")=
          1.3001067314658e-9)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={16,-18})));
      Package.BloodConductor
               largeVeins(Conductance(displayUnit="l/(mmHg.min)") = 1.6888886482791e-07)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-110,-10})));
      Package.BloodElasticVesselCompliance rightAtrium(
        volume_start(displayUnit="l") = 0.0001,
        ZeroPressureVolume(displayUnit="l") = 0.0001,
        Compliance(displayUnit="l/mmHg") = 3.7503078792283e-8,
        O2_concentration=6.02579,
        CO2_concentration=23.6461)
        annotation (Placement(transformation(extent={{-110,12},{-90,32}})));
      Physiolibrary.Blocks.Factors.Spline rightStarling(data={{-6,0,0},{-3,0.15,0.104},
            {-1,0.52,0.48},{2,1.96,0.48},{4,2.42,0.123},{8,2.7,0}}, Xscale=101325/760)
        "At filling pressure 0mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{-50,22},{-30,42}})));
      Physiolibrary.Blocks.Factors.Spline leftStarling(data={{-4,0,0},{-1,0.72,0.29},
            {0,1.01,0.29},{3,1.88,0.218333},{10,2.7,0}}, Xscale=101325/760)
        "At filling pressure -0.0029mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{36,22},{16,42}})));
      Package.PressureMeasure pressureMeasure1
        annotation (Placement(transformation(extent={{60,58},{80,78}})));
      Package.PressureMeasure pressureMeasure2
        annotation (Placement(transformation(extent={{-90,44},{-76,58}})));
      Package.junction_T junction_T(useO2PortInput=true, useCO2PortInput=true)
        annotation (Placement(transformation(extent={{-18,-50},{-38,-20}})));
      Package.FlowMeasure flowMeasure_art annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={72,4})));
      Package.FlowMeasure flowMeasure_ven annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-68,18})));
      Package.FlowMeasure flowMeasure_tissue annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-60,-60})));
      Package.FlowMeasure flowMeasure_alv annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={20,110})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2_MetabolicProduction(
          SoluteFlow=0.00016666666666667)
        annotation (Placement(transformation(extent={{-4,-96},{-24,-76}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
        O2_MetabolicConsumption(SoluteFlow=0.00018333333333333)
        annotation (Placement(transformation(extent={{4,-84},{24,-64}})));
      Package.FlowConcentrationMeasure flowConcentrationMeasure
        annotation (Placement(transformation(extent={{-50,100},{-30,120}})));
      Package.AlveolocapillaryUnit alveolocapillaryUnit
        annotation (Placement(transformation(extent={{-14,94},{6,114}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "ml/min") = 8.19588e-5)
        annotation (Placement(transformation(extent={{-31,88},{-23,94}})));
      Package.BloodConductor
               pulmonary1(Conductance(displayUnit="l/(mmHg.min)")=
          4.1665920538226e-8, useConductanceInput=true)
        annotation (Placement(transformation(extent={{-14,90},{6,70}})));
      Physiolibrary.Types.Constants.FractionConst fraction(k=0.98)
        annotation (Placement(transformation(extent={{-106,74},{-98,82}})));
      Package.Shunt shunt(G_total(displayUnit="l/(mmHg.min)")=
          4.1665920538226e-8)
        annotation (Placement(transformation(extent={{-68,68},{-60,76}})));
      inner Package.ModelSettings modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-120,120},{-100,140}})));
    equation
      connect(RNormalCO.y, rightStarling.yBase) annotation (Line(
          points={{-47,44},{-40,44},{-40,34}},
          color={0,0,127}));
      connect(LNormalCO.y, leftStarling.yBase) annotation (Line(
          points={{21,46},{26,46},{26,34}},
          color={0,0,127}));
      connect(pulmonaryArteries.bloodPort_out, pulmonary.bloodPort_in)
        annotation (Line(
          points={{-82,110},{-73,110}},
          color={28,108,200},
          thickness=0.5));
      connect(leftStarling.y,leftHeart.volumeFlowRate)
        annotation (Line(points={{26,28},{26,20}}, color={0,0,127}));
      connect(rightStarling.y,rightHeart.volumeFlowRate)
        annotation (Line(points={{-40,28},{-40,26},{-42,26},{-42,22}},
                                                     color={0,0,127}));
      connect(arteries.bloodPort_out, muscle.bloodPort_in) annotation (Line(
          points={{44,-36},{34,-36},{34,-18},{25,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_out, nonMuscle.bloodPort_in) annotation (Line(
          points={{44,-36},{25,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_out, kidney.bloodPort_in) annotation (Line(
          points={{44,-36},{34,-36},{34,-54},{25,-54}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVeinsAndLeftAtrium.bloodPort_out, pressureMeasure1.bloodPort_in)
        annotation (Line(
          points={{60,110},{60,61},{65.1,61}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure1.bloodPort_out, leftHeart.bloodPort_in)
        annotation (Line(
          points={{78.6,60.9},{78.6,54},{4,54},{4,16},{16,16}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure1.pressure, leftStarling.u) annotation (Line(
            points={{75.8,65.2},{84,65.2},{84,32},{34,32}}, color={0,0,127}));
      connect(junction_T.bloodPort_in, muscle.bloodPort_out) annotation (Line(
          points={{-18.2,-35},{-12.1,-35},{-12.1,-18},{6,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(nonMuscle.bloodPort_out, muscle.bloodPort_out) annotation (Line(
          points={{6,-36},{-12,-36},{-12,-18},{6,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(kidney.bloodPort_out, muscle.bloodPort_out) annotation (Line(
          points={{6,-54},{-12,-54},{-12,-38},{-12,-37},{-12,-18},{6,-18}},
          color={28,108,200},
          thickness=0.5));

      connect(leftHeart.bloodPort_out, flowMeasure_art.bloodPort_in)
        annotation (Line(
          points={{36,16},{72,16},{72,13}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_in, flowMeasure_art.bloodPort_out) annotation (
         Line(
          points={{63.8,-36},{72,-36},{72,-5}},
          color={28,108,200},
          thickness=0.5));
      connect(largeVeins.bloodPort_out, rightAtrium.bloodPort_in) annotation (
          Line(
          points={{-110,0},{-110,22},{-109.8,22}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_in, flowMeasure_tissue.bloodPort_out) annotation (
         Line(
          points={{-84.2,-62},{-76,-62},{-76,-60},{-69,-60}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure_tissue.bloodPort_in, junction_T.bloodPort_out)
        annotation (Line(
          points={{-51,-60},{-44,-60},{-44,-35},{-38,-35}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure_alv.bloodPort_out, pulmonaryVeinsAndLeftAtrium.bloodPort_in)
        annotation (Line(
          points={{29,110},{40.2,110}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_out, largeVeins.bloodPort_in) annotation (Line(
          points={{-104,-62},{-110,-62},{-110,-19}},
          color={28,108,200},
          thickness=0.5));
      connect(O2_MetabolicConsumption.q_in, junction_T.port_O2) annotation (
          Line(
          points={{4,-74},{-22,-74},{-22,-35},{-21.8,-35}},
          color={107,45,134},
          thickness=1));
      connect(junction_T.port_CO2, CO2_MetabolicProduction.q_out) annotation (
          Line(
          points={{-25.4,-35},{-25.4,-86},{-24,-86}},
          color={107,45,134},
          thickness=1));
      connect(rightAtrium.bloodPort_out, pressureMeasure2.bloodPort_in)
        annotation (Line(
          points={{-90,22},{-88,22},{-88,46.1},{-86.43,46.1}},
          color={28,108,200},
          thickness=0.5));
      connect(flowMeasure_ven.bloodPort_in, pressureMeasure2.bloodPort_out)
        annotation (Line(
          points={{-77,18},{-80,18},{-80,46.03},{-76.98,46.03}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure2.pressure, rightStarling.u) annotation (Line(
            points={{-78.94,49.04},{-66,49.04},{-66,32},{-48,32}}, color={0,0,
              127}));
      connect(rightHeart.bloodPort_out, pulmonaryArteries.bloodPort_in)
        annotation (Line(
          points={{-32,18},{-20,18},{-20,62},{-110,62},{-110,110},{-101.8,110}},
          color={28,108,200},
          thickness=0.5));

      connect(flowMeasure_ven.bloodPort_out, rightHeart.bloodPort_in)
        annotation (Line(
          points={{-59,18},{-52,18}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary.bloodPort_out, flowConcentrationMeasure.bloodPort_in)
        annotation (Line(
          points={{-54,110},{-49,110}},
          color={28,108,200},
          thickness=0.5));
      connect(VAi.y, alveolocapillaryUnit.VAi) annotation (Line(points={{-22,91},
              {-22,103.3},{-11.7,103.3}}, color={0,0,127}));
      connect(flowConcentrationMeasure.bloodPort_out, alveolocapillaryUnit.bloodPort_in)
        annotation (Line(
          points={{-31,110},{-7.4,110}},
          color={28,108,200},
          thickness=0.5));
      connect(alveolocapillaryUnit.bloodPort_out, flowMeasure_alv.bloodPort_in)
        annotation (Line(
          points={{-1.6,110.2},{5.2,110.2},{5.2,110},{11,110}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary1.bloodPort_out, flowMeasure_alv.bloodPort_in)
        annotation (Line(
          points={{6,80},{10,80},{10,110},{11,110}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary1.bloodPort_in, pulmonaryArteries.bloodPort_out)
        annotation (Line(
          points={{-13,80},{-82,80},{-82,110}},
          color={28,108,200},
          thickness=0.5));
      connect(fraction.y, shunt.shunt_fraction) annotation (Line(points={{-97,
              78},{-82,78},{-82,72},{-67.2,72}}, color={0,0,127}));
      connect(shunt.G_main, pulmonary.cond) annotation (Line(points={{-60.4,
              75.6},{-56,75.6},{-56,94},{-66,94},{-66,103.4},{-64,103.4}},
            color={0,0,127}));
      connect(shunt.G_shunt, pulmonary1.cond) annotation (Line(points={{-60.4,
              68.4},{-4,68.4},{-4,73.4}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-120,
                -100},{100,140}}), graphics={Text(
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
        experiment(StopTime=300),
        Icon(coordinateSystem(extent={{-120,-100},{100,140}})));
    end AlvVentilation_withShuntByFilip_GCG_TestRefactor;
  end Test;

  package Trash

    model BloodConductor_error
      extends Physiolibrary.Icons.HydraulicResistor;

       parameter Boolean useConductanceInput = false
        "=true, if external conductance value is used";

       parameter Physiolibrary.Types.HydraulicConductance bloodConductance=0
        "Hydraulic conductance if useConductanceInput=false";

      Package.BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-100,-10},{-80,10}})));
      Package.BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{80,-10},{100,10}}),
            iconTransformation(extent={{80,-10},{100,10}})));
      Physiolibrary.Hydraulic.Components.Conductor conductor(cond=bloodConductance,
          useConductanceInput=true)
        annotation (Placement(transformation(extent={{-10,-3},{10,17}})));
      Package.BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      Package.BloodPort_out_Extension bloodPort_b_Extension
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
      connect(bloodPort_b, bloodPort_b_Extension.bloodPort_out) annotation (
          Line(
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
      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_in) annotation (Line(
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

      Package.BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-12,-8},{8,12}})));
      Package.BloodPort_in_Extension bloodPort_a_Extension
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

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_in) annotation (Line(
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

      Package.BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-104,-10},{-84,10}}),
            iconTransformation(extent={{-12,-8},{8,12}})));
      Package.BloodPort_in_Extension bloodPort_a_Extension
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

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_in) annotation (Line(
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

    model BloodConjunction_
      parameter Integer numberOfFlows;
      Package.BloodPort_in bloodPort_in[numberOfFlows] annotation (Placement(
            transformation(extent={{84,-8},{104,12}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out annotation (Placement(transformation(
              extent={{-106,-10},{-86,10}}), iconTransformation(extent={{-100,-10},
                {-80,10}})));

     Integer jsubstance;

    equation
     bloodPort_out.bloodFlow+sum(bloodPort_in.bloodFlow)=0;
     for jsubstance in 1:bloodPort_out.numberOfSubstances loop
           bloodPort_out.q[jsubstance]+sum(bloodPort_in[i].q[jsubstance] for i in 1:numberOfFlows)=0;
           bloodPort_out.conc[jsubstance]=bloodPort_out[jsubstance].q/(bloodPort_out.bloodFlow);
      end for;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(points={{58,0},{-60,0}}, color={0,0,0}),
            Line(
              points={{-80,0},{80,0}},
              color={191,0,0},
              thickness=0.5),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,0},
              rotation=180),
            Line(
              points={{-80,0},{40,60}},
              color={191,0,0},
              thickness=0.5),
            Line(
              points={{-80,0},{40,-60}},
              color={191,0,0},
              thickness=0.5),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,60},
              rotation=180),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,-60},
              rotation=180)}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end BloodConjunction_;

    model junction_T_old
      Package.BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      Package.BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{-108,-10},{-88,10}}),
            iconTransformation(extent={{-108,-10},{-88,10}})));
      Package.BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{60,-10},{80,10}})));
      Package.BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (
          Placement(transformation(extent={{90,-10},{110,10}}),
            iconTransformation(extent={{90,-10},{110,10}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a port_O2 annotation (
          Placement(transformation(extent={{-30,70},{-10,90}}),
            iconTransformation(extent={{10,90},{30,110}})));
    equation
      connect(bloodPort_a, bloodPort_in_Extension.bloodPort_in) annotation (
          Line(
          points={{-98,0},{-80,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_b) annotation (
          Line(
          points={{80,0},{100,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow, bloodPort_out_Extension.bloodFlow)
        annotation (Line(
          points={{-60,10},{60,10}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2, bloodPort_out_Extension.O2)
        annotation (Line(
          points={{-60,0},{60,0}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2, bloodPort_out_Extension.CO2)
        annotation (Line(
          points={{-60,-4.2},{12,-4.2},{12,-4},{60,-4}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.BEox, bloodPort_out_Extension.BEox)
        annotation (Line(
          points={{-60,-8},{60,-8}},
          color={107,45,134},
          thickness=1));
      connect(port_O2, bloodPort_out_Extension.O2) annotation (Line(
          points={{-20,80},{-20,0},{60,0}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(
              points={{-86,0},{88,0}},
              color={0,0,0},
              thickness=0.5),
            Line(
              points={{-40,88},{-40,0},{-40,0}},
              color={0,0,0},
              thickness=0.5),
            Line(
              points={{20,90},{20,0}},
              color={0,0,0},
              thickness=0.5),
            Line(
              points={{60,90},{60,0}},
              color={0,0,0},
              thickness=0.5),
            Line(
              points={{100,90},{100,2}},
              color={0,0,0},
              thickness=0.5)}), Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end junction_T_old;

    model BloodEmbranchment
      parameter Integer numberOfFlows;
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(extent=
               {{84,-8},{104,12}}), iconTransformation(extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out[numberOfFlows] annotation (Placement(transformation(
              extent={{-106,-10},{-86,10}}), iconTransformation(extent={{-100,-10},{
                -80,10}})));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(points={{58,0},{-60,0}}, color={0,0,0}),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={-60,0},
              rotation=180),
            Line(
              points={{-72,0},{84,0}},
              color={191,0,0},
              thickness=0.5),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={-60,60},
              rotation=180),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={-60,-60},
              rotation=180),
            Line(
              points={{-40,60},{80,10}},
              color={191,0,0},
              thickness=0.5),
            Line(
              points={{-40,-56},{80,-10}},
              color={191,0,0},
              thickness=0.5)}), Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodEmbranchment;

    model BloodConjunction
      parameter Integer numberOfFlows;
      Package.BloodPort_in bloodPort_in[numberOfFlows] annotation (Placement(
            transformation(extent={{84,-8},{104,12}}), iconTransformation(extent={{80,
                -10},{100,10}})));
      Package.BloodPort_out bloodPort_out annotation (Placement(transformation(
              extent={{-106,-10},{-86,10}}), iconTransformation(extent={{-100,-10},{
                -80,10}})));

      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Line(points={{58,0},{-60,0}}, color={0,0,0}),
            Line(
              points={{-80,0},{80,0}},
              color={191,0,0},
              thickness=0.5),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,0},
              rotation=180),
            Line(
              points={{-80,0},{40,60}},
              color={191,0,0},
              thickness=0.5),
            Line(
              points={{-80,0},{40,-60}},
              color={191,0,0},
              thickness=0.5),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,60},
              rotation=180),
            Polygon(
              points={{-20,-20},{-20,20},{20,0},{-20,-20}},
              lineColor={191,0,0},
              fillColor={191,0,0},
              fillPattern=FillPattern.Solid,
              origin={60,-60},
              rotation=180)}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end BloodConjunction;

    model BloodSplitting_2
      parameter Integer splitFraction;
      //constant Integer numberOfFlows=2;
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(extent={{68,-10},
                {88,10}}),          iconTransformation(extent={{80,-10},{100,10}})));
      Package.BloodPort_out bloodPort_out[2] annotation (Placement(transformation(
              extent={{-98,-10},{-78,10}}),  iconTransformation(extent={{-100,-10},{
                -80,10}})));

      Package.Pump pump2 annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={2,0})));

      Package.Pump pump1 annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={0,26})));
      Integer i;
    equation

      pump1.volumeFlowRate=bloodPort_in.bloodFlow*(1-splitFraction);
      pump2.volumeFlowRate=bloodPort_in.bloodFlow*splitFraction;

      connect(pump1.bloodPort_in, bloodPort_in);
      connect(pump2.bloodPort_in, bloodPort_in);
      connect(bloodPort_out[1], pump1.bloodPort_out);
      connect(bloodPort_out[2],pump2.bloodPort_out);

       annotation (Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodSplitting_2;

    model AlveolocapillaryUnit_old
      extends Package.Icons.Alveolus;

      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{84,-84},{104,-64}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={-13,101})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
            transformation(extent={{84,-64},{104,-44}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=90,
            origin={15,101})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation(Placement(transformation(extent={{-76,-50},
                {-64,-38}}),                                                                                                    iconTransformation(extent={{-13,-13},
                {13,13}},                                                                                                    rotation = 0, origin={-77,-7})));
      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(
              extent={{-106,66},{-86,86}}), iconTransformation(extent={{-44,50},
                {-24,70}})));
      Package.BloodPort_out bloodPort_out annotation (Placement(transformation(
              extent={{86,64},{106,84}}), iconTransformation(extent={{14,52},{
                34,72}})));
      Package.BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-72,60},{-42,92}})));
      Package.BloodPort_out_Extension bloodPort_out_Extension
        annotation (Placement(transformation(extent={{32,60},{68,92}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
        annotation (Placement(transformation(extent={{-95,-28},{-87,-22}})));
      Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
        annotation (Placement(transformation(extent={{-79,-34},{-71,-28}})));
      Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.0004)
        annotation (Placement(transformation(extent={{-95,-42},{-87,-36}})));
      Physiolibrary.Types.Constants.ConcentrationConst cAlb(k=0.66)
        annotation (Placement(transformation(extent={{-59,-68},{-53,-60}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
        annotation (Placement(transformation(extent={{-95,-60},{-89,-52}})));
      Physiolibrary.Types.Constants.ConcentrationConst cPi(k=1.15)
        annotation (Placement(transformation(extent={{-93,-67},{-85,-62}})));
      Physiolibrary.Types.Constants.ConcentrationConst cDPG(k=5)
        annotation (Placement(transformation(extent={{-79,-74},{-71,-68}})));
      Physiolibrary.Types.Constants.FractionConst fMetHb1(k=0.005)
        annotation (Placement(transformation(extent={{-93,-80},{-85,-72}})));
      Physiolibrary.Types.Constants.FractionConst fCOHb(k=0.005)
        annotation (Placement(transformation(extent={{-81,-84},{-75,-78}})));
      Physiolibrary.Types.Constants.FractionConst fCOHb1(k=0.005)
        annotation (Placement(transformation(extent={{-89,-88},{-83,-82}})));
      Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
        annotation (Placement(transformation(extent={{-77,-100},{-71,-92}})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure
        annotation (Placement(transformation(extent={{-14,72},{6,92}})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure1
        annotation (Placement(transformation(extent={{-30,62},{-10,82}})));
      Physiolibrary.Chemical.Sensors.ConcentrationMeasure concentrationMeasure3
        annotation (Placement(transformation(extent={{-26,40},{-6,60}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{14,98},{28,84}})));
      Physiolibrary.Chemical.Components.Stream Stream(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{68,-18},{88,2}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage CO2out(
          useConcentrationInput=true)
        annotation (Placement(transformation(extent={{46,-14},{58,-2}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage O2out(
          useConcentrationInput=true)
        annotation (Placement(transformation(extent={{44,8},{56,20}})));
      Physiolibrary.Chemical.Components.Stream Stream1(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{68,4},{88,24}})));
      Physiolibrary.Chemical.Components.Stream Stream2(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-22,14},{-10,26}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage O2in(
          useConcentrationInput=true)
        annotation (Placement(transformation(extent={{12,14},{-2,24}})));
      Physiolibrary.Chemical.Components.Stream Stream3(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(extent={{-22,-10},{-10,2}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage CO2in(
          useConcentrationInput=true)
        annotation (Placement(transformation(extent={{14,-8},{0,2}})));
    equation
      //balance equation
      //bloodPort_in_Extension.O2.q+bloodPort_out_Extension.O2.q+alvEq.VO2=0;
      //bloodPort_in_Extension.CO2.q+bloodPort_out_Extension.CO2.q-alvEq.VCO2=0;
      //concentration of O2 and CO2 in outflowing blood;
      //bloodPort_out_Extension.O2.conc=alvEq.CpcO2;
      //bloodPort_out_Extension.CO2.conc=alvEq.CpcCO2;

      connect(alvEq.VCO2, VCO2) annotation (Line(points={{36.32,-67.68},{75.68,
              -67.68},{75.68,-74},{94,-74}},
                                     color={0,0,127}));
      connect(alvEq.VO2, VO2) annotation (Line(points={{36.32,-62.1},{79.68,
              -62.1},{79.68,-54},{94,-54}},
                                   color={0,0,127}));
      connect(alvEq.VAi, VAi) annotation (Line(points={{-25.74,-42.88},{-57.26,
              -42.88},{-57.26,-44},{-70,-44}},
                           color={0,0,127}));
      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_in) annotation (Line(
          points={{-96,76},{-72,76}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_out, bloodPort_out) annotation (
          Line(
          points={{68,76},{90,76},{90,74},{96,74}},
          color={28,108,200},
          thickness=0.5));
      connect(PB.y, alvEq.PB) annotation (Line(points={{-86,-25},{-60,-25},{-60,
              -31.72},{-25.74,-31.72}},
                              color={0,0,127}));
      connect(alvEq.FiO2, FiO2.y) annotation (Line(points={{-25.74,-35.44},{-64,
              -35.44},{-64,-31},{-70,-31}},
                                  color={0,0,127}));
      connect(FiCO2.y, alvEq.FiCO2) annotation (Line(points={{-86,-39},{-66,-39},
              {-66,-39.16},{-25.74,-39.16}},
                                    color={0,0,127}));
      connect(cAlb.y, alvEq.ctAlb)
        annotation (Line(points={{-52.25,-64},{-50,-64},{-50,-65.2},{-25.74,
              -65.2}},                                       color={0,0,127}));
      connect(ctHb.y, alvEq.ctHb) annotation (Line(points={{-88.25,-56},{-76,
              -56},{-76,-61.48},{-25.74,-61.48}},
                                      color={0,0,127}));
      connect(cPi.y, alvEq.ctPi) annotation (Line(points={{-84,-64.5},{-64,
              -64.5},{-64,-68.92},{-25.74,-68.92}},
                                      color={0,0,127}));
      connect(cDPG.y, alvEq.cDPG) annotation (Line(points={{-70,-71},{-58,-71},
              {-58,-72.64},{-25.74,-72.64}},
                                      color={0,0,127}));
      connect(fMetHb1.y, alvEq.FMetHb) annotation (Line(points={{-84,-76},{-56,
              -76},{-56,-76.36},{-25.74,-76.36}},
                                           color={0,0,127}));
      connect(fCOHb.y, alvEq.FCOHb) annotation (Line(points={{-74.25,-81},{-54,
              -81},{-54,-80.08},{-25.74,-80.08}},
                                           color={0,0,127}));
      connect(fCOHb1.y, alvEq.FHbF) annotation (Line(points={{-82.25,-85},{-52,
              -85},{-52,-83.8},{-25.74,-83.8}},
                                       color={0,0,127}));
      connect(temperature.y, alvEq.T) annotation (Line(points={{-70.25,-96},{
              -48,-96},{-48,-87.52},{-25.74,-87.52}},
                                           color={0,0,127}));
      connect(bloodPort_in_Extension.O2, concentrationMeasure.q_in) annotation (
          Line(
          points={{-42,76},{-34,76},{-34,82},{-4,82}},
          color={107,45,134},
          thickness=1));
      connect(alvEq.CvO2, concentrationMeasure.concentration) annotation (Line(
            points={{-25.74,-54.04},{-52,-54.04},{-52,58},{-4,58},{-4,74}},
                                                                        color={0,0,127}));
      connect(bloodPort_in_Extension.CO2, concentrationMeasure1.q_in) annotation (
          Line(
          points={{-42,69.28},{-31,69.28},{-31,72},{-20,72}},
          color={107,45,134},
          thickness=1));
      connect(concentrationMeasure1.concentration, alvEq.CvCO2) annotation (Line(
            points={{-20,64},{-20,60},{-22,60},{-22,56},{-48,56},{-48,-57.76},{
              -25.74,-57.76}},
            color={0,0,127}));
      connect(bloodPort_in_Extension.BEox, concentrationMeasure3.q_in) annotation (
          Line(
          points={{-42,63.2},{-30,63.2},{-30,50},{-16,50}},
          color={107,45,134},
          thickness=1));
      connect(alvEq.BEox, concentrationMeasure3.concentration) annotation (Line(
            points={{-25.74,-50.32},{-42,-50.32},{-42,36},{-16,36},{-16,42}},
                                                                          color={0,0,
              127}));
      connect(bloodPort_in_Extension.bloodFlow, flowMeasure.q_in) annotation (Line(
          points={{-42,92},{-14,92},{-14,91},{14,91}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_out_Extension.bloodFlow) annotation (
          Line(
          points={{28,91},{36,91},{36,92},{32,92}},
          color={0,0,0},
          thickness=1));
      connect(alvEq.Q, flowMeasure.volumeFlow) annotation (Line(points={{-25.74,
              -46.6},{-36,-46.6},{-36,34},{21,34},{21,82.6}},
                                                  color={0,0,127}));
      connect(VO2, VO2)
        annotation (Line(points={{94,-54},{94,-54}},   color={0,0,127}));
      connect(concentrationMeasure3.q_in, bloodPort_out_Extension.BEox) annotation (
         Line(
          points={{-16,50},{32,50},{32,63.2}},
          color={107,45,134},
          thickness=1));
      connect(CO2out.q_out, Stream.q_in) annotation (Line(
          points={{58,-8},{68,-8}},
          color={107,45,134},
          thickness=1));
      connect(O2out.q_out, Stream1.q_in) annotation (Line(
          points={{56,14},{68,14}},
          color={107,45,134},
          thickness=1));
      connect(alvEq.CpcO2, O2out.concentration) annotation (Line(points={{36.32,
              -73.88},{52,-73.88},{52,-24},{34,-24},{34,14},{44,14}}, color={0,
              0,127}));
      connect(alvEq.CpcCO2, CO2out.concentration) annotation (Line(points={{36.32,
              -80.08},{54,-80.08},{54,-22},{38,-22},{38,-8},{46,-8}},
            color={0,0,127}));
      connect(Stream1.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{78,21},{78,24},{20,24},{20,34},{21,34},{21,82.6}}, color={
              0,0,127}));
      connect(Stream.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{78,-1},{78,2},{20,2},{20,34},{21,34},{21,82.6}}, color={0,
              0,127}));
      connect(Stream1.q_out, bloodPort_out_Extension.O2) annotation (Line(
          points={{88,14},{90,14},{90,66},{62,66},{62,84},{32,84},{32,76}},
          color={107,45,134},
          thickness=1));
      connect(Stream.q_out, bloodPort_out_Extension.CO2) annotation (Line(
          points={{88,-8},{92,-8},{92,56},{56,56},{56,69.6},{32,69.6}},
          color={107,45,134},
          thickness=1));
      connect(Stream2.q_out, O2in.q_out) annotation (Line(
          points={{-10,20},{-2,20},{-2,19}},
          color={107,45,134},
          thickness=1));
      connect(Stream2.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-16,24.2},{-16,30},{20,30},{20,34},{21,34},{21,82.6}},
            color={0,0,127}));
      connect(Stream3.q_out, CO2in.q_out) annotation (Line(
          points={{-10,-4},{-6,-4},{-6,-3},{0,-3}},
          color={107,45,134},
          thickness=1));
      connect(Stream3.solutionFlow, flowMeasure.volumeFlow) annotation (Line(
            points={{-16,0.2},{-16,8},{20,8},{20,34},{21,34},{21,82.6}}, color=
              {0,0,127}));
      connect(CO2in.concentration, alvEq.CvCO2) annotation (Line(points={{14,-3},
              {20,-3},{20,-16},{-48,-16},{-48,-57.76},{-25.74,-57.76}}, color={
              0,0,127}));
      connect(O2in.concentration, concentrationMeasure.concentration)
        annotation (Line(points={{12,19},{16,19},{16,6},{-52,6},{-52,58},{-4,58},
              {-4,74}}, color={0,0,127}));
      connect(Stream2.q_in, concentrationMeasure.q_in) annotation (Line(
          points={{-22,20},{-24,20},{-24,38},{6,38},{6,82},{-4,82}},
          color={107,45,134},
          thickness=1));
      connect(Stream3.q_in, concentrationMeasure1.q_in) annotation (Line(
          points={{-22,-4},{-30,-4},{-30,40},{2,40},{2,72},{-20,72}},
          color={107,45,134},
          thickness=1));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Text(
              extent={{-86,114},{-16,88}},
              lineColor={28,108,200},
              textString="CO2"), Text(
              extent={{14,114},{82,86}},
              lineColor={28,108,200},
              textString="O2")}),                                                                                                    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end AlveolocapillaryUnit_old;

    model BloodResistors2Split
    extends Physiolibrary.Icons.HydraulicResistor;
      parameter Real shuntFraction;
      parameter Physiolibrary.Types.HydraulicResistance Resistance;

      Package.BloodPort_in bloodPort_in annotation (Placement(transformation(
              extent={{-86,10},{-66,30}}), iconTransformation(extent={{-100,-10},
                {-80,10}})));
      Package.BloodPort_out bloodPortMain_out annotation (Placement(
            transformation(extent={{30,-22},{50,-2}}), iconTransformation(
              extent={{80,24},{100,44}})));

      Package.BloodPort_out bloodPortShunt_out annotation (Placement(
            transformation(extent={{34,44},{54,64}}), iconTransformation(extent=
               {{82,-42},{102,-22}})));
      Package.Shunt shuntCalculation(G_total=1/Resistance)
        annotation (Placement(transformation(extent={{-42,10},{-22,30}})));
      Package.BloodConductor bloodConductorMain(useConductanceInput=true)
        annotation (Placement(transformation(extent={{-12,46},{8,66}})));
      Package.BloodConductor bloodConductorShunt(useConductanceInput=true)
        annotation (Placement(transformation(extent={{-12,-22},{8,-2}})));
    equation
      shuntCalculation.shunt_fraction=shuntFraction;
      connect(bloodConductorShunt.bloodPort_out, bloodPortMain_out) annotation (
          Line(
          points={{8,-12},{40,-12}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodConductorMain.bloodPort_out, bloodPortShunt_out) annotation (
          Line(
          points={{8,56},{26,56},{26,54},{44,54}},
          color={28,108,200},
          thickness=0.5));
      connect(shuntCalculation.G_main, bloodConductorMain.cond) annotation (Line(
            points={{-23,29},{-23,74},{-2,74},{-2,62.6}}, color={0,0,127}));
      connect(shuntCalculation.G_shunt, bloodConductorShunt.cond)
        annotation (Line(points={{-23,11},{-2,11},{-2,-5.4}},
                                                            color={0,0,127}));
      connect(bloodConductorMain.bloodPort_in, bloodPort_in) annotation (Line(
          points={{-11,56},{-50,56},{-50,20},{-76,20}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodConductorShunt.bloodPort_in, bloodPort_in) annotation (Line(
          points={{-11,-12},{-50,-12},{-50,20},{-76,20}},
          color={28,108,200},
          thickness=0.5));
     annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-6,-34})),
                   Placement(transformation(
            extent={{12,-12},{-12,12}},
            rotation=0,
            origin={-2,20})),
                    Icon(coordinateSystem(preserveAspectRatio=false)),
                                Diagram(coordinateSystem(preserveAspectRatio=
                false)));
    end BloodResistors2Split;
  end Trash;

  package Inputs
    model HaemoglobinParameters
      "\"input of concentration of haemoglobin, fractional concentration of Methaemoglobin, Fetal haemoglobin and Carboxyhaemoglobin\""
      Physiolibrary.Types.RealIO.ConcentrationOutput ctHb
        "\"concentration of haemoglobin\"" annotation (Placement(transformation(
              extent={{8,74},{28,94}}), iconTransformation(extent={{102,54},{
                122,74}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cDPG
        "\"concentration of h2'3' DPG\"" annotation (Placement(transformation(
              extent={{-28,-54},{-8,-34}}), iconTransformation(extent={{102,34},
                {122,54}})));
      Physiolibrary.Types.RealIO.FractionOutput FMetHb
        "\"Fraction of methaemoglobin\"" annotation (Placement(transformation(
              extent={{18,-78},{38,-58}}), iconTransformation(extent={{102,14},
                {122,34}})));
      Physiolibrary.Types.RealIO.FractionOutput FHbF
        "\"Fraction of fetal haemoglobin\"" annotation (Placement(
            transformation(extent={{30,32},{50,52}}), iconTransformation(extent=
               {{102,-6},{122,14}})));
      Physiolibrary.Types.RealIO.FractionOutput FCOHb
        "\"Fraction of fetal carboxyhaemoglobin\"" annotation (Placement(
            transformation(extent={{58,-34},{78,-14}}), iconTransformation(
              extent={{102,-26},{122,-6}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb_input(k=8.4)
        annotation (Placement(transformation(extent={{-63,70},{-32,96}})));
      Physiolibrary.Types.Constants.ConcentrationConst cDPG_input(k=5)
        annotation (Placement(transformation(extent={{-78,-56},{-55,-36}})));
      Physiolibrary.Types.Constants.FractionConst fMetHb_input(k=0.005)
        annotation (Placement(transformation(extent={{-37,-84},{-8,-58}})));
      Physiolibrary.Types.Constants.FractionConst fCOHb_input(k=0.005)
        annotation (Placement(transformation(extent={{9,-38},{38,-12}})));
      Physiolibrary.Types.Constants.FractionConst fHbF_input(k=0.005)
        annotation (Placement(transformation(extent={{-26,28},{4,50}})));
    equation
      connect(ctHb_input.y, ctHb) annotation (Line(points={{-28.125,83},{
              -8.0625,83},{-8.0625,84},{18,84}}, color={0,0,127}));
      connect(cDPG_input.y, cDPG) annotation (Line(points={{-52.125,-46},{-40,
              -46},{-40,-44},{-18,-44}}, color={0,0,127}));
      connect(fHbF_input.y, FHbF) annotation (Line(points={{7.75,39},{24,39},{
              24,42},{40,42}}, color={0,0,127}));
      connect(FMetHb, FMetHb)
        annotation (Line(points={{28,-68},{28,-68}}, color={0,0,127}));
      connect(FMetHb, fMetHb_input.y) annotation (Line(points={{28,-68},{6,-68},
              {6,-71},{-4.375,-71}}, color={0,0,127}));
      connect(fCOHb_input.y, FCOHb) annotation (Line(points={{41.625,-25},{
              50.8125,-25},{50.8125,-24},{68,-24}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{102,-100}},
              lineColor={28,108,200},
              fillColor={170,255,85},
              fillPattern=FillPattern.Solid), Text(
              extent={{-98,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={128,255,0},
              fillPattern=FillPattern.Solid,
              textString="Haemoglobin 
Inputs")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end HaemoglobinParameters;

    model PlasmaParameters
      "\"input of concentration of albumin and Phosphates\""
      Physiolibrary.Types.RealIO.ConcentrationOutput ctAlb
        "\"concentration of albumin\"" annotation (Placement(transformation(
              extent={{8,74},{28,94}}), iconTransformation(extent={{102,54},{
                122,74}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctPi
        "\"concentration of phosphate\"" annotation (Placement(transformation(
              extent={{8,74},{28,94}}), iconTransformation(extent={{102,32},{
                122,52}})));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{102,-100}},
              lineColor={28,108,200},
              fillColor={170,255,85},
              fillPattern=FillPattern.Solid), Text(
              extent={{-98,102},{100,-98}},
              lineColor={28,108,200},
              fillColor={128,255,0},
              fillPattern=FillPattern.Solid,
              textString="Plasma
Inputs")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end PlasmaParameters;

    model AthmosphereParameters
      "\"input of athmospheric pressure, fraction concentrations of O2 anc CO2\""
      Physiolibrary.Types.RealIO.ConcentrationOutput ctHb
        "\"concentration of haemoglobin\"" annotation (Placement(transformation(
              extent={{8,74},{28,94}}), iconTransformation(extent={{102,54},{
                122,74}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cDPG
        "\"concentration of h2'3' DPG\"" annotation (Placement(transformation(
              extent={{-28,-54},{-8,-34}}), iconTransformation(extent={{102,34},
                {122,54}})));
      Physiolibrary.Types.RealIO.FractionOutput FMetHb
        "\"Fraction of methaemoglobin\"" annotation (Placement(transformation(
              extent={{18,-78},{38,-58}}), iconTransformation(extent={{102,14},
                {122,34}})));
      Physiolibrary.Types.RealIO.FractionOutput FHbF
        "\"Fraction of fetal haemoglobin\"" annotation (Placement(
            transformation(extent={{30,32},{50,52}}), iconTransformation(extent=
               {{102,-6},{122,14}})));
      Physiolibrary.Types.RealIO.FractionOutput FCOHb
        "\"Fraction of fetal carboxyhaemoglobin\"" annotation (Placement(
            transformation(extent={{58,-34},{78,-14}}), iconTransformation(
              extent={{102,-26},{122,-6}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb_input(k=8.4)
        annotation (Placement(transformation(extent={{-63,70},{-32,96}})));
      Physiolibrary.Types.Constants.ConcentrationConst cDPG_input(k=5)
        annotation (Placement(transformation(extent={{-78,-56},{-55,-36}})));
      Physiolibrary.Types.Constants.FractionConst fMetHb_input(k=0.005)
        annotation (Placement(transformation(extent={{-37,-84},{-8,-58}})));
      Physiolibrary.Types.Constants.FractionConst fCOHb_input(k=0.005)
        annotation (Placement(transformation(extent={{9,-38},{38,-12}})));
      Physiolibrary.Types.Constants.FractionConst fHbF_input(k=0.005)
        annotation (Placement(transformation(extent={{-26,28},{4,50}})));
    equation
      connect(ctHb_input.y, ctHb) annotation (Line(points={{-28.125,83},{
              -8.0625,83},{-8.0625,84},{18,84}}, color={0,0,127}));
      connect(cDPG_input.y, cDPG) annotation (Line(points={{-52.125,-46},{-40,
              -46},{-40,-44},{-18,-44}}, color={0,0,127}));
      connect(fHbF_input.y, FHbF) annotation (Line(points={{7.75,39},{24,39},{
              24,42},{40,42}}, color={0,0,127}));
      connect(FMetHb, FMetHb)
        annotation (Line(points={{28,-68},{28,-68}}, color={0,0,127}));
      connect(FMetHb, fMetHb_input.y) annotation (Line(points={{28,-68},{6,-68},
              {6,-71},{-4.375,-71}}, color={0,0,127}));
      connect(fCOHb_input.y, FCOHb) annotation (Line(points={{41.625,-25},{
              50.8125,-25},{50.8125,-24},{68,-24}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{102,-100}},
              lineColor={28,108,200},
              fillColor={170,255,85},
              fillPattern=FillPattern.Solid), Text(
              extent={{-98,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={128,255,0},
              fillPattern=FillPattern.Solid,
              textString="Haemoglobin 
Inputs")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end AthmosphereParameters;

    model BodyTemperature "\"input ob body temperature\""
      Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
        annotation (Placement(transformation(extent={{-19,-2},{8,24}})));
      Physiolibrary.Types.RealIO.TemperatureOutput T annotation (Placement(
            transformation(extent={{32,2},{52,22}}), iconTransformation(extent=
                {{102,2},{122,22}})));
    equation
      connect(temperature.y, T) annotation (Line(points={{11.375,11},{23.6875,
              11},{23.6875,12},{42,12}}, color={0,0,127}));
      connect(T, T) annotation (Line(points={{42,12},{80,12},{80,-8},{118,-8},{
              118,12},{42,12}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{102,-100}},
              lineColor={28,108,200},
              fillColor={170,255,85},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,100},{98,-100}},
              lineColor={28,108,200},
              fillColor={128,255,0},
              fillPattern=FillPattern.Solid,
              textString="Body 
Temperature")}),     Diagram(coordinateSystem(preserveAspectRatio=false)));
    end BodyTemperature;
  end Inputs;

  package PulsatileCirculation
    model HemodynamicsSmith
          extends Cardiovascular.Icons.Runnable_Shallow;
      import Physiolibrary.Hydraulic.Components.*;
    //  Physiolibrary.Types.Volume leftVentricleInitVol = ventricularInteraction.rightVentricle.ventricle.volume_start;
        parameter Physiolibrary.Types.Concentration arterialO2_start = 8.28362;
        parameter Physiolibrary.Types.Concentration arterialCO2_start=22.6;
        parameter Physiolibrary.Types.Concentration venousO2_start = 6.11;
        parameter Physiolibrary.Types.Concentration venousCO2_start=24.6;

    Package.BloodElasticVesselElastance aorta(
        ZeroPressureVolume=0,
        O2_concentration=arterialO2_start,
        volume_start=0.0001241,
        CO2_concentration=arterialCO2_start,
        Elastance=92165766.41999) annotation (Placement(transformation(extent={{-156,
                -40},{-136,-20}})));
    Package.BloodElasticVesselElastance venaCava(
        ZeroPressureVolume=0,
        Elastance(displayUnit="mmHg/ml") = 786602.0857485,
        volume_start=0.0002952,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start)
        annotation (Placement(transformation(extent={{-152,22},{-132,42}})));
      Package.BloodValve aorticValve(Pknee=0, _Ron(displayUnit=
              "(mmHg.s)/ml") = 2399802.97347)
        annotation (Placement(transformation(extent={{-106,-40},{-126,-20}})));
      Package.BloodResistor
               Rsys(Resistance(displayUnit="(mmHg.s)/ml") = 145054757.50752)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-170,-18})));
      Package.BloodValve   tricuspidValve(Pknee=0, _Ron(displayUnit=
              "(mmHg.s)/ml") = 3159740.5817355)
        annotation (Placement(transformation(extent={{-92,22},{-72,42}})));
      Package.BloodInertia Lav(I(displayUnit="mmHg.s2/ml") = 16250.665802014,
          volumeFlow_start(displayUnit="m3/s") = -1.4e-8) annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-84,-30})));
      Package.BloodInertia
              Ltc(I(displayUnit="mmHg.s2/ml") = 10678.18997523,
          volumeFlow_start(displayUnit="m3/s") = 0.0001372)
        annotation (Placement(transformation(extent={{-122,22},{-102,42}})));
      Package.BloodInertia
              Lpv(I(displayUnit="mmHg.s2/ml") = 19822.372560862, volumeFlow_start(
            displayUnit="m3/s") = -1.9e-9)
        annotation (Placement(transformation(extent={{140,34},{160,54}})));
      Package.BloodValve pulmonaryValve(Pknee=0, _Ron(displayUnit="(mmHg.s)/ml") = 733273.1307825)
        annotation (Placement(transformation(extent={{172,34},{192,54}})));
        Package.BloodElasticVesselElastance pulmonaryArteries(
        ZeroPressureVolume=0,
        useExternalPressureInput=true,
        Elastance(displayUnit="Pa/m3") = 49195960.956135,
        volume_start=3.904e-5,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start)
        annotation (Placement(transformation(extent={{202,34},{222,54}})));
      Package.BloodResistor Rpul(Resistance(displayUnit="(mmHg.s)/ml") = 20691634.526808)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={250,30})));
    Package.BloodElasticVesselElastance pulmonaryVeins(
        ZeroPressureVolume=0,
        useExternalPressureInput=true,
        Elastance(displayUnit="mmHg/ml") = 973253.4281295,
        O2_concentration=arterialO2_start,
        volume_start=0.0008269,
        CO2_concentration=arterialCO2_start,
        BEox_concentration=0)
        annotation (Placement(transformation(extent={{222,-40},{202,-20}})));
      Package.BloodValve mitralValve(Pknee=0, _Ron(displayUnit="(mmHg.s)/ml") = 2106493.721157)
        annotation (Placement(transformation(extent={{158,-40},{138,-20}})));
        Package.BloodInertia Lmt(I(displayUnit="mmHg.s2/ml") = 10261.557514558,
          volumeFlow_start(displayUnit="m3/s") = 0.0001141) annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={182,-30})));
      Physiolibrary.Types.Constants.PressureConst IntraThoracicPressure(k=-533.28954966)
        annotation (Placement(transformation(extent={{70,12},{82,20}})));
      Package.BloodPort_in_Extension
                             bloodPort_in_Extension
        annotation (Placement(transformation(extent={{-58,54},{-38,34}})));
      Physiolibrary.Chemical.Components.Substance rightVentricleO2(
          useNormalizedVolume=false, solute_start=venousO2_start*104.2e-6)
        annotation (Placement(transformation(extent={{16,98},{36,118}})));
      Physiolibrary.Chemical.Components.Substance rightVentricleCO2(
          useNormalizedVolume=false, solute_start=venousCO2_start*104.2e-6)
        annotation (Placement(transformation(extent={{16,74},{36,94}})));
      Physiolibrary.Chemical.Components.Substance BEox(useNormalizedVolume=false,
          solute_start=0)
        annotation (Placement(transformation(extent={{16,50},{36,70}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure
        annotation (Placement(transformation(extent={{-14,23},{8,45}})));
      Physiolibrary.Chemical.Components.Stream O2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-16,98},{4,118}})));
      Physiolibrary.Chemical.Components.Stream CO2flow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-16,74},{4,94}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-14,48},{6,68}})));
      Physiolibrary.Chemical.Components.Stream O2flow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{58,98},{78,118}})));
      Physiolibrary.Chemical.Components.Stream CO2flow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{58,74},{78,94}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow1(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{58,50},{78,70}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure3
        annotation (Placement(transformation(extent={{64,23},{86,45}})));
      Package.BloodPort_out_Extension
                              bloodPort_out_Extension
        annotation (Placement(transformation(extent={{94,54},{114,34}})));
      Cardiovascular.Model.Smith2004.Parts.VentricularInteraction
        ventricularInteraction
        annotation (Placement(transformation(extent={{20,-14},{60,26}})));
      Package.BloodPort_in_Extension
                             bloodPort_in_Extension1
        annotation (Placement(transformation(extent={{-54,-40},{-34,-20}})));
      Physiolibrary.Chemical.Components.Substance leftVentricleO2(
          useNormalizedVolume=false, solute_start=arterialO2_start*104.2e-6)
        annotation (Placement(transformation(extent={{42,-62},{22,-42}})));
      Physiolibrary.Chemical.Components.Substance leftVentricleCO2(
          useNormalizedVolume=false, solute_start=arterialCO2_start*104.2e-6)
        annotation (Placement(transformation(extent={{42,-86},{22,-66}})));
      Physiolibrary.Chemical.Components.Substance BEox1(useNormalizedVolume=false,
          solute_start=0)
        annotation (Placement(transformation(extent={{42,-110},{22,-90}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure1
        annotation (Placement(transformation(extent={{22,-9},{0,-31}})));
      Physiolibrary.Chemical.Components.Stream O2flow2(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{10,-62},{-10,-42}})));
      Physiolibrary.Chemical.Components.Stream CO2flow2(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{10,-86},{-10,-66}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow2(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{12,-110},{-8,-90}})));
      Physiolibrary.Chemical.Components.Stream O2flow3(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{74,-62},{54,-42}})));
      Physiolibrary.Chemical.Components.Stream CO2flow3(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{74,-86},{54,-66}})));
      Physiolibrary.Chemical.Components.Stream BEoxflow3(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{74,-110},{54,-90}})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure2
        annotation (Placement(transformation(extent={{80,-9},{58,-31}})));
      Package.BloodPort_out_Extension
                              bloodPort_out_Extension1
        annotation (Placement(transformation(extent={{88,-40},{108,-20}})));
      Physiolibrary.Types.Constants.FrequencyConst HR(k=1.2)
        annotation (Placement(transformation(extent={{-18,0},{-2,14}})));
      Package.junction_T junction_T(useO2PortInput=true, useCO2PortInput=true)
        annotation (Placement(transformation(extent={{10,-10},{-10,10}},
            rotation=270,
            origin={-170,10})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2_MetabolicProduction(
          SoluteFlow=0.00016666666666667)
        annotation (Placement(transformation(extent={{-124,-12},{-144,8}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
        O2_MetabolicConsumption(SoluteFlow=0.00018333333333333)
        annotation (Placement(transformation(extent={{-144,0},{-124,20}})));
      Package.AlveolocapillaryUnit alveolocapillaryUnit(BufferO2(solute_start=
              8e-12), BufferCO2(solute_start=2e-11))
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=270,
            origin={244,-2})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit="ml/min")=
             8.19588e-5)
        annotation (Placement(transformation(extent={{221,2},{229,8}})));
      inner Package.ModelSettings modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-200,100},{-180,120}})));
    equation
      connect(aorticValve.bloodPort_in, Lav.bloodPort_out) annotation (Line(
          points={{-106.2,-30},{-93,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(aorta.bloodPort_out, aorticValve.bloodPort_out) annotation (Line(
          points={{-136,-30},{-126,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(aorta.bloodPort_in, Rsys.bloodPort_in) annotation (Line(
          points={{-155.8,-30},{-170,-30},{-170,-27}},
          color={28,108,200},
          thickness=0.5));
      connect(venaCava.bloodPort_out, Ltc.bloodPort_in) annotation (Line(
          points={{-132,32},{-126,32},{-121,32}},
          color={28,108,200},
          thickness=0.5));
      connect(Ltc.bloodPort_out, tricuspidValve.bloodPort_in) annotation (Line(
          points={{-103,32},{-91.8,32}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVeins.externalPressure,IntraThoracicPressure. y)
        annotation (Line(
          points={{204,-22},{204,16},{83.5,16}},
          color={0,190,190},
          smooth=Smooth.None));
      connect(IntraThoracicPressure.y,pulmonaryArteries. externalPressure)
        annotation (Line(points={{83.5,16},{204,16},{204,52},{220,52}},
            color={0,0,127}));
      connect(pulmonaryArteries.bloodPort_out,Rpul. bloodPort_in) annotation (
          Line(
          points={{222,44},{250,44},{250,39}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_in,pulmonaryValve. bloodPort_out)
        annotation (Line(
          points={{202.2,44},{192,44}},
          color={28,108,200},
          thickness=0.5));
      connect(Lpv.bloodPort_out,pulmonaryValve. bloodPort_in) annotation (Line(
          points={{159,44},{172.2,44}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVeins.bloodPort_out,Lmt. bloodPort_in) annotation (Line(
          points={{202,-30},{191,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(mitralValve.bloodPort_in,Lmt. bloodPort_out) annotation (Line(
          points={{157.8,-30},{173,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodFlow,flowMeasure. q_in) annotation (
          Line(
          points={{-38,34},{-14,34}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_in_Extension.O2,O2flow. q_in) annotation (Line(
          points={{-38,44},{-38,108},{-16,108}},
          color={107,45,134},
          thickness=1));
      connect(O2flow.q_out, rightVentricleO2.q_out) annotation (Line(
          points={{4,108},{26,108}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension.CO2,CO2flow. q_in) annotation (Line(
          points={{-38,48.2},{-20,48.2},{-20,84},{-16,84}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow.q_out, rightVentricleCO2.q_out) annotation (Line(
          points={{4,84},{26,84}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_out,BEox. q_out) annotation (Line(
          points={{6,58},{6,60},{26,60}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow.q_in,bloodPort_in_Extension. BEox) annotation (Line(
          points={{-14,58},{-22,58},{-22,52},{-38,52}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.volumeFlow,O2flow. solutionFlow) annotation (Line(points={{-3,47.2},
              {-3,124},{-6,124},{-6,115}},             color={0,0,127}));
      connect(flowMeasure.volumeFlow,CO2flow. solutionFlow)
        annotation (Line(points={{-3,47.2},{-3,91},{-6,91}},    color={0,0,127}));
      connect(flowMeasure.volumeFlow,BEoxflow. solutionFlow)
        annotation (Line(points={{-3,47.2},{-3,65},{-4,65}},    color={0,0,127}));
      connect(rightVentricleO2.q_out, O2flow1.q_in) annotation (Line(
          points={{26,108},{58,108}},
          color={107,45,134},
          thickness=1));
      connect(rightVentricleCO2.q_out, CO2flow1.q_in) annotation (Line(
          points={{26,84},{58,84}},
          color={107,45,134},
          thickness=1));
      connect(BEox.q_out,BEoxflow1. q_in) annotation (Line(
          points={{26,60},{58,60}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.q_out,flowMeasure3. q_in) annotation (Line(
          points={{8,34},{64,34}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure3.volumeFlow,CO2flow1. solutionFlow) annotation (Line(
            points={{75,47.2},{75,90.4},{68,90.4},{68,91}},    color={0,0,127}));
      connect(flowMeasure3.volumeFlow,BEoxflow1. solutionFlow) annotation (Line(
            points={{75,47.2},{75,67.4},{68,67.4},{68,67}},    color={0,0,127}));
      connect(flowMeasure3.q_out,bloodPort_out_Extension. bloodFlow)
        annotation (Line(
          points={{86,34},{94,34}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_out_Extension.O2,O2flow1. q_out) annotation (Line(
          points={{94,44},{94,108},{78,108}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.CO2,CO2flow1. q_out) annotation (Line(
          points={{94,48},{94,84},{78,84}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.BEox,BEoxflow1. q_out) annotation (Line(
          points={{94,52},{94,60},{78,60}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure1.volumeFlow, O2flow2.solutionFlow)
        annotation (Line(points={{11,-33.2},{11,-45},{0,-45}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, CO2flow2.solutionFlow)
        annotation (Line(points={{11,-33.2},{11,-69},{0,-69}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, BEoxflow2.solutionFlow)
        annotation (Line(points={{11,-33.2},{11,-93},{2,-93}}, color={0,0,127}));
      connect(flowMeasure2.volumeFlow,O2flow3. solutionFlow) annotation (Line(
            points={{69,-33.2},{69,-45},{64,-45}},             color={0,0,127}));
      connect(flowMeasure2.volumeFlow,CO2flow3. solutionFlow) annotation (Line(
            points={{69,-33.2},{69,-69},{64,-69}},             color={0,0,127}));
      connect(flowMeasure2.volumeFlow,BEoxflow3. solutionFlow) annotation (Line(
            points={{69,-33.2},{69,-93},{64,-93}},             color={0,0,127}));
      connect(O2flow3.q_in, bloodPort_out_Extension1.O2) annotation (Line(
          points={{74,-52},{80,-52},{80,-30},{88,-30}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow3.q_in, bloodPort_out_Extension1.CO2) annotation (Line(
          points={{74,-76},{82,-76},{82,-34},{88,-34}},
          color={107,45,134},
          thickness=1));
      connect(BEoxflow3.q_in, bloodPort_out_Extension1.BEox) annotation (Line(
          points={{74,-100},{84,-100},{84,-38},{88,-38}},
          color={107,45,134},
          thickness=1));
      connect(leftVentricleO2.q_out, O2flow3.q_out) annotation (Line(
          points={{32,-52},{54,-52}},
          color={107,45,134},
          thickness=1));
      connect(leftVentricleCO2.q_out, CO2flow3.q_out) annotation (Line(
          points={{32,-76},{54,-76}},
          color={107,45,134},
          thickness=1));
      connect(BEox1.q_out, BEoxflow3.q_out) annotation (Line(
          points={{32,-100},{54,-100}},
          color={107,45,134},
          thickness=1));
      connect(BEox1.q_out, BEoxflow2.q_in) annotation (Line(
          points={{32,-100},{12,-100}},
          color={107,45,134},
          thickness=1));
      connect(CO2flow2.q_in, leftVentricleCO2.q_out) annotation (Line(
          points={{10,-76},{32,-76}},
          color={107,45,134},
          thickness=1));
      connect(O2flow2.q_in, leftVentricleO2.q_out) annotation (Line(
          points={{10,-52},{32,-52}},
          color={107,45,134},
          thickness=1));
      connect(O2flow2.q_out, bloodPort_in_Extension1.O2) annotation (Line(
          points={{-10,-52},{-16,-52},{-16,-30},{-34,-30}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension1.CO2, CO2flow2.q_out) annotation (Line(
          points={{-34,-34.2},{-26,-34.2},{-26,-34},{-18,-34},{-18,-76},{-10,-76}},
          color={107,45,134},
          thickness=1));

      connect(bloodPort_in_Extension1.BEox, BEoxflow2.q_out) annotation (Line(
          points={{-34,-38},{-22,-38},{-22,-100},{-8,-100}},
          color={107,45,134},
          thickness=1));
      connect(ventricularInteraction.rvflow, flowMeasure3.q_in) annotation (Line(
          points={{40,26},{40,34},{64,34}},
          color={0,0,0},
          thickness=1));
      connect(Lav.bloodPort_in, bloodPort_in_Extension1.bloodPort_in) annotation (
          Line(
          points={{-75,-30},{-54,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(tricuspidValve.bloodPort_out, bloodPort_in_Extension.bloodPort_in)
        annotation (Line(
          points={{-72,32},{-66,32},{-66,44},{-58,44}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_out, Lpv.bloodPort_in) annotation (
          Line(
          points={{114,44},{141,44}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension1.bloodPort_out, mitralValve.bloodPort_out)
        annotation (Line(
          points={{108,-30},{138,-30}},
          color={28,108,200},
          thickness=0.5));
      connect(ventricularInteraction.leftVentricleVolume, leftVentricleO2.solutionVolume)
        annotation (Line(points={{52,-12},{52,-48},{36,-48}}, color={0,0,127}));
      connect(ventricularInteraction.leftVentricleVolume, leftVentricleCO2.solutionVolume)
        annotation (Line(points={{52,-12},{52,-72},{36,-72}}, color={0,0,127}));
      connect(ventricularInteraction.leftVentricleVolume, BEox1.solutionVolume)
        annotation (Line(points={{52,-12},{52,-94},{36,-94},{36,-96}}, color={0,0,127}));
      connect(flowMeasure2.q_in, bloodPort_out_Extension1.bloodFlow) annotation (
          Line(
          points={{80,-20},{88,-20}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure2.q_out, ventricularInteraction.lvflow) annotation (Line(
          points={{58,-20},{40,-20},{40,-14}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure1.q_out, bloodPort_in_Extension1.bloodFlow) annotation (
          Line(
          points={{0,-20},{-34,-20}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure1.q_in, flowMeasure2.q_out) annotation (Line(
          points={{22,-20},{58,-20}},
          color={0,0,0},
          thickness=1));
      connect(ventricularInteraction.rightVentricleVolume, BEox.solutionVolume)
        annotation (Line(points={{28,24},{28,64},{22,64}}, color={0,0,127}));
      connect(ventricularInteraction.rightVentricleVolume, rightVentricleCO2.solutionVolume)
        annotation (Line(points={{28,24},{28,88},{22,88}}, color={0,0,127}));
      connect(ventricularInteraction.rightVentricleVolume, rightVentricleO2.solutionVolume)
        annotation (Line(points={{28,24},{28,112},{22,112}}, color={0,0,127}));
      connect(flowMeasure3.volumeFlow, O2flow1.solutionFlow) annotation (Line(
            points={{75,47.2},{75,115},{68,115}}, color={0,0,127}));
      connect(ventricularInteraction.frequency, HR.y) annotation (Line(points={
              {24,7.6},{12,7.6},{12,7},{0,7}}, color={0,0,127}));
      connect(IntraThoracicPressure.y, ventricularInteraction.Pth) annotation (
          Line(points={{83.5,16},{92,16},{92,7.6},{56,7.6}}, color={0,0,127}));
      connect(O2_MetabolicConsumption.q_in,junction_T. port_O2) annotation (
          Line(
          points={{-144,10},{-160,10},{-160,8},{-170,8},{-170,3.8}},
          color={107,45,134},
          thickness=1));
      connect(junction_T.port_CO2,CO2_MetabolicProduction. q_out) annotation (
          Line(
          points={{-170,7.4},{-170,4},{-160,4},{-160,-2},{-144,-2}},
          color={107,45,134},
          thickness=1));
      connect(venaCava.bloodPort_in, junction_T.bloodPort_out) annotation (Line(
          points={{-151.8,32},{-170,32},{-170,20}},
          color={28,108,200},
          thickness=0.5));
      connect(Rsys.bloodPort_out, junction_T.bloodPort_in) annotation (Line(
          points={{-170,-9},{-170,0.2}},
          color={28,108,200},
          thickness=0.5));
      connect(VAi.y,alveolocapillaryUnit. VAi) annotation (Line(points={{230,5},{230,
              5.7},{243.3,5.7}},          color={0,0,127}));
      connect(pulmonaryVeins.bloodPort_in, alveolocapillaryUnit.bloodPort_out)
        annotation (Line(
          points={{221.8,-30},{250,-30},{250.2,-4.4}},
          color={28,108,200},
          thickness=0.5));
      connect(alveolocapillaryUnit.bloodPort_in, Rpul.bloodPort_out) annotation (
          Line(
          points={{250,1.4},{250,21}},
          color={28,108,200},
          thickness=0.5));
      annotation (
        Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-200,-120},{280,
                120}})),
        Icon(coordinateSystem(extent={{-200,-120},{280,120}})),
        Documentation(info="<html>
<p>Cardiovascular model implemented per description of Smith et al.</p>
<p>[12] B. W. Smith, J. G. Chase, R. I. Nokes, G. M. Shaw, G. Wake, Minimal Haemodynamic System Model Including Ventricular Interaction and Valve Dynamics., Medical Engineering &AMP; Physics 26 (2) (2004) 131&ndash;139. doi:10.1016/j.medengphy.2003.10.001.</p>
<p>[13] CellML implementation at URL:  http://models.cellml.org/exposure/9d046663ba5cac5c8a61ac146183614b/smith_chase_nokes_shaw_wake_2004.cellml/view</p>
</html>"),
        experiment(StopTime=5));
    end HemodynamicsSmith;

    model HemodynamicsMeurs
      extends Physiolibrary.Icons.CardioVascular;
        parameter Physiolibrary.Types.Concentration arterialO2_start = 8.28362;
        parameter Physiolibrary.Types.Concentration arterialCO2_start=22.6;
        parameter Physiolibrary.Types.Concentration venousO2_start = 6.11;
        parameter Physiolibrary.Types.Concentration venousCO2_start=24.6;
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance LAtrialElastance(
        Tav(displayUnit="s"),
        EMIN=15998686.4898,
        EMAX=37330268.4762)
        annotation (Placement(transformation(extent={{56,92},{94,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance LVentricularElastance(EMIN=
            11999014.86735, EMAX=533289549.66)
        annotation (Placement(transformation(extent={{122,92},{158,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance RAtrialElastance(EMIN=
            6666119.37075, EMAX=19998358.11225)
        annotation (Placement(transformation(extent={{-244,86},{-206,118}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance RVentricularElastance(EMIN=
            7599376.082655, EMAX=65327969.83335)
        annotation (Placement(transformation(extent={{-180,88},{-150,122}})));
      replaceable Physiolibrary.Types.Constants.FrequencyConst HeartRate(k(displayUnit = "1/min") = 1.2) annotation(Placement(visible = true, transformation(origin={-241,
                148.5},                                                                                                    extent = {{-11, -6.5}, {11, 6.5}}, rotation = 0)));
      Package.BloodElasticVesselElastance intrathoracicArteries(
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        volume_start=0.000204,
        O2_concentration=arterialO2_start,
        CO2_concentration=arterialCO2_start,
        Elastance=190651014.00345)
                               annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={188,0})));
      Package.BloodInertia aorticFlowInertia(I(displayUnit="mmHg.s2/ml")=
          93325.6711905, volumeFlow_start(displayUnit="ml/min") = 5e-9)
                         annotation (
          Placement(transformation(
            extent={{12,-8},{-12,8}},
            rotation=0,
            origin={146,0})));
      Package.BloodResistor pulmonaryVenousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{10,50},{30,70}})));
      Package.BloodValve AorticValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{196,30},{216,50}})));
      Package.BloodResistor extrathoracicArterialResistance(Resistance(
            displayUnit="(mmHg.s)/ml") = 7999343.2449) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={108,0})));
      Package.BloodElasticVesselElastance extrathoracicArteries(
        ExternalPressure=0,
        ZeroPressureVolume=0.00037,
        volume_start=0.000526,
        O2_concentration=arterialO2_start,
        CO2_concentration=arterialCO2_start,
        Elastance=74127247.40274)
                               annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={66,0})));
      Package.BloodResistor systemicArterioalResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 106657909.932) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={32,0})));
      Package.BloodElasticVesselElastance systemicTissues(
        ExternalPressure=0,
        ZeroPressureVolume=0.000185,
        volume_start=0.000283,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start,
        Elastance=34930465.50273)
                               annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-30,0})));
      Package.BloodResistor smallVenuleResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 26664477.483) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-58,0})));
      Package.BloodElasticVesselElastance extrathoracicVeins(
        ExternalPressure=0,
        ZeroPressureVolume=0.001,
        volume_start=0.00153,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start,
        Elastance=2253148.3473135)
                              annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-100,0})));
      Package.BloodResistor venousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 11999014.86735) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-140,0})));
      Package.BloodElasticVesselElastance intrathoracicVeins(
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        volume_start=0.00148,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start,
        Elastance=2426467.450953)
                              annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-182,0})));
      Package.BloodResistor centralVenousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 399967.162245) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-236,0})));
      Package.BloodValve TricuspidValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{-218,51},{-194,29}})));
      Package.BloodValve PulmonaryValve(_Ron(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{-140,30},{-120,50}})));
      Package.BloodElasticVesselElastance pulmonaryArteries(
        ZeroPressureVolume=5e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000106,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start,
        Elastance=31064116.267695)
        annotation (Placement(transformation(extent={{-94,50},{-74,70}})));
      Package.BloodResistor pulmonaryResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 14665462.61565)
        annotation (Placement(transformation(extent={{-62,50},{-42,70}})));
      Package.BloodElasticVesselElastance pulmonaryVeins(
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        volume_start=0.000518,
        O2_concentration=arterialO2_start,
        CO2_concentration=arterialCO2_start,
        Elastance=6066168.6273825)
        annotation (Placement(transformation(extent={{-20,50},{0,70}})));
      Package.BloodValve MitralValve(
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245,
        _Goff=0,
        Pknee=0)
        annotation (Placement(transformation(extent={{100,30},{120,50}})));
      Package.BloodElasticVesselCompliance      LeftVentricle(
        useComplianceInput=true,
        ZeroPressureVolume=6e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000144,
        O2_concentration=arterialO2_start,
        CO2_concentration=arterialCO2_start)
        annotation (Placement(transformation(extent={{160,30},{180,50}})));
      Package.BloodElasticVesselCompliance      RightAtrium(
        useComplianceInput=true,
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000135,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start)
        annotation (Placement(transformation(extent={{-252,30},{-232,50}})));
      Package.BloodElasticVesselCompliance      RightVentricle(
        useComplianceInput=true,
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000131,
        O2_concentration=venousO2_start,
        CO2_concentration=venousCO2_start)
        annotation (Placement(transformation(extent={{-178,30},{-158,50}})));
      Package.BloodElasticVesselCompliance      leftAtrium(
        useComplianceInput=true,
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        volume_start=9.31e-5,
        O2_concentration=arterialO2_start,
        CO2_concentration=arterialCO2_start)
        annotation (Placement(transformation(extent={{66,30},{86,50}})));
      Package.AlveolocapillaryUnit alveolocapillaryUnit(BufferO2(solute_start=8e-12),
          BufferCO2(solute_start=2e-11))
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-30,54})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit="ml/min")=
             8.19588e-5)
        annotation (Placement(transformation(extent={{-53,38},{-45,44}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePump CO2_MetabolicProduction(
          SoluteFlow=0.00016666666666667)
        annotation (Placement(transformation(extent={{32,26},{12,46}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutePumpOut
        O2_MetabolicConsumption(SoluteFlow=0.00018333333333333)
        annotation (Placement(transformation(extent={{12,10},{32,30}})));
      Package.junction_T junction_T(useO2PortInput=true, useCO2PortInput=true)
        annotation (Placement(transformation(extent={{10,-10},{-10,10}},
            rotation=0,
            origin={-2,0})));
      inner Package.ModelSettings modelSettings
        annotation (Placement(transformation(extent={{-280,140},{-260,160}})));
    equation
      connect(HeartRate.y,RAtrialElastance. HR) annotation(Line(points={{-227.25,148.5},
              {-225,148.5},{-225,114.8}},                                                                                  color = {0, 0, 127}, smooth = Smooth.None));
      connect(RVentricularElastance.HR, HeartRate.y) annotation(Line(points={{-165,118.6},
              {-165,148.5},{-227.25,148.5}},                                                                                    color = {0, 0, 127}, smooth = Smooth.None));
      connect(LAtrialElastance.HR, HeartRate.y) annotation (Line(
          points={{75,120.8},{75,148.5},{-227.25,148.5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(LVentricularElastance.HR, HeartRate.y) annotation (Line(
          points={{140,120.8},{140,148.5},{-227.25,148.5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(PulmonaryValve.bloodPort_out, pulmonaryArteries.bloodPort_in)
        annotation (Line(
          points={{-120,40},{-106,40},{-106,60},{-93.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_out, LeftVentricle.bloodPort_in)
        annotation (Line(
          points={{120,40},{160.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_out, leftAtrium.bloodPort_in)
        annotation (Line(
          points={{29,60},{48,60},{48,40},{66.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(TricuspidValve.bloodPort_out, RightVentricle.bloodPort_in)
        annotation (Line(
          points={{-194,40},{-177.8,40},{-177.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_out, pulmonaryResistance.bloodPort_in)
        annotation (Line(
          points={{-74,60},{-61,60}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_in, pulmonaryVeins.bloodPort_out)
        annotation (Line(
          points={{11,60},{0,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_in, leftAtrium.bloodPort_out) annotation (
          Line(
          points={{100.2,40},{86,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_in, LeftVentricle.bloodPort_out)
        annotation (Line(
          points={{196.2,40},{180,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_out, intrathoracicArteries.bloodPort_in)
        annotation (Line(
          points={{216,40},{230,40},{230,-1.77636e-15},{197.8,-1.77636e-15}},
          color={28,108,200},
          thickness=0.5));
      connect(aorticFlowInertia.bloodPort_in, intrathoracicArteries.bloodPort_out)
        annotation (Line(
          points={{156.8,0},{168,0},{168,6.66134e-16},{178,6.66134e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArterialResistance.bloodPort_in, aorticFlowInertia.bloodPort_out)
        annotation (Line(
          points={{117,-1.55431e-15},{126,-1.55431e-15},{126,0},{135.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArteries.bloodPort_in,
        extrathoracicArterialResistance.bloodPort_out) annotation (Line(
          points={{75.8,-1.77636e-15},{88,-1.77636e-15},{88,0},{99,0}},
          color={28,108,200},
          thickness=0.5));
      connect(systemicArterioalResistance.bloodPort_in, extrathoracicArteries.bloodPort_out)
        annotation (Line(
          points={{41,-1.55431e-15},{48,-1.55431e-15},{48,7.21645e-16},{56,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(smallVenuleResistance.bloodPort_in, systemicTissues.bloodPort_out)
        annotation (Line(
          points={{-49,0},{-42,0},{-42,6.66134e-16},{-40,6.66134e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicVeins.bloodPort_in, smallVenuleResistance.bloodPort_out)
        annotation (Line(
          points={{-90.2,-1.72085e-15},{-78,-1.72085e-15},{-78,5.55112e-16},{-67,
              5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(venousResistance.bloodPort_in, extrathoracicVeins.bloodPort_out)
        annotation (Line(
          points={{-131,-1.55431e-15},{-120,-1.55431e-15},{-120,7.21645e-16},{-110,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(intrathoracicVeins.bloodPort_in, venousResistance.bloodPort_out)
        annotation (Line(
          points={{-172.2,-1.77636e-15},{-160,-1.77636e-15},{-160,4.44089e-16},
              {-149,4.44089e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_in, intrathoracicVeins.bloodPort_out)
        annotation (Line(
          points={{-227,-1.77636e-15},{-200,-1.77636e-15},{-200,0},{-192,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RightVentricle.bloodPort_out, PulmonaryValve.bloodPort_in)
        annotation (Line(
          points={{-158,40},{-139.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_out, RightAtrium.bloodPort_in)
        annotation (Line(
          points={{-245,4.44089e-16},{-256,4.44089e-16},{-256,0},{-268,0},{-268,
              40},{-251.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.bloodPort_out, TricuspidValve.bloodPort_in)
        annotation (Line(
          points={{-232,40},{-217.76,40}},
          color={28,108,200},
          thickness=0.5));
      connect(leftAtrium.compliance, LAtrialElastance.Ct) annotation (Line(
            points={{76,48},{78,48},{78,70},{108,70},{108,107.84},{97.61,107.84}},
            color={0,0,127}));
      connect(LVentricularElastance.Ct, LeftVentricle.compliance) annotation (
          Line(points={{161.42,111.68},{170,111.68},{170,48}}, color={0,0,127}));
      connect(RightVentricle.compliance, RVentricularElastance.Ct) annotation (
          Line(points={{-168,48},{-168,76},{-130,76},{-130,108.91},{-147.15,
              108.91}}, color={0,0,127}));
      connect(RightAtrium.compliance, RAtrialElastance.Ct) annotation (Line(
            points={{-242,48},{-242,70},{-196,70},{-196,101.84},{-202.39,101.84}},
            color={0,0,127}));
      connect(VAi.y,alveolocapillaryUnit. VAi) annotation (Line(points={{-44,41},{-44,
              53.3},{-37.7,53.3}},        color={0,0,127}));
      connect(pulmonaryResistance.bloodPort_out, alveolocapillaryUnit.bloodPort_in)
        annotation (Line(
          points={{-43,60},{-33.4,60}},
          color={28,108,200},
          thickness=0.5));
      connect(alveolocapillaryUnit.bloodPort_out, pulmonaryVeins.bloodPort_in)
        annotation (Line(
          points={{-27.6,60.2},{-23.7,60.2},{-23.7,60},{-19.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(O2_MetabolicConsumption.q_in,junction_T. port_O2) annotation (
          Line(
          points={{12,20},{4,20},{4,0},{4.2,0}},
          color={107,45,134},
          thickness=1));
      connect(junction_T.port_CO2,CO2_MetabolicProduction. q_out) annotation (
          Line(
          points={{0.6,0},{0,0},{0,36},{12,36}},
          color={107,45,134},
          thickness=1));
      connect(systemicArterioalResistance.bloodPort_out, junction_T.bloodPort_in)
        annotation (Line(
          points={{23,5.55112e-16},{16,5.55112e-16},{16,0},{7.8,0}},
          color={28,108,200},
          thickness=0.5));
      connect(systemicTissues.bloodPort_in, junction_T.bloodPort_out) annotation (
          Line(
          points={{-20.2,-1.72085e-15},{-16,-1.72085e-15},{-16,0},{-12,0}},
          color={28,108,200},
          thickness=0.5));
      annotation(Diagram(coordinateSystem(extent={{-280,-20},{280,160}},       preserveAspectRatio=false)),             Icon(coordinateSystem(extent={{-280,
                -20},{280,160}},                                                                                                     preserveAspectRatio = false), graphics),
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
    end HemodynamicsMeurs;
  end PulsatileCirculation;
  annotation(uses(Physiolibrary(version="2.3.2-beta"), Modelica(version="3.2.2")));
end AcidBaseBalance;
