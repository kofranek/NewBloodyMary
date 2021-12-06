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
      //22.414 ml => 1 mmol
      // 1 ml => 1/22.414 mmol=>//22.414/1000 mol
     molarflowrate=ml_min/22.414/1000/60; //mol/sec
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="from ml/min 
to mol/sec"),
            Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="%name")}),          Diagram(coordinateSystem(
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
       //22.414 ml => 1 mmol
      // 1 ml => 1/22.414 mmol%>1/22.414/1000 mol
      // 1 ml/l =1/22.414/1000/1000 mol/m3
      concentration = ml_l/22414/1000000;  //mol/m3
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

    model SimplestTissue_bad

      Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
            transformation(extent={{-100,12},{-88,24}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-103,-67})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-100,24},{-88,36}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-105,-35})));

      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-102,36},{-86,52}}),   iconTransformation(
              extent={{-114,-12},{-92,10}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
            transformation(extent={{-98,66},{-84,80}}),   iconTransformation(extent=
               {{-110,76},{-90,96}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
            transformation(extent={{-100,54},{-86,68}}),  iconTransformation(extent={{-110,52},
                {-90,72}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
            transformation(extent={{24,58},{36,70}}),     iconTransformation(extent=
               {{88,52},{108,72}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
            transformation(extent={{18,68},{30,80}}),     iconTransformation(extent=
               {{88,74},{108,94}})));
      Simplest.BloodGases bloodGases
        annotation (Placement(transformation(extent={{-52,32},{-8,74}})));
      AcidBaseBalance.Acidbase.OSA.O2CO2
            venBlood(pH(displayUnit="iu"))
        annotation (Placement(transformation(extent={{16,-48},{72,38}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-30,0},{-16,14}}), iconTransformation(extent=
                {{-110,28},{-90,48}})));
      Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
          Placement(transformation(extent={{88,20},{102,34}}), iconTransformation(
              extent={{90,14},{110,34}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
          Placement(transformation(extent={{90,12},{104,26}}), iconTransformation(
              extent={{90,-6},{110,14}})));
      Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={95,9}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-20})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
        "outgoing concentration of HCO3" annotation (Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={97,-2}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-40})));
      Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={96,-12}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-60})));
    equation

      connect(O2a, bloodGases.O2a) annotation (Line(points={{-91,73},{-72.5,73},{
              -72.5,71.06},{-52,71.06}}, color={0,0,127}));
      connect(bloodGases.CO2a, CO2a) annotation (Line(points={{-52,66.44},{-74,
              66.44},{-74,61},{-93,61}}, color={0,0,127}));
      connect(bloodGases.Q, Q) annotation (Line(points={{-52.66,52.79},{-74,52.79},
              {-74,44},{-94,44}}, color={0,0,127}));
      connect(bloodGases.MO2, MO2) annotation (Line(points={{-53.1,45.65},{-70,
              45.65},{-70,30},{-94,30}}, color={0,0,127}));
      connect(bloodGases.MCO2, MCO2) annotation (Line(points={{-52.66,38.93},{-62,
              38.93},{-62,18},{-94,18}}, color={0,0,127}));
      connect(bloodGases.CO2v, CO2v) annotation (Line(points={{-8.44,66.02},{1.78,
              66.02},{1.78,64},{30,64}}, color={0,0,127}));
      connect(bloodGases.O2v, O2v) annotation (Line(points={{-8.44,70.64},{-2,
              70.64},{-2,74},{24,74}}, color={0,0,127}));
      connect(venBlood.ctO2, O2v) annotation (Line(points={{14.6,15.2353},{-2,
              15.2353},{-2,74},{24,74}}, color={0,0,127}));
      connect(venBlood.ctCO2, CO2v) annotation (Line(points={{14.6,10.1765},{2,
              10.1765},{2,64},{30,64}}, color={0,0,127}));
      connect(venBlood.BEox, BEox) annotation (Line(points={{14.6,5.11765},{
              -0.7,5.11765},{-0.7,7},{-23,7}},
                                          color={0,0,127}));
      connect(venBlood.pO2, pO2_v) annotation (Line(points={{73.4,13.2118},{
              80.7,13.2118},{80.7,27},{95,27}},
                                           color={0,0,127}));
      connect(venBlood.pCO2, pCO2_v) annotation (Line(points={{73.4,8.15294},{
              81.7,8.15294},{81.7,19},{97,19}}, color={0,0,127}));
      connect(venBlood.pH, pH_v) annotation (Line(points={{73.4,2.08235},{86,
              2.08235},{86,9},{95,9}}, color={0,0,127}));
      connect(venBlood.cHCO3, cHCO3_v) annotation (Line(points={{73.4,-2.97647},
              {82.7,-2.97647},{82.7,-2},{97,-2}},color={0,0,127}));
      connect(venBlood.sO2, sO2_v) annotation (Line(points={{73.4,-8.03529},{82,
              -8.03529},{82,-12},{96,-12}}, color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,-106},{114,-138}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end SimplestTissue_bad;

    model DO2_calculation
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2 annotation (Placement(
            transformation(extent={{100,58},{120,78}}), iconTransformation(extent={{100,58},
                {120,78}})));
      Physiolibrary.Types.RealIO.FractionOutput O2ER annotation (Placement(
            transformation(extent={{100,34},{120,54}}),   iconTransformation(extent={{100,34},
                {120,54}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2art annotation (Placement(
            transformation(extent={{-116,26},{-100,42}}), iconTransformation(extent={{-116,26},
                {-100,42}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q "perfusion" annotation (
          Placement(transformation(extent={{-116,-22},{-100,-6}}),
            iconTransformation(extent={{-116,-22},{-100,-6}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
            transformation(extent={{-116,-52},{-100,-36}}), iconTransformation(
              extent={{-116,-52},{-100,-36}})));

    equation


     DO2=Q*O2art;
     O2ER=VO2/DO2;
     annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-100},{102,-116}},
              textColor={28,108,200},
              textString="%name"),
            Text(
              extent={{-64,38},{48,2}},
              textColor={28,108,200},
              textString="DO2_calculation")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end DO2_calculation;

    model O2CO2
      Real HCO3act = 0.0307*(pCO2/133.32)*10^(pH-6.105) "HCO3 act acc to Berend, N ENGL J MED 2018";
      Real SBE = HCO3act - 24.8 + 16.2*(pH-7.4);
      Physiolibrary.Types.RealIO.FractionOutput sO2 annotation(Placement(transformation(extent = {{-8, -8}, {8, 8}}, rotation = 0, origin={4,8}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,58})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(displayUnit = "mmol/l")
        "outgoing concentration of HCO3"                                                                            annotation(Placement(transformation(extent = {{-7, -7}, {7, 7}}, rotation = 0, origin={5,116}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,78})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation(Placement(transformation(extent={{-160,
                -40},{-120,0}}),                                                                                                 iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={-186,110})));
      Physiolibrary.Types.RealIO.pHOutput pH(start = 7.4) annotation(Placement(transformation(extent={{-7,-7},
                {7,7}},                                                                                                    rotation = 0, origin={1,-41}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,98})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation(Placement(transformation(extent={{-6,6},{
                6,-6}},                                                                                                    rotation = 0, origin={-46,0}),     iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,0})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation(Placement(transformation(extent = {{-7, 7}, {7, -7}}, rotation = 0, origin={5,104}),    iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,-20})));
      AcidBaseBalance.Acidbase.OSA.ctO2content bloodctO2content
        annotation (Placement(transformation(extent={{-80,12},{-20,72}})));
      AcidBaseBalance.Acidbase.OSA.ctCO2content bloodctCO2content
        annotation (Placement(transformation(extent={{-80,86},{-20,146}})));
      AcidBaseBalance.Acidbase.OSA.BEINV vanSlykeEquation
        annotation (Placement(transformation(extent={{-82,-76},{-20,-16}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ceHb
        "effiective concentration of hemoglobin (mmol/l)"                                                   annotation(Placement(transformation(extent = {{-6, 6}, {6, -6}}, rotation = 0, origin = {-58, 0}), iconTransformation(extent = {{-10, -10}, {10, 10}}, rotation = 0, origin={66,20})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctO2 annotation (Placement(
            transformation(extent={{-160,150},{-120,190}}), iconTransformation(
              extent={{-196,140},{-176,160}})));
      Physiolibrary.Types.RealIO.PressureOutput pO2( start = 13300) annotation (Placement(
            transformation(extent={{-30,162},{-10,182}}), iconTransformation(extent={{56,132},
                {76,152}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctCO2 annotation (Placement(
            transformation(extent={{-160,190},{-120,230}}), iconTransformation(
              extent={{-196,120},{-176,140}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2( start = 5333) annotation (Placement(
            transformation(extent={{-26,194},{-6,214}}), iconTransformation(extent={{56,112},
                {76,132}})));
      Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints annotation(Placement(transformation(extent={{-80,200},
                {-40,220}})));
      Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1 annotation(Placement(transformation(extent={{-82,160},
                {-40,180}})));
    equation
      connect(vanSlykeEquation.BEox, BEox) annotation(Line(points={{-84.8182,
              -22},{-98,-22},{-98,-20},{-140,-20}},                                             color = {0, 0, 127}));
      connect(bloodctO2content.pH, bloodctCO2content.pH) annotation(Line(points={{-83,
              54.6},{-120,54.6},{-120,128},{-83,128}},                                                                                               color={238,46,
              47},
          thickness=0.5));
      connect(bloodctCO2content.cHCO3, cHCO3) annotation(Line(points={{-17,116},
              {5,116}},                                                                       color = {0, 0, 127}));
      connect(bloodctO2content.ceHb, ceHb) annotation(Line(points={{-68,9},{
              -68,0},{-58,0}},                                                                       color = {0, 0, 127}));
      connect(bloodctCO2content.cdCO2p, cdCO2)
        annotation (Line(points={{-17,104},{5,104}},         color={0,0,127}));
      connect(bloodctO2content.cdO2p, cdO2)
        annotation (Line(points={{-56,9},{-56,0},{-46,0}},  color={0,0,127}));
      connect(bloodctO2content.sO2, sO2)
        annotation (Line(points={{-32,9},{-32,8},{4,8}},  color={0,0,127}));
      connect(vanSlykeEquation.pH, bloodctCO2content.pH) annotation (Line(points={{
              -23.3818,-40.6},{-12,-40.6},{-12,-8},{-120,-8},{-120,128},{-83,
              128}},                                                       color={238,46,
              47},
          thickness=0.5));
      connect(ctCO2, inverseBlockConstraints.u1) annotation (Line(points={{-140,
              210},{-82,210}},                  color={0,0,127}));
      connect(bloodctCO2content.ctCO2, inverseBlockConstraints.u2) annotation (Line(
            points={{-17,128},{-6,128},{-6,190},{-60,190},{-60,210},{-76,210}},
            color={0,0,127}));
      connect(inverseBlockConstraints1.u1, ctO2) annotation (Line(points={{-84.1,
              170},{-140,170}},                  color={0,0,127}));
      connect(bloodctCO2content.sO2, sO2) annotation (Line(points={{-83,92},{-90,92},
              {-90,78},{-12,78},{-12,8},{4,8}}, color={0,0,127}));
      connect(vanSlykeEquation.sO2, sO2) annotation (Line(points={{-84.8182,
              -68.2},{-90,-68.2},{-90,-82},{24,-82},{24,-6},{-12,-6},{-12,8},{4,
              8}},                                                       color={0,0,
              127}));
      connect(bloodctO2content.totalO2, inverseBlockConstraints1.u2) annotation (
          Line(points={{-44,9},{-44,0},{24,0},{24,156},{-60,156},{-60,170},{
              -77.8,170}},
                     color={0,0,127}));
      connect(inverseBlockConstraints.y1, pCO2)
        annotation (Line(points={{-39,210},{-28,210},{-28,204},{-16,204}},
                                                       color={0,0,127}));
      connect(inverseBlockConstraints.y2, vanSlykeEquation.pCO2) annotation (Line(
            points={{-43,210},{-50,210},{-50,236},{-162,236},{-162,-34},{
              -84.8182,-34}},
            color={0,0,127},
          thickness=0.5));
      connect(bloodctO2content.pCO2, vanSlykeEquation.pCO2) annotation (Line(points={{-83,42},
              {-162,42},{-162,-34},{-84.8182,-34}},       color={0,0,127},
          thickness=0.5));
      connect(bloodctCO2content.pCO2, vanSlykeEquation.pCO2) annotation (Line(
            points={{-83,140},{-162,140},{-162,-34},{-84.8182,-34}},
                                                                  color={0,0,127},
          thickness=0.5));

      connect(inverseBlockConstraints1.y1, pO2)
        annotation (Line(points={{-38.95,170},{-28,170},{-28,172},{-20,172}},
                                                       color={0,0,127}));
      connect(inverseBlockConstraints1.y2, bloodctO2content.pO2) annotation (Line(
            points={{-43.15,170},{-48,170},{-48,188},{-154,188},{-154,66},{
              -83,66}},
            color={0,0,127}));
      connect(vanSlykeEquation.pH, pH) annotation (Line(points={{-23.3818,-40.6},
              {-10.76,-40.6},{-10.76,-41},{1,-41}},        color={238,46,47},
          thickness=0.5));

      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent={{-180,
                -100},{60,240}}),                                                                         graphics={  Rectangle(extent={{
                  -180,196},{56,-58}},                                                                                                                               lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid), Text(extent={{
                  -116,64},{44,54}},                                                                                                                                                    lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "sO2"), Text(extent={{
                  -114,86},{46,68}},                                                                                                                                                                                  lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "HCO3"),
                                                                                                                                                                               Text(extent={{
                  -92,104},{44,94}},                                                                                                                                                                                lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "pH"),  Text(extent = {{-73, 7}, {73, -7}}, lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,                                                                                                     origin={
                  -29,145},                                                                                                                                           rotation = 180, fontSize=
                  12,
                horizontalAlignment=TextAlignment.Right,
              textString="pO2"),                                                                                                                                                   Text(extent = {{-75, 6}, {75, -6}}, lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,                                                                                                     origin={
                  -31,120},                                                                                                                                           rotation = 180, fontSize=
                  12,
                horizontalAlignment=TextAlignment.Right,
              textString="pCO2"),                                                                                                                                                   Text(extent={{
                  -104,92},{6,4}},                                                                                                                                                                                        lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,
              textString="O2CO2"),                                                                                                                                         Text(extent={{
                  -172,154},{26,144}},                                                                                                                                                                           lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,                                                                                                     fontSize=
                  12,
                horizontalAlignment=TextAlignment.Left,
              textString="ctO2"),                                                                                                                                                Text(extent={{
                  -174,138},{-22,124}},                                                                                                                                                                               lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,                                                                                                     fontSize=
                  12,
                horizontalAlignment=TextAlignment.Left,
              textString="ctCO2"),                                                                                                                                                 Text(extent = {{-74, 8}, {74, -8}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, origin={
                  -26,0},                                                                                                                                              rotation = 180, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "cdO2"), Text(extent = {{-78, 7}, {78, -7}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, origin={
                  -32,23},                                                                                                                                             rotation = 180, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "ceHb"), Text(extent = {{-80, 11.5}, {80, -11.5}}, lineColor = {0, 0, 255}, fillColor = {255, 255, 0},
                fillPattern =                                                                                                   FillPattern.Solid, origin={
                  -30,-19.5},                                                                                                                                            rotation = 180, fontSize = 12,
                horizontalAlignment =                                                                                                   TextAlignment.Right, textString = "cdCO2"),
                                                                                                                                                                                  Text(extent={{
                  -174,118},{-26,102}},                                                                                                                                                                                lineColor=
                  {0,0,255},                                                                                                                                                                                                        fillColor=
                  {255,255,0},
                fillPattern=FillPattern.Solid,                                                                                                     fontSize=
                  12,
                horizontalAlignment=TextAlignment.Left,
              textString="BEox")}),                                                                                                                                                 Diagram(coordinateSystem(preserveAspectRatio=false,   extent={{-180,
                -100},{60,240}})));
    end O2CO2;

    model DO2_curve_calculation
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2 annotation (Placement(
            transformation(extent={{100,58},{120,78}}), iconTransformation(extent={{100,58},
                {120,78}})));
      Physiolibrary.Types.RealIO.FractionOutput O2ER annotation (Placement(
            transformation(extent={{100,34},{120,54}}),   iconTransformation(extent={{100,34},
                {120,54}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2art annotation (Placement(
            transformation(extent={{-116,26},{-100,42}}), iconTransformation(extent={{-116,26},
                {-100,42}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2art annotation (Placement(
            transformation(extent={{-116,40},{-98,58}}), iconTransformation(extent={{-116,4},
                {-100,20}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q "perfusion" annotation (
          Placement(transformation(extent={{-116,-22},{-100,-6}}),
            iconTransformation(extent={{-116,-22},{-100,-6}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
            transformation(extent={{-116,-52},{-100,-36}}), iconTransformation(
              extent={{-116,-52},{-100,-36}})));
      Physiolibrary.Types.RealIO.FractionInput RQ annotation (Placement(
            transformation(extent={{-116,-82},{-100,-66}}), iconTransformation(
              extent={{-116,-82},{-100,-66}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput O2ven annotation (Placement(
            transformation(extent={{100,0},{120,20}}),  iconTransformation(extent={{100,0},
                {120,20}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput CO2ven annotation (Placement(
            transformation(extent={{-28,64},{-8,84}}),  iconTransformation(extent={{
                100,-48},{120,-28}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-114,80},{-98,96}}),  iconTransformation(extent=
               {{-116,82},{-100,98}})));
      Physiolibrary.Types.RealIO.MassFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{100,-86},{120,-66}}), iconTransformation(extent=
               {{100,-86},{120,-66}})));
      O2CO2 O2CO2_ven
        annotation (Placement(transformation(extent={{-44,-36},{30,58}})));

    equation

     DO2=Q*O2art;
     VCO2=VO2*RQ;
     O2ven=(DO2-VO2)/Q;
     CO2ven=(CO2art*Q+VCO2)/Q;
     O2ER=VO2/DO2;

      connect(O2CO2_ven.BEox, BEox) annotation (Line(points={{-45.85,22.0588},{
              -78,22.0588},{-78,88},{-106,88}},
                                   color={0,0,127}));
      connect(CO2ven, O2CO2_ven.ctCO2) annotation (Line(points={{-18,74},{-40,
              74},{-40,72},{-68,72},{-68,27.5882},{-45.85,27.5882}},
                                               color={0,0,127}));
      connect(O2CO2_ven.ctO2, O2ven) annotation (Line(points={{-45.85,33.1176},
              {-58,33.1176},{-58,60},{72,60},{72,10},{110,10}},
                                                           color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-100},{102,-116}},
              textColor={28,108,200},
              textString="%name"),
            Text(
              extent={{-64,38},{48,2}},
              textColor={28,108,200},
              textString="DO2_calculation")}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end DO2_curve_calculation;

    model to_mlO2CO2_per_min
      //gas volume STPD ml/min => mol/m3
      Modelica.Blocks.Interfaces.RealOutput ml_min annotation (Placement(
            transformation(extent={{100,-8},{120,12}}), iconTransformation(
              extent={{100,-8},{120,12}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput molarflowrate annotation (
          Placement(transformation(extent={{-136,-16},{-96,24}}),
            iconTransformation(extent={{-136,-16},{-96,24}})));
    equation
      //22.414 ml => 1 mmol
      // 1 ml => 1/22.414 mmol=>//22.414/1000 mol
     molarflowrate=ml_min/22.414/1000/60; //mol/sec
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-96,34},{94,-20}},
              textColor={0,0,0},
              textString="from mol/sec 
to ml/min"),Text(
              extent={{-100,-100},{110,-130}},
              textColor={0,0,0},
              textString="%name")}),          Diagram(coordinateSystem(
              preserveAspectRatio=false)),
        Documentation(info="<html>
<p>conversion albumin g/l =&gt; mol/m3</p>
</html>"));
    end to_mlO2CO2_per_min;

    model VAi
      "Calculate inspired alveolar ventilation from tidal tolume, VD and bratf frequency"
      Physiolibrary.Types.RealIO.FrequencyInput fd annotation (Placement(
            transformation(extent={{-116,8},{-92,32}}), iconTransformation(extent={{
                -116,8},{-92,32}})));
      Physiolibrary.Types.RealIO.VolumeInput Vt "dechový objem" annotation (
          Placement(transformation(extent={{-116,-32},{-92,-8}}),
            iconTransformation(extent={{-116,-32},{-92,-8}})));
      Physiolibrary.Types.RealIO.VolumeInput Vd "objem mrtvého prostoru"
        annotation (Placement(transformation(extent={{-118,-66},{-94,-42}}),
            iconTransformation(extent={{-118,-82},{-94,-58}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput VAi annotation (Placement(
            transformation(extent={{98,-28},{118,-8}}), iconTransformation(extent={{
                98,-28},{118,-8}})));

    equation
      VAi=fd*(Vt-Vd);
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-70,46},{66,-14}},
              textColor={28,108,200},
              textString="VAi"),
            Text(
              extent={{-100,-106},{96,-128}},
              textColor={28,108,200},
              textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end VAi;

    model Hb_from_g_dl
      parameter Real Hb_g_dl= 15
        "Hemohlobin concentration in g/dl" annotation (Placement(transformation(
              extent={{-120,2},{-90,32}}),  iconTransformation(extent={{-120,2},
                {-90,32}})));
      parameter Real ctHb=Hb_g_dl*0.6206;
      Physiolibrary.Types.RealIO.ConcentrationOutput Hb annotation (Placement(
            transformation(extent={{100,6},{120,26}}), iconTransformation(extent={{100,
                6},{120,26}})));
    equation
      Hb=ctHb;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-68,46},{50,-22}},
              textColor={28,108,200},
              textString="Hb"),
            Text(
              extent={{-102,-100},{102,-124}},
              textColor={28,108,200},
              textString="%name")}),            Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end Hb_from_g_dl;

    model O2CO2curves
      Physiolibrary.Types.RealIO.PressureInput PCO2 annotation (Placement(
            transformation(extent={{-76,14},{-58,32}}),   iconTransformation(extent=
               {{-114,66},{-94,86}})));

      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2_array[numberOfIntervals +
        1]                                                                            annotation (
          Placement(transformation(extent={{92,70},{112,90}}),  iconTransformation(
              extent={{90,0},{110,20}})));

      Physiolibrary.Types.RealIO.PressureInput PO2 annotation (Placement(
            transformation(extent={{-68,28},{-50,46}}),    iconTransformation(
              extent={{-114,28},{-94,48}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2_array[numberOfIntervals +
        1] annotation (Placement(transformation(extent={{94,52},{114,72}}),
            iconTransformation(extent={{90,-20},{110,0}})));

      parameter Physiolibrary.Types.Pressure dPCO2 = (pCO2max-pCO2min)/numberOfIntervals;
      parameter Physiolibrary.Types.Pressure dPO2 = (pO2max-pO2min)/numberOfIntervals;
      parameter  Physiolibrary.Types.Pressure pCO2min=1;
      parameter  Physiolibrary.Types.Pressure pCO2max=10665.7909932;
      parameter  Physiolibrary.Types.Pressure pO2min=1;
      parameter  Physiolibrary.Types.Pressure pO2max=19998.35811225;
      parameter  Integer numberOfIntervals = 100;
      Physiolibrary.Types.Pressure pCO2array[numberOfIntervals+1];
      Physiolibrary.Types.Pressure pO2array[numberOfIntervals+1];

      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-66,38},{-52,52}}),  iconTransformation(extent={
                {-114,-6},{-94,14}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (Placement(
            transformation(extent={{86,14},{106,34}}),  iconTransformation(extent={{90,80},
                {110,100}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
            transformation(extent={{76,22},{96,42}}),iconTransformation(extent={{90,60},
                {110,80}})));
      Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
              extent={{80,0},{100,20}}),   iconTransformation(extent={{90,40},{110,60}})));
      NewBloodyMary_testing.OSA.PO2PCO2 pO2pCO2
        annotation (Placement(transformation(extent={{-28,-48},{58,42}})));
      Physiolibrary.Types.RealIO.TemperatureInput temp annotation (Placement(
            transformation(extent={{-120,-76},{-100,-56}}),
                                                          iconTransformation(extent=
               {{-116,-66},{-94,-44}})));
      Physiolibrary.Types.RealIO.FractionOutput sO2 annotation (Placement(
            transformation(extent={{86,-18},{106,2}}), iconTransformation(extent={{90,20},
                {110,40}})));
      Modelica.Blocks.Interfaces.RealInput Hb_g_per_dl
        "normal 15 g/dl; mmol/l = Hb_g_dl/16.114" annotation (Placement(
            transformation(extent={{-106,68},{-76,98}}), iconTransformation(extent={
                {-112,-90},{-94,-72}})));
      Modelica.Blocks.Math.Division division
        annotation (Placement(transformation(extent={{-28,72},{-8,92}})));
      Modelica.Blocks.Sources.Constant const(k=1.6114)
        annotation (Placement(transformation(extent={{-60,60},{-40,80}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctHb annotation (Placement(
            transformation(extent={{26,74},{46,94}}),iconTransformation(extent={{-10,-10},
                {10,10}},
            rotation=270,
            origin={72,-108})));
      inner O2CO2_containers.ModelSettings modelSettings
        annotation (Placement(transformation(extent={{-94,-94},{-74,-74}})));

        NewBloodyMary_testing.OSA.PO2PCO2 ctCO2_curve[numberOfIntervals+1];
        NewBloodyMary_testing.OSA.PO2PCO2 ctO2_curve[numberOfIntervals+1];

      Physiolibrary.Types.RealIO.ConcentrationOutput dctCO2_array
                                                                [numberOfIntervals +
        1]                                                                            annotation (
          Placement(transformation(extent={{130,66},{150,86}}), iconTransformation(
              extent={{90,-40},{110,-20}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput dctO2_array
                                                               [numberOfIntervals +
        1] annotation (Placement(transformation(extent={{130,48},{150,68}}),
            iconTransformation(extent={{90,-60},{110,-40}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput r_ctCO2_array
                                                                [numberOfIntervals +
        1]                                                                            annotation (
          Placement(transformation(extent={{130,66},{150,86}}), iconTransformation(
              extent={{90,-80},{110,-60}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput r_ctO2_array
                                                               [numberOfIntervals +
        1] annotation (Placement(transformation(extent={{130,48},{150,68}}),
            iconTransformation(extent={{90,-100},{110,-80}})));
    equation
       pO2pCO2.ctAlb = modelSettings.cAlb;
       pO2pCO2.ctPi = modelSettings.cPi;
       pO2pCO2.cDPG = modelSettings.cDPG;
       pO2pCO2.FMetHb = modelSettings.FMetHb;
       pO2pCO2.FHbCO = modelSettings.FCOHb;
       pO2pCO2.FHbF = modelSettings.FHbF;

       for i in 0:numberOfIntervals loop
        pCO2array[i+1]=pCO2min + i*dPCO2;
        pO2array[i+1]=pO2min + i*dPO2;
      end for;
      for i in 1:numberOfIntervals+1 loop
       //ctCO2_array[i]=pCO2array[i]*2;

       ctCO2_curve[i].ctAlb = modelSettings.cAlb;
       ctCO2_curve[i].ctPi = modelSettings.cPi;
       ctCO2_curve[i].cDPG = modelSettings.cDPG;
       ctCO2_curve[i].FMetHb = modelSettings.FMetHb;
       ctCO2_curve[i].FHbCO = modelSettings.FCOHb;
       ctCO2_curve[i].FHbF = modelSettings.FHbF;
       ctCO2_curve[i].T=temp;
       ctCO2_curve[i].ctHb=ctHb;
       ctCO2_curve[i].BEox=BEox;
       ctCO2_curve[i].pO2=PO2;

       ctCO2_curve[i].pCO2=pCO2array[i];
       ctCO2_array[i]=ctCO2_curve[i].ctCO2;
       if (i==1) then
         dctCO2_array[i]=ctCO2_array[i];
       else
         dctCO2_array[i]=ctCO2_array[i]-ctCO2_array[i-1];
       end if;
       r_ctCO2_array[i]=sqrt(dctCO2_array[i]);

      //ctO2_array[i]=pO2array[i]*2;

       ctO2_curve[i].ctAlb = modelSettings.cAlb;
       ctO2_curve[i].ctPi = modelSettings.cPi;
       ctO2_curve[i].cDPG = modelSettings.cDPG;
       ctO2_curve[i].FMetHb = modelSettings.FMetHb;
       ctO2_curve[i].FHbCO = modelSettings.FCOHb;
       ctO2_curve[i].FHbF = modelSettings.FHbF;
       ctO2_curve[i].T=temp;
       ctO2_curve[i].ctHb=ctHb;
       ctO2_curve[i].BEox=BEox;
       ctO2_curve[i].pCO2=PCO2;

       ctO2_curve[i].pO2=pO2array[i];
       ctO2_array[i]=ctO2_curve[i].ctO2;

       if (i==1) then
         dctO2_array[i]=ctO2_array[i];
       else
         dctO2_array[i]=ctO2_array[i]-ctO2_array[i-1];
       end if;
       r_ctO2_array[i]=sqrt(dctO2_array[i]);

      end for;

      connect(pO2pCO2.pO2,PO2)  annotation (Line(points={{-32.3,32.1},{-49.15,32.1},
              {-49.15,37},{-59,37}}, color={0,0,127}));
      connect(pO2pCO2.pCO2, PCO2) annotation (Line(points={{-32.3,23.1},{-64,23.1},{
              -64,23},{-67,23}}, color={0,0,127}));
      connect(pO2pCO2.T, temp) annotation (Line(points={{-32.3,-48},{-48,-48},{-48,-66},
              {-110,-66}},color={0,0,127}));
      connect(ctO2, pO2pCO2.ctO2) annotation (Line(points={{86,32},{76,32},{76,33},{
              62.3,33}}, color={0,0,127}));
      connect(pO2pCO2.ctCO2, ctCO2)
        annotation (Line(points={{62.3,24},{96,24}}, color={0,0,127}));
      connect(pO2pCO2.pH, pH) annotation (Line(points={{62.3,15},{70,15},{70,10},{90,
              10}}, color={0,0,127}));
      connect(pO2pCO2.sO2, sO2) annotation (Line(points={{62.3,-3},{78,-3},{78,-8},{
              96,-8}}, color={0,0,127}));
      connect(Hb_g_per_dl, division.u1) annotation (Line(points={{-91,83},{-61.5,83},
              {-61.5,88},{-30,88}}, color={0,0,127}));
      connect(const.y, division.u2) annotation (Line(points={{-39,70},{-36,70},{-36,
              76},{-30,76}}, color={0,0,127}));
      connect(pO2pCO2.BEox, BEox) annotation (Line(points={{-32.3,41.1},{-43.15,41.1},
              {-43.15,45},{-59,45}}, color={0,0,127}));
      connect(ctHb, division.y) annotation (Line(points={{36,84},{22,84},{22,82},{-7,
              82}}, color={0,0,127}));
      connect(pO2pCO2.ctHb, division.y) annotation (Line(points={{-32.3,14.1},{-82,14.1},
              {-82,54},{8,54},{8,82},{-7,82}}, color={0,0,127}));
        annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={244,125,35},
              fillPattern=FillPattern.Solid)}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end O2CO2curves;

    model DO2DCO2_calculation
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2 annotation (Placement(
            transformation(extent={{100,58},{120,78}}), iconTransformation(extent={{100,58},
                {120,78}})));
      Physiolibrary.Types.RealIO.FractionOutput O2ER annotation (Placement(
            transformation(extent={{100,34},{120,54}}),   iconTransformation(extent={{100,34},
                {120,54}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2art annotation (Placement(
            transformation(extent={{-116,26},{-100,42}}), iconTransformation(extent={{-116,26},
                {-100,42}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q "perfusion" annotation (
          Placement(transformation(extent={{-116,-22},{-100,-6}}),
            iconTransformation(extent={{-116,-22},{-100,-6}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
            transformation(extent={{-116,-52},{-100,-36}}), iconTransformation(
              extent={{-116,-52},{-100,-36}})));

      Physiolibrary.Types.RealIO.FractionOutput CO2ER
                                                     annotation (Placement(
            transformation(extent={{100,34},{120,54}}),   iconTransformation(extent={{100,-84},
                {120,-64}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VDO2 "oxygen venous delivery"
        annotation (Placement(transformation(extent={{100,58},{120,78}}),
            iconTransformation(extent={{100,8},{120,28}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DCO2
        "arterial oxygen delivery" annotation (Placement(transformation(extent={{100,
                58},{120,78}}), iconTransformation(extent={{100,-34},{120,-14}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VDCO2
        "arterial oxygen delivery" annotation (Placement(transformation(extent={{100,
                58},{120,78}}), iconTransformation(extent={{100,-58},{120,-38}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2art
                                                          annotation (Placement(
            transformation(extent={{-116,26},{-100,42}}), iconTransformation(extent={{-116,6},
                {-100,22}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput VCO2 annotation (Placement(
            transformation(extent={{-116,-52},{-100,-36}}), iconTransformation(
              extent={{-116,-78},{-100,-62}})));
    equation

     DO2=Q*O2art;
     O2ER=VO2/DO2;
     VDO2=DO2-VO2;

     DCO2=Q*CO2art;
     VDCO2=VCO2+DCO2;
     CO2ER=VCO2/VDCO2;


     annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-100},{102,-116}},
              textColor={28,108,200},
              textString="%name"),
            Text(
              extent={{-64,38},{48,2}},
              textColor={28,108,200},
              textString="DO2_DCO2")}),        Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end DO2DCO2_calculation;

    model AlvEq_10units_with_shunts_and_mixing

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
10 units
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
    end AlvEq_10units_with_shunts_and_mixing;

    model set3variables
      Physiolibrary.Types.RealIO.FractionInput F1_3_i "fraction input 1"
        annotation (Placement(transformation(extent={{-140,-4},{-100,36}}),
            iconTransformation(extent={{-118,68},{-100,86}})));
      Physiolibrary.Types.RealIO.FractionInput F2_3_i "fraction input 2"
        annotation (Placement(transformation(extent={{-140,34},{-100,74}}),
            iconTransformation(extent={{-116,28},{-98,46}})));
      Physiolibrary.Types.RealIO.FractionInput F3_3_i "fraction input 3"
        annotation (Placement(transformation(extent={{-140,64},{-100,104}}),
            iconTransformation(extent={{-118,-12},{-100,6}})));
      Physiolibrary.Types.RealIO.FractionOutput F1_3_o annotation (Placement(
            transformation(extent={{100,66},{120,86}}), iconTransformation(extent={{
                100,66},{120,86}})));
      Physiolibrary.Types.RealIO.FractionOutput F3_3_o annotation (Placement(
            transformation(extent={{100,34},{120,54}}),iconTransformation(extent={{100,
                -4},{120,16}})));
      Physiolibrary.Types.RealIO.FractionOutput F2_3_o annotation (Placement(
            transformation(extent={{100,10},{120,30}}),iconTransformation(extent={{100,
                28},{120,48}})));
      Real sum;
    equation
      sum=F1_3_i+F2_3_i+F3_3_i;
      F1_3_o=F1_3_i/sum;
      F2_3_o=F2_3_i/sum;
      F3_3_o=F3_3_i/sum;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200}),
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-104},{100,-116}},
              textColor={28,108,200},
              textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end set3variables;

    model set7variables
      Physiolibrary.Types.RealIO.FractionInput F1_7_i "fraction input 1"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,68},{-100,86}})));
      Physiolibrary.Types.RealIO.FractionInput F2_7_i "fraction input 2"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,42},{-100,60}})));
      Physiolibrary.Types.RealIO.FractionInput F3_7_i "fraction input 3"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,12},{-100,30}})));
      Physiolibrary.Types.RealIO.FractionOutput F1_7_o annotation (Placement(
            transformation(extent={{100,74},{120,94}}), iconTransformation(extent={{100,74},
                {120,94}})));
      Physiolibrary.Types.RealIO.FractionOutput F3_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{100,26},
                {120,46}})));
      Physiolibrary.Types.RealIO.FractionOutput F2_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{98,50},
                {118,70}})));
      Real sum;
      Physiolibrary.Types.RealIO.FractionInput F4_7_i "fraction input 3"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,-16},{-100,2}})));
      Physiolibrary.Types.RealIO.FractionInput F5_7_i "fraction input 3"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,-44},{-100,-26}})));
      Physiolibrary.Types.RealIO.FractionInput F6_7_i "fraction input 3"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,-70},{-100,-52}})));
      Physiolibrary.Types.RealIO.FractionInput F7_7_i "fraction input 3"
        annotation (Placement(transformation(extent={{-202,-76},{-162,-36}}),
            iconTransformation(extent={{-118,-98},{-100,-80}})));
      Physiolibrary.Types.RealIO.FractionOutput F4_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{100,-2},
                {120,18}})));
      Physiolibrary.Types.RealIO.FractionOutput F5_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{100,-30},
                {120,-10}})));
      Physiolibrary.Types.RealIO.FractionOutput F6_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{100,-52},
                {120,-32}})));
      Physiolibrary.Types.RealIO.FractionOutput F7_7_o annotation (Placement(
            transformation(extent={{98,68},{118,88}}), iconTransformation(extent={{100,-76},
                {120,-56}})));
    equation
      sum=F1_7_i+F2_7_i+F3_7_i+F4_7_i+F5_7_i+F6_7_i+F7_7_i;
      F1_7_o=F1_7_i/sum;
      F2_7_o=F2_7_i/sum;
      F3_7_o=F3_7_i/sum;
      F4_7_o=F4_7_i/sum;
      F5_7_o=F5_7_i/sum;
      F6_7_o=F6_7_i/sum;
      F7_7_o=F7_7_i/sum;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200}),
            Rectangle(
              extent={{-100,98},{100,-102}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-104},{100,-116}},
              textColor={28,108,200},
              textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end set7variables;

    model Simplest3Tissue

      Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
            transformation(extent={{-100,12},{-88,24}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-103,-67})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-100,24},{-88,36}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-105,-35})));

      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-102,36},{-86,52}}),   iconTransformation(
              extent={{-114,-12},{-92,10}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
            transformation(extent={{-98,82},{-84,96}}),   iconTransformation(extent=
               {{-110,76},{-90,96}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
            transformation(extent={{-98,68},{-84,82}}),   iconTransformation(extent={{-110,52},
                {-90,72}})));
      Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
          Placement(transformation(extent={{96,68},{110,82}}), iconTransformation(
              extent={{90,14},{110,34}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
          Placement(transformation(extent={{98,60},{112,74}}), iconTransformation(
              extent={{90,-6},{110,14}})));
      Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={103,57}),
                            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-20})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
        "outgoing concentration of HCO3" annotation (Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={105,46}),iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-40})));
      Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={104,36}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-60})));
      SimplestTissue_bad simplestTissue
        annotation (Placement(transformation(extent={{-14,70},{6,90}})));
      SimplestTissue_bad simplestTissue1
        annotation (Placement(transformation(extent={{-14,28},{6,48}})));
      SimplestTissue_bad simplestTissue2
        annotation (Placement(transformation(extent={{-14,-14},{6,6}})));
      set3variables set3variables1
        annotation (Placement(transformation(extent={{-70,-42},{-50,-22}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-98,58},{-84,72}}),iconTransformation(extent={{-110,26},
                {-90,46}})));
    equation

      connect(O2a, simplestTissue.O2a) annotation (Line(points={{-91,89},{-24,
              89},{-24,88.6},{-14,88.6}}, color={0,0,127}));
      connect(simplestTissue1.O2a, simplestTissue.O2a) annotation (Line(points=
              {{-14,46.6},{-24,46.6},{-24,88.6},{-14,88.6}}, color={0,0,127}));
      connect(simplestTissue2.O2a, simplestTissue.O2a) annotation (Line(points=
              {{-14,4.6},{-24,4.6},{-24,88.6},{-14,88.6}}, color={0,0,127}));
      connect(CO2a, simplestTissue.CO2a) annotation (Line(points={{-91,75},{-64,
              75},{-64,86},{-14,86}}, color={0,0,127}));
      connect(simplestTissue1.CO2a, simplestTissue.CO2a) annotation (Line(
            points={{-14,44.2},{-30,44.2},{-30,44},{-32,44},{-32,86.2},{-14,
              86.2}}, color={0,0,127}));
      connect(simplestTissue2.CO2a, simplestTissue.CO2a) annotation (Line(
            points={{-14,2.2},{-32,2.2},{-32,86},{-14,86},{-14,86.2}}, color={0,
              0,127}));
      connect(simplestTissue.BEox, BEox) annotation (Line(points={{-14,83.8},{
              -36,83.8},{-36,84},{-60,84},{-60,64},{-88,64}}, color={0,0,127}));
      connect(simplestTissue1.BEox, BEox) annotation (Line(points={{-14,41.8},{
              -26,41.8},{-26,42},{-36,42},{-36,84},{-60,84},{-60,64},{-88,64},{
              -91,65}}, color={0,0,127}));
      connect(simplestTissue2.BEox, BEox) annotation (Line(points={{-14,-0.2},{
              -26,-0.2},{-26,0},{-36,0},{-36,84},{-60,84},{-60,64},{-88,64},{
              -91,65}}, color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,-106},{114,-138}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end Simplest3Tissue;

    model Q3distribution
      Physiolibrary.Types.RealIO.FractionInput F1_3_i "fraction input 1"
        annotation (Placement(transformation(extent={{-140,-4},{-100,36}}),
            iconTransformation(extent={{-118,68},{-100,86}})));
      Physiolibrary.Types.RealIO.FractionInput F2_3_i "fraction input 2"
        annotation (Placement(transformation(extent={{-140,34},{-100,74}}),
            iconTransformation(extent={{-118,48},{-100,66}})));
      Physiolibrary.Types.RealIO.FractionInput F3_3_i "fraction input 3"
        annotation (Placement(transformation(extent={{-140,64},{-100,104}}),
            iconTransformation(extent={{-118,28},{-100,46}})));
      Physiolibrary.Types.RealIO.FractionOutput F1_3_o annotation (Placement(
            transformation(extent={{100,66},{120,86}}), iconTransformation(extent={{
                100,66},{120,86}})));
      Physiolibrary.Types.RealIO.FractionOutput F3_3_o annotation (Placement(
            transformation(extent={{100,34},{120,54}}),iconTransformation(extent={{100,22},
                {120,42}})));
      Physiolibrary.Types.RealIO.FractionOutput F2_3_o annotation (Placement(
            transformation(extent={{100,10},{120,30}}),iconTransformation(extent={{100,44},
                {120,64}})));
      Real sum;
    equation
      sum=F1_3_i+F2_3_i+F3_3_i;
      F1_3_o=F1_3_i/sum;
      F2_3_o=F2_3_i/sum;
      F3_3_o=F3_3_i/sum;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200}),
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-104},{100,-116}},
              textColor={28,108,200},
              textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end Q3distribution;

    model SimplestTissueDO2

      Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
            transformation(extent={{-100,-8},{-88,4}}),  iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-109,-67})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-100,4},{-88,16}}),  iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-109,-33})));

      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-102,16},{-86,32}}),   iconTransformation(
              extent={{-122,-16},{-100,6}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
            transformation(extent={{-98,66},{-84,80}}),   iconTransformation(extent={{-118,74},
                {-98,94}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
            transformation(extent={{-100,54},{-86,68}}),  iconTransformation(extent={{-118,50},
                {-98,70}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
            transformation(extent={{72,60},{84,72}}),     iconTransformation(extent={{-10,-10},
                {10,10}},
            rotation=90,
            origin={84,110})));
      Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
            transformation(extent={{68,76},{80,88}}),     iconTransformation(extent={{-10,-10},
                {10,10}},
            rotation=90,
            origin={62,110})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-98,40},{-84,54}}),iconTransformation(extent={{-116,26},
                {-96,46}})));
      Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
          Placement(transformation(extent={{66,32},{80,46}}),  iconTransformation(
              extent={{100,80},{120,100}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
          Placement(transformation(extent={{76,24},{90,38}}),  iconTransformation(
              extent={{100,64},{120,84}})));
      Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={95,25}),iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,58})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
        "outgoing concentration of HCO3" annotation (Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={95,14}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,42})));
      Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={90,4}),   iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,26})));
      SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-26,14},{16,56}})));
      DO2DCO2_calculation dO2DCO2_calculation
        annotation (Placement(transformation(extent={{-26,-48},{14,-12}})));
      Physiolibrary.Types.RealIO.FractionOutput CO2ER
                                                     annotation (Placement(
            transformation(extent={{42,-66},{62,-46}}),   iconTransformation(extent={{98,-98},
                {118,-78}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VDCO2
        "arterial oxygen delivery" annotation (Placement(transformation(extent={{72,-56},
                {92,-36}}),     iconTransformation(extent={{100,-78},{120,-58}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DCO2
        "arterial oxygen delivery" annotation (Placement(transformation(extent={{36,-44},
                {56,-24}}),     iconTransformation(extent={{100,-62},{120,-42}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VDO2 "oxygen venous delivery"
        annotation (Placement(transformation(extent={{64,-32},{84,-12}}),
            iconTransformation(extent={{100,-46},{120,-26}})));
      Physiolibrary.Types.RealIO.FractionOutput O2ER annotation (Placement(
            transformation(extent={{52,-24},{72,-4}}),    iconTransformation(extent={{100,-30},
                {120,-10}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2 annotation (Placement(
            transformation(extent={{36,-18},{56,2}}),   iconTransformation(extent={{100,-12},
                {120,8}})));
    equation

      connect(simplestTissue.O2v, O2v) annotation (Line(points={{15.58,52.64},{
              44,52.64},{44,82},{74,82}}, color={0,0,127}));
      connect(simplestTissue.CO2v, CO2v) annotation (Line(points={{15.58,48.02},
              {60,48.02},{60,66},{78,66}}, color={0,0,127}));
      connect(simplestTissue.pO2_v, pO2_v)
        annotation (Line(points={{16,40.04},{73,39}}, color={0,0,127}));
      connect(simplestTissue.pCO2_v, pCO2_v) annotation (Line(points={{16,35.84},
              {60,35.84},{60,31},{83,31}}, color={0,0,127}));
      connect(pH_v, simplestTissue.pH_v) annotation (Line(points={{95,25},{30,
              25},{30,30.8},{16,30.8}}, color={0,0,127}));
      connect(cHCO3_v, simplestTissue.cHCO3_v) annotation (Line(points={{95,14},
              {26,14},{26,26.6},{16,26.6}}, color={0,0,127}));
      connect(sO2_v, simplestTissue.sO2_v) annotation (Line(points={{90,4},{24,
              4},{24,22.4},{16,22.4}}, color={0,0,127}));
      connect(O2a, simplestTissue.O2a) annotation (Line(points={{-91,73},{-52,
              73},{-52,53.06},{-26,53.06}},
                                      color={0,0,127}));
      connect(CO2a, simplestTissue.CO2a) annotation (Line(points={{-93,61},{-64,
              61},{-64,48.02},{-26,48.02}},
                                      color={0,0,127}));
      connect(simplestTissue.BEox, BEox) annotation (Line(points={{-26,42.98},{
              -72,42.98},{-72,47},{-91,47}}, color={0,0,127}));
      connect(Q, simplestTissue.Q) annotation (Line(points={{-94,24},{-62,24},{
              -62,34.79},{-26.63,34.79}}, color={0,0,127}));
      connect(MO2, simplestTissue.MO2) annotation (Line(points={{-94,10},{-52,
              10},{-52,27.65},{-27.05,27.65}}, color={0,0,127}));
      connect(MCO2, simplestTissue.MCO2) annotation (Line(points={{-94,-2},{-68,
              -2},{-68,0},{-44,0},{-44,20.93},{-26.63,20.93}},
                                                      color={0,0,127}));
      connect(dO2DCO2_calculation.O2art, simplestTissue.O2a) annotation (Line(
            points={{-27.6,-23.88},{-50,-23.88},{-50,52},{-26,52},{-26,53.06}},
            color={0,0,127}));
      connect(dO2DCO2_calculation.CO2art, simplestTissue.CO2a) annotation (Line(
            points={{-27.6,-27.48},{-60,-27.48},{-60,48},{-28,48},{-26,48.02}},
            color={0,0,127}));
      connect(dO2DCO2_calculation.Q, simplestTissue.Q) annotation (Line(points=
              {{-27.6,-32.52},{-74,-32.52},{-74,24},{-62,24},{-62,34.79},{
              -26.63,34.79}}, color={0,0,127}));
      connect(dO2DCO2_calculation.VO2, simplestTissue.MO2) annotation (Line(
            points={{-27.6,-37.92},{-84,-37.92},{-84,10},{-52,10},{-52,27.65},{
              -27.05,27.65}}, color={0,0,127}));
      connect(dO2DCO2_calculation.VCO2, MCO2) annotation (Line(points={{-27.6,
              -42.6},{-94,-42.6},{-94,-2}}, color={0,0,127}));
      connect(dO2DCO2_calculation.DO2, DO2) annotation (Line(points={{16,-17.76},
              {24,-17.76},{24,-8},{46,-8}}, color={0,0,127}));
      connect(dO2DCO2_calculation.O2ER, O2ER) annotation (Line(points={{16,
              -22.08},{28,-22.08},{28,-22},{40,-22},{40,-14},{62,-14}}, color={
              0,0,127}));
      connect(dO2DCO2_calculation.VDO2, VDO2) annotation (Line(points={{16,
              -26.76},{34,-26.76},{34,-26},{52,-26},{52,-22},{74,-22}}, color={
              0,0,127}));
      connect(dO2DCO2_calculation.DCO2, DCO2)
        annotation (Line(points={{16,-34.32},{46,-34}}, color={0,0,127}));
      connect(dO2DCO2_calculation.VDCO2, VDCO2) annotation (Line(points={{16,
              -38.64},{32,-38.64},{32,-46},{82,-46}}, color={0,0,127}));
      connect(dO2DCO2_calculation.CO2ER, CO2ER) annotation (Line(points={{16,
              -43.32},{22,-43.32},{22,-44},{26,-44},{26,-56},{52,-56}}, color={
              0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,-106},{114,-138}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end SimplestTissueDO2;

    model TestVentilation_withoutStream
      Physiolibrary.Types.Constants.VolumeFlowRateConst VAi(k(displayUnit=
              "l/min") = 8.3333333333333e-5)
        annotation (Placement(transformation(extent={{-97,64},{-89,70}})));
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-68,14},{-60,22}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-72,28},{-64,36}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-64,36},{-56,44}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 8.3333333333333e-5) annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,56})));
      inner AcidBaseBalance.Interfaces.ModelSettings
                                     modelSettings(PB=106657.909932)
        annotation (Placement(transformation(extent={{-98,80},{-78,100}})));
      AcidBaseBalance.Acidbase.OSA.AlvEq_2units_with_shunts_and_mixing alvEq_2units_with_shunts_and_mixing
        annotation (Placement(transformation(extent={{-40,8},{40,82}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-66,78},{-58,86}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00018333333333333)
        annotation (Placement(transformation(extent={{-78,-50},{-70,-42}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VCO2(k=
            0.00016666666666667)
        annotation (Placement(transformation(extent={{-80,-68},{-72,-60}})));
      SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-32,-60},{22,-14}})));
    equation
      connect(VAi.y, alvEq_2units_with_shunts_and_mixing.VAi) annotation (Line(
            points={{-88,67},{-62,67},{-62,61.65},{-39.3043,61.65}}, color={0,0,
              127}));
      connect(alvEq_2units_with_shunts_and_mixing.Q, CardiacOutput.y)
        annotation (Line(points={{-39.3043,58.875},{-42.6521,58.875},{-42.6521,
              56},{-85,56}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.Fsh, Fsh.y) annotation (Line(
            points={{-39.4783,40.6063},{-46.7391,40.6063},{-46.7391,40},{-55,40}},
            color={0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing.F_q1) annotation (Line(
            points={{-63,32},{-52,32},{-52,32.2813},{-39.4783,32.2813}}, color=
              {0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing.F_VAi1, FAi1.y) annotation (
          Line(points={{-39.8261,23.0313},{-55.913,23.0313},{-55.913,18},{-59,
              18}}, color={0,0,127}));
      connect(BEox.y, alvEq_2units_with_shunts_and_mixing.BEox) annotation (
          Line(points={{-57,82},{-48,82},{-48,68.125},{-40,68.125}}, color={0,0,
              127}));
      connect(simplestTissue.O2a, alvEq_2units_with_shunts_and_mixing.ctO2a)
        annotation (Line(points={{-32,-17.22},{-48,-17.22},{-48,-4},{66,-4},{66,
              38.7563},{41.5652,38.7563}}, color={0,0,127}));
      connect(simplestTissue.CO2a, alvEq_2units_with_shunts_and_mixing.ctCO2a)
        annotation (Line(points={{-32,-22.74},{-56,-22.74},{-56,0},{58,0},{58,
              34.5938},{41.5652,34.5938}}, color={0,0,127}));
      connect(simplestTissue.Q, CardiacOutput.y) annotation (Line(points={{
              -32.81,-37.23},{-76,-37.23},{-76,56},{-85,56}}, color={0,0,127}));
      connect(VO2.y, simplestTissue.MO2) annotation (Line(points={{-69,-46},{
              -52,-46},{-52,-45.05},{-33.35,-45.05}}, color={0,0,127}));
      connect(VCO2.y, simplestTissue.MCO2) annotation (Line(points={{-71,-64},{
              -54,-64},{-54,-52.41},{-32.81,-52.41}}, color={0,0,127}));
      connect(simplestTissue.O2v, alvEq_2units_with_shunts_and_mixing.CvO2)
        annotation (Line(points={{21.46,-17.68},{28,-17.68},{28,2},{-86,2},{-86,
              53.325},{-39.3043,53.325}}, color={0,0,127}));
      connect(simplestTissue.CO2v, alvEq_2units_with_shunts_and_mixing.CvCO2)
        annotation (Line(points={{21.46,-22.74},{32,-22.74},{32,6},{-82,6},{-82,
              50.55},{-39.3043,50.55}}, color={0,0,127}));
      connect(simplestTissue.BEox, alvEq_2units_with_shunts_and_mixing.BEox)
        annotation (Line(points={{-32,-28.26},{-74,-28.26},{-74,70},{-48,70},{
              -48,68.125},{-40,68.125}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end TestVentilation_withoutStream;

    model SimplestTissue

      Physiolibrary.Types.RealIO.MolarFlowRateInput MCO2 annotation (Placement(
            transformation(extent={{-100,12},{-88,24}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-103,-67})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-100,24},{-88,36}}), iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-105,-35})));

      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-102,36},{-86,52}}),   iconTransformation(
              extent={{-114,-12},{-92,10}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
            transformation(extent={{-98,66},{-84,80}}),   iconTransformation(extent=
               {{-110,76},{-90,96}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
            transformation(extent={{-100,54},{-86,68}}),  iconTransformation(extent={{-110,52},
                {-90,72}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput CO2v annotation (Placement(
            transformation(extent={{24,58},{36,70}}),     iconTransformation(extent=
               {{88,52},{108,72}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput O2v annotation (Placement(
            transformation(extent={{18,68},{30,80}}),     iconTransformation(extent=
               {{88,74},{108,94}})));
      Simplest.BloodGases bloodGases
        annotation (Placement(transformation(extent={{-52,32},{-8,74}})));
      AcidBaseBalance.Acidbase.OSA.O2CO2
            venBlood
        annotation (Placement(transformation(extent={{18,-48},{74,38}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-30,0},{-16,14}}), iconTransformation(extent=
                {{-110,28},{-90,48}})));
      Physiolibrary.Types.RealIO.PressureOutput pO2_v(start=13300) annotation (
          Placement(transformation(extent={{88,20},{102,34}}), iconTransformation(
              extent={{90,14},{110,34}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2_v(start=5333) annotation (
          Placement(transformation(extent={{90,12},{104,26}}), iconTransformation(
              extent={{90,-6},{110,14}})));
      Physiolibrary.Types.RealIO.pHOutput pH_v(start=7.4) annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={95,9}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-20})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3_v(displayUnit="mmol/l")
        "outgoing concentration of HCO3" annotation (Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={97,-2}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-40})));
      Physiolibrary.Types.RealIO.FractionOutput sO2_v annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={96,-12}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={100,-60})));
    equation

      connect(O2a, bloodGases.O2a) annotation (Line(points={{-91,73},{-72.5,73},{
              -72.5,71.06},{-52,71.06}}, color={0,0,127}));
      connect(bloodGases.CO2a, CO2a) annotation (Line(points={{-52,66.44},{-74,
              66.44},{-74,61},{-93,61}}, color={0,0,127}));
      connect(bloodGases.Q, Q) annotation (Line(points={{-52.66,52.79},{-74,52.79},
              {-74,44},{-94,44}}, color={0,0,127}));
      connect(bloodGases.MO2, MO2) annotation (Line(points={{-53.1,45.65},{-70,
              45.65},{-70,30},{-94,30}}, color={0,0,127}));
      connect(bloodGases.MCO2, MCO2) annotation (Line(points={{-52.66,38.93},{-62,
              38.93},{-62,18},{-94,18}}, color={0,0,127}));
      connect(bloodGases.CO2v, CO2v) annotation (Line(points={{-8.44,66.02},{1.78,
              66.02},{1.78,64},{30,64}}, color={0,0,127}));
      connect(bloodGases.O2v, O2v) annotation (Line(points={{-8.44,70.64},{-2,
              70.64},{-2,74},{24,74}}, color={0,0,127}));
      connect(venBlood.ctO2, O2v) annotation (Line(points={{16.6,15.2353},{-2,
              15.2353},{-2,74},{24,74}}, color={0,0,127}));
      connect(venBlood.ctCO2, CO2v) annotation (Line(points={{16.6,10.1765},{2,
              10.1765},{2,64},{30,64}}, color={0,0,127}));
      connect(venBlood.BEox, BEox) annotation (Line(points={{16.6,5.11765},{-0.7,
              5.11765},{-0.7,7},{-23,7}}, color={0,0,127}));
      connect(venBlood.pO2, pO2_v) annotation (Line(points={{75.4,13.2118},{
              80.7,13.2118},{80.7,27},{95,27}},
                                           color={0,0,127}));
      connect(venBlood.pCO2, pCO2_v) annotation (Line(points={{75.4,8.15294},{
              81.7,8.15294},{81.7,19},{97,19}}, color={0,0,127}));
      connect(venBlood.pH, pH_v) annotation (Line(points={{75.4,2.08235},{86,
              2.08235},{86,9},{95,9}}, color={0,0,127}));
      connect(venBlood.cHCO3, cHCO3_v) annotation (Line(points={{75.4,-2.97647},{
              82.7,-2.97647},{82.7,-2},{97,-2}}, color={0,0,127}));
      connect(venBlood.sO2, sO2_v) annotation (Line(points={{75.4,-8.03529},{82,
              -8.03529},{82,-12},{96,-12}}, color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}),
            graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,-106},{114,-138}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}),                                                                                                 Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
    end SimplestTissue;

    model Q_distribution


      Physiolibrary.Types.RealIO.VolumeFlowRateInput cardiacOutput annotation (
          Placement(transformation(extent={{-110,82},{-84,108}}),
            iconTransformation(extent={{-122,-12},{-96,14}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput brain annotation (
          Placement(transformation(extent={{80,78},{100,98}}),
            iconTransformation(extent={{100,76},{120,96}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput heart annotation (
          Placement(transformation(extent={{78,58},{98,78}}),
            iconTransformation(extent={{100,52},{120,72}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput liver annotation (
          Placement(transformation(extent={{82,38},{102,58}}),
            iconTransformation(extent={{100,30},{120,50}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput kidney annotation (
          Placement(transformation(extent={{80,10},{100,30}}),
            iconTransformation(extent={{100,8},{120,28}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput muscle annotation (
          Placement(transformation(extent={{80,-14},{100,6}}),
            iconTransformation(extent={{100,-18},{120,2}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput skin annotation (
          Placement(transformation(extent={{82,-36},{102,-16}}),
            iconTransformation(extent={{100,-44},{120,-24}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput rest annotation (
          Placement(transformation(extent={{80,-68},{100,-48}}),
            iconTransformation(extent={{100,-70},{120,-50}})));
      set7variables set7variables1
        annotation (Placement(transformation(extent={{-62,-4},{-36,28}})));
      Modelica.Blocks.Math.Product product1
        annotation (Placement(transformation(extent={{42,82},{56,96}})));
      Modelica.Blocks.Math.Product product2
        annotation (Placement(transformation(extent={{42,60},{56,74}})));
      Modelica.Blocks.Math.Product product3
        annotation (Placement(transformation(extent={{42,40},{56,54}})));
      Modelica.Blocks.Math.Product product4
        annotation (Placement(transformation(extent={{40,12},{54,26}})));
      Modelica.Blocks.Math.Product product5
        annotation (Placement(transformation(extent={{42,-12},{56,2}})));
      Modelica.Blocks.Math.Product product6
        annotation (Placement(transformation(extent={{42,-34},{56,-20}})));
      Modelica.Blocks.Math.Product product7
        annotation (Placement(transformation(extent={{42,-64},{56,-50}})));
      Physiolibrary.Types.Constants.FractionConst F1_brain(k=0.139)
        annotation (Placement(transformation(extent={{-92,74},{-84,82}})));
      Physiolibrary.Types.Constants.FractionConst F2_heart(k=0.047)
        annotation (Placement(transformation(extent={{-90,58},{-82,66}})));
      Physiolibrary.Types.Constants.FractionConst F3_liver(k=0.278)
        annotation (Placement(transformation(extent={{-90,42},{-82,50}})));
      Physiolibrary.Types.Constants.FractionConst F4_kidney(k=0.233)
        annotation (Placement(transformation(extent={{-92,4},{-84,12}})));
      Physiolibrary.Types.Constants.FractionConst F5_muscle(k=0.156)
        annotation (Placement(transformation(extent={{-92,-20},{-84,-12}})));
      Physiolibrary.Types.Constants.FractionConst F6_skin(k=0.086)
        annotation (Placement(transformation(extent={{-92,-40},{-84,-32}})));
      Physiolibrary.Types.Constants.FractionConst F7_rest(k=0.062)
        annotation (Placement(transformation(extent={{-92,-62},{-84,-54}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput REST_3_TISSUE annotation (
         Placement(transformation(extent={{186,0},{206,20}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={16,110})));
      Modelica.Blocks.Math.Add3 add3_1
        annotation (Placement(transformation(extent={{118,66},{138,86}})));
      Modelica.Blocks.Math.Add3 add3_2
        annotation (Placement(transformation(extent={{156,0},{176,20}})));
    equation
      connect(rest, rest)
        annotation (Line(points={{90,-58},{90,-58}}, color={0,0,127}));
      connect(product1.y, brain) annotation (Line(points={{56.7,89},{56.7,88},{
              90,88}}, color={0,0,127}));
      connect(product2.y, heart)
        annotation (Line(points={{56.7,67},{88,68}}, color={0,0,127}));
      connect(product3.y, liver) annotation (Line(points={{56.7,47},{70.35,47},
              {70.35,48},{92,48}}, color={0,0,127}));
      connect(product4.y, kidney)
        annotation (Line(points={{54.7,19},{90,20}}, color={0,0,127}));
      connect(product5.y, muscle) annotation (Line(points={{56.7,-5},{76,-5},{
              76,-4},{90,-4}}, color={0,0,127}));
      connect(product6.y, skin)
        annotation (Line(points={{56.7,-27},{92,-26}}, color={0,0,127}));
      connect(product7.y, rest) annotation (Line(points={{56.7,-57},{76,-57},{
              76,-58},{90,-58}}, color={0,0,127}));
      connect(cardiacOutput, product1.u1) annotation (Line(points={{-97,95},{8,
              95},{8,93.2},{40.6,93.2}}, color={0,0,127}));
      connect(set7variables1.F1_7_o, product1.u2) annotation (Line(points={{
              -34.7,25.44},{-30,25.44},{-30,76},{40.6,76},{40.6,84.8}}, color={
              0,0,127}));
      connect(set7variables1.F2_7_o, product2.u2) annotation (Line(points={{
              -34.7,21.6},{-24,21.6},{-24,60},{44,60},{44,62.8},{40.6,62.8}},
            color={0,0,127}));
      connect(set7variables1.F3_7_o, product3.u2) annotation (Line(points={{
              -34.7,17.76},{-8,17.76},{-8,42},{12,42},{12,42.8},{40.6,42.8}},
            color={0,0,127}));
      connect(set7variables1.F4_7_o, product4.u2) annotation (Line(points={{
              -34.7,13.92},{28,13.92},{28,14},{38.6,14},{38.6,14.8}}, color={0,
              0,127}));
      connect(set7variables1.F6_7_o, product6.u2) annotation (Line(points={{
              -34.7,6.88},{20,6.88},{20,-31.2},{40.6,-31.2}}, color={0,0,127}));
      connect(set7variables1.F7_7_o, product7.u2) annotation (Line(points={{
              -34.7,3.36},{6,3.36},{6,-61.2},{40.6,-61.2}}, color={0,0,127}));
      connect(set7variables1.F5_7_o, product5.u2) annotation (Line(points={{
              -34.7,10.4},{24,10.4},{24,-9.2},{40.6,-9.2}}, color={0,0,127}));
      connect(product2.u1, product1.u1) annotation (Line(points={{40.6,71.2},{8,
              71.2},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product3.u1, product1.u1) annotation (Line(points={{40.6,51.2},{8,
              51.2},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product4.u1, product1.u1) annotation (Line(points={{38.6,23.2},{8,
              23.2},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product5.u1, product1.u1) annotation (Line(points={{40.6,-0.8},{8,
              -0.8},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product6.u1, product1.u1) annotation (Line(points={{40.6,-22.8},{
              8,-22.8},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product7.u1, product1.u1) annotation (Line(points={{40.6,-52.8},{
              8,-52.8},{8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(F7_rest.y, set7variables1.F7_7_i) annotation (Line(points={{-83,
              -58},{-68,-58},{-68,-2.24},{-63.17,-2.24}}, color={0,0,127}));
      connect(F6_skin.y, set7variables1.F6_7_i) annotation (Line(points={{-83,
              -36},{-70,-36},{-70,2.24},{-63.17,2.24}}, color={0,0,127}));
      connect(F5_muscle.y, set7variables1.F5_7_i) annotation (Line(points={{-83,
              -16},{-72,-16},{-72,6.4},{-63.17,6.4}}, color={0,0,127}));
      connect(F4_kidney.y, set7variables1.F4_7_i) annotation (Line(points={{-83,
              8},{-74,8},{-74,10.88},{-63.17,10.88}}, color={0,0,127}));
      connect(F1_brain.y, set7variables1.F1_7_i) annotation (Line(points={{-83,
              78},{-68,78},{-68,24.32},{-63.17,24.32}}, color={0,0,127}));
      connect(F2_heart.y, set7variables1.F2_7_i) annotation (Line(points={{-81,
              62},{-70,62},{-70,20.16},{-63.17,20.16}}, color={0,0,127}));
      connect(F3_liver.y, set7variables1.F3_7_i) annotation (Line(points={{-81,
              46},{-72,46},{-72,15.36},{-63.17,15.36}}, color={0,0,127}));
      connect(liver, add3_1.u3) annotation (Line(points={{92,48},{104,48},{104,
              68},{114,68}}, color={0,0,127}));
      connect(heart, add3_1.u2) annotation (Line(points={{88,68},{102,68},{102,
              76},{114,76}}, color={0,0,127}));
      connect(brain, add3_1.u1) annotation (Line(points={{90,88},{102,88},{102,
              82},{114,82}}, color={0,0,127}));
      connect(rest, add3_2.u3) annotation (Line(points={{90,-58},{90,-40},{114,
              -40},{114,2},{154,2}}, color={0,0,127}));
      connect(skin, add3_2.u2) annotation (Line(points={{92,-26},{112,-26},{112,
              10},{154,10}}, color={0,0,127}));
      connect(add3_2.u1, add3_1.y) annotation (Line(points={{154,18},{142,18},{
              142,76},{139,76}}, color={0,0,127}));
      connect(add3_2.y, REST_3_TISSUE)
        annotation (Line(points={{177,10},{196,10}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200}),
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-100,-104},{100,-116}},
              textColor={28,108,200},
              textString="%name"),
            Text(
              extent={{-50,62},{58,-2}},
              textColor={28,108,200},
              textString="Q_distribution")}),
                                     Diagram(coordinateSystem(preserveAspectRatio=false)));
    end Q_distribution;

    model O2_CO2_distribution

      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-66,40},{-40,66}}),  iconTransformation(extent={{-66,40},
                {-40,66}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput brain_O2 annotation (
          Placement(transformation(extent={{104,84},{114,94}}),iconTransformation(
              extent={{160,90},{170,100}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput heart_O2 annotation (
          Placement(transformation(extent={{68,58},{88,78}}), iconTransformation(
              extent={{160,66},{172,78}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput liver_O2 annotation (
          Placement(transformation(extent={{68,36},{88,56}}), iconTransformation(
              extent={{160,42},{170,52}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput kidney_O2 annotation (
          Placement(transformation(extent={{66,8},{86,28}}), iconTransformation(
              extent={{160,14},{172,26}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput muscle_O2 annotation (
          Placement(transformation(extent={{64,-16},{84,4}}), iconTransformation(
              extent={{160,-16},{172,-4}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput skin_O2 annotation (Placement(
            transformation(extent={{66,-38},{86,-18}}), iconTransformation(extent={{160,-46},
                {174,-32}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput rest_CO2 annotation (
          Placement(transformation(extent={{120,-76},{140,-56}}),
            iconTransformation(extent={{160,-96},{176,-80}})));
      set7variables set7variables1
        annotation (Placement(transformation(extent={{-60,-2},{-34,30}})));
      Modelica.Blocks.Math.Product product1
        annotation (Placement(transformation(extent={{42,82},{56,96}})));
      Modelica.Blocks.Math.Product product2
        annotation (Placement(transformation(extent={{42,60},{56,74}})));
      Modelica.Blocks.Math.Product product3
        annotation (Placement(transformation(extent={{42,40},{56,54}})));
      Modelica.Blocks.Math.Product product4
        annotation (Placement(transformation(extent={{40,12},{54,26}})));
      Modelica.Blocks.Math.Product product5
        annotation (Placement(transformation(extent={{42,-12},{56,2}})));
      Modelica.Blocks.Math.Product product6
        annotation (Placement(transformation(extent={{42,-34},{56,-20}})));
      Modelica.Blocks.Math.Product product7
        annotation (Placement(transformation(extent={{42,-64},{56,-50}})));
      Physiolibrary.Types.Constants.FractionConst F1_brain(k=0.139)
        annotation (Placement(transformation(extent={{-92,74},{-84,82}})));
      Physiolibrary.Types.Constants.FractionConst F2_heart(k=0.047)
        annotation (Placement(transformation(extent={{-90,58},{-82,66}})));
      Physiolibrary.Types.Constants.FractionConst F3_liver(k=0.278)
        annotation (Placement(transformation(extent={{-90,42},{-82,50}})));
      Physiolibrary.Types.Constants.FractionConst F4_kidney(k=0.233)
        annotation (Placement(transformation(extent={{-92,4},{-84,12}})));
      Physiolibrary.Types.Constants.FractionConst F5_muscle(k=0.156)
        annotation (Placement(transformation(extent={{-92,-20},{-84,-12}})));
      Physiolibrary.Types.Constants.FractionConst F6_skin(k=0.086)
        annotation (Placement(transformation(extent={{-92,-40},{-84,-32}})));
      Physiolibrary.Types.Constants.FractionConst F7_rest(k=0.062)
        annotation (Placement(transformation(extent={{-92,-62},{-84,-54}})));
      Physiolibrary.Types.RealIO.FractionInput RQ annotation (Placement(
            transformation(extent={{-64,-52},{-40,-28}}),
                                                        iconTransformation(extent={{-64,-52},
                {-40,-28}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput brain_CO2 annotation (
          Placement(transformation(extent={{130,74},{150,94}}),  iconTransformation(
              extent={{160,78},{172,90}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput heart_CO2 annotation (
          Placement(transformation(extent={{120,56},{140,76}}), iconTransformation(
              extent={{160,56},{170,66}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput liver_CO2 annotation (
          Placement(transformation(extent={{116,30},{136,50}}), iconTransformation(
              extent={{160,30},{172,42}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput kidney_CO2 annotation (
          Placement(transformation(extent={{116,2},{136,22}}), iconTransformation(
              extent={{160,0},{174,14}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput muscle_CO2 annotation (
          Placement(transformation(extent={{116,-20},{136,0}}), iconTransformation(
              extent={{160,-28},{172,-16}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput skin_CO2 annotation (
          Placement(transformation(extent={{116,-42},{136,-22}}),
            iconTransformation(extent={{160,-60},{174,-46}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput rest_O2 annotation (Placement(
            transformation(extent={{62,-68},{82,-48}}), iconTransformation(extent={{160,-78},
                {176,-62}})));
      Modelica.Blocks.Math.Product product8
        annotation (Placement(transformation(extent={{98,-74},{112,-60}})));
      Modelica.Blocks.Math.Product product9
        annotation (Placement(transformation(extent={{94,-40},{108,-26}})));
      Modelica.Blocks.Math.Product product10
        annotation (Placement(transformation(extent={{92,-16},{106,-2}})));
      Modelica.Blocks.Math.Product product11
        annotation (Placement(transformation(extent={{90,6},{104,20}})));
      Modelica.Blocks.Math.Product product12
        annotation (Placement(transformation(extent={{90,34},{104,48}})));
      Modelica.Blocks.Math.Product product13
        annotation (Placement(transformation(extent={{92,58},{106,72}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput MCO2 annotation (Placement(
            transformation(extent={{-8,-98},{12,-78}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-24,110})));
      Modelica.Blocks.Math.Add3 add3_1
        annotation (Placement(transformation(extent={{160,-52},{174,-38}})));
      Modelica.Blocks.Math.Add3 add3_2
        annotation (Placement(transformation(extent={{162,52},{174,64}})));
      Modelica.Blocks.Math.Add3 add3_3
        annotation (Placement(transformation(extent={{202,4},{216,18}})));
      Modelica.Blocks.Math.Add3 add3_4
        annotation (Placement(transformation(extent={{184,-78},{198,-64}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput REST_O2_3TISSUE
        annotation (Placement(transformation(extent={{226,2},{246,22}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={52,110})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput REST_CO2_3TISSUE
        annotation (Placement(transformation(extent={{208,-82},{228,-62}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={88,110})));
    equation

    MCO2=brain_CO2+heart_CO2+liver_CO2+kidney_CO2+muscle_CO2+skin_CO2+rest_O2;

      connect(rest_CO2, rest_CO2)
        annotation (Line(points={{130,-66},{130,-66}}, color={0,0,127}));
      connect(product1.y, brain_O2)
        annotation (Line(points={{56.7,89},{109,89}},color={0,0,127}));
      connect(product2.y, heart_O2)
        annotation (Line(points={{56.7,67},{78,68}}, color={0,0,127}));
      connect(product3.y, liver_O2)
        annotation (Line(points={{56.7,47},{56.7,46},{78,46}}, color={0,0,127}));
      connect(product4.y, kidney_O2)
        annotation (Line(points={{54.7,19},{54.7,18},{76,18}}, color={0,0,127}));
      connect(product5.y, muscle_O2) annotation (Line(points={{56.7,-5},{60,-5},{60,
              -6},{74,-6}}, color={0,0,127}));
      connect(product6.y, skin_O2) annotation (Line(points={{56.7,-27},{56.7,-28},{76,
              -28}}, color={0,0,127}));
      connect(MO2, product1.u1) annotation (Line(points={{-53,53},{8,53},{8,93.2},{40.6,
              93.2}}, color={0,0,127}));
      connect(set7variables1.F1_7_o, product1.u2) annotation (Line(points={{-32.7,27.44},
              {-30,27.44},{-30,76},{40.6,76},{40.6,84.8}}, color={0,0,127}));
      connect(set7variables1.F2_7_o, product2.u2) annotation (Line(points={{-32.7,23.6},
              {-24,23.6},{-24,60},{44,60},{44,62.8},{40.6,62.8}}, color={0,0,127}));
      connect(set7variables1.F3_7_o, product3.u2) annotation (Line(points={{-32.7,19.76},
              {-8,19.76},{-8,42},{12,42},{12,42.8},{40.6,42.8}}, color={0,0,127}));
      connect(set7variables1.F4_7_o, product4.u2) annotation (Line(points={{-32.7,15.92},
              {28,15.92},{28,14},{38.6,14},{38.6,14.8}}, color={0,0,127}));
      connect(set7variables1.F6_7_o, product6.u2) annotation (Line(points={{-32.7,8.88},
              {20,8.88},{20,-31.2},{40.6,-31.2}}, color={0,0,127}));
      connect(set7variables1.F7_7_o, product7.u2) annotation (Line(points={{-32.7,5.36},
              {6,5.36},{6,-61.2},{40.6,-61.2}}, color={0,0,127}));
      connect(set7variables1.F5_7_o, product5.u2) annotation (Line(points={{-32.7,12.4},
              {24,12.4},{24,-9.2},{40.6,-9.2}}, color={0,0,127}));
      connect(product2.u1, product1.u1) annotation (Line(points={{40.6,71.2},{8,71.2},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product3.u1, product1.u1) annotation (Line(points={{40.6,51.2},{8,51.2},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product4.u1, product1.u1) annotation (Line(points={{38.6,23.2},{8,23.2},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product5.u1, product1.u1) annotation (Line(points={{40.6,-0.8},{8,-0.8},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product6.u1, product1.u1) annotation (Line(points={{40.6,-22.8},{8,-22.8},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(product7.u1, product1.u1) annotation (Line(points={{40.6,-52.8},{8,-52.8},
              {8,92},{40,92},{40.6,93.2}}, color={0,0,127}));
      connect(F7_rest.y, set7variables1.F7_7_i) annotation (Line(points={{-83,-58},{
              -68,-58},{-68,-0.24},{-61.17,-0.24}}, color={0,0,127}));
      connect(F6_skin.y, set7variables1.F6_7_i) annotation (Line(points={{-83,-36},{
              -70,-36},{-70,4.24},{-61.17,4.24}}, color={0,0,127}));
      connect(F5_muscle.y, set7variables1.F5_7_i) annotation (Line(points={{-83,-16},
              {-72,-16},{-72,8.4},{-61.17,8.4}}, color={0,0,127}));
      connect(F4_kidney.y, set7variables1.F4_7_i) annotation (Line(points={{-83,8},{
              -74,8},{-74,12.88},{-61.17,12.88}}, color={0,0,127}));
      connect(F1_brain.y, set7variables1.F1_7_i) annotation (Line(points={{-83,78},{
              -68,78},{-68,26.32},{-61.17,26.32}}, color={0,0,127}));
      connect(F2_heart.y, set7variables1.F2_7_i) annotation (Line(points={{-81,62},{
              -70,62},{-70,22.16},{-61.17,22.16}}, color={0,0,127}));
      connect(F3_liver.y, set7variables1.F3_7_i) annotation (Line(points={{-81,46},{
              -72,46},{-72,17.36},{-61.17,17.36}}, color={0,0,127}));
      connect(product7.y, rest_O2) annotation (Line(points={{56.7,-57},{56.7,-58},{72,
              -58}}, color={0,0,127}));
      connect(rest_O2, product8.u1) annotation (Line(points={{72,-58},{90,-58},{90,-62.8},
              {96.6,-62.8}}, color={0,0,127}));
      connect(RQ, product8.u2) annotation (Line(points={{-52,-40},{90,-40},{90,-71.2},
              {96.6,-71.2}}, color={0,0,127}));
      connect(product8.y, rest_CO2) annotation (Line(points={{112.7,-67},{116,-67},{
              116,-66},{130,-66}}, color={0,0,127}));
      connect(product9.u2, product8.u2) annotation (Line(points={{92.6,-37.2},{84,-37.2},
              {84,-76},{90,-76},{90,-71.2},{96.6,-71.2}}, color={0,0,127}));
      connect(product9.u1, skin_O2)
        annotation (Line(points={{92.6,-28.8},{76,-28}}, color={0,0,127}));
      connect(product9.y, skin_CO2)
        annotation (Line(points={{108.7,-33},{126,-32}}, color={0,0,127}));
      connect(muscle_O2, product10.u1)
        annotation (Line(points={{74,-6},{74,-4.8},{90.6,-4.8}}, color={0,0,127}));
      connect(product10.u2, product8.u2) annotation (Line(points={{90.6,-13.2},{84,-13.2},
              {84,-76},{90,-76},{90,-71.2},{96.6,-71.2}}, color={0,0,127}));
      connect(kidney_O2, product11.u1)
        annotation (Line(points={{76,18},{88.6,17.2}}, color={0,0,127}));
      connect(product11.u2, product8.u2) annotation (Line(points={{88.6,8.8},{84,8.8},
              {84,-76},{90,-76},{90,-71.2},{96.6,-71.2}}, color={0,0,127}));
      connect(product10.y, muscle_CO2) annotation (Line(points={{106.7,-9},{112,-9},
              {112,-10},{126,-10}}, color={0,0,127}));
      connect(product11.y, kidney_CO2) annotation (Line(points={{104.7,13},{104.7,12},
              {126,12}}, color={0,0,127}));
      connect(product12.y, liver_CO2) annotation (Line(points={{104.7,41},{104.7,40},
              {126,40}}, color={0,0,127}));
      connect(product12.u2, product8.u2) annotation (Line(points={{88.6,36.8},{84,36.8},
              {84,-76},{90,-76},{90,-71.2},{96.6,-71.2}}, color={0,0,127}));
      connect(liver_O2, product12.u1)
        annotation (Line(points={{78,46},{88.6,45.2}}, color={0,0,127}));
      connect(heart_O2, product13.u1)
        annotation (Line(points={{78,68},{78,69.2},{90.6,69.2}}, color={0,0,127}));
      connect(product13.y, heart_CO2)
        annotation (Line(points={{106.7,65},{130,66}}, color={0,0,127}));
      connect(product13.u2, product8.u2) annotation (Line(points={{90.6,60.8},{84,60.8},
              {84,-76},{90,-76},{90,-71.2},{96.6,-71.2}}, color={0,0,127}));
      connect(brain_O2, brain_CO2)
        annotation (Line(points={{109,89},{126,89},{126,84},{140,84}},
                                                    color={0,0,127}));
      connect(add3_1.u3, rest_CO2) annotation (Line(points={{158.6,-50.6},{
              158.6,-66},{130,-66}}, color={0,0,127}));
      connect(add3_1.u2, skin_CO2) annotation (Line(points={{158.6,-45},{140,
              -45},{140,-32},{126,-32}}, color={0,0,127}));
      connect(add3_2.u1, brain_CO2) annotation (Line(points={{160.8,62.8},{154,
              62.8},{154,84},{140,84}}, color={0,0,127}));
      connect(add3_2.u2, heart_CO2) annotation (Line(points={{160.8,58},{140,58},
              {140,66},{130,66}}, color={0,0,127}));
      connect(add3_2.u3, liver_CO2) annotation (Line(points={{160.8,53.2},{144,
              53.2},{144,40},{126,40}}, color={0,0,127}));
      connect(add3_1.u1, add3_2.y) annotation (Line(points={{158.6,-39.4},{150,
              -39.4},{150,48},{186,48},{186,58},{174.6,58}}, color={0,0,127}));
      connect(add3_3.u1, brain_CO2) annotation (Line(points={{200.6,16.6},{192,
              16.6},{192,84},{140,84}}, color={0,0,127}));
      connect(add3_3.u2, heart_O2) annotation (Line(points={{200.6,11},{188,11},
              {188,80},{78,80},{78,68}}, color={0,0,127}));
      connect(add3_3.u3, liver_O2) annotation (Line(points={{200.6,5.4},{164,
              5.4},{164,34},{76,34},{76,46}}, color={0,0,127}));
      connect(add3_4.u2, skin_O2) annotation (Line(points={{182.6,-71},{134,-71},
              {134,-84},{76,-84},{76,-28}}, color={0,0,127}));
      connect(add3_4.u3, rest_O2) annotation (Line(points={{182.6,-76.6},{138,
              -76.6},{138,-90},{66,-90},{66,-60},{68,-60}}, color={0,0,127}));
      connect(add3_4.u1, add3_1.y) annotation (Line(points={{182.6,-65.4},{178,
              -65.4},{178,-46},{174,-46}}, color={0,0,127}));
      connect(add3_4.y, REST_CO2_3TISSUE) annotation (Line(points={{198.7,-71},
              {-60,-71},{-60,-72},{218,-72}}, color={0,0,127}));
      connect(add3_3.y, REST_O2_3TISSUE)
        annotation (Line(points={{216.7,11},{236,12}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-40,-100},
                {160,100}}),                                        graphics={
            Rectangle(
              extent={{-40,100},{160,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-44,-112},{156,-124}},
              textColor={28,108,200},
              textString="%name"),
            Text(
              extent={{10,52},{118,-12}},
              textColor={28,108,200},
              textString="O2_CO2_ distribution")}),
                                     Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-40,
                -100},{160,100}})));
    end O2_CO2_distribution;

    model Simplest7Tissue

      Physiolibrary.Types.RealIO.MolarFlowRateInput MO2 annotation (Placement(
            transformation(extent={{-114,-22},{-102,-10}}),
                                                         iconTransformation(
            extent={{-11,-11},{11,11}},
            rotation=0,
            origin={-105,-35})));

      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q annotation (Placement(
            transformation(extent={{-102,22},{-86,38}}),   iconTransformation(
              extent={{-114,-12},{-92,10}})));
      Physiolibrary.Types.RealIO.ConcentrationInput O2a annotation (Placement(
            transformation(extent={{-90,92},{-76,106}}),  iconTransformation(extent=
               {{-110,76},{-90,96}})));
      Physiolibrary.Types.RealIO.ConcentrationInput CO2a annotation (Placement(
            transformation(extent={{-102,86},{-88,100}}), iconTransformation(extent={{-110,52},
                {-90,72}})));
      SimplestTissueDO2 brain
        annotation (Placement(transformation(extent={{50,80},{70,100}})));
      SimplestTissueDO2 heart
        annotation (Placement(transformation(extent={{50,50},{70,70}})));
      SimplestTissueDO2 liver
        annotation (Placement(transformation(extent={{50,20},{70,40}})));
      SimplestTissueDO2 kidney
        annotation (Placement(transformation(extent={{48,-6},{68,14}})));
      SimplestTissueDO2 muscle
        annotation (Placement(transformation(extent={{48,-34},{68,-14}})));
      SimplestTissueDO2 skin
        annotation (Placement(transformation(extent={{48,-66},{68,-46}})));
      SimplestTissueDO2 rest
        annotation (Placement(transformation(extent={{48,-96},{68,-76}})));
      O2_CO2_distribution o2_CO2_distribution
        annotation (Placement(transformation(extent={{-86,-56},{-62,-16}})));
      Q_distribution q_distribution
        annotation (Placement(transformation(extent={{-78,20},{-58,40}})));
      Physiolibrary.Types.RealIO.FractionInput RQ annotation (Placement(
            transformation(extent={{-114,-78},{-94,-58}}), iconTransformation(
              extent={{-114,-78},{-94,-58}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput MCO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-84,12}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-4,110})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-90,54},{-72,72}}), iconTransformation(
              extent={{-110,28},{-92,46}})));
      SimplestTissueDO2 REST_3_Tissues annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-44,52})));
    equation

      connect(Q, q_distribution.cardiacOutput)
        annotation (Line(points={{-94,30},{-78.9,30.1}}, color={0,0,127}));
      connect(o2_CO2_distribution.MO2, MO2) annotation (Line(points={{-87.56,
              -25.4},{-96,-25.4},{-96,-16},{-108,-16}}, color={0,0,127}));
      connect(RQ, o2_CO2_distribution.RQ) annotation (Line(points={{-104,-68},{
              -90,-68},{-90,-44},{-87.44,-44}}, color={0,0,127}));
      connect(brain.O2a, O2a) annotation (Line(points={{49.2,98.4},{49.2,99},{
              -83,99}}, color={0,0,127}));
      connect(heart.O2a, O2a) annotation (Line(points={{49.2,68.4},{28,68.4},{
              28,99},{-83,99}}, color={0,0,127}));
      connect(liver.O2a, O2a) annotation (Line(points={{49.2,38.4},{28,38.4},{
              28,99},{-83,99}}, color={0,0,127}));
      connect(kidney.O2a, O2a) annotation (Line(points={{47.2,12.4},{28,12.4},{
              28,99},{-83,99}}, color={0,0,127}));
      connect(muscle.O2a, O2a) annotation (Line(points={{47.2,-15.6},{28,-15.6},
              {28,99},{-83,99}}, color={0,0,127}));
      connect(skin.O2a, O2a) annotation (Line(points={{47.2,-47.6},{28,-47.6},{
              28,99},{-83,99}}, color={0,0,127}));
      connect(rest.O2a, O2a) annotation (Line(points={{47.2,-77.6},{28,-77.6},{
              28,99},{-83,99}}, color={0,0,127}));
      connect(CO2a, brain.CO2a) annotation (Line(points={{-95,93},{-56,93},{-56,
              96},{49.2,96}}, color={0,0,127}));
      connect(heart.CO2a, brain.CO2a) annotation (Line(points={{49.2,66},{30,66},
              {30,96},{49.2,96}}, color={0,0,127}));
      connect(liver.CO2a, brain.CO2a) annotation (Line(points={{49.2,36},{30,36},
              {30,96},{49.2,96}}, color={0,0,127}));
      connect(kidney.CO2a, brain.CO2a) annotation (Line(points={{47.2,10},{44,
              10},{44,34},{42,34},{42,36},{30,36},{30,96},{49.2,96}}, color={0,
              0,127}));
      connect(muscle.CO2a, brain.CO2a) annotation (Line(points={{47.2,-18},{30,
              -18},{30,96},{49.2,96}}, color={0,0,127}));
      connect(skin.CO2a, brain.CO2a) annotation (Line(points={{47.2,-50},{30,
              -50},{30,96},{49.2,96}}, color={0,0,127}));
      connect(rest.CO2a, brain.CO2a) annotation (Line(points={{47.2,-80},{44,
              -80},{44,-60},{42,-60},{42,-52},{40,-52},{40,-50},{30,-50},{30,96},
              {49.2,96}}, color={0,0,127}));
      connect(brain.BEox, BEox) annotation (Line(points={{49.4,93.6},{-14,93.6},
              {-14,63},{-81,63}}, color={0,0,127}));
      connect(heart.BEox, BEox) annotation (Line(points={{49.4,63.6},{34,63.6},
              {34,63},{-81,63}}, color={0,0,127}));
      connect(liver.BEox, BEox) annotation (Line(points={{49.4,33.6},{34,33.6},
              {34,63},{-81,63}}, color={0,0,127}));
      connect(kidney.BEox, BEox) annotation (Line(points={{47.4,7.6},{34,7.6},{
              34,63},{-81,63}}, color={0,0,127}));
      connect(muscle.BEox, BEox) annotation (Line(points={{47.4,-20.4},{12,
              -20.4},{12,63},{-81,63}}, color={0,0,127}));
      connect(skin.BEox, BEox) annotation (Line(points={{47.4,-52.4},{48,-52.4},
              {48,-54},{12,-54},{12,63},{-81,63}}, color={0,0,127}));
      connect(rest.BEox, BEox) annotation (Line(points={{47.4,-82.4},{46,-82.4},
              {46,-84},{12,-84},{12,63},{-81,63}}, color={0,0,127}));
      connect(brain.Q, q_distribution.brain) annotation (Line(points={{48.9,
              89.5},{-26,89.5},{-26,38.6},{-57,38.6}}, color={0,0,127}));
      connect(q_distribution.heart, heart.Q) annotation (Line(points={{-57,36.2},
              {38,36.2},{38,59.5},{48.9,59.5}}, color={0,0,127}));
      connect(q_distribution.liver, liver.Q) annotation (Line(points={{-57,34},
              {38,34},{38,29.5},{48.9,29.5}}, color={0,0,127}));
      connect(q_distribution.kidney, kidney.Q) annotation (Line(points={{-57,
              31.8},{32,31.8},{32,3.5},{46.9,3.5}}, color={0,0,127}));
      connect(q_distribution.muscle, muscle.Q) annotation (Line(points={{-57,
              29.2},{22,29.2},{22,-24.5},{46.9,-24.5}}, color={0,0,127}));
      connect(q_distribution.skin, skin.Q) annotation (Line(points={{-57,26.6},
              {26,26.6},{26,-56.5},{46.9,-56.5}}, color={0,0,127}));
      connect(q_distribution.rest, rest.Q) annotation (Line(points={{-57,24},{
              24,24},{24,-86.5},{46.9,-86.5}}, color={0,0,127}));
      connect(o2_CO2_distribution.MCO2, MCO2)
        annotation (Line(points={{-84.08,-14},{-84,12}}, color={0,0,127}));
      connect(o2_CO2_distribution.rest_CO2, rest.MCO2) annotation (Line(points=
              {{-61.04,-53.6},{-32,-53.6},{-32,-92.7},{47.1,-92.7}}, color={0,0,
              127}));
      connect(rest.MO2, o2_CO2_distribution.rest_O2) annotation (Line(points={{
              47.1,-89.3},{-28,-89.3},{-28,-50},{-61.04,-50}}, color={0,0,127}));
      connect(skin.MCO2, o2_CO2_distribution.skin_CO2) annotation (Line(points=
              {{47.1,-62.7},{-26,-62.7},{-26,-46.6},{-61.16,-46.6}}, color={0,0,
              127}));
      connect(o2_CO2_distribution.skin_O2, skin.MO2) annotation (Line(points={{
              -61.16,-43.8},{-26,-43.8},{-26,-59.3},{47.1,-59.3}}, color={0,0,
              127}));
      connect(o2_CO2_distribution.muscle_CO2, muscle.MCO2) annotation (Line(
            points={{-61.28,-40.4},{-4,-40.4},{-4,-30.7},{47.1,-30.7}}, color={
              0,0,127}));
      connect(o2_CO2_distribution.muscle_O2, muscle.MO2) annotation (Line(
            points={{-61.28,-38},{-8,-38},{-8,-27.3},{47.1,-27.3}}, color={0,0,
              127}));
      connect(o2_CO2_distribution.kidney_CO2, kidney.MCO2) annotation (Line(
            points={{-61.16,-34.6},{-10,-34.6},{-10,-2.7},{47.1,-2.7}}, color={
              0,0,127}));
      connect(o2_CO2_distribution.kidney_O2, kidney.MO2) annotation (Line(
            points={{-61.28,-32},{-14,-32},{-14,0.7},{47.1,0.7}}, color={0,0,
              127}));
      connect(o2_CO2_distribution.liver_CO2, liver.MCO2) annotation (Line(
            points={{-61.28,-28.8},{-16,-28.8},{-16,16},{40,16},{40,23.3},{49.1,
              23.3}}, color={0,0,127}));
      connect(o2_CO2_distribution.liver_O2, liver.MO2) annotation (Line(points=
              {{-61.4,-26.6},{-18,-26.6},{-18,20},{36,20},{36,26.7},{49.1,26.7}},
            color={0,0,127}));
      connect(o2_CO2_distribution.heart_CO2, heart.MCO2) annotation (Line(
            points={{-61.4,-23.8},{-20,-23.8},{-20,53.3},{49.1,53.3}}, color={0,
              0,127}));
      connect(o2_CO2_distribution.heart_O2, heart.MO2) annotation (Line(points=
              {{-61.28,-21.6},{-22,-21.6},{-22,56.7},{49.1,56.7}}, color={0,0,
              127}));
      connect(o2_CO2_distribution.brain_CO2, brain.MCO2) annotation (Line(
            points={{-61.28,-19.2},{-22,-19.2},{-22,83.3},{49.1,83.3}}, color={
              0,0,127}));
      connect(o2_CO2_distribution.brain_O2, brain.MO2) annotation (Line(points=
              {{-61.4,-17},{-24,-17},{-24,86.7},{49.1,86.7}}, color={0,0,127}));
      connect(REST_3_Tissues.O2a, O2a) annotation (Line(points={{-54.8,60.4},{
              -64,60.4},{-64,99},{-83,99}}, color={0,0,127}));
      connect(REST_3_Tissues.CO2a, brain.CO2a) annotation (Line(points={{-54.8,
              58},{-68,58},{-68,93},{-56,93},{-56,96},{49.2,96}}, color={0,0,
              127}));
      connect(REST_3_Tissues.BEox, BEox) annotation (Line(points={{-54.6,55.6},
              {-70,55.6},{-70,63},{-81,63}}, color={0,0,127}));
      connect(q_distribution.REST_3_TISSUE, REST_3_Tissues.Q) annotation (Line(
            points={{-66.4,41},{-66.4,51.5},{-55.1,51.5}}, color={0,0,127}));
      connect(o2_CO2_distribution.REST_O2_3TISSUE, REST_3_Tissues.MO2)
        annotation (Line(points={{-74.96,-14},{-76,-14},{-76,12},{-112,12},{
              -112,48.7},{-54.9,48.7}}, color={0,0,127}));
      connect(o2_CO2_distribution.REST_CO2_3TISSUE, REST_3_Tissues.MCO2)
        annotation (Line(points={{-70.64,-14},{-72,-14},{-72,16},{-106,16},{
              -106,46},{-56,46}}, color={0,0,127}));
      annotation(Icon(coordinateSystem(preserveAspectRatio = false, extent={{-100,
                -80},{100,100}}),
            graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-92,-110},{122,-142}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name"),
            Text(
              extent={{-54,58},{24,10}},
              textColor={28,108,200},
              textString="7 tissues")}),                                                                                             Diagram(coordinateSystem(preserveAspectRatio = false, extent={{-100,
                -100},{100,100}})));
    end Simplest7Tissue;
  end Packages;

  package Tests
    model BloodyMary_01
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
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(
        final PB=PB.k,
        ctHb=9.309,        Temperature(displayUnit="degC") = bodyTemperature.k)
        annotation (Placement(transformation(extent={{-136,78},{-116,98}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-60,72},{-52,80}})));
      Packages.SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-18,-82},{32,-32}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
        annotation (Placement(transformation(extent={{-100,88},{-88,100}})));
      Packages.AlvEq_2units_with_shunts_and_mixing
        alvEq_2units_with_shunts_and_mixing1
        annotation (Placement(transformation(extent={{-6,6},{78,80}})));
      Packages.from_mlO2CO2_per_min from_mlO2CO2_per_min
        annotation (Placement(transformation(extent={{-110,-52},{-86,-36}})));
      Modelica.Blocks.Sources.Constant VO2_ml_min(k=250)
        annotation (Placement(transformation(extent={{-134,-50},{-124,-40}})));
      Modelica.Blocks.Sources.Constant RQ(k=0.85)
        annotation (Placement(transformation(extent={{-126,-96},{-116,-86}})));
      Modelica.Blocks.Math.Product product1
        annotation (Placement(transformation(extent={{-82,-94},{-62,-74}})));
      Packages.DO2_calculation dO2_calculation
        annotation (Placement(transformation(extent={{112,-80},{158,-28}})));
      Packages.to_mlO2CO2_per_min VCO2_ml
        annotation (Placement(transformation(extent={{-44,-116},{-24,-96}})));
      Packages.VAi vAi
        annotation (Placement(transformation(extent={{-116,52},{-102,68}})));
      Physiolibrary.Types.Constants.VolumeConst VD(k=0.00015)
        "volume od death space"
        annotation (Placement(transformation(extent={{-136,36},{-128,44}})));
      Physiolibrary.Types.Constants.VolumeConst VT(k=0.0005) "tidal volume"
        annotation (Placement(transformation(extent={{-134,54},{-126,62}})));
      Physiolibrary.Types.Constants.FrequencyConst fd(k=0.22333333333333)
        "frequency of breathing"
        annotation (Placement(transformation(extent={{-132,68},{-124,78}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
        annotation (Placement(transformation(extent={{-126,-4},{-118,4}})));
    equation
      connect(simplestTissue.Q,CardiacOutput. y) annotation (Line(points={{-18.75,
              -57.25},{-36,-57.25},{-36,-38},{-68,-38},{-68,54},{-85,54}},
                                                              color={0,0,127}));
      connect(BEox.y, simplestTissue.BEox) annotation (Line(points={{-51,76},{
              -18,76},{-18,60},{-16,60},{-16,6},{-26,6},{-26,-47.5},{-18,-47.5}},
            color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.BEox, simplestTissue.BEox)
        annotation (Line(points={{-6,66.125},{-36,66.125},{-36,64},{-34,64},{
              -34,10},{-44,10},{-44,-47.5},{-18,-47.5}}, color={0,0,127}));
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
      connect(alvEq_2units_with_shunts_and_mixing1.ctO2a, simplestTissue.O2a)
        annotation (Line(points={{79.6435,36.7563},{100,36.7563},{100,-14},{-22,
              -14},{-22,-35.5},{-18,-35.5}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctCO2a, simplestTissue.CO2a)
        annotation (Line(points={{79.6435,32.5938},{90,32.5938},{90,-10},{-24,
              -10},{-24,-41.5},{-18,-41.5}}, color={0,0,127}));
      connect(VO2_ml_min.y, from_mlO2CO2_per_min.ml_min) annotation (Line(
            points={{-123.5,-45},{-116,-45},{-116,-44},{-112.4,-44}}, color={0,
              0,127}));
      connect(RQ.y, product1.u2)
        annotation (Line(points={{-115.5,-91},{-84,-90}}, color={0,0,127}));
      connect(from_mlO2CO2_per_min.molarflowrate, product1.u1) annotation (Line(
            points={{-85.04,-43.84},{-82,-43.84},{-82,-68},{-90,-68},{-90,-78},
              {-84,-78}}, color={0,0,127}));
      connect(product1.y, simplestTissue.MCO2) annotation (Line(points={{-61,
              -84},{-24,-84},{-24,-73.75},{-18.75,-73.75}}, color={0,0,127}));
      connect(simplestTissue.MO2, product1.u1) annotation (Line(points={{-19.25,
              -65.75},{-82,-65.75},{-82,-68},{-90,-68},{-90,-78},{-84,-78}},
            color={0,0,127}));
      connect(dO2_calculation.O2art, simplestTissue.O2a) annotation (Line(
            points={{110.16,-45.16},{88,-45.16},{88,-14},{-22,-14},{-22,-35.5},
              {-18,-35.5}}, color={0,0,127}));
      connect(dO2_calculation.Q, CardiacOutput.y) annotation (Line(points={{110.16,
              -57.64},{62,-57.64},{62,-26},{-68,-26},{-68,54},{-85,54}},
            color={0,0,127}));
      connect(dO2_calculation.VO2, product1.u1) annotation (Line(points={{110.16,
              -65.44},{58,-65.44},{58,-94},{-38,-94},{-38,-65.75},{-82,-65.75},
              {-82,-68},{-90,-68},{-90,-78},{-84,-78}},         color={0,0,127}));
      connect(VCO2_ml.molarflowrate, simplestTissue.MCO2) annotation (Line(
            points={{-45.6,-105.6},{-52,-105.6},{-52,-84},{-24,-84},{-24,-73.75},
              {-18.75,-73.75}}, color={0,0,127}));
      connect(vAi.VAi, alvEq_2units_with_shunts_and_mixing1.VAi) annotation (
          Line(points={{-101.44,58.56},{-96,58.56},{-96,64},{-14,64},{-14,59.65},
              {-5.26957,59.65}}, color={0,0,127}));
      connect(VD.y, vAi.Vd) annotation (Line(points={{-127,40},{-122,40},{-122,
              54},{-116.42,54},{-116.42,54.4}}, color={0,0,127}));
      connect(VT.y, vAi.Vt) annotation (Line(points={{-125,58},{-125,58.4},{
              -116.28,58.4}}, color={0,0,127}));
      connect(fd.y, vAi.fd) annotation (Line(points={{-123,73},{-120,73},{-120,
              61.6},{-116.28,61.6}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -140,-120},{240,100}}),                             graphics={
              Rectangle(
              extent={{-58,98},{142,-102}},
              lineColor={0,0,0},
              fillColor={170,255,170},
              fillPattern=FillPattern.Solid), Text(
              extent={{-34,22},{128,-30}},
              textColor={0,0,0},
              textString="BloodyMary_01")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-140,-120},{240,100}})));
    end BloodyMary_01;

    model testO2CO2curves
      Physiolibrary.Types.Constants.PressureConst PCO2(k=4666.283559525)
        annotation (Placement(transformation(extent={{-84,80},{-76,88}})));
      Physiolibrary.Types.Constants.PressureConst PO2(k=3333.059685375)
        annotation (Placement(transformation(extent={{-84,64},{-76,72}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-88,48},{-80,56}})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-76,-8},{-68,0}})));
      Modelica.Blocks.Sources.Constant Hb_g_per_dl(k=15)
        annotation (Placement(transformation(extent={{-88,-48},{-68,-28}})));
      O2CO2_containers.O2CO2curves o2CO2curves(
        numberOfIntervals=100,
        pCO2min=133.322387415,
        pO2min=133.322387415)
        annotation (Placement(transformation(extent={{-6,6},{50,70}})));
    equation
      connect(o2CO2curves.PCO2, PCO2.y) annotation (Line(points={{-7.12,62.32},
              {-26,62.32},{-26,84},{-75,84}}, color={0,0,127}));
      connect(o2CO2curves.PO2, PO2.y) annotation (Line(points={{-7.12,50.16},{
              -36,50.16},{-36,68},{-75,68}}, color={0,0,127}));
      connect(o2CO2curves.BEox, BEox.y) annotation (Line(points={{-7.12,39.28},
              {-50,39.28},{-50,52},{-79,52}}, color={0,0,127}));
      connect(o2CO2curves.temp, temp.y) annotation (Line(points={{-7.4,20.4},{
              -50,20.4},{-50,-4},{-67,-4}}, color={0,0,127}));
      connect(Hb_g_per_dl.y, o2CO2curves.Hb_g_per_dl) annotation (Line(points={{-67,-38},
              {-36,-38},{-36,12.08},{-6.84,12.08}},           color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={170,255,85},
              fillPattern=FillPattern.Solid), Text(
              extent={{-76,34},{52,0}},
              textColor={28,108,200},
              textString="O2 CO2 curve")}),                          Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end testO2CO2curves;

    model BloodyMary_02
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-54,10},{-46,18}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-60,22},{-52,30}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-50,32},{-42,40}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 6.6666666666667e-05)
                                                       annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,54})));
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(
        final PB=PB.k,
        ctHb=9.309,        Temperature(displayUnit="degC") = bodyTemperature.k)
        annotation (Placement(transformation(extent={{-136,78},{-116,98}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-60,72},{-52,80}})));
      Packages.SimplestTissue simplestTissue
        annotation (Placement(transformation(extent={{-18,-82},{32,-32}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
        annotation (Placement(transformation(extent={{-100,88},{-88,100}})));
      Packages.AlvEq_2units_with_shunts_and_mixing
        alvEq_2units_with_shunts_and_mixing1
        annotation (Placement(transformation(extent={{-6,6},{78,80}})));
      Packages.from_mlO2CO2_per_min from_mlO2CO2_per_min
        annotation (Placement(transformation(extent={{-110,-52},{-86,-36}})));
      Modelica.Blocks.Sources.Constant VO2_ml_min(k=250)
        annotation (Placement(transformation(extent={{-134,-50},{-124,-40}})));
      Modelica.Blocks.Sources.Constant RQ(k=0.85)
        annotation (Placement(transformation(extent={{-126,-96},{-116,-86}})));
      Modelica.Blocks.Math.Product product1
        annotation (Placement(transformation(extent={{-82,-94},{-62,-74}})));
      Packages.to_mlO2CO2_per_min VCO2_ml
        annotation (Placement(transformation(extent={{-42,-144},{-22,-124}})));
      Packages.VAi vAi
        annotation (Placement(transformation(extent={{-116,52},{-102,68}})));
      Physiolibrary.Types.Constants.VolumeConst VD(k=0.00015)
        "volume od death space"
        annotation (Placement(transformation(extent={{-136,36},{-128,44}})));
      Physiolibrary.Types.Constants.VolumeConst VT(k=0.0005) "tidal volume"
        annotation (Placement(transformation(extent={{-134,54},{-126,62}})));
      Physiolibrary.Types.Constants.FrequencyConst fd(k=0.22333333333333)
        "frequency of breathing"
        annotation (Placement(transformation(extent={{-132,68},{-124,78}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
        annotation (Placement(transformation(extent={{-126,-4},{-118,4}})));
      Packages.DO2DCO2_calculation dO2DCO2_calculation
        annotation (Placement(transformation(extent={{156,-86},{206,-36}})));
    equation
      connect(simplestTissue.Q,CardiacOutput. y) annotation (Line(points={{-18.75,
              -57.25},{-36,-57.25},{-36,-38},{-68,-38},{-68,54},{-85,54}},
                                                              color={0,0,127}));
      connect(BEox.y, simplestTissue.BEox) annotation (Line(points={{-51,76},{
              -18,76},{-18,60},{-16,60},{-16,6},{-26,6},{-26,-47.5},{-18,-47.5}},
            color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.BEox, simplestTissue.BEox)
        annotation (Line(points={{-6,66.125},{-36,66.125},{-36,64},{-34,64},{
              -34,10},{-44,10},{-44,-47.5},{-18,-47.5}}, color={0,0,127}));
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
      connect(alvEq_2units_with_shunts_and_mixing1.ctO2a, simplestTissue.O2a)
        annotation (Line(points={{79.6435,36.7563},{100,36.7563},{100,-14},{-22,
              -14},{-22,-35.5},{-18,-35.5}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctCO2a, simplestTissue.CO2a)
        annotation (Line(points={{79.6435,32.5938},{90,32.5938},{90,-10},{-24,
              -10},{-24,-41.5},{-18,-41.5}}, color={0,0,127}));
      connect(VO2_ml_min.y, from_mlO2CO2_per_min.ml_min) annotation (Line(
            points={{-123.5,-45},{-116,-45},{-116,-44},{-112.4,-44}}, color={0,
              0,127}));
      connect(RQ.y, product1.u2)
        annotation (Line(points={{-115.5,-91},{-84,-90}}, color={0,0,127}));
      connect(from_mlO2CO2_per_min.molarflowrate, product1.u1) annotation (Line(
            points={{-85.04,-43.84},{-82,-43.84},{-82,-68},{-90,-68},{-90,-78},
              {-84,-78}}, color={0,0,127}));
      connect(product1.y, simplestTissue.MCO2) annotation (Line(points={{-61,
              -84},{-24,-84},{-24,-73.75},{-18.75,-73.75}}, color={0,0,127}));
      connect(simplestTissue.MO2, product1.u1) annotation (Line(points={{-19.25,
              -65.75},{-82,-65.75},{-82,-68},{-90,-68},{-90,-78},{-84,-78}},
            color={0,0,127}));
      connect(VCO2_ml.molarflowrate, simplestTissue.MCO2) annotation (Line(
            points={{-43.6,-133.6},{-50,-133.6},{-50,-84},{-24,-84},{-24,-73.75},
              {-18.75,-73.75}}, color={0,0,127}));
      connect(vAi.VAi, alvEq_2units_with_shunts_and_mixing1.VAi) annotation (
          Line(points={{-101.44,58.56},{-96,58.56},{-96,64},{-14,64},{-14,59.65},
              {-5.26957,59.65}}, color={0,0,127}));
      connect(VD.y, vAi.Vd) annotation (Line(points={{-127,40},{-122,40},{-122,
              54},{-116.42,54},{-116.42,54.4}}, color={0,0,127}));
      connect(VT.y, vAi.Vt) annotation (Line(points={{-125,58},{-125,58.4},{
              -116.28,58.4}}, color={0,0,127}));
      connect(fd.y, vAi.fd) annotation (Line(points={{-123,73},{-120,73},{-120,
              61.6},{-116.28,61.6}}, color={0,0,127}));
      connect(dO2DCO2_calculation.O2art, simplestTissue.CO2a) annotation (Line(
            points={{154,-52.5},{36,-52.5},{36,-30},{-24,-30},{-24,-41.5},{-18,
              -41.5}}, color={0,0,127}));
      connect(dO2DCO2_calculation.CO2art, simplestTissue.O2a) annotation (Line(
            points={{154,-57.5},{142,-57.5},{142,-14},{-22,-14},{-22,-35.5},{
              -18,-35.5}}, color={0,0,127}));
      connect(dO2DCO2_calculation.Q, CardiacOutput.y) annotation (Line(points={
              {154,-64.5},{36,-64.5},{36,-26},{-36,-26},{-36,-38},{-68,-38},{
              -68,54},{-85,54}}, color={0,0,127}));
      connect(dO2DCO2_calculation.VCO2, simplestTissue.MCO2) annotation (Line(
            points={{154,-78.5},{134,-78.5},{134,-78},{112,-78},{112,-110},{-24,
              -110},{-24,-73.75},{-18.75,-73.75}}, color={0,0,127}));
      connect(dO2DCO2_calculation.VO2, product1.u1) annotation (Line(points={{
              154,-72},{84,-72},{84,-102},{-36,-102},{-36,-65.75},{-82,-65.75},
              {-82,-68},{-90,-68},{-90,-78},{-84,-78}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-140,
                -160},{240,100}}),                                  graphics={
              Rectangle(
              extent={{-58,98},{142,-102}},
              lineColor={0,0,0},
              fillColor={170,255,170},
              fillPattern=FillPattern.Solid), Text(
              extent={{-34,22},{128,-30}},
              textColor={0,0,0},
              textString="BloodyMary_01")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-140,-160},{240,100}})));
    end BloodyMary_02;

    model BloodyMary_03
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-54,10},{-46,18}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-60,22},{-52,30}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-50,32},{-42,40}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 6.6666666666667e-05)
                                                       annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,54})));
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(
        final PB=PB.k,
        ctHb=9.309,        Temperature(displayUnit="degC") = bodyTemperature.k)
        annotation (Placement(transformation(extent={{-136,80},{-116,100}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-80,72},{-72,80}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
        annotation (Placement(transformation(extent={{-100,88},{-88,100}})));
      Packages.AlvEq_2units_with_shunts_and_mixing
        alvEq_2units_with_shunts_and_mixing1
        annotation (Placement(transformation(extent={{-6,6},{78,80}})));
      Packages.from_mlO2CO2_per_min from_mlO2CO2_per_min
        annotation (Placement(transformation(extent={{-110,-52},{-86,-36}})));
      Modelica.Blocks.Sources.Constant VO2_ml_min(k=250)
        annotation (Placement(transformation(extent={{-134,-50},{-124,-40}})));
      Modelica.Blocks.Sources.Constant RQ(k=0.85)
        annotation (Placement(transformation(extent={{-120,-92},{-110,-82}})));
      Packages.to_mlO2CO2_per_min VCO2_ml
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-100,-116})));
      Packages.VAi vAi
        annotation (Placement(transformation(extent={{-116,52},{-102,68}})));
      Physiolibrary.Types.Constants.VolumeConst VD(k=0.00015)
        "volume od death space"
        annotation (Placement(transformation(extent={{-136,36},{-128,44}})));
      Physiolibrary.Types.Constants.VolumeConst VT(k=0.0005) "tidal volume"
        annotation (Placement(transformation(extent={{-134,54},{-126,62}})));
      Physiolibrary.Types.Constants.FrequencyConst fd(k=0.22333333333333)
        "frequency of breathing"
        annotation (Placement(transformation(extent={{-132,68},{-124,78}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
        annotation (Placement(transformation(extent={{-126,-4},{-118,4}})));
      Packages.SimplestTissueDO2 simplestTissueDO2_1
        annotation (Placement(transformation(extent={{20,-100},{96,-24}})));
      Modelica.Blocks.Math.Product product1
        annotation (Placement(transformation(extent={{-66,-98},{-46,-78}})));
    equation
      connect(alvEq_2units_with_shunts_and_mixing1.Q, CardiacOutput.y)
        annotation (Line(points={{-5.26957,56.875},{-62,56.875},{-62,54},{-85,
              54}}, color={0,0,127}));
      connect(Fsh.y, alvEq_2units_with_shunts_and_mixing1.Fsh) annotation (Line(
            points={{-41,36},{-12,36},{-12,38.6063},{-5.45217,38.6063}}, color=
              {0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing1.F_q1) annotation (
          Line(points={{-51,26},{-12,26},{-12,30.2813},{-5.45217,30.2813}},
            color={0,0,127}));
      connect(FAi1.y, alvEq_2units_with_shunts_and_mixing1.F_VAi1) annotation (
          Line(points={{-45,14},{-12,14},{-12,21.0313},{-5.81739,21.0313}},
            color={0,0,127}));
      connect(VO2_ml_min.y, from_mlO2CO2_per_min.ml_min) annotation (Line(
            points={{-123.5,-45},{-116,-45},{-116,-44},{-112.4,-44}}, color={0,
              0,127}));
      connect(vAi.VAi, alvEq_2units_with_shunts_and_mixing1.VAi) annotation (
          Line(points={{-101.44,58.56},{-96,58.56},{-96,64},{-14,64},{-14,59.65},
              {-5.26957,59.65}}, color={0,0,127}));
      connect(VD.y, vAi.Vd) annotation (Line(points={{-127,40},{-122,40},{-122,
              54},{-116.42,54},{-116.42,54.4}}, color={0,0,127}));
      connect(VT.y, vAi.Vt) annotation (Line(points={{-125,58},{-125,58.4},{
              -116.28,58.4}}, color={0,0,127}));
      connect(fd.y, vAi.fd) annotation (Line(points={{-123,73},{-120,73},{-120,
              61.6},{-116.28,61.6}}, color={0,0,127}));
      connect(simplestTissueDO2_1.CO2v, alvEq_2units_with_shunts_and_mixing1.CvCO2)
        annotation (Line(points={{89.92,-20.2},{89.92,-12},{-66,-12},{-66,48.55},
              {-5.26957,48.55}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.CvO2, simplestTissueDO2_1.O2v)
        annotation (Line(points={{-5.26957,51.325},{-68,51.325},{-68,-16},{
              81.56,-16},{81.56,-20.2}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctO2a, simplestTissueDO2_1.O2a)
        annotation (Line(points={{79.6435,36.7563},{90,36.7563},{90,-2},{-4,-2},
              {-4,-30.08},{16.96,-30.08}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctCO2a, simplestTissueDO2_1.CO2a)
        annotation (Line(points={{79.6435,32.5938},{98,32.5938},{98,-8},{-14,-8},
              {-14,-39.2},{16.96,-39.2}}, color={0,0,127}));
      connect(BEox.y, alvEq_2units_with_shunts_and_mixing1.BEox) annotation (
          Line(points={{-71,76},{-32,76},{-32,66.125},{-6,66.125}}, color={0,0,
              127}));
      connect(simplestTissueDO2_1.BEox, alvEq_2units_with_shunts_and_mixing1.BEox)
        annotation (Line(points={{17.72,-48.32},{-38,-48.32},{-38,-22},{-76,-22},
              {-76,68},{-62,68},{-62,76},{-32,76},{-32,66.125},{-6,66.125}},
            color={0,0,127}));
      connect(simplestTissueDO2_1.Q, CardiacOutput.y) annotation (Line(points={{15.82,
              -63.9},{-44,-63.9},{-44,-26},{-80,-26},{-80,54},{-85,54}},
            color={0,0,127}));
      connect(simplestTissueDO2_1.MO2, from_mlO2CO2_per_min.molarflowrate)
        annotation (Line(points={{16.58,-74.54},{-52,-74.54},{-52,-43.84},{
              -85.04,-43.84}}, color={0,0,127}));
      connect(VCO2_ml.molarflowrate, simplestTissueDO2_1.MCO2) annotation (Line(
            points={{-88.4,-116.4},{4,-116.4},{4,-87.46},{16.58,-87.46}}, color=
             {0,0,127}));
      connect(RQ.y, product1.u2) annotation (Line(points={{-109.5,-87},{-76,-87},
              {-76,-94},{-68,-94}}, color={0,0,127}));
      connect(product1.y, simplestTissueDO2_1.MCO2) annotation (Line(points={{
              -45,-88},{-30,-88},{-30,-116.4},{4,-116.4},{4,-87.46},{16.58,
              -87.46}}, color={0,0,127}));
      connect(product1.u1, from_mlO2CO2_per_min.molarflowrate) annotation (Line(
            points={{-68,-82},{-78,-82},{-78,-43.84},{-85.04,-43.84}}, color={0,
              0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-140,
                -160},{240,100}}),                                  graphics={
              Rectangle(
              extent={{-58,98},{142,-102}},
              lineColor={0,0,0},
              fillColor={170,255,170},
              fillPattern=FillPattern.Solid), Text(
              extent={{-34,22},{128,-30}},
              textColor={0,0,0},
              textString="BloodyMary_01")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-140,-160},{240,100}})));
    end BloodyMary_03;

    model testSimpestTissueDO2
      Packages.SimplestTissueDO2 simplestTissueDO2_1
        annotation (Placement(transformation(extent={{-28,-32},{48,44}})));
      Physiolibrary.Types.Constants.ConcentrationConst CO2a(k=21.2)
        annotation (Placement(transformation(extent={{-74,30},{-66,38}})));
      Physiolibrary.Types.Constants.ConcentrationConst O2a(k=9.1)
        annotation (Placement(transformation(extent={{-62,42},{-54,50}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-84,14},{-76,22}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst Q(k=6.6666666666667e-05)
        annotation (Placement(transformation(extent={{-88,-4},{-80,4}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst MO2(k=
            0.00018583333333333)
        annotation (Placement(transformation(extent={{-80,-20},{-72,-12}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst MCO2(k=0.000158)
        annotation (Placement(transformation(extent={{-82,-38},{-74,-30}})));
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(
        respiratoryQuotient=0.0085,
        final PB=101325.0144354,
        ctHb=9.309,
        Temperature(displayUnit="degC") = 310.15)
        annotation (Placement(transformation(extent={{-90,60},{-70,80}})));
    equation
      connect(O2a.y, simplestTissueDO2_1.O2a) annotation (Line(points={{-53,46},
              {-38,46},{-38,37.92},{-31.04,37.92}}, color={0,0,127}));
      connect(CO2a.y, simplestTissueDO2_1.CO2a) annotation (Line(points={{-65,
              34},{-40,34},{-40,28.8},{-31.04,28.8}}, color={0,0,127}));
      connect(BEox.y, simplestTissueDO2_1.BEox) annotation (Line(points={{-75,
              18},{-75,19.68},{-30.28,19.68}}, color={0,0,127}));
      connect(Q.y, simplestTissueDO2_1.Q) annotation (Line(points={{-79,0},{-42,
              0},{-42,4.1},{-32.18,4.1}}, color={0,0,127}));
      connect(MO2.y, simplestTissueDO2_1.MO2) annotation (Line(points={{-71,-16},
              {-40,-16},{-40,-6.54},{-31.42,-6.54}}, color={0,0,127}));
      connect(MCO2.y, simplestTissueDO2_1.MCO2) annotation (Line(points={{-73,
              -34},{-38,-34},{-38,-19.46},{-31.42,-19.46}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end testSimpestTissueDO2;

    model BloodyMary_04
      Physiolibrary.Types.Constants.FractionConst FAi1(k=0.5)
        annotation (Placement(transformation(extent={{-54,10},{-46,18}})));
      Physiolibrary.Types.Constants.FractionConst Fq1(k=0.5)
        annotation (Placement(transformation(extent={{-60,22},{-52,30}})));
      Physiolibrary.Types.Constants.FractionConst Fsh(k=0.02)
        annotation (Placement(transformation(extent={{-50,32},{-42,40}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst CardiacOutput(k(
            displayUnit="l/min") = 9e-05)              annotation (Placement(
            transformation(
            extent={{4,4},{-4,-4}},
            rotation=180,
            origin={-90,54})));
      inner AcidBaseBalance.Interfaces.ModelSettings modelSettings(
        final PB=PB.k,
        ctHb=9.309,        Temperature(displayUnit="degC") = bodyTemperature.k)
        annotation (Placement(transformation(extent={{-136,80},{-116,100}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-80,72},{-72,80}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
        annotation (Placement(transformation(extent={{-100,88},{-88,100}})));
      Packages.AlvEq_2units_with_shunts_and_mixing
        alvEq_2units_with_shunts_and_mixing1
        annotation (Placement(transformation(extent={{-6,6},{78,80}})));
      Packages.from_mlO2CO2_per_min from_mlO2CO2_per_min
        annotation (Placement(transformation(extent={{-110,-52},{-86,-36}})));
      Modelica.Blocks.Sources.Constant VO2_ml_min(k=250)
        annotation (Placement(transformation(extent={{-134,-50},{-124,-40}})));
      Modelica.Blocks.Sources.Constant RQ(k=0.85)
        annotation (Placement(transformation(extent={{-84,-154},{-74,-144}})));
      Packages.to_mlO2CO2_per_min VCO2_ml
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-100,-116})));
      Packages.VAi vAi
        annotation (Placement(transformation(extent={{-116,52},{-102,68}})));
      Physiolibrary.Types.Constants.VolumeConst VD(k=0.00015)
        "volume od death space"
        annotation (Placement(transformation(extent={{-136,36},{-128,44}})));
      Physiolibrary.Types.Constants.VolumeConst VT(k=0.0005) "tidal volume"
        annotation (Placement(transformation(extent={{-134,54},{-126,62}})));
      Physiolibrary.Types.Constants.FrequencyConst fd(k=0.23)
        "frequency of breathing"
        annotation (Placement(transformation(extent={{-132,68},{-124,78}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=101325.0144354)
        annotation (Placement(transformation(extent={{-126,-4},{-118,4}})));
      Packages.SimplestTissueDO2 oneTissue
        annotation (Placement(transformation(extent={{20,-100},{96,-24}})));
      Packages.Simplest7Tissue simplest7Tissue
        annotation (Placement(transformation(extent={{160,-156},{224,-90}})));
      O2CO2_containers.O2CO2curves o2CO2curves(
        numberOfIntervals=100,
        pCO2min=133.322387415,
        pO2min=133.322387415)
        annotation (Placement(transformation(extent={{242,18},{298,82}})));
      Physiolibrary.Types.Constants.PressureConst PCO2_curve(k=4666.283559525)
        annotation (Placement(transformation(extent={{190,76},{198,84}})));
      Physiolibrary.Types.Constants.PressureConst PO2_curve(k=3333.059685375)
        annotation (Placement(transformation(extent={{190,60},{198,68}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox_curve(k=0)
        annotation (Placement(transformation(extent={{186,44},{194,52}})));
      Physiolibrary.Types.Constants.TemperatureConst temp_curve(k=310.15)
        annotation (Placement(transformation(extent={{184,4},{192,12}})));
      Modelica.Blocks.Sources.Constant Hb_g_per_dl_curve(k=15)
        annotation (Placement(transformation(extent={{184,-40},{204,-20}})));
    equation
      connect(alvEq_2units_with_shunts_and_mixing1.Q, CardiacOutput.y)
        annotation (Line(points={{-5.26957,56.875},{-62,56.875},{-62,54},{-85,
              54}}, color={0,0,127}));
      connect(Fsh.y, alvEq_2units_with_shunts_and_mixing1.Fsh) annotation (Line(
            points={{-41,36},{-12,36},{-12,38.6063},{-5.45217,38.6063}}, color=
              {0,0,127}));
      connect(Fq1.y, alvEq_2units_with_shunts_and_mixing1.F_q1) annotation (
          Line(points={{-51,26},{-12,26},{-12,30.2813},{-5.45217,30.2813}},
            color={0,0,127}));
      connect(FAi1.y, alvEq_2units_with_shunts_and_mixing1.F_VAi1) annotation (
          Line(points={{-45,14},{-12,14},{-12,21.0313},{-5.81739,21.0313}},
            color={0,0,127}));
      connect(VO2_ml_min.y, from_mlO2CO2_per_min.ml_min) annotation (Line(
            points={{-123.5,-45},{-116,-45},{-116,-44},{-112.4,-44}}, color={0,
              0,127}));
      connect(vAi.VAi, alvEq_2units_with_shunts_and_mixing1.VAi) annotation (
          Line(points={{-101.44,58.56},{-96,58.56},{-96,64},{-14,64},{-14,59.65},
              {-5.26957,59.65}}, color={0,0,127}));
      connect(VD.y, vAi.Vd) annotation (Line(points={{-127,40},{-122,40},{-122,
              54},{-116.42,54},{-116.42,54.4}}, color={0,0,127}));
      connect(VT.y, vAi.Vt) annotation (Line(points={{-125,58},{-125,58.4},{
              -116.28,58.4}}, color={0,0,127}));
      connect(fd.y, vAi.fd) annotation (Line(points={{-123,73},{-120,73},{-120,
              61.6},{-116.28,61.6}}, color={0,0,127}));
      connect(oneTissue.CO2v, alvEq_2units_with_shunts_and_mixing1.CvCO2)
        annotation (Line(points={{89.92,-20.2},{89.92,-12},{-66,-12},{-66,48.55},
              {-5.26957,48.55}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.CvO2, oneTissue.O2v)
        annotation (Line(points={{-5.26957,51.325},{-68,51.325},{-68,-16},{
              81.56,-16},{81.56,-20.2}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctO2a, oneTissue.O2a)
        annotation (Line(points={{79.6435,36.7563},{90,36.7563},{90,-2},{-4,-2},
              {-4,-30.08},{16.96,-30.08}}, color={0,0,127}));
      connect(alvEq_2units_with_shunts_and_mixing1.ctCO2a, oneTissue.CO2a)
        annotation (Line(points={{79.6435,32.5938},{98,32.5938},{98,-8},{-14,-8},
              {-14,-39.2},{16.96,-39.2}}, color={0,0,127}));
      connect(BEox.y, alvEq_2units_with_shunts_and_mixing1.BEox) annotation (
          Line(points={{-71,76},{-32,76},{-32,66.125},{-6,66.125}}, color={0,0,
              127}));
      connect(oneTissue.BEox, alvEq_2units_with_shunts_and_mixing1.BEox)
        annotation (Line(points={{17.72,-48.32},{-38,-48.32},{-38,-22},{-76,-22},
              {-76,68},{-62,68},{-62,76},{-32,76},{-32,66.125},{-6,66.125}},
            color={0,0,127}));
      connect(oneTissue.Q, CardiacOutput.y) annotation (Line(points={{15.82,-63.9},
              {-44,-63.9},{-44,-26},{-80,-26},{-80,54},{-85,54}}, color={0,0,
              127}));
      connect(oneTissue.MO2, from_mlO2CO2_per_min.molarflowrate) annotation (
          Line(points={{16.58,-74.54},{-52,-74.54},{-52,-43.84},{-85.04,-43.84}},
            color={0,0,127}));
      connect(VCO2_ml.molarflowrate, oneTissue.MCO2) annotation (Line(points={{
              -88.4,-116.4},{4,-116.4},{4,-87.46},{16.58,-87.46}}, color={0,0,
              127}));
      connect(RQ.y, simplest7Tissue.RQ) annotation (Line(points={{-73.5,-149},{148,-149},
              {148,-151.6},{158.72,-151.6}}, color={0,0,127}));
      connect(simplest7Tissue.MO2, from_mlO2CO2_per_min.molarflowrate) annotation (
          Line(points={{158.4,-139.5},{122,-139.5},{122,-138},{-14,-138},{-14,-86.54},
              {-52,-86.54},{-52,-43.84},{-85.04,-43.84}}, color={0,0,127}));
      connect(simplest7Tissue.BEox, alvEq_2units_with_shunts_and_mixing1.BEox)
        annotation (Line(points={{159.68,-113.1},{116,-113.1},{116,-122},{0,
              -122},{0,-48},{-2,-48},{-2,-48.32},{-38,-48.32},{-38,-22},{-76,
              -22},{-76,68},{-62,68},{-62,76},{-32,76},{-32,66.125},{-6,66.125}},
                                                               color={0,0,127}));
      connect(simplest7Tissue.Q, CardiacOutput.y) annotation (Line(points={{159.04,
              -127.033},{120,-127.033},{120,-132},{-10,-132},{-10,-63.9},{-44,
              -63.9},{-44,-26},{-80,-26},{-80,54},{-85,54}},
                                            color={0,0,127}));
      connect(simplest7Tissue.O2a, oneTissue.O2a) annotation (Line(points={{160,
              -95.1333},{120,-95.1333},{120,-10},{-4,-10},{-4,-30.08},{16.96,
              -30.08}}, color={0,0,127}));
      connect(simplest7Tissue.CO2a, alvEq_2units_with_shunts_and_mixing1.ctCO2a)
        annotation (Line(points={{160,-103.933},{144,-103.933},{144,32.5938},{
              79.6435,32.5938}},
                         color={0,0,127}));
      connect(simplest7Tissue.MCO2, oneTissue.MCO2) annotation (Line(points={{190.72,
              -86.3333},{190.72,-70},{112,-70},{112,-120},{4,-120},{4,-87.46},{
              16.58,-87.46}},          color={0,0,127}));
      connect(PCO2_curve.y, o2CO2curves.PCO2) annotation (Line(points={{199,80},
              {230,80},{230,74.32},{240.88,74.32}}, color={0,0,127}));
      connect(PO2_curve.y, o2CO2curves.PO2) annotation (Line(points={{199,64},{
              230,64},{230,62.16},{240.88,62.16}}, color={0,0,127}));
      connect(BEox_curve.y, o2CO2curves.BEox) annotation (Line(points={{195,48},
              {230,48},{230,51.28},{240.88,51.28}}, color={0,0,127}));
      connect(temp_curve.y, o2CO2curves.temp) annotation (Line(points={{193,8},
              {220,8},{220,32.4},{240.6,32.4}}, color={0,0,127}));
      connect(Hb_g_per_dl_curve.y, o2CO2curves.Hb_g_per_dl) annotation (Line(
            points={{205,-30},{230,-30},{230,24.08},{241.16,24.08}}, color={0,0,
              127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-140,
                -160},{240,100}}),                                  graphics={
              Rectangle(
              extent={{-58,98},{142,-102}},
              lineColor={0,0,0},
              fillColor={170,255,170},
              fillPattern=FillPattern.Solid), Text(
              extent={{-34,22},{128,-30}},
              textColor={0,0,0},
              textString="BloodyMary_01")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-140,-160},{240,100}})));
    end BloodyMary_04;
  end Tests;

  package Wagner
    model Wagner2001
      Packages.SimplestTissue_bad simplestTissue
        annotation (Placement(transformation(extent={{-8,-48},{54,14}})));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={0,140,72},
              fillPattern=FillPattern.Solid)}), Diagram(coordinateSystem(
              preserveAspectRatio=false)));
    end Wagner2001;
  end Wagner;
  annotation (uses(
      Physiolibrary(version="3.0.0-alpha10"),
      AcidBaseBalance(version="1"),
      Simplest(version="2"),
      Modelica(version="4.0.0"),
      O2CO2_containers(version="1")));
end BloodyMary_BodyLight_01;
