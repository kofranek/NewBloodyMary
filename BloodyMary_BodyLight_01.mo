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
            venBlood(pH(displayUnit="iu"))
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
      Packages.SimplestTissue
                     simplestTissue
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
        annotation (Placement(transformation(extent={{-84,78},{-76,86}})));
      Physiolibrary.Types.Constants.PressureConst PO2(k=3333.059685375)
        annotation (Placement(transformation(extent={{-84,62},{-76,70}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-88,46},{-80,54}})));
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
              {-26,62.32},{-26,82},{-75,82}}, color={0,0,127}));
      connect(o2CO2curves.PO2, PO2.y) annotation (Line(points={{-7.12,50.16},{
              -36,50.16},{-36,66},{-75,66}}, color={0,0,127}));
      connect(o2CO2curves.BEox, BEox.y) annotation (Line(points={{-7.12,39.28},
              {-50,39.28},{-50,50},{-79,50}}, color={0,0,127}));
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
      Packages.SimplestTissue
                     simplestTissue
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
  end Tests;

  package Wagner
    model Wagner2001
      Packages.SimplestTissue simplestTissue
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
