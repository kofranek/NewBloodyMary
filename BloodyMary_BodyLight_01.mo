within ;
package BloodyMary_BodyLight_01
  package Packages

    model albumin_from_g_l
      //albumin g/l=>mol/m3
      Physiolibrary.Types.RealIO.ConcentrationOutput concentration_mol_m3
        "mol/m3 = mmol/l" annotation (Placement(transformation(extent={{98,-6},{118,
                14}}), iconTransformation(extent={{98,-6},{118,14}})));
      Modelica.Blocks.Interfaces.RealInput g_l annotation (Placement(transformation(
              extent={{-136,-20},{-96,20}}), iconTransformation(extent={{-136,-20},{
                -96,20}})));
    equation
      concentration_mol_m3 =  g_l*0.0150466;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="albumin_from_g_l")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end albumin_from_g_l;

    model from_mlO2CO2_per_min
      //gas volume STPD ml/min => mol/m3
      Modelica.Blocks.Interfaces.RealInput ml_min "O2 ml/min  mol/sec" annotation (
          Placement(transformation(extent={{-140,-20},{-100,20}}),
            iconTransformation(extent={{-140,-20},{-100,20}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput molarflowrate annotation (
          Placement(transformation(extent={{98,-8},{118,12}}), iconTransformation(
              extent={{98,-8},{118,12}})));
    equation
     molarflowrate=ml_min*22414/60;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="O2/CO2 from ml/min 
to mol/sec"),
            Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="name")}),           Diagram(coordinateSystem(
              preserveAspectRatio=false)),
        Documentation(info="<html>
<p>conversion albumin g/l =&gt; mol/m3</p>
</html>"));
    end from_mlO2CO2_per_min;

    model from_mlO2CO2_per_l
      //gas volume ml/l =>mol/m3
      Modelica.Blocks.Interfaces.RealInput ml_l "O2 ml/min  mol/sec" annotation (
          Placement(transformation(extent={{-140,-20},{-100,20}}),
            iconTransformation(extent={{-140,-20},{-100,20}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concentration annotation (
          Placement(transformation(extent={{100,-4},{120,16}}), iconTransformation(
              extent={{100,-4},{120,16}})));
    equation
      concentration = ml_l*22414/1000;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="O2/CO2 from ml/min 
to mol/sec"),
            Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="name")}),           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end from_mlO2CO2_per_l;

    model to_mmHg
      //Pa => mmHg
      Modelica.Blocks.Interfaces.RealOutput y annotation (Placement(transformation(
              extent={{100,-10},{120,10}}), iconTransformation(extent={{100,-10},{120,
                10}})));
      Physiolibrary.Types.RealIO.PressureInput pressure annotation (Placement(
            transformation(extent={{-140,-22},{-100,18}}), iconTransformation(
              extent={{-140,-22},{-100,18}})));
    equation

     y = pressure /133.32239;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-72,16},{42,-6}},
              textColor={0,0,0},
              textString="to_mmHg"),
            Text(
              extent={{-102,-104},{118,-138}},
              textColor={0,0,0},
              textString="%name
")}),                                           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end to_mmHg;

    model from_mmHg
      Physiolibrary.Types.RealIO.PressureOutput pressure annotation (Placement(
            transformation(extent={{100,-4},{120,16}}), iconTransformation(extent={{
                100,-4},{120,16}})));
      Modelica.Blocks.Interfaces.RealInput u annotation (Placement(transformation(
              extent={{-140,-20},{-100,20}}), iconTransformation(extent={{-140,-20},
                {-100,20}})));
    equation
      //mmHg=>Pa
      pressure = u * 133.32239;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-72,16},{42,-6}},
              textColor={0,0,0},
              textString="from_mmHg"),
            Text(
              extent={{-102,-104},{118,-138}},
              textColor={0,0,0},
              textString="%name
")}),                                           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end from_mmHg;

    model from_ml_per_min
      //ml/min => m3/sec
      Modelica.Blocks.Interfaces.RealInput ml_min  annotation (
          Placement(transformation(extent={{-140,-22},{-100,18}}),
            iconTransformation(extent={{-140,-22},{-100,18}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput volumeflowrate annotation (
          Placement(transformation(extent={{100,-6},{120,14}}), iconTransformation(
              extent={{100,-6},{120,14}})));
    equation
     volumeflowrate=ml_min/60/100000;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="from ml/min 
to m3/sec"),Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="name")}),           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end from_ml_per_min;

    model from_mm_per_l
      //mm/l => mol/m3
      Modelica.Blocks.Interfaces.RealInput mm_per_l  annotation (
          Placement(transformation(extent={{-140,-22},{-100,18}}),
            iconTransformation(extent={{-140,-22},{-100,18}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concentration annotation (
          Placement(transformation(extent={{100,-10},{120,10}}),
            iconTransformation(extent={{100,-10},{120,10}})));
    equation
     volumeflowrate=ml_min/60/100000;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="from mmol/l 
to mol/m3"),Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="name")}),           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end from_mm_per_l;

    model to_mm_per_l
      //mm/l => mol/m3
      Modelica.Blocks.Interfaces.RealInput mm_per_l  annotation (
          Placement(transformation(extent={{-140,-22},{-100,18}}),
            iconTransformation(extent={{-140,-22},{-100,18}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concentration annotation (
          Placement(transformation(extent={{100,-10},{120,10}}), iconTransformation(
              extent={{100,-10},{120,10}})));
    equation
      concentration=mm_per_l;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="to mmol/l 
from mol/m3"),
            Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="name")}),           Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end to_mm_per_l;

    model AlvEq_2units_with_shunts_and_mixing

      Physiolibrary.Types.RealIO.ConcentrationInput CvO2 annotation (Placement(
            transformation(extent={{-170,33},{-154,50}}),
                                                        iconTransformation(extent={{-202,10},
                {-190,22}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CvCO2 annotation (Placement(
            transformation(extent={{-172,-26},{-154,-8}}),
                                                        iconTransformation(extent={{-202,-2},
                {-190,10}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-198,106},{-180,124}}),
                                                         iconTransformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={-196,40})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput VAi annotation (Placement(
            transformation(extent={{-194,32},{-178,48}}),iconTransformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={-196,52})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAe annotation (Placement(
            transformation(extent={{196,-128},{210,-114}}),
                                                        iconTransformation(
              extent={{260,-94},{278,-76}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VO2 annotation (Placement(
            transformation(extent={{222,-154},{234,-142}}),
                                                        iconTransformation(
              extent={{260,-18},{278,0}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{224,-168},{234,-158}}),
                                                        iconTransformation(
              extent={{260,-36},{276,-20}})));

      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2a annotation (
          Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={203,-170}), iconTransformation(
            extent={{-9,-9},{9,9}},
            rotation=0,
            origin={269,-65})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2a annotation (
          Placement(transformation(
            extent={{7.5,-7},{-7.5,7}},
            rotation=180,
            origin={203.5,-144}), iconTransformation(
            extent={{-9,-9},{9,9}},
            rotation=0,
            origin={269,-47})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox "BEox in mmol/l" annotation(Placement(transformation(extent={{-166,59},
                {-148,77}}),                                                                                                          iconTransformation(extent={{-210,70},
                {-190,90}})));
      AcidBaseBalance.Acidbase.OSA.AlvEq alvEq1
        annotation (Placement(transformation(extent={{-84,-36},{42,88}})));

      Physiolibrary.Types.RealIO.FractionInput Fsh "shunt fraction" annotation (
          Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-206,-48},{-188,-30}})));

      Physiolibrary.Types.RealIO.FractionInput F_q1 "alveolar perfusion fraction" annotation (
          Placement(transformation(extent={{-202,-110},{-162,-70}}),
            iconTransformation(extent={{-206,-84},{-188,-66}})));
      Physiolibrary.Types.RealIO.FractionInput F_VAi1 "alveolar ventilation fraction" annotation (
          Placement(transformation(extent={{-204,-140},{-164,-100}}),
            iconTransformation(extent={{-208,-124},{-190,-106}})));
      AcidBaseBalance.Acidbase.OSA.AlvEq alvEq2
        annotation (Placement(transformation(extent={{-82,-170},{44,-46}})));

      Physiolibrary.Types.VolumeFlowRate Qsh=Q*Fsh;
      Physiolibrary.Types.VolumeFlowRate Qpulm=Q-Qsh;
      Physiolibrary.Types.VolumeFlowRate Q_alv1 = Qpulm*F_q1;
      Physiolibrary.Types.VolumeFlowRate VAi_alv1 = VAi*F_VAi1;
      Physiolibrary.Types.VolumeFlowRate Q_alv2 = Qpulm-Q_alv1;
      Physiolibrary.Types.VolumeFlowRate VAi_alv2 = VAi-VAi_alv1;
      AcidBaseBalance.Acidbase.OSA.O2CO2 artBlood
        annotation (Placement(transformation(extent={{92,-80},{196,60}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput HCO3a annotation (
          Placement(transformation(
            extent={{7.5,-7},{-7.5,7}},
            rotation=180,
            origin={247.5,-4}), iconTransformation(
            extent={{-9,-9},{9,9}},
            rotation=0,
            origin={269,27})));
      Physiolibrary.Types.RealIO.PressureOutput PaO2 annotation (Placement(
            transformation(extent={{214,40},{234,60}}), iconTransformation(
              extent={{260,74},{280,94}})));
      Physiolibrary.Types.RealIO.PressureOutput PaCO2 annotation (Placement(
            transformation(extent={{216,12},{236,32}}), iconTransformation(
              extent={{260,54},{280,74}})));
      Physiolibrary.Types.RealIO.pHOutput pHa annotation (Placement(
            transformation(extent={{212,-8},{232,12}}), iconTransformation(
              extent={{260,34},{280,54}})));
      Physiolibrary.Types.RealIO.FractionOutput sO2a annotation (Placement(
            transformation(extent={{228,-38},{248,-18}}), iconTransformation(
              extent={{260,-2},{280,18}})));
    initial equation

    equation

      alvEq1.Q = Q_alv1;
      alvEq2.Q = Q_alv2;
      alvEq1.VAi=VAi_alv1;
      alvEq2.VAi=VAi_alv2;
      alvEq1.ctO2*Q_alv1 + alvEq2.ctO2*Q_alv2 + CvO2*Qsh =Q*ctO2a;
      alvEq1.ctCO2*Q_alv1 + alvEq2.ctCO2*Q_alv2 + CvCO2*Qsh =Q*ctCO2a;
      alvEq1.VAe+alvEq2.VAe=VAe;
      alvEq1.VO2+alvEq2.VO2=VO2;
      alvEq1.VCO2+alvEq2.VCO2=VCO2;
      artBlood.ctO2=ctO2a;
      artBlood.ctCO2=ctCO2a;

      connect(alvEq1.BEox, BEox) annotation (Line(points={{-84,64.75},{-104,64.75},{
              -104,68},{-157,68}}, color={0,0,127}));
      connect(alvEq1.CvCO2, CvCO2) annotation (Line(points={{-82.9043,35.3},{
              -104,35.3},{-104,-17},{-163,-17}},
                                      color={0,0,127}));
      connect(alvEq2.BEox, BEox) annotation (Line(points={{-82,-69.25},{-126,-69.25},
              {-126,68},{-157,68}}, color={0,0,127}));
      connect(alvEq2.CvCO2, CvCO2) annotation (Line(points={{-80.9043,-98.7},{
              -148,-98.7},{-148,-17},{-163,-17}},
                                      color={0,0,127}));
      connect(alvEq1.CvO2, CvO2) annotation (Line(points={{-82.9043,39.95},{
              -138.452,39.95},{-138.452,41.5},{-162,41.5}},
                                                   color={0,0,127}));
      connect(alvEq2.CvO2, CvO2) annotation (Line(points={{-80.9043,-94.05},{
              -138,-94.05},{-138,40},{-138.452,40},{-138.452,41.5},{-162,41.5}},
                                                                    color={0,0,127}));
      connect(artBlood.BEox, BEox) annotation (Line(points={{89.4,6.47059},{
              66,6.47059},{66,118},{-126,118},{-126,68},{-157,68}},
                                                        color={0,0,127}));
      connect(artBlood.pO2, PaO2) annotation (Line(points={{198.6,19.6471},{204,
              19.6471},{204,50},{224,50}},     color={0,0,127}));
      connect(artBlood.pCO2, PaCO2) annotation (Line(points={{198.6,11.4118},{
              210,11.4118},{210,22},{226,22}},  color={0,0,127}));
      connect(artBlood.pH, pHa) annotation (Line(points={{198.6,1.52941},{
              207.3,1.52941},{207.3,2},{222,2}}, color={0,0,127}));
      connect(artBlood.sO2, sO2a) annotation (Line(points={{198.6,-14.9412},{
              214.3,-14.9412},{214.3,-28},{238,-28}}, color={0,0,127}));
      connect(artBlood.cHCO3, HCO3a) annotation (Line(points={{198.6,-6.70588},
              {219.3,-6.70588},{219.3,-4},{247.5,-4}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,
                -180},{260,140}}),
                       graphics={
            Rectangle(
              extent={{-200,140},{260,-178}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,126},{140,-164}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="AlvEq
2 units
with
shunts
and mixing"),
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
              origin={203,-49},
              rotation=180,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="CtO2"),
            Text(
              extent={{-52,9.5},{52,-9.5}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={202,-69.5},
              rotation=180,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="CtCO2"),
            Text(
              extent={{156,14},{254,2}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="sO2a"),
            Text(
              extent={{160,36},{254,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="HCO3a"),
            Text(
              extent={{138,52},{254,40}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="pHa"),
            Text(
              extent={{162,72},{254,56}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="PaCO2"),
            Text(
              extent={{154,86},{254,78}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="PaO2"),
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
              extent={{188,-82},{254,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=11,
              horizontalAlignment=TextAlignment.Right,
              textString="VAe"),
            Text(
              extent={{152,-6},{254,-16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              fontSize=12,
              horizontalAlignment=TextAlignment.Right,
              textString="VO2"),
            Text(
              extent={{132,-24},{254,-34}},
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
              textString="BEox"),
            Text(
              extent={{-36,6},{36,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-144,-40},
              rotation=180,
              fontSize=12,
              horizontalAlignment=TextAlignment.Left,
              textString="Fsh"),
            Text(
              extent={{-36,6},{36,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-146,-74},
              rotation=180,
              fontSize=12,
              horizontalAlignment=TextAlignment.Left,
              textString="F_q1"),
            Text(
              extent={{-36,6},{36,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-148,-114},
              rotation=180,
              fontSize=12,
              horizontalAlignment=TextAlignment.Left,
              textString="F_VAi1")}),
                                  Diagram(coordinateSystem(preserveAspectRatio=false,
              extent={{-200,-180},{260,140}})));
    end AlvEq_2units_with_shunts_and_mixing;
  end Packages;

  package Tests
    model BloodyMary_01
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "l/min") = 8.3333333333333e-5)
        annotation (Placement(transformation(extent={{-83,60},{-75,66}})));
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-54,10},{-46,18}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-60,22},{-52,30}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-50,32},{-42,40}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 8.3333333333333e-05)
                                                       annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,54})));
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(PB=
            106657.909932, Temperature(displayUnit="degC") = bodyTemperature.k)
        annotation (Placement(transformation(extent={{-84,78},{-64,98}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-60,72},{-52,80}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00013333333333333)
        annotation (Placement(transformation(extent={{-64,-54},{-56,-46}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=0)
        annotation (Placement(transformation(extent={{-66,-72},{-58,-64}})));
      Simplest.SimplestTissue
                     simplestTissue
        annotation (Placement(transformation(extent={{-18,-82},{32,-32}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=311.15)
        annotation (Placement(transformation(extent={{-90,-10},{-82,-2}})));
      Packages.AlvEq_2units_with_shunts_and_mixing
        alvEq_2units_with_shunts_and_mixing1
        annotation (Placement(transformation(extent={{-6,6},{78,80}})));
    equation
      connect(simplestTissue.Q,CardiacOutput. y) annotation (Line(points={{-18.75,
              -57.25},{-36,-57.25},{-36,-38},{-68,-38},{-68,54},{-85,54}},
                                                              color={0,0,127}));
      connect(VO2.y,simplestTissue. MO2) annotation (Line(points={{-55,-50},{
              -38,-50},{-38,-65.75},{-19.25,-65.75}}, color={0,0,127}));
      connect(VCO2.y,simplestTissue. MCO2) annotation (Line(points={{-57,-68},{
              -26,-68},{-26,-73.75},{-18.75,-73.75}}, color={0,0,127}));
      connect(simplestTissue.O2a, alvEq_2units_with_shunts_and_mixing1.ctO2a)
        annotation (Line(points={{-18,-35.5},{-18,-26},{88,-26},{88,36.7563},{
              79.6435,36.7563}}, color={0,0,127}));
      connect(simplestTissue.CO2a, alvEq_2units_with_shunts_and_mixing1.ctCO2a)
        annotation (Line(points={{-18,-41.5},{-22,-41.5},{-22,-34},{-24,-34},{
              -24,-24},{84,-24},{84,32.5938},{79.6435,32.5938}}, color={0,0,127}));
      connect(BEox.y, simplestTissue.BEox) annotation (Line(points={{-51,76},{
              -18,76},{-18,60},{-16,60},{-16,6},{-26,6},{-26,-47.5},{-18,-47.5}},
            color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.BEox, simplestTissue.BEox)
        annotation (Line(points={{-6,66.125},{-36,66.125},{-36,64},{-34,64},{
              -34,10},{-44,10},{-44,-47.5},{-18,-47.5}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.VAi, VAi.y) annotation (Line(
            points={{-5.26957,59.65},{-66,59.65},{-66,63},{-74,63}}, color={0,0,
              127}));
      connect(alvEq_2units_with_shunts_and_mixing1.Q, CardiacOutput.y)
        annotation (Line(points={{-5.26957,56.875},{-62,56.875},{-62,54},{-85,
              54}}, color={0,0,127}));
      connect(simplestTissue.O2v, alvEq_2units_with_shunts_and_mixing1.CvO2)
        annotation (Line(points={{31.5,-36},{36,-36},{36,-2},{-30,-2},{-30,
              51.325},{-5.26957,51.325}}, color={0,0,127}));
      connect(simplestTissue.CO2v, alvEq_2units_with_shunts_and_mixing1.CvCO2)
        annotation (Line(points={{31.5,-41.5},{38,-41.5},{38,-22},{-14,-22},{
              -14,48.55},{-5.26957,48.55}}, color={0,0,127}));
      connect(Fsh.y, alvEq_2units_with_shunts_and_mixing1.Fsh) annotation (Line(
            points={{-41,36},{-12,36},{-12,38.6063},{-5.45217,38.6063}}, color=
              {0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing1.F_q1) annotation (
          Line(points={{-51,26},{-12,26},{-12,30.2813},{-5.45217,30.2813}},
            color={0,0,127}));
      connect(FAi1.y, alvEq_2units_with_shunts_and_mixing1.F_VAi1) annotation (
          Line(points={{-45,14},{-12,14},{-12,21.0313},{-5.81739,21.0313}},
            color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,170},
              fillPattern=FillPattern.Solid), Text(
              extent={{-78,32},{84,-20}},
              textColor={0,0,0},
              textString="BloodyMary_01")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end BloodyMary_01;
  end Tests;
  annotation (uses(
      Physiolibrary(version="3.0.0-alpha10"),
      AcidBaseBalance(version="1"),
      Simplest(version="2"),
      Modelica(version="4.0.0")));
end BloodyMary_BodyLight_01;
