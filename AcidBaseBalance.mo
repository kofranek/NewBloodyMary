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

      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-106,-10},{-86,10}}), iconTransformation(
              extent={{-110,-10},{-90,10}})));

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_a bloodFlow annotation (
          Placement(transformation(extent={{90,90},{110,110}}),iconTransformation(
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
        O2_concentration = actualStream(bloodPort_a.conc[1]);
        CO2_concentration = actualStream(bloodPort_a.conc[2]);
        BEox_concentration = actualStream(bloodPort_a.conc[3]);

        O2.conc=actualStream(bloodPort_a.conc[1]);
        O2.q+actualStream(bloodPort_a.conc[1])*bloodPort_a.bloodFlow=0;
        CO2.conc=actualStream(bloodPort_a.conc[2]);
        CO2.q+actualStream(bloodPort_a.conc[2])*bloodPort_a.bloodFlow=0;
        BEox.conc=actualStream(bloodPort_a.conc[3]);
        BEox.q+actualStream(bloodPort_a.conc[3])*bloodPort_a.bloodFlow=0;

        bloodFlow.pressure=bloodPort_a.pressure;
        bloodFlow.q+bloodPort_a.bloodFlow=0
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
    end BloodPort_in_Extension;

    model BloodPort_out_Extension

      Physiolibrary.Hydraulic.Interfaces.HydraulicPort_b bloodFlow annotation (
          Placement(transformation(extent={{-94,36},{-74,56}}),iconTransformation(
              extent={{-110,90},{-90,110}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b O2 annotation (Placement(
            transformation(extent={{-98,-6},{-78,14}}), iconTransformation(extent={{-110,
                -10},{-90,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
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
        O2_concentration = actualStream(bloodPort_b.conc[1]);
        CO2_concentration = actualStream(bloodPort_b.conc[2]);
        BEox_concentration = actualStream(bloodPort_b.conc[3]);

        O2.conc=actualStream(bloodPort_b.conc[1]);
        O2.q+actualStream(bloodPort_b.conc[1])*bloodPort_b.bloodFlow=0;
        CO2.conc=actualStream(bloodPort_b.conc[2]);
        CO2.q+actualStream(bloodPort_b.conc[2])*bloodPort_b.bloodFlow=0;
        BEox.conc=actualStream(bloodPort_b.conc[3]);
        BEox.q+actualStream(bloodPort_b.conc[3])*bloodPort_b.bloodFlow=0;


        bloodFlow.pressure=bloodPort_b.pressure;
        bloodFlow.q+bloodPort_b.bloodFlow=0
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

    end BloodPort_out_Extension;

    model BloodResistor
      extends Physiolibrary.Icons.HydraulicResistor;
        parameter Physiolibrary.Types.HydraulicResistance Resistance;
      Physiolibrary.Hydraulic.Components.Resistor resistor(Resistance=
            Resistance)
        annotation (Placement(transformation(extent={{-20,0},{0,20}})));

      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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

      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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

      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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
      parameter Physiolibrary.Types.Volume ZeroPressureVolume = 0;
      parameter Physiolibrary.Types.Pressure ExternalPressure = 0;
      parameter Physiolibrary.Types.HydraulicCompliance Compliance;
      parameter Physiolibrary.Types.Volume volume_start=1e-3;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;
      parameter Physiolibrary.Types.Concentration O2_concentration = 0;
      parameter Physiolibrary.Types.Concentration CO2_concentration = 0;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.Concentration BEox_concentration = 0;//=Blood_volume_start* BEox_startConcentration;

      BloodPort_in_Extension bloodPort_a_Extension
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
      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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

    model BloodElasticVesselElastance_old
      extends AcidBaseBalance.Package.BloodElasticVesselCompliance(
          final elasticVesselCompliance(Compliance=1/Elastance));
      parameter Physiolibrary.Types.HydraulicElastance Elastance;
    end BloodElasticVesselElastance_old;

    model BloodInertia
      extends Physiolibrary.Icons.Inertance;
      parameter Physiolibrary.Types.HydraulicInertance BloodInertance;
      parameter Physiolibrary.Types.VolumeFlowRate Blood_volume_start;

      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-104,-10},{-84,10}}), iconTransformation(
              extent={{-100,-10},{-80,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{80,-10},{100,10}}), iconTransformation(
              extent={{80,-10},{100,10}})));
      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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

    model BloodElasticVesselComplianceInput_old
      extends AcidBaseBalance.Package.BloodElasticVesselElastance_old(
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
    end BloodElasticVesselComplianceInput_old;

    model Pump
      BloodPort_in bloodPort_a
        annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      BloodPort_out bloodPort_b
        annotation (Placement(transformation(extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
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
      Physiolibrary.Types.RealIO.VolumeFlowRateInput volumeflowrate annotation (
         Placement(transformation(
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

    model BloodElasticVesselElastance
      extends Physiolibrary.Icons.ElasticBalloon;
      parameter Physiolibrary.Types.Volume ZeroPressureVolume = 0;
      parameter Physiolibrary.Types.Pressure ExternalPressure = 0;
      parameter Physiolibrary.Types.HydraulicElastance Elastance;
      parameter Physiolibrary.Types.Volume volume_start=1e-3;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;
      parameter Physiolibrary.Types.Concentration O2_concentration = 0;
      parameter Physiolibrary.Types.Concentration CO2_concentration = 0;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.Concentration BEox_concentration = 0;//=Blood_volume_start* BEox_startConcentration;

      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

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
      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{72,-10},{92,10}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance
        elasticVesselElastance(
        ZeroPressureVolume=ZeroPressureVolume,
        ExternalPressure=ExternalPressure,
        volume_start=volume_start,
        useComplianceInput=false,
        Elastance=Elastance)
        annotation (Placement(transformation(extent={{16,30},{36,50}})));

    equation

      connect(bloodPort_a, bloodPort_a_Extension.bloodPort_a) annotation (Line(
          points={{-98,0},{-70,0}},
          color={28,108,200},
          thickness=0.5));
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
      connect(flowMeasure.volumeFlow, CO2flow.solutionFlow)
        annotation (Line(points={{-5,-3.2},{-5,-43},{-18,-43}}, color={0,0,127}));
      connect(flowMeasure.volumeFlow, BEoxflow.solutionFlow)
        annotation (Line(points={{-5,-3.2},{-5,-67},{-18,-67}}, color={0,0,127}));
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
      connect(flowMeasure.q_out, elasticVesselElastance.q_in) annotation (Line(
          points={{6,10},{26,10},{26,40}},
          color={0,0,0},
          thickness=1));
      connect(elasticVesselElastance.volume, O2.solutionVolume) annotation (Line(
            points={{32,30},{32,-2},{10,-2},{10,-22}}, color={0,0,127}));
      connect(CO2.solutionVolume, O2.solutionVolume) annotation (Line(points={{10,-46},
              {10,-40},{32,-40},{32,-2},{10,-2},{10,-22}}, color={0,0,127}));
      connect(BEox.solutionVolume, O2.solutionVolume) annotation (Line(points={{10,-70},
              {10,-64},{32,-64},{32,-2},{10,-2},{10,-22}}, color={0,0,127}));
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
      extends Physiolibrary.Icons.ElasticBalloon;
      parameter Physiolibrary.Types.Volume ZeroPressureVolume = 0;
      parameter Physiolibrary.Types.Pressure ExternalPressure = 0;
      parameter Physiolibrary.Types.Volume volume_start=1e-3;
     // parameter Physiolibrary.Types.Concentration O2_startConcentration;
     // parameter Physiolibrary.Types.Concentration CO2_startConcentration;
     // parameter Physiolibrary.Types.Concentration BEox_startConcentration;
      parameter Physiolibrary.Types.Concentration O2_concentration = 0;
      parameter Physiolibrary.Types.Concentration CO2_concentration = 0;//=Blood_volume_start* CO2_startConcentration;
      parameter Physiolibrary.Types.Concentration BEox_concentration = 0;//=Blood_volume_start* BEox_startConcentration;

      BloodPort_in_Extension bloodPort_a_Extension
        annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

      Physiolibrary.Hydraulic.Components.ElasticVessel elasticVesselCompliance(
        ZeroPressureVolume=ZeroPressureVolume,
        ExternalPressure=ExternalPressure,
        volume_start=volume_start,
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
      BloodPort_in bloodPort_a(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{-108,-10},{-88,10}}), iconTransformation(
              extent={{-108,-10},{-88,10}})));
      BloodPort_out bloodPort_b(numberOfSubstances=3) annotation (Placement(
            transformation(extent={{90,-10},{110,10}}), iconTransformation(
              extent={{90,-10},{110,10}})));
      BloodPort_out_Extension bloodPort_b_Extension
        annotation (Placement(transformation(extent={{72,-10},{92,10}})));
      Physiolibrary.Types.RealIO.HydraulicComplianceInput hydrauliccompliance
        annotation (Placement(transformation(extent={{-120,70},{-80,110}}),
            iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={6,98})));
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
      connect(elasticVesselCompliance.compliance, hydrauliccompliance)
        annotation (Line(points={{24,36},{24,90},{-100,90}}, color={0,0,127}));
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

    model PressureMeasure "Hydraulic pressure at port"
      extends Physiolibrary.Icons.PressureMeasure;
      Physiolibrary.Types.RealIO.PressureOutput pressure "Pressure" annotation (
          Placement(transformation(extent={{64,38},{104,78}}), iconTransformation(
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
    equation

      connect(bloodPort_in, bloodPort_in_Extension.bloodPort_a) annotation (Line(
          points={{-102,36},{-76,36},{-76,0},{-48,0}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_out_Extension.bloodPort_b, bloodPort_out) annotation (Line(
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
      connect(pressureMeasure.pressure, pressure) annotation (Line(points={{26,49},{
              48,49},{48,58},{84,58}}, color={0,0,127}));
      connect(bloodPort_out_Extension.bloodFlow, bloodPort_in_Extension.bloodFlow)
        annotation (Line(
          points={{34,12},{4,12},{4,10},{-28,10}},
          color={0,0,0},
          thickness=1));
     annotation (
        Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"));
    end PressureMeasure;
  end Package;

  package Test

    model HemodynamicsMeurs_flatNorm_comparison
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
      Package.BloodElasticVesselElastance Eitha(
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        Elastance=190651014.00345,
        volume_start=0.000204) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={188,0})));
      Package.BloodInertia inertia(BloodInertance(displayUnit="mmHg.s2/ml")=
          93325.6711905, Blood_volume_start=2.1666666666667e-5)
        annotation (Placement(transformation(extent={{12,-8},{-12,8}},
            rotation=0,
            origin={146,0})));
      Package.BloodResistor Rlain(Resistance(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{10,50},{30,70}})));
      Package.BloodValve AorticValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{196,30},{216,50}})));
      Package.BloodResistor Retha(Resistance(displayUnit="(mmHg.s)/ml")=
          7999343.2449)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={108,0})));
      Package.BloodElasticVesselElastance Eetha(
        ExternalPressure=0,
        ZeroPressureVolume=0.00037,
        Elastance=74127247.40274,
        volume_start=0.000526) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={66,0})));
      Package.BloodResistor RsartRsart(Resistance(displayUnit="(mmHg.s)/ml")=
          106657909.932)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={32,0})));
      Package.BloodElasticVesselElastance Est(
        ExternalPressure=0,
        ZeroPressureVolume=0.000185,
        Elastance=34930465.50273,
        volume_start=0.000283) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,0})));
      Package.BloodResistor Rsven(Resistance(displayUnit="(mmHg.s)/ml")=
          26664477.483)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-58,0})));
      Package.BloodElasticVesselElastance Eethv(
        ExternalPressure=0,
        ZeroPressureVolume=0.001,
        Elastance=2253148.3473135,
        volume_start=0.00153) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-100,0})));
      Package.BloodResistor Rethv(Resistance(displayUnit="(mmHg.s)/ml")=
          11999014.86735)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-140,0})));
      Package.BloodElasticVesselElastance Eithv(
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        Elastance=2426467.450953,
        volume_start=0.00148) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-182,0})));
      Package.BloodResistor Rrain(Resistance(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-236,0})));
      Package.BloodValve TricuspidValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{-218,51},{-194,29}})));
      Package.BloodValve PulmonaryValve(Blood_Ron(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{-140,30},{-120,50}})));
      Package.BloodElasticVesselElastance Epa(
        ZeroPressureVolume=5e-5,
        ExternalPressure=-533.28954966,
        Elastance=31064116.267695,
        volume_start=0.000106)
        annotation (Placement(transformation(extent={{-94,50},{-74,70}})));
      Package.BloodResistor Rpp(Resistance(displayUnit="(mmHg.s)/ml")=
          14665462.61565)
        annotation (Placement(transformation(extent={{-62,50},{-42,70}})));
      Package.BloodElasticVesselElastance Epv(
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        Elastance=6066168.6273825,
        volume_start=0.000518)
        annotation (Placement(transformation(extent={{-20,50},{0,70}})));
      Package.BloodValve MitralValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{100,30},{120,50}})));
      Package.BloodElasticVesselComplianceInput LeftVentricle(
        ZeroPressureVolume=6e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000144)
        annotation (Placement(transformation(extent={{160,30},{180,50}})));
      Package.BloodElasticVesselComplianceInput RightAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000135)
        annotation (Placement(transformation(extent={{-252,30},{-232,50}})));
      Package.BloodElasticVesselComplianceInput RightVentricle(
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000131)
        annotation (Placement(transformation(extent={{-178,30},{-158,50}})));
      Package.BloodElasticVesselComplianceInput leftAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        volume_start=9.31e-5)
        annotation (Placement(transformation(extent={{66,30},{86,50}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EpaHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000106,
        ZeroPressureVolume=5e-5,
        ExternalPressure=-533.28954966,
        Elastance=31064116.267695)
        annotation (Placement(transformation(extent={{-94,-76},{-66,-48}})));
      Physiolibrary.Hydraulic.Components.Resistor RppHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          14665462.61565)
        annotation (Placement(transformation(extent={{-56,-75},{-22,-49}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EpvHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000518,
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        Elastance=6066168.6273825)
        annotation (Placement(transformation(extent={{-10,-76},{24,-48}})));
      Physiolibrary.Hydraulic.Components.Resistor RlainHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          399967.162245)
        annotation (Placement(transformation(extent={{26,-74},{56,-50}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance LeftAtriumHydraulic(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=9.31e-5,
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{74,-110},{102,-82}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance LeftVentricleHydraulic(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000144,
        ZeroPressureVolume=6e-5,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{150,-110},{178,-82}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance AorticValveHydraulic(
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{184,-84},{208,-108}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance MitralValveHydraulic(
        useLimitationInputs=false,
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245) annotation (Placement(
            transformation(origin={127,-96}, extent={{-13,12},{13,-12}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EithaHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000204,
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        Elastance=190651014.00345)
        annotation (Placement(transformation(extent={{168,-154},{190,-132}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EethaHydraulic(
        volume_start(displayUnit="ml") = 0.000526,
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        ZeroPressureVolume=0.00037,
        Elastance=74127247.40274)
        annotation (Placement(transformation(extent={{56,-156},{82,-130}})));
      Physiolibrary.Hydraulic.Components.Inertia inertia1(I(displayUnit=
              "mmHg.s2/ml") = 93325.6711905, volumeFlow_start(displayUnit=
              "ml/min") = 2.1666666666667e-05)                                                                                                                           annotation(Placement(transformation(extent={{-11,-11},
                {11,11}},                                                                                                    rotation = 180, origin={141,-143})));
      Physiolibrary.Hydraulic.Components.Resistor RethaHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          7999343.2449) annotation (Placement(transformation(
            extent={{-11,-11},{11,11}},
            rotation=180,
            origin={101,-143})));
      Physiolibrary.Hydraulic.Components.Resistor RsartHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          106657909.932) annotation (Placement(transformation(extent={{14,-13},
                {-14,13}}, origin={24,-143})));
      Physiolibrary.Hydraulic.Components.Resistor RsvenHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          26664477.483) annotation (Placement(transformation(extent={{14,-13},{
                -14,13}}, origin={-60,-143})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EstHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000283,
        ZeroPressureVolume=0.000185,
        Elastance=34930465.50273)
        annotation (Placement(transformation(extent={{-28,-154},{-4,-132}})));
      Physiolibrary.Hydraulic.Components.Resistor RethvHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          11999014.86735) annotation (Placement(transformation(extent={{-120,
                -156},{-146,-130}})));
      Physiolibrary.Hydraulic.Components.Resistor RrainHydraulic(
          useConductanceInput=false, Resistance(displayUnit="(mmHg.s)/ml")=
          399967.162245) annotation (Placement(transformation(extent={{-208,
                -156},{-236,-130}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EithvHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.00148,
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        Elastance=2426467.450953) annotation (Placement(transformation(extent={
                {-194,-156},{-166,-130}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance EethvHydraulic(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.00153,
        ZeroPressureVolume=0.001,
        Elastance=2253148.3473135)
        annotation (Placement(transformation(extent={{-108,-156},{-82,-130}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance RightAtriumHydraulic(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000135,
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{-242,-116},{-214,-88}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance RightVentricleHydraulic(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000131,
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{-170,-118},{-140,-88}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance PulmonaryValveHydraulic(
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{-132,-90},{-106,-116}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance TricuspidValveHydraulic(
        _Goff=0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245) annotation (Placement(
            transformation(origin={-189,-102}, extent={{-13,12},{13,-12}})));
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
      connect(PulmonaryValve.bloodPort_b, Epa.bloodPort_a) annotation (Line(
          points={{-120,40},{-106,40},{-106,60},{-93.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(Rpp.bloodPort_b, Epv.bloodPort_a) annotation (Line(
          points={{-43,60},{-19.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_b, LeftVentricle.bloodPort_a) annotation (
          Line(
          points={{120,40},{160.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(Rlain.bloodPort_b, leftAtrium.bloodPort_a) annotation (Line(
          points={{29,60},{48,60},{48,40},{66.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(TricuspidValve.bloodPort_b, RightVentricle.bloodPort_a)
        annotation (Line(
          points={{-194,40},{-177.8,40},{-177.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.hydrauliccompliance, RAtrialElastance.Ct) annotation (
         Line(points={{-241.4,49.8},{-241.4,70},{-190,70},{-190,101.84},{
              -202.39,101.84}}, color={0,0,127}));
      connect(RVentricularElastance.Ct, RightVentricle.hydrauliccompliance)
        annotation (Line(points={{-147.15,108.91},{-120,108.91},{-120,66},{
              -167.4,66},{-167.4,49.8}}, color={0,0,127}));
      connect(leftAtrium.hydrauliccompliance, LAtrialElastance.Ct) annotation (
          Line(points={{76.6,49.8},{76.6,76},{106,76},{106,107.84},{97.61,
              107.84}}, color={0,0,127}));
      connect(LeftVentricle.hydrauliccompliance, LVentricularElastance.Ct)
        annotation (Line(points={{170.6,49.8},{170.6,111.68},{161.42,111.68}},
                                color={0,0,127}));
      connect(Epa.bloodPort_b, Rpp.bloodPort_a) annotation (Line(
          points={{-74,60},{-61,60}},
          color={28,108,200},
          thickness=0.5));
      connect(Rlain.bloodPort_a, Epv.bloodPort_b) annotation (Line(
          points={{11,60},{0,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_a, leftAtrium.bloodPort_b) annotation (Line(
          points={{100.2,40},{86,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_a, LeftVentricle.bloodPort_b) annotation (Line(
          points={{196.2,40},{180,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_b, Eitha.bloodPort_a) annotation (Line(
          points={{216,40},{230,40},{230,-1.77636e-15},{197.8,-1.77636e-15}},
          color={28,108,200},
          thickness=0.5));
      connect(inertia.bloodPort_a, Eitha.bloodPort_b) annotation (Line(
          points={{156.8,0},{168,0},{168,6.66134e-16},{178,6.66134e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(Retha.bloodPort_a, inertia.bloodPort_b) annotation (Line(
          points={{117,-1.55431e-15},{126,-1.55431e-15},{126,0},{135.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Eetha.bloodPort_a, Retha.bloodPort_b) annotation (Line(
          points={{75.8,-1.77636e-15},{88,-1.77636e-15},{88,0},{99,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RsartRsart.bloodPort_a, Eetha.bloodPort_b) annotation (Line(
          points={{41,-1.55431e-15},{48,-1.55431e-15},{48,7.21645e-16},{56,7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(Est.bloodPort_a, RsartRsart.bloodPort_b) annotation (Line(
          points={{-4.2,-1.77636e-15},{14,-1.77636e-15},{14,5.55112e-16},{23,5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(Rsven.bloodPort_a, Est.bloodPort_b) annotation (Line(
          points={{-49,0},{-24,0}},
          color={28,108,200},
          thickness=0.5));
      connect(Eethv.bloodPort_a, Rsven.bloodPort_b) annotation (Line(
          points={{-90.2,-1.72085e-15},{-78,-1.72085e-15},{-78,5.55112e-16},{-67,5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(Rethv.bloodPort_a, Eethv.bloodPort_b) annotation (Line(
          points={{-131,-1.55431e-15},{-120,-1.55431e-15},{-120,7.21645e-16},{-110,7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(Eithv.bloodPort_a, Rethv.bloodPort_b) annotation (Line(
          points={{-172.2,-1.77636e-15},{-160,-1.77636e-15},{-160,4.44089e-16},{-149,
              4.44089e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(Rrain.bloodPort_a, Eithv.bloodPort_b) annotation (Line(
          points={{-227,-1.77636e-15},{-200,-1.77636e-15},{-200,0},{-192,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RightVentricle.bloodPort_b, PulmonaryValve.bloodPort_a) annotation (
          Line(
          points={{-158,40},{-139.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(Rrain.bloodPort_b, RightAtrium.bloodPort_a) annotation (Line(
          points={{-245,4.44089e-16},{-256,4.44089e-16},{-256,0},{-268,0},{-268,40},
              {-251.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.bloodPort_b, TricuspidValve.bloodPort_a) annotation (Line(
          points={{-232,40},{-217.76,40}},
          color={28,108,200},
          thickness=0.5));
      connect(EpaHydraulic.q_in, RppHydraulic.q_in)
        annotation (Line(points={{-80,-62},{-56,-62}}, thickness=1));
      connect(RppHydraulic.q_out, EpvHydraulic.q_in)
        annotation (Line(points={{-22,-62},{7,-62}}, thickness=1));
      connect(EpvHydraulic.q_in, RlainHydraulic.q_in)
        annotation (Line(points={{7,-62},{26,-62}}, thickness=1));
      connect(LeftAtriumHydraulic.q_in, MitralValveHydraulic.q_in)
        annotation (Line(points={{88,-96},{114,-96}}, thickness=1));
      connect(LeftVentricleHydraulic.q_in, MitralValveHydraulic.q_out)
        annotation (Line(points={{164,-96},{140,-96}}, thickness=1));
      connect(LeftVentricleHydraulic.q_in, AorticValveHydraulic.q_in)
        annotation (Line(points={{164,-96},{184,-96}}, thickness=1));
      connect(RlainHydraulic.q_out, LeftAtriumHydraulic.q_in) annotation (Line(
            points={{56,-62},{74,-62},{74,-96},{88,-96}}, thickness=1));
      connect(inertia1.q_in, EithaHydraulic.q_in)
        annotation (Line(points={{152,-143},{179,-143}}, thickness=1));
      connect(EithaHydraulic.q_in, AorticValveHydraulic.q_out) annotation (Line(
            points={{179,-143},{216,-143},{216,-96},{208,-96}}, thickness=1));
      connect(RrainHydraulic.q_in, EithvHydraulic.q_in)
        annotation (Line(points={{-208,-143},{-180,-143}}, thickness=1));
      connect(EithvHydraulic.q_in, RethvHydraulic.q_out)
        annotation (Line(points={{-180,-143},{-146,-143}}, thickness=1));
      connect(RethvHydraulic.q_in, EethvHydraulic.q_in)
        annotation (Line(points={{-120,-143},{-95,-143}}, thickness=1));
      connect(RightAtriumHydraulic.q_in, TricuspidValveHydraulic.q_in)
        annotation (Line(points={{-228,-102},{-202,-102}}, thickness=1));
      connect(RightVentricleHydraulic.q_in, TricuspidValveHydraulic.q_out)
        annotation (Line(points={{-155,-103},{-164.5,-103},{-164.5,-102},{-176,
              -102}}, thickness=1));
      connect(RightVentricleHydraulic.q_in, PulmonaryValveHydraulic.q_in)
        annotation (Line(points={{-155,-103},{-132,-103}}, thickness=1));
      connect(RrainHydraulic.q_out, RightAtriumHydraulic.q_in) annotation (Line(
            points={{-236,-143},{-250,-143},{-250,-102},{-228,-102}}, thickness=
             1));
      connect(PulmonaryValveHydraulic.q_out, EpaHydraulic.q_in) annotation (
          Line(points={{-106,-103},{-92,-103},{-92,-62},{-80,-62}}, thickness=1));
      connect(EstHydraulic.q_in, RsartHydraulic.q_out)
        annotation (Line(points={{-16,-143},{10,-143}}, thickness=1));
      connect(RsartHydraulic.q_in, EethaHydraulic.q_in)
        annotation (Line(points={{38,-143},{69,-143}}, thickness=1));
      connect(EethvHydraulic.q_in, RsvenHydraulic.q_out)
        annotation (Line(points={{-95,-143},{-74,-143}}, thickness=1));
      connect(RsvenHydraulic.q_in, EstHydraulic.q_in)
        annotation (Line(points={{-46,-143},{-16,-143}}, thickness=1));
      connect(RethaHydraulic.q_out, EethaHydraulic.q_in) annotation (Line(
          points={{90,-143},{69,-143}},
          color={0,0,0},
          thickness=1));
      connect(RethaHydraulic.q_in, inertia1.q_out) annotation (Line(
          points={{112,-143},{130,-143}},
          color={0,0,0},
          thickness=1));
      connect(RightAtriumHydraulic.compliance, RAtrialElastance.Ct) annotation (
         Line(points={{-228,-90.8},{-250,-90.8},{-250,-92},{-276,-92},{-276,70},
              {-190,70},{-190,101.84},{-202.39,101.84}}, color={0,0,127}));
      connect(RightVentricleHydraulic.compliance, RightVentricle.hydrauliccompliance)
        annotation (Line(points={{-155,-91},{-155,-70},{-270,-70},{-270,66},{
              -167.4,66},{-167.4,49.8}}, color={0,0,127}));
      connect(LeftVentricleHydraulic.compliance, LVentricularElastance.Ct)
        annotation (Line(points={{164,-84.8},{164,-54},{264,-54},{264,113.68},{
              161.42,113.68},{161.42,111.68}}, color={0,0,127}));
      connect(LeftAtriumHydraulic.compliance, LAtrialElastance.Ct) annotation (
          Line(points={{88,-84.8},{88,-28},{252,-28},{252,68},{106,68},{106,
              107.84},{97.61,107.84}}, color={0,0,127}));
      annotation(Diagram(coordinateSystem(extent={{-280,-180},{280,180}},      preserveAspectRatio=false)),             Icon(coordinateSystem(extent={{-280,
                -180},{280,180}},                                                                                                                                                  preserveAspectRatio = false), graphics),
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
    end HemodynamicsMeurs_flatNorm_comparison;

    model TestElastance
      Package.BloodElasticVesselElastance_old bloodElasticVesselElastance(
        ExternalPressure=0,
        O2_concentration=10,
        ZeroPressureVolume=0.001,
        Compliance=3.7503078792283e-6,
        volume_start=0.0005,
        Elastance=1333223874.15,
        CO2_concentration=40)
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
      Physiolibrary.Blocks.Factors.Spline rightStarling(data={{-6,0,0},{-3,0.15,0.104},
            {-1,0.52,0.48},{2,1.96,0.48},{4,2.42,0.123},{8,2.7,0}}, Xscale=101325/760)
        "At filling pressure 0mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{-56,22},{-36,42}})));
      Physiolibrary.Blocks.Factors.Spline leftStarling(data={{-4,0,0},{-1,0.72,0.29},
            {0,1.01,0.29},{3,1.88,0.218333},{10,2.7,0}}, Xscale=101325/760)
        "At filling pressure -0.0029mmHg (because external thorax pressure is -4mmHg) is normal cardiac output (effect=1)."
        annotation (Placement(transformation(extent={{36,22},{16,42}})));
      Package.PressureMeasure pressureMeasure1
        annotation (Placement(transformation(extent={{46,58},{66,78}})));
      Package.PressureMeasure pressureMeasure2
        annotation (Placement(transformation(extent={{-22,50},{-40,68}})));
    equation
      connect(RNormalCO.y, rightStarling.yBase) annotation (Line(
          points={{-51,44},{-46,44},{-46,34}},
          color={0,0,127}));
      connect(LNormalCO.y, leftStarling.yBase) annotation (Line(
          points={{21,46},{26,46},{26,34}},
          color={0,0,127}));
      connect(rightAtrium.bloodPort_b, rightHeart.bloodPort_a) annotation (Line(
          points={{-62,18},{-56,18}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_b, pulmonary.bloodPort_a) annotation (
         Line(
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
      connect(rightStarling.y, rightHeart.volumeflowrate)
        annotation (Line(points={{-46,28},{-46,22}}, color={0,0,127}));
      connect(veins.bloodPort_b, largeVeins.bloodPort_a) annotation (Line(
          points={{-64,-36},{-84,-36},{-84,-19}},
          color={28,108,200},
          thickness=0.5));
      connect(largeVeins.bloodPort_b, rightAtrium.bloodPort_a) annotation (Line(
          points={{-84,-1},{-84,18},{-81.8,18}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_b, arteries.bloodPort_a) annotation (Line(
          points={{36,16},{74,16},{74,-36},{33.8,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, muscle.bloodPort_a) annotation (Line(
          points={{14,-36},{4,-36},{4,-18},{-5,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, nonMuscle.bloodPort_a) annotation (Line(
          points={{14,-36},{-5,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, kidney.bloodPort_a) annotation (Line(
          points={{14,-36},{4,-36},{4,-54},{-5,-54}},
          color={28,108,200},
          thickness=0.5));
      connect(nonMuscle.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(muscle.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-18},{-34,-18},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(kidney.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-54},{-34,-54},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVeinsAndLeftAtrium.bloodPort_b, pressureMeasure1.bloodPort_in)
        annotation (Line(
          points={{24,84},{38,84},{38,61},{51.1,61}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure1.bloodPort_out, leftHeart.bloodPort_a)
        annotation (Line(
          points={{64.6,60.9},{64.6,54},{4,54},{4,16},{16,16}},
          color={28,108,200},
          thickness=0.5));
      connect(rightHeart.bloodPort_b, pressureMeasure2.bloodPort_in)
        annotation (Line(
          points={{-36,18},{-18,18},{-18,52.7},{-26.59,52.7}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure2.bloodPort_out, pulmonaryArteries.bloodPort_a)
        annotation (Line(
          points={{-38.74,52.61},{-84,52.61},{-84,84},{-61.8,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pressureMeasure2.pressure, rightStarling.u) annotation (Line(
            points={{-36.22,56.48},{-72,56.48},{-72,32},{-54,32}}, color={0,0,
              127}));
      connect(pressureMeasure1.pressure, leftStarling.u) annotation (Line(
            points={{61.8,65.2},{84,65.2},{84,32},{34,32}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
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
        Icon(coordinateSystem(extent={{-100,-100},{100,140}})));
    end CardiovascularSystem_GCG_Extension;

    model HemodynamicsMeurs_flatHydraulics
    extends Physiolibrary.Icons.CardioVascular;
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Epa(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000106,
        ZeroPressureVolume=5e-05,
        ExternalPressure=-533.28954966,
        Elastance=31064116.267695)
        annotation (Placement(transformation(extent={{-94,84},{-66,112}})));
      Physiolibrary.Hydraulic.Components.Resistor Rpp(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 14665462.61565)
        annotation (Placement(transformation(extent={{-56,85},{-22,111}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Epv(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000518,
        ZeroPressureVolume=0.00035,
        ExternalPressure=-533.28954966,
        Elastance=6066168.6273825)
        annotation (Placement(transformation(extent={{-10,84},{24,112}})));
      Physiolibrary.Hydraulic.Components.Resistor Rlain(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{26,86},{56,110}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance LeftAtrium(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=9.31e-05,
        ZeroPressureVolume=3e-05,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{74,50},{102,78}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance LeftVentricle(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000144,
        ZeroPressureVolume=6e-05,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{150,50},{178,78}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance AorticValve(
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{184,76},{208,52}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance LAtrialElastance(
        Tav(displayUnit="s"),
        EMIN=15998686.4898,
        EMAX=37330268.4762)
        annotation (Placement(transformation(extent={{80,92},{118,124}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance
        LVentricularElastance(EMIN=11999014.86735, EMAX=533289549.66)
        annotation (Placement(transformation(extent={{164,88},{200,120}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance MitralValve(
        useLimitationInputs=false,
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
                            annotation (Placement(transformation(
            origin={127,64},
            extent={{-13,12},{13,-12}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Eitha(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000204,
        ZeroPressureVolume=0.00014,
        ExternalPressure=-533.28954966,
        Elastance=190651014.00345)
        annotation (Placement(transformation(extent={{168,6},{190,28}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Eetha(
        volume_start(displayUnit="ml") = 0.000526,
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        ZeroPressureVolume=0.00037,
        Elastance=74127247.40274)
        annotation (Placement(transformation(extent={{56,4},{82,30}})));
      Physiolibrary.Hydraulic.Components.Inertia inertia(I(displayUnit = "mmHg.s2/ml") = 93325.6711905,
          volumeFlow_start(displayUnit="ml/min") = 2.1666666666667e-05)                                                                                                  annotation(Placement(transformation(extent={{-11,-11},
                {11,11}},                                                                                                    rotation = 180, origin={141,17})));
      Physiolibrary.Hydraulic.Components.Resistor Retha(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 7999343.2449)
        annotation (Placement(transformation(extent={{-11,-11},{11,11}},
            rotation=180,
            origin={101,17})));
      Physiolibrary.Hydraulic.Components.Resistor Rsart(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 106657909.932) annotation (
          Placement(transformation(
            extent={{14,-13},{-14,13}},
            origin={24,17})));
      Physiolibrary.Hydraulic.Components.Resistor Rsven(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 26664477.483) annotation (
          Placement(transformation(
            extent={{14,-13},{-14,13}},
            origin={-60,17})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Est(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.000283,
        ZeroPressureVolume=0.000185,
        Elastance=34930465.50273)
        annotation (Placement(transformation(extent={{-28,6},{-4,28}})));
      Physiolibrary.Hydraulic.Components.Resistor Rethv(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 11999014.86735)
        annotation (Placement(transformation(extent={{-120,4},{-146,30}})));
      Physiolibrary.Hydraulic.Components.Resistor Rrain(useConductanceInput=false,
          Resistance(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{-208,4},{-236,30}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Eithv(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.00148,
        ZeroPressureVolume=0.00119,
        ExternalPressure=-533.28954966,
        Elastance=2426467.450953)
        annotation (Placement(transformation(extent={{-194,4},{-166,30}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance Eethv(
        useV0Input=false,
        useExternalPressureInput=false,
        useComplianceInput=false,
        volume_start=0.00153,
        ZeroPressureVolume=0.001,
        Elastance=2253148.3473135)
        annotation (Placement(transformation(extent={{-108,4},{-82,30}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance RightAtrium(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000135,
        ZeroPressureVolume=3e-05,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{-242,44},{-214,72}})));
      Physiolibrary.Hydraulic.Components.ElasticVesselElastance RightVentricle(
        useComplianceInput=true,
        useV0Input=false,
        useExternalPressureInput=false,
        volume_start=0.000131,
        ZeroPressureVolume=4e-05,
        ExternalPressure=-533.28954966)
        annotation (Placement(transformation(extent={{-170,42},{-140,72}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance PulmonaryValve(
        _Goff(displayUnit="ml/(mmHg.s)") = 0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{-132,70},{-106,44}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.AtrialElastance RAtrialElastance(EMIN=
            6666119.37075, EMAX=19998358.11225)
        annotation (Placement(transformation(extent={{-244,86},{-206,118}})));
      Physiolibrary.Hydraulic.Examples.MeursModel2011.Parts.VentricularElastance
        RVentricularElastance(EMIN=7599376.082655, EMAX=65327969.83335)
        annotation (Placement(transformation(extent={{-180,88},{-150,122}})));
      Physiolibrary.Hydraulic.Components.IdealValveResistance TricuspidValve(
        _Goff=0,
        useLimitationInputs=false,
        _Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
                            annotation (Placement(transformation(
            origin={-189,58},
            extent={{-13,12},{13,-12}})));
      replaceable Physiolibrary.Types.Constants.FrequencyConst HeartRate(k(displayUnit = "1/min") = 1.2) annotation(Placement(transformation(origin = {-243, 128.5}, extent = {{-11, -6.5}, {11, 6.5}})));
    equation
      connect(Epa.q_in, Rpp.q_in) annotation (Line(
          points={{-80,98},{-56,98}},
          thickness=1));
      connect(Rpp.q_out, Epv.q_in) annotation (Line(
          points={{-22,98},{7,98}},
          thickness=1));
      connect(Epv.q_in, Rlain.q_in) annotation (Line(
          points={{7,98},{26,98}},
          thickness=1));
      connect(LeftAtrium.q_in, MitralValve.q_in) annotation (Line(
          points={{88,64},{114,64}},
          thickness=1));
      connect(LeftVentricle.q_in, MitralValve.q_out) annotation (Line(
          points={{164,64},{140,64}},
          thickness=1));
      connect(LeftVentricle.q_in, AorticValve.q_in) annotation (Line(
          points={{164,64},{184,64}},
          thickness=1));
      connect(LeftVentricle.compliance, LVentricularElastance.Ct) annotation (
         Line(
          points={{164,75.2},{164,74},{212,74},{212,107.68},{203.42,107.68}},
          color={0,0,127}));
      connect(Rlain.q_out, LeftAtrium.q_in) annotation (Line(
          points={{56,98},{74,98},{74,64},{88,64}},
          thickness=1));
      connect(inertia.q_in, Eitha.q_in) annotation (Line(
          points={{152,17},{179,17}},
          thickness=1));
      connect(Eitha.q_in, AorticValve.q_out) annotation (Line(
          points={{179,17},{216,17},{216,64},{208,64}},
          thickness=1));
      connect(Rrain.q_in, Eithv.q_in) annotation (Line(
          points={{-208,17},{-180,17}},
          thickness=1));
      connect(Eithv.q_in, Rethv.q_out) annotation (Line(
          points={{-180,17},{-146,17}},
          thickness=1));
      connect(Rethv.q_in, Eethv.q_in) annotation (Line(
          points={{-120,17},{-95,17}},
          thickness=1));
      connect(RightAtrium.q_in, TricuspidValve.q_in) annotation (Line(
          points={{-228,58},{-202,58}},
          thickness=1));
      connect(RightVentricle.q_in, TricuspidValve.q_out) annotation (Line(
          points={{-155,57},{-164.5,57},{-164.5,58},{-176,58}},
          thickness=1));
      connect(RightVentricle.q_in, PulmonaryValve.q_in) annotation (Line(
          points={{-155,57},{-132,57}},
          thickness=1));
      connect(Rrain.q_out, RightAtrium.q_in) annotation (Line(
          points={{-236,17},{-250,17},{-250,58},{-228,58}},
          thickness=1));
      connect(RightAtrium.compliance,RAtrialElastance. Ct) annotation(Line(points = {{-228, 69.2}, {-228, 92}, {-202.39, 92}, {-202.39, 101.84}}, color = {0, 0, 127}));
      connect(PulmonaryValve.q_out, Epa.q_in) annotation (Line(
          points={{-106,57},{-92,57},{-92,98},{-80,98}},
          thickness=1));
      connect(RightVentricle.compliance,RVentricularElastance. Ct) annotation(Line(points={{-155,69},
              {-155,80},{-126,80},{-126,108.91},{-147.15,108.91}},                                                                                                   color = {0, 0, 127}));
      connect(LeftAtrium.compliance, LAtrialElastance.Ct) annotation (Line(
          points={{88,75.2},{88,74},{121.61,74},{121.61,107.84}},
          color={0,0,127}));
      connect(HeartRate.y,RAtrialElastance. HR) annotation(Line(points = {{-229.25, 128.5}, {-225, 128.5}, {-225, 114.8}}, color = {0, 0, 127}));
      connect(RVentricularElastance.HR, HeartRate.y) annotation(Line(points = {{-165, 118.6}, {-165, 128.5}, {-229.25, 128.5}}, color = {0, 0, 127}));
      connect(LAtrialElastance.HR, HeartRate.y) annotation (Line(
          points={{99,120.8},{99,128.5},{-229.25,128.5}},
          color={0,0,127}));
      connect(LVentricularElastance.HR, HeartRate.y) annotation (Line(
          points={{182,116.8},{182,128.5},{-229.25,128.5}},
          color={0,0,127}));
      connect(Est.q_in, Rsart.q_out) annotation (Line(
          points={{-16,17},{10,17}},
          thickness=1));
      connect(Rsart.q_in, Eetha.q_in) annotation (Line(
          points={{38,17},{69,17}},
          thickness=1));
      connect(Eethv.q_in, Rsven.q_out) annotation (Line(
          points={{-95,17},{-74,17}},
          thickness=1));
      connect(Rsven.q_in, Est.q_in) annotation (Line(
          points={{-46,17},{-16,17}},
          thickness=1));
      connect(Retha.q_out, Eetha.q_in) annotation (Line(
          points={{90,17},{80,17},{80,17},{69,17}},
          color={0,0,0},
          thickness=1));
      connect(Retha.q_in, inertia.q_out) annotation (Line(
          points={{112,17},{122,17},{122,17},{130,17}},
          color={0,0,0},
          thickness=1));
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
    end HemodynamicsMeurs_flatHydraulics;

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
      Package.BloodInertia aorticFlowInertia(BloodInertance(displayUnit=
              "mmHg.s2/ml") = 93325.6711905, Blood_volume_start=
            2.1666666666667e-5) annotation (Placement(transformation(
            extent={{12,-8},{-12,8}},
            rotation=0,
            origin={146,0})));
      Package.BloodResistor pulmonaryVenousResistance(Resistance(displayUnit=
              "(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{10,50},{30,70}})));
      Package.BloodValve AorticValve(
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
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
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{-218,51},{-194,29}})));
      Package.BloodValve PulmonaryValve(Blood_Ron(displayUnit="(mmHg.s)/ml")=
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
        Blood_Goff=0,
        Blood_Pknee=0,
        Blood_Ron(displayUnit="(mmHg.s)/ml") = 399967.162245)
        annotation (Placement(transformation(extent={{100,30},{120,50}})));
      Package.BloodElasticVesselComplianceInput LeftVentricle(
        ZeroPressureVolume=6e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000144)
        annotation (Placement(transformation(extent={{160,30},{180,50}})));
      Package.BloodElasticVesselComplianceInput RightAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000135)
        annotation (Placement(transformation(extent={{-252,30},{-232,50}})));
      Package.BloodElasticVesselComplianceInput RightVentricle(
        ZeroPressureVolume=4e-5,
        ExternalPressure=-533.28954966,
        volume_start=0.000131)
        annotation (Placement(transformation(extent={{-178,30},{-158,50}})));
      Package.BloodElasticVesselComplianceInput leftAtrium(
        ZeroPressureVolume=3e-5,
        ExternalPressure=-533.28954966,
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
      connect(PulmonaryValve.bloodPort_b, pulmonaryArteries.bloodPort_a)
        annotation (Line(
          points={{-120,40},{-106,40},{-106,60},{-93.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryResistance.bloodPort_b, pulmonaryVeins.bloodPort_a)
        annotation (Line(
          points={{-43,60},{-19.8,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_b, LeftVentricle.bloodPort_a) annotation (
          Line(
          points={{120,40},{160.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_b, leftAtrium.bloodPort_a)
        annotation (Line(
          points={{29,60},{48,60},{48,40},{66.2,40}},
          color={28,108,200},
          thickness=0.5));
      connect(TricuspidValve.bloodPort_b, RightVentricle.bloodPort_a)
        annotation (Line(
          points={{-194,40},{-177.8,40},{-177.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.hydrauliccompliance, RAtrialElastance.Ct) annotation (
         Line(points={{-241.4,49.8},{-241.4,70},{-190,70},{-190,101.84},{
              -202.39,101.84}}, color={0,0,127}));
      connect(RVentricularElastance.Ct, RightVentricle.hydrauliccompliance)
        annotation (Line(points={{-147.15,108.91},{-120,108.91},{-120,66},{
              -167.4,66},{-167.4,49.8}}, color={0,0,127}));
      connect(leftAtrium.hydrauliccompliance, LAtrialElastance.Ct) annotation (
          Line(points={{76.6,49.8},{76.6,76},{106,76},{106,107.84},{97.61,
              107.84}}, color={0,0,127}));
      connect(LeftVentricle.hydrauliccompliance, LVentricularElastance.Ct)
        annotation (Line(points={{170.6,49.8},{170.6,111.68},{161.42,111.68}},
                                color={0,0,127}));
      connect(pulmonaryArteries.bloodPort_b, pulmonaryResistance.bloodPort_a)
        annotation (Line(
          points={{-74,60},{-61,60}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryVenousResistance.bloodPort_a, pulmonaryVeins.bloodPort_b)
        annotation (Line(
          points={{11,60},{0,60}},
          color={28,108,200},
          thickness=0.5));
      connect(MitralValve.bloodPort_a, leftAtrium.bloodPort_b) annotation (Line(
          points={{100.2,40},{86,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_a, LeftVentricle.bloodPort_b) annotation (Line(
          points={{196.2,40},{180,40}},
          color={28,108,200},
          thickness=0.5));
      connect(AorticValve.bloodPort_b, intrathoracicArteries.bloodPort_a)
        annotation (Line(
          points={{216,40},{230,40},{230,-1.77636e-15},{197.8,-1.77636e-15}},
          color={28,108,200},
          thickness=0.5));
      connect(aorticFlowInertia.bloodPort_a, intrathoracicArteries.bloodPort_b)
        annotation (Line(
          points={{156.8,0},{168,0},{168,6.66134e-16},{178,6.66134e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArterialResistance.bloodPort_a, aorticFlowInertia.bloodPort_b)
        annotation (Line(
          points={{117,-1.55431e-15},{126,-1.55431e-15},{126,0},{135.2,0}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicArteries.bloodPort_a,
        extrathoracicArterialResistance.bloodPort_b) annotation (Line(
          points={{75.8,-1.77636e-15},{88,-1.77636e-15},{88,0},{99,0}},
          color={28,108,200},
          thickness=0.5));
      connect(systemicArterioalResistance.bloodPort_a, extrathoracicArteries.bloodPort_b)
        annotation (Line(
          points={{41,-1.55431e-15},{48,-1.55431e-15},{48,7.21645e-16},{56,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(systemicTissues.bloodPort_a, systemicArterioalResistance.bloodPort_b)
        annotation (Line(
          points={{-4.2,-1.77636e-15},{14,-1.77636e-15},{14,5.55112e-16},{23,
              5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(smallVenuleResistance.bloodPort_a, systemicTissues.bloodPort_b)
        annotation (Line(
          points={{-49,0},{-24,0}},
          color={28,108,200},
          thickness=0.5));
      connect(extrathoracicVeins.bloodPort_a, smallVenuleResistance.bloodPort_b)
        annotation (Line(
          points={{-90.2,-1.72085e-15},{-78,-1.72085e-15},{-78,5.55112e-16},{-67,
              5.55112e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(venousResistance.bloodPort_a, extrathoracicVeins.bloodPort_b)
        annotation (Line(
          points={{-131,-1.55431e-15},{-120,-1.55431e-15},{-120,7.21645e-16},{-110,
              7.21645e-16}},
          color={28,108,200},
          thickness=0.5));

      connect(intrathoracicVeins.bloodPort_a, venousResistance.bloodPort_b)
        annotation (Line(
          points={{-172.2,-1.77636e-15},{-160,-1.77636e-15},{-160,4.44089e-16},
              {-149,4.44089e-16}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_a, intrathoracicVeins.bloodPort_b)
        annotation (Line(
          points={{-227,-1.77636e-15},{-200,-1.77636e-15},{-200,0},{-192,0}},
          color={28,108,200},
          thickness=0.5));
      connect(RightVentricle.bloodPort_b, PulmonaryValve.bloodPort_a) annotation (
          Line(
          points={{-158,40},{-139.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(centralVenousResistance.bloodPort_b, RightAtrium.bloodPort_a)
        annotation (Line(
          points={{-245,4.44089e-16},{-256,4.44089e-16},{-256,0},{-268,0},{-268,
              40},{-251.8,40}},
          color={28,108,200},
          thickness=0.5));
      connect(RightAtrium.bloodPort_b, TricuspidValve.bloodPort_a) annotation (Line(
          points={{-232,40},{-217.76,40}},
          color={28,108,200},
          thickness=0.5));
      annotation(Diagram(coordinateSystem(extent={{-280,-180},{280,180}},      preserveAspectRatio=false)),             Icon(coordinateSystem(extent={{-280,
                -180},{280,180}},                                                                                                                                                  preserveAspectRatio = false), graphics),
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

    model TestDimension
      Package.BloodPort_out_Extension bloodPort_out_Extension annotation (Placement(
            transformation(
            extent={{-10,10},{10,-10}},
            rotation=0,
            origin={-42,14})));
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump(SolutionFlow=
            1.6666666666667e-6) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={78,18})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure annotation (
          Placement(transformation(
            extent={{-9,10},{9,-10}},
            rotation=180,
            origin={51,38})));
      Physiolibrary.Chemical.Components.Stream Stream(useSolutionFlowInput=true)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={50,90})));
      Physiolibrary.Chemical.Components.Stream Stream1(useSolutionFlowInput=
            true) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={56,72})));
      Physiolibrary.Chemical.Components.Stream Stream2(useSolutionFlowInput=
            true) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={70,58})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage(Conc=10) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={124,38})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage1(Conc=30) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={134,72})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage2(Conc=20) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={96,84})));
      Package.BloodPort_in_Extension bloodPort_in_Extension
        annotation (Placement(transformation(extent={{2,70},{22,52}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedVolume unlimitedVolume(P=
            1333.22387415)
        annotation (Placement(transformation(extent={{-82,-20},{-62,0}})));
      Physiolibrary.Chemical.Components.Substance substance
        annotation (Placement(transformation(extent={{-88,30},{-70,44}})));
      Physiolibrary.Chemical.Components.Substance substance1
        annotation (Placement(transformation(extent={{-106,18},{-88,32}})));
      Physiolibrary.Chemical.Components.Substance substance2
        annotation (Placement(transformation(extent={{-102,6},{-84,20}})));
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump1(SolutionFlow=
           1.6666666666667e-6)  annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={86,-76})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure1
                                                              annotation (
          Placement(transformation(
            extent={{-9,10},{9,-10}},
            rotation=180,
            origin={59,-56})));
      Physiolibrary.Chemical.Components.Stream Stream3(useSolutionFlowInput=
            true)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={58,-4})));
      Physiolibrary.Chemical.Components.Stream Stream4(useSolutionFlowInput=
            true) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={64,-22})));
      Physiolibrary.Chemical.Components.Stream Stream5(useSolutionFlowInput=
            true) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={78,-36})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage3(Conc=10)
                                          annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={132,-56})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage4(Conc=30) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={142,-22})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage5(Conc=20) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={104,-10})));
      Package.BloodPort_in_Extension bloodPort_in_Extension1
        annotation (Placement(transformation(extent={{10,-24},{30,-42}})));
      Trash.BloodConjunction_ bloodConjunction_(numberOfFlows=2)
        annotation (Placement(transformation(extent={{-8,4},{12,24}})));
    equation



      connect(unlimitedPump.q_out, flowMeasure.q_in) annotation (Line(
          points={{68,18},{64,18},{64,38},{60,38}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure.volumeFlow, Stream2.solutionFlow) annotation (Line(
            points={{51,50},{60,50},{60,51},{70,51}}, color={0,0,127}));
      connect(flowMeasure.volumeFlow, Stream1.solutionFlow) annotation (Line(
            points={{51,50},{51,57},{56,57},{56,65}}, color={0,0,127}));
      connect(flowMeasure.volumeFlow, Stream.solutionFlow) annotation (Line(
            points={{51,50},{51,65},{50,65},{50,83}}, color={0,0,127}));
      connect(unlimitedSolutionStorage2.q_out, Stream.q_in) annotation (Line(
          points={{86,84},{74,84},{74,90},{60,90}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage1.q_out, Stream1.q_in) annotation (Line(
          points={{124,72},{66,72}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage.q_out, Stream2.q_in) annotation (Line(
          points={{114,38},{98,38},{98,58},{80,58}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure.q_out, bloodPort_in_Extension.bloodFlow) annotation (
          Line(
          points={{42,38},{32,38},{32,52},{22,52}},
          color={0,0,0},
          thickness=1));
      connect(Stream2.q_out, bloodPort_in_Extension.O2) annotation (Line(
          points={{60,58},{42,58},{42,61},{22,61}},
          color={107,45,134},
          thickness=1));
      connect(Stream1.q_out, bloodPort_in_Extension.CO2) annotation (Line(
          points={{46,72},{34,72},{34,64.78},{22,64.78}},
          color={107,45,134},
          thickness=1));
      connect(Stream.q_out, bloodPort_in_Extension.BEox) annotation (Line(
          points={{40,90},{32,90},{32,68.2},{22,68.2}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedVolume.y, bloodPort_out_Extension.bloodFlow) annotation (
         Line(
          points={{-62,-10},{-58,-10},{-58,4},{-52,4}},
          color={0,0,0},
          thickness=1));
      connect(bloodPort_out_Extension.BEox, substance.q_out) annotation (Line(
          points={{-52,22},{-66,22},{-66,37},{-79,37}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.CO2, substance1.q_out) annotation (Line(
          points={{-52,18},{-76,18},{-76,25},{-97,25}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_out_Extension.O2, substance2.q_out) annotation (Line(
          points={{-52,14},{-72,14},{-72,13},{-93,13}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedPump1.q_out, flowMeasure1.q_in) annotation (Line(
          points={{76,-76},{72,-76},{72,-56},{68,-56}},
          color={0,0,0},
          thickness=1));
      connect(flowMeasure1.volumeFlow, Stream5.solutionFlow) annotation (Line(
            points={{59,-44},{68,-44},{68,-43},{78,-43}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, Stream4.solutionFlow) annotation (Line(
            points={{59,-44},{59,-37},{64,-37},{64,-29}}, color={0,0,127}));
      connect(flowMeasure1.volumeFlow, Stream3.solutionFlow) annotation (Line(
            points={{59,-44},{59,-29},{58,-29},{58,-11}}, color={0,0,127}));
      connect(unlimitedSolutionStorage5.q_out, Stream3.q_in) annotation (Line(
          points={{94,-10},{82,-10},{82,-4},{68,-4}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage4.q_out,Stream4. q_in) annotation (Line(
          points={{132,-22},{74,-22}},
          color={107,45,134},
          thickness=1));
      connect(unlimitedSolutionStorage3.q_out, Stream5.q_in) annotation (Line(
          points={{122,-56},{106,-56},{106,-36},{88,-36}},
          color={107,45,134},
          thickness=1));
      connect(flowMeasure1.q_out, bloodPort_in_Extension1.bloodFlow)
        annotation (Line(
          points={{50,-56},{40,-56},{40,-42},{30,-42}},
          color={0,0,0},
          thickness=1));
      connect(Stream5.q_out, bloodPort_in_Extension1.O2) annotation (Line(
          points={{68,-36},{50,-36},{50,-33},{30,-33}},
          color={107,45,134},
          thickness=1));
      connect(Stream4.q_out, bloodPort_in_Extension1.CO2) annotation (Line(
          points={{54,-22},{42,-22},{42,-29.22},{30,-29.22}},
          color={107,45,134},
          thickness=1));
      connect(Stream3.q_out, bloodPort_in_Extension1.BEox) annotation (Line(
          points={{48,-4},{40,-4},{40,-25.8},{30,-25.8}},
          color={107,45,134},
          thickness=1));
      connect(bloodPort_in_Extension1.bloodPort_a, bloodConjunction_.bloodPort_in[
        2]) annotation (Line(
          points={{10,-33},{11,-33},{11,14.5}},
          color={28,108,200},
          thickness=0.5));
      connect(bloodPort_in_Extension.bloodPort_a, bloodConjunction_.bloodPort_in[
        1]) annotation (Line(
          points={{2,61},{6,61},{6,13.5},{11,13.5}},
          color={28,108,200},
          thickness=0.5));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestDimension;

    model TestDimension1
      Physiolibrary.Hydraulic.Sources.UnlimitedPump unlimitedPump(SolutionFlow=
            1.6666666666667e-6) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={84,38})));
      Physiolibrary.Hydraulic.Sensors.FlowMeasure flowMeasure annotation (
          Placement(transformation(
            extent={{-9,10},{9,-10}},
            rotation=180,
            origin={51,38})));
      Physiolibrary.Chemical.Components.Stream Stream(useSolutionFlowInput=
            false, SolutionFlow=1.6666666666667e-5)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={46,84})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage2(Conc=20) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={82,80})));
      Physiolibrary.Hydraulic.Components.Resistor resistor(Resistance=
            7999343244900) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={12,38})));
      Physiolibrary.Hydraulic.Sources.UnlimitedVolume unlimitedVolume(P=
            1333.22387415)
        annotation (Placement(transformation(extent={{-72,26},{-52,46}})));
      Physiolibrary.Chemical.Sources.UnlimitedSolutionStorage
        unlimitedSolutionStorage1(Conc=1)  annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-8,82})));
    equation

      connect(unlimitedPump.q_out, flowMeasure.q_in) annotation (Line(
          points={{74,38},{60,38}},
          color={0,0,0},
          thickness=1));
      connect(unlimitedSolutionStorage2.q_out, Stream.q_in) annotation (Line(
          points={{72,80},{64,80},{64,84},{56,84}},
          color={107,45,134},
          thickness=1));
      connect(resistor.q_in, flowMeasure.q_out) annotation (Line(
          points={{22,38},{42,38}},
          color={0,0,0},
          thickness=1));
      connect(unlimitedVolume.y, resistor.q_out) annotation (Line(
          points={{-52,36},{-26,36},{-26,38},{2,38}},
          color={0,0,0},
          thickness=1));
      connect(Stream.q_out, unlimitedSolutionStorage1.q_out) annotation (Line(
          points={{36,84},{20,84},{20,82},{2,82}},
          color={107,45,134},
          thickness=1));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestDimension1;

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
               pulmonary(Conductance(displayUnit="l/(mmHg.min)") = 4.1665920538226e-08)
        annotation (Placement(transformation(extent={{-30,74},{-10,94}})));
      Hydraulic.Components.ElasticVessel arteries(
        volume_start(displayUnit="l") = 0.00085,
        ZeroPressureVolume(displayUnit="l") = 0.000495,
        Compliance(displayUnit="l/mmHg") = 2.6627185942521e-08)
        annotation (Placement(transformation(extent={{14,-46},{34,-26}})));
      Hydraulic.Components.ElasticVessel veins(
        Compliance(displayUnit="l/mmHg") = 6.1880080007267e-07,
        volume_start(displayUnit="l") = 0.00325,
        ZeroPressureVolume(displayUnit="l") = 0.00295)
        annotation (Placement(transformation(extent={{-64,-46},{-44,-26}})));
      Hydraulic.Components.Conductor
               nonMuscle(Conductance(displayUnit="l/(mmHg.min)") = 3.5627924852669e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-36})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure
        annotation (Placement(transformation(extent={{-78,26},{-58,46}})));
      Hydraulic.Components.Pump rightHeart(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{-56,8},{-36,28}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst RNormalCO(k(displayUnit
            ="l/min") = 8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-60,40},{-52,48}})));
      Hydraulic.Sensors.PressureMeasure pressureMeasure1
        annotation (Placement(transformation(extent={{-8,26},{12,46}})));
      Hydraulic.Components.Pump leftHeart(useSolutionFlowInput=true)
        annotation (Placement(transformation(extent={{16,6},{36,26}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst LNormalCO(k(displayUnit
            ="l/min") = 8.3333333333333e-05)
        annotation (Placement(transformation(extent={{12,42},{20,50}})));
      Hydraulic.Components.Conductor
               kidney(Conductance(displayUnit="l/(mmHg.min)") = 1.4126159678427e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-54})));
      Hydraulic.Components.Conductor
               muscle(Conductance(displayUnit="l/(mmHg.min)") = 1.3001067314658e-09)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-14,-18})));
      Hydraulic.Components.Conductor
               largeVeins(Conductance(displayUnit="l/(mmHg.min)") = 1.6888886482791e-07)
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
      connect(rightAtrium.bloodPort_b, rightHeart.bloodPort_a) annotation (Line(
          points={{-62,18},{-56,18}},
          color={28,108,200},
          thickness=0.5));
      connect(rightHeart.bloodPort_b, pulmonaryArteries.bloodPort_a)
        annotation (Line(
          points={{-36,18},{-26,18},{-26,64},{-82,64},{-82,84},{-61.8,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonaryArteries.bloodPort_b, pulmonary.bloodPort_a) annotation (
         Line(
          points={{-42,84},{-29,84}},
          color={28,108,200},
          thickness=0.5));
      connect(pulmonary.bloodPort_b, pulmonaryVeinsAndLeftAtrium.bloodPort_a)
        annotation (Line(
          points={{-11,84},{-4,84},{-4,84},{4.2,84}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_a, pulmonaryVeinsAndLeftAtrium.bloodPort_b)
        annotation (Line(
          points={{16,16},{-12,16},{-12,64},{38,64},{38,84},{24,84}},
          color={28,108,200},
          thickness=0.5));
      connect(veins.bloodPort_b, largeVeins.bloodPort_a) annotation (Line(
          points={{-64,-36},{-84,-36},{-84,-19}},
          color={28,108,200},
          thickness=0.5));
      connect(largeVeins.bloodPort_b, rightAtrium.bloodPort_a) annotation (Line(
          points={{-84,-1},{-84,18},{-81.8,18}},
          color={28,108,200},
          thickness=0.5));
      connect(leftHeart.bloodPort_b, arteries.bloodPort_a) annotation (Line(
          points={{36,16},{74,16},{74,-36},{33.8,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, muscle.bloodPort_a) annotation (Line(
          points={{14,-36},{4,-36},{4,-18},{-5,-18}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, nonMuscle.bloodPort_a) annotation (Line(
          points={{14,-36},{-5,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(arteries.bloodPort_b, kidney.bloodPort_a) annotation (Line(
          points={{14,-36},{4,-36},{4,-54},{-5,-54}},
          color={28,108,200},
          thickness=0.5));
      connect(nonMuscle.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(muscle.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-18},{-34,-18},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(kidney.bloodPort_b, veins.bloodPort_a) annotation (Line(
          points={{-23,-54},{-34,-54},{-34,-36},{-44.2,-36}},
          color={28,108,200},
          thickness=0.5));
      connect(LNormalCO.y, leftHeart.volumeflowrate)
        annotation (Line(points={{21,46},{26,46},{26,20}}, color={0,0,127}));
      connect(RNormalCO.y, rightHeart.volumeflowrate) annotation (Line(points={
              {-51,44},{-46,44},{-46,22}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
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
        Icon(coordinateSystem(extent={{-100,-100},{100,140}})));
    end CardiovascularSystem_GCG_Extension_simple;
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
      extends Package.BloodElasticVesselElastance_old;

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
  end Trash;
  annotation(uses(Physiolibrary(version="2.3.2-beta"), Modelica(version="3.2.2")));
end AcidBaseBalance;
