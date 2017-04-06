within ;
package NewBloodyMary

  package Parts

    connector MolarFlowConnector "Molar Concentration and Solute flow"
      Physiolibrary.Types.Concentration conc
        "Molar solute concentration in mol/m3 (displayUnit: mmol/l)";
      flow Physiolibrary.Types.MolarFlowRate q
        "Molar solute flow in mol/sec (displayUnit=mmol/min)";
      annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})));
    end MolarFlowConnector;

    connector MolarInflowConnector "Molar Concentration and Solute Inflow"
      extends MolarFlowConnector;
      annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid)}));
    end MolarInflowConnector;

    connector MolarOutflowConnector "Molar Concentration and Solute Outflow"
      extends MolarFlowConnector;
      annotation (Documentation(revisions="<html>
<p><i>2009-2010</i></p>
<p>Marek Matejak, Charles University, Prague, Czech Republic </p>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid), Rectangle(
              extent={{-60,60},{60,-60}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid)}));
    end MolarOutflowConnector;

    connector MassFlowConnector "Mass Concentration and Solute flow"
      Physiolibrary.Types.MassConcentration conc
        "Mass solute concentration in kg/m3 = g/l (displayUnit: mg/l)";
      flow Physiolibrary.Types.MassFlowRate q
        "Mass solute flow in kg/sec (displayUnit: mg/min)";
    end MassFlowConnector;

    connector MassInflowConnector "Mass Concentration and Solute Inflow"
      extends MassFlowConnector;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid)}));
    end MassInflowConnector;

    connector MassOutflowConnector "Mass Concentration and Solute Outflow"
      extends MassFlowConnector;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid), Rectangle(
              extent={{-60,60},{60,-60}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid)}));
    end MassOutflowConnector;

    partial model ConditionalVolume
      "Chemical processes can be modeled with or without(normalized to 1 liter) variable solution volume"

      constant Physiolibrary.Types.Volume NormalVolume=0.001 "1 liter"
        annotation (Evaluate=true, HideResult=true);

      parameter Boolean useNormalizedVolume = true
        "Normalized volume of solution is 1 liter"
      annotation(Evaluate=true, HideResult=true, choices(checkBox=true),Dialog(group="External inputs/outputs"));

      Physiolibrary.Types.Volume volume "Solution volume";
                                             //annotation(HideResult=useNormalizedVolume);

      Physiolibrary.Types.RealIO.VolumeInput solutionVolume=volume if not
        useNormalizedVolume "Volume of solution" annotation (Placement(
            transformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-40,40})));
    equation
      if useNormalizedVolume then
        volume = NormalVolume;
      end if;

    end ConditionalVolume;

    class MassContent "Compartment for mass content storage"
      extends ConditionalVolume;
    //  Physiolibrary.Types.RealIO.MassConcentrationOutput massConcentration

      Modelica.Blocks.Interfaces.RealOutput massConcentration(unit = "g/l") annotation (Placement(transformation(
              extent={{-44,-88},{-24,-68}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-48,-96})));
      Physiolibrary.Types.RealIO.MassOutput mass annotation (Placement(
            transformation(extent={{58,-92},{78,-72}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={70,-96})));

      parameter Physiolibrary.Types.RealIO.MassConcentrationInput initConcentration;
      FFSA.Parts.MassInflowConnector massInflowConnector annotation (Placement(
            transformation(extent={{-10,-40},{10,-20}}), iconTransformation(extent={
                {-10,-40},{10,-20}})));

    initial equation
      mass=initConcentration*volume;

    equation
        massInflowConnector.q= der(mass);
        massConcentration=mass/volume;
        massInflowConnector.conc=massConcentration;

        annotation (Placement(transformation(extent={{-44,-96},{-24,-76}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-54,-96})),
                     Icon(coordinateSystem(
              preserveAspectRatio=false,extent={{-100,-100},{100,100}}),
            graphics={
            Text(
              extent={{-34,14},{52,84}},
              lineColor={28,108,200},
              textString="Mol"),
            Polygon(
              points={{-84,20},{-84,56},{-86,62},{-90,70},{-94,74},{-98,78},{-94,82},
                  {-82,90},{86,90},{94,86},{98,82},{98,78},{96,74},{94,72},{94,66},{
                  94,20},{94,-78},{92,-84},{88,-86},{78,-86},{-74,-86},{-82,-86},{-84,
                  -82},{-84,-76},{-84,20}},
              lineColor={0,0,0},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid,
              smooth=Smooth.Bezier),
            Polygon(
              points={{-84,20},{94,20},{94,20},{94,-78},{92,-84},{88,-86},{78,-86},{
                  -74,-86},{-82,-86},{-84,-82},{-84,-76},{-84,20},{-84,20}},
              lineColor={0,0,0},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid,
              smooth=Smooth.Bezier),
            Ellipse(
              extent={{-62,12},{-56,6}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-40,16},{-34,10}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-30,4},{-24,-2}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-22,14},{-16,8}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-64,-10},{-58,-16}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-48,-14},{-42,-20}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-52,-38},{-46,-44}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-74,-54},{-68,-60}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-74,-28},{-68,-34}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-78,10},{-72,4}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-14,-12},{-8,-18}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{68,8},{74,2}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{2,-52},{8,-58}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-24,-26},{-18,-32}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-34,-44},{-28,-50}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-34,-70},{-28,-76}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-2,12},{4,6}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-2},{24,-8}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{0,0},{6,-6}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-30,-12},{-24,-18}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{64,-36},{70,-42}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{48,-36},{54,-42}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{44,-48},{50,-54}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{28,-20},{34,-26}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-38},{24,-44}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-64},{24,-70}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{66,-6},{72,-12}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{82,16},{88,10}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{52,6},{58,0}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{38,12},{44,6}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-76,-74},{-70,-80}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-18,-60},{-12,-66}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-56,-72},{-50,-78}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,12},{24,6}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{2,-76},{8,-82}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{80,-78},{86,-84}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{64,-68},{70,-74}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{74,-58},{80,-64}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{76,-36},{82,-42}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{54,-18},{60,-24}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{42,-72},{48,-78}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{80,-14},{86,-20}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{40,-6},{46,-12}},
              lineColor={0,0,0},
              fillColor={127,0,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{30,124},{300,90}},
              lineColor={28,108,200},
              textString="%name",
              horizontalAlignment=TextAlignment.Left)}),
                                                Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end MassContent;

    class MolarContent "compartment for molar content storage"
      extends ConditionalVolume;

      MolarInflowConnector molarInflowConnector annotation (Placement(
            transformation(extent={{-10,-40},{10,-20}}), iconTransformation(extent={
                {-10,-40},{10,-20}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput concentration annotation (
          Placement(transformation(extent={{-58,-102},{-38,-82}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-60,-96})));
      Physiolibrary.Types.RealIO.AmountOfSubstanceOutput molarContent
        annotation (Placement(transformation(extent={{46,-92},{66,-72}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={60,-96})));
      parameter Physiolibrary.Types.RealIO.ConcentrationInput initMolarConcentration;
      parameter Real valence = 0;
      ChemicalEquivalentConcentration ekvivalentConcentration;
      ChemicalEquivalentConcentrationOutput eqconc = ekvivalentConcentration if  (valence<>0)
        annotation (Placement(transformation(extent={{10,-106},{30,-86}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-28,-96})));
    initial equation
      molarContent = initMolarConcentration*volume;
    equation
      molarInflowConnector.q = der( molarContent);
      concentration = molarContent/volume;
      molarInflowConnector.conc = concentration;
      ekvivalentConcentration = concentration * valence;
        annotation ( Icon(coordinateSystem(
              preserveAspectRatio=false,extent={{-100,-100},{100,100}}),
            graphics={
            Text(
              extent={{-34,14},{52,84}},
              lineColor={28,108,200},
              textString="Mol"),
            Polygon(
              points={{-84,20},{-84,56},{-86,62},{-90,70},{-94,74},{-98,78},{-94,82},
                  {-82,90},{86,90},{94,86},{98,82},{98,78},{96,74},{94,72},{94,66},{
                  94,20},{94,-78},{92,-84},{88,-86},{78,-86},{-74,-86},{-82,-86},{-84,
                  -82},{-84,-76},{-84,20}},
              lineColor={0,0,0},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid,
              smooth=Smooth.Bezier),
            Polygon(
              points={{-84,20},{94,20},{94,20},{94,-78},{92,-84},{88,-86},{78,-86},{
                  -74,-86},{-82,-86},{-84,-82},{-84,-76},{-84,20},{-84,20}},
              lineColor={0,0,0},
              fillColor={170,255,255},
              fillPattern=FillPattern.Solid,
              smooth=Smooth.Bezier),
            Ellipse(
              extent={{-62,12},{-56,6}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-40,16},{-34,10}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-30,4},{-24,-2}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-18,14},{-12,8}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-64,-10},{-58,-16}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-54,-26},{-48,-32}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-52,-46},{-46,-52}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-74,-54},{-68,-60}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-74,-28},{-68,-34}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-78,6},{-72,0}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-14,-12},{-8,-18}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{72,6},{78,0}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{2,-52},{8,-58}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-24,-26},{-18,-32}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-34,-44},{-28,-50}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-34,-70},{-28,-76}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-46,-4},{-40,-10}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-2},{24,-8}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{0,0},{6,-6}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-30,-12},{-24,-18}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{66,-32},{72,-38}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{48,-36},{54,-42}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{44,-48},{50,-54}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{28,-20},{34,-26}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-38},{24,-44}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,-64},{24,-70}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{62,-6},{68,-12}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{82,16},{88,10}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{52,6},{58,0}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{38,12},{44,6}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-76,-74},{-70,-80}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-18,-60},{-12,-66}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-56,-72},{-50,-78}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{18,12},{24,6}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{2,-76},{8,-82}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{80,-78},{86,-84}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{64,-68},{70,-74}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{74,-58},{80,-64}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{76,-36},{82,-42}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{54,-18},{60,-24}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{42,-72},{48,-78}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{80,-14},{86,-20}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{40,-6},{46,-12}},
              lineColor={0,0,0},
              fillColor={0,0,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{4,116},{204,84}},
              lineColor={28,108,200},
              textString="%name",
              horizontalAlignment=TextAlignment.Left)}),
                                                Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end MolarContent;

    class ISF_O2
      extends MolarContent;
      Physiolibrary.Types.RealIO.PressureOutput pO2 annotation (Placement(
            transformation(extent={{94,-14},{114,6}}),    iconTransformation(extent={{94,-14},
                {114,6}})));

      Physiolibrary.Types.RealIO.TemperatureInput T annotation (Placement(
            transformation(extent={{-104,-26},{-64,14}}), iconTransformation(extent=
               {{-100,-22},{-64,14}})));

      Physiolibrary.Types.Concentration cdO2;
      Real aO2;
       parameter Physiolibrary.Types.Temperature T0 = 273.15+37
        "normal temperature";
    equation
      concentration =cdO2;
      aO2 = exp(log(0.0105)+(-0.0115*(T-T0))+0.5*0.00042*(T-T0)^2)/1000; //solubility
      cdO2 = aO2*pO2;

      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}})));
    end ISF_O2;

    class ISF_CO2
      extends MolarContent;

      Physiolibrary.Types.RealIO.TemperatureInput T annotation (Placement(
            transformation(extent={{-104,-14},{-64,26}}), iconTransformation(extent={{-100,
                -10},{-64,26}})));

      Physiolibrary.Types.Concentration cdCO2( displayUnit="mmol/l");
      Real aCO2( final displayUnit="mmol/(l.kPa)");
      Real pK;
      Real pH;
      Real NormalSID; //SID in pH=7.4 - at pCO2=40 torr - SID is independent of pCO2
      Real pCO240torr=40*101325/760;

      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3 annotation (Placement(
            transformation(extent={{94,-48},{114,-28}}), iconTransformation(extent={
                {94,-48},{114,-28}})));
      Physiolibrary.Types.RealIO.ConcentrationInput dSID annotation (Placement(
            transformation(extent={{-100,-62},{-60,-22}}), iconTransformation(
              extent={{-100,-62},{-60,-22}})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
            transformation(extent={{94,-72},{114,-52}}), iconTransformation(extent={
                {94,-72},{114,-52}})));

    equation
      //Henderson-Hasselbalch equation:
      pK = 6.1 + (-0.0026)*(T-310.15);
      aCO2 = 0.00023 * 10^(-0.0092*(T-310.15)); //solubility depends on temperature
      cdCO2 = aCO2*pCO2;
     // pH = if ( cdCO2 > 1e-8) then  pK + log10(max(1e-15,cHCO3/cdCO2)) else pK;
      cdCO2 * 10^(pH-pK) = cHCO3;
      concentration = cdCO2+cHCO3;
      NormalSID=aCO2*pCO240torr*10^(7.4-pK); //normaSID=concetration of HCO3 at pH=7.4, pCO2 = 40 torr
      cHCO3 = NormalSID+dSID
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})));
    end ISF_CO2;

    connector ChemicalEquivalentConcentrationOutput = output
        ChemicalEquivalentConcentration
      "output ChemicalEquivalentConcentration as connector"
      annotation (defaultComponentName="volumeDensityOfCharge",
      Icon(coordinateSystem(
            preserveAspectRatio=true,
            extent={{-100,-100},{100,100}},
            grid={1,1}), graphics={Polygon(
              points={{-100,100},{100,0},{-100,-100},{-100,100}},
              lineColor={0,0,127},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid)}),
      Diagram(coordinateSystem(
            preserveAspectRatio=true,
            extent={{-100,-100},{100,100}},
            grid={1,1}), graphics={Polygon(
              points={{-100,50},{0,0},{-100,-50},{-100,50}},
              lineColor={0,0,127},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{30,110},{30,60}},
              lineColor={0,0,127},
              textString="%name")}),
        Documentation(info="<html>
  <p>
  Connector with one output signal of type VolumeDensityOfCharge.
  </p>
  </html>"));
    connector ChemicalEquivalentConcentrationInput = input
        ChemicalEquivalentConcentration
      "input ChemicalEquivalentConcentration as connector"
      annotation (defaultComponentName="volumeDensityOfCharge",
      Icon(graphics={Polygon(
              points={{-100,100},{100,0},{-100,-100},{-100,100}},
              lineColor={0,0,127},
              fillColor={0,0,127},
              fillPattern=FillPattern.Solid)},
           coordinateSystem(extent={{-100,-100},{100,100}}, preserveAspectRatio=true, initialScale=0.2)),
      Diagram(coordinateSystem(
            preserveAspectRatio=true, initialScale=0.2,
            extent={{-100,-100},{100,100}},
            grid={1,1}), graphics={Polygon(
              points={{0,50},{100,0},{0,-50},{0,50}},
              lineColor={0,0,127},
              fillColor={0,0,127},
              fillPattern=FillPattern.Solid), Text(
              extent={{-10,85},{-10,60}},
              lineColor={0,0,127},
              textString="%name")}),
        Documentation(info="<html>
    <p>
    Connector with one input signal of type VolumeDensityOfCharge.
    </p>
    </html>"));
    type ChemicalEquivalentConcentration =
            Real (quantity="ChemicalEquivalentConcentration", displayUnit="(mEq/l)", nominal = 10e-3);
    model AlveolarVentilation_BTPS
      extends Physiolibrary.Icons.Lungs;
    //  parameter Real EnvironmentPressure(final displayUnit="mmHg");
    //  parameter Real EnvironmentTemperature(final displayUnit="degC");

      Physiolibrary.Types.RealIO.FrequencyInput RespRate
                                             annotation (Placement(transformation(
              extent={{26,68},{40,82}}),    iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=180,
            origin={80,20})));
      Physiolibrary.Types.RealIO.VolumeInput TidalVolume
                                                annotation (Placement(
            transformation(
            extent={{-18,-18},{10,10}},
            origin={-50,-32}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=180,
            origin={80,100})));
      Physiolibrary.Types.RealIO.VolumeInput DeadSpace
                                              annotation (Placement(transformation(
              extent={{-68,-76},{-40,-48}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=180,
            origin={80,60})));
      Physiolibrary.Types.RealIO.TemperatureInput core_T
                                             annotation (Placement(
            transformation(
            extent={{-20,-20},{8,8}},
            origin={-48,-80}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=180,
            origin={80,-20})));
      GasEquation tidalVolume(V2(start=400))
        annotation (Placement(transformation(extent={{-12,-54},{8,-34}})));
      GasEquation deadVolume(V2(start=150))
        annotation (Placement(transformation(extent={{-12,-80},{8,-60}})));
      Modelica.Blocks.Math.Product alveolarVentilation annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={54,52})));
      VaporPressure vaporPressure annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={14,90})));
      Modelica.Blocks.Math.Division vaporPart annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=270,
            origin={-20,34})));
      Modelica.Blocks.Math.Feedback added_pH2O annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=270,
            origin={-15,61})));
      VaporPressure vaporPressure1 annotation (
          Placement(transformation(extent={{-10,-10},{10,10}}, origin={-56,64})));
      Modelica.Blocks.Math.Product air_pH2O
        annotation (Placement(transformation(extent={{-36,68},{-26,78}})));
      Physiolibrary.Types.RealIO.TemperatureInput AmbientTemperature
                                             annotation (Placement(
            transformation(
            extent={{-20,-20},{8,8}},
            origin={-78,70}),  iconTransformation(
            extent={{-20,-20},{20,20}},
            origin={-80,100})));
      Physiolibrary.Types.RealIO.PressureInput EnvironmentPressure
                                             annotation (Placement(
            transformation(
            extent={{-20,-20},{8,8}},
            origin={-78,-4}),  iconTransformation(
            extent={{-20,-20},{20,20}},
            origin={-80,40})));
      Physiolibrary.Types.RealIO.FractionInput EnvironmentRelativeHumidity
                                             annotation (Placement(
            transformation(
            extent={{-20,-20},{8,8}},
            origin={-58,90}),  iconTransformation(
            extent={{-20,-20},{20,20}},
            origin={-80,-20})));
      Modelica.Blocks.Math.Feedback alveolarVolume
      annotation (Placement(transformation(extent={{58,-46},{78,-26}})));
      Modelica.Blocks.Math.Feedback airPressureWitoutVapor
        annotation (Placement(transformation(extent={{-64,0},{-44,-20}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateOutput AlveolarVentilation
      annotation (Placement(transformation(extent={{70,22},{84,36}}),
          iconTransformation(
          extent={{-20,-20},{20,20}},
          origin={100,-60})));
      Modelica.Blocks.Math.Feedback dilution
        annotation (Placement(transformation(extent={{-30,20},{-10,0}})));
      Physiolibrary.Types.Constants.FractionConst             Constant(k=1)
      annotation (Placement(transformation(extent={{-48,6},{-40,14}})));
      Physiolibrary.Types.RealIO.FractionOutput BronchiDilution
                                             annotation (Placement(transformation(
              extent={{6,4},{18,16}}),      iconTransformation(
            extent={{-20,-20},{20,20}},
            origin={100,-100})));
    equation

      connect(TidalVolume,tidalVolume. V1) annotation (Line(
          points={{-54,-36},{-10.6,-36}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(DeadSpace, deadVolume.V1)   annotation (Line(
          points={{-54,-62},{-10.6,-62}},
          color={0,0,127},
          smooth=Smooth.None));
    connect(RespRate, alveolarVentilation.u2) annotation (Line(
        points={{33,75},{48,75},{48,64}},
        color={0,0,127},
        smooth=Smooth.None));
      connect(core_T, vaporPressure.T)   annotation (Line(
          points={{-54,-86},{94,-86},{94,90},{22.6,90}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(air_pH2O.y, added_pH2O.u2) annotation (Line(
          points={{-25.5,73},{-25.5,61},{-20.6,61}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(added_pH2O.y, vaporPart.u1) annotation (Line(
          points={{-15,54.7},{-14,54.7},{-14,54},{-16,54},{-16,44},{-16.4,44},
            {-16.4,41.2}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(AmbientTemperature, vaporPressure1.T) annotation (Line(
          points={{-84,64},{-64.6,64}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(EnvironmentRelativeHumidity, air_pH2O.u1) annotation (Line(
          points={{-64,84},{-40,84},{-40,76},{-37,76}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(core_T, tidalVolume.T1) annotation (Line(
          points={{-54,-86},{-32,-86},{-32,-48},{-10.6,-48}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(core_T, deadVolume.T1) annotation (Line(
          points={{-54,-86},{-32,-86},{-32,-74},{-10.6,-74}},
          color={0,0,127},
          smooth=Smooth.None));
    connect(alveolarVolume.y, alveolarVentilation.u1) annotation (Line(
        points={{77,-36},{90,-36},{90,80},{60,80},{60,64}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(tidalVolume.V2, alveolarVolume.u1) annotation (Line(
        points={{6.6,-36},{60,-36}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(alveolarVolume.u2, deadVolume.V2) annotation (Line(
        points={{68,-44},{68,-62},{6.6,-62}},
        color={0,0,127},
        smooth=Smooth.None));
      connect(EnvironmentPressure, airPressureWitoutVapor.u1) annotation (Line(
          points={{-84,-10},{-62,-10}},
          color={0,0,127},
          smooth=Smooth.None));

      connect(airPressureWitoutVapor.y, tidalVolume.P1) annotation (Line(
          points={{-45,-10},{-28,-10},{-28,-42},{-10.6,-42}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(airPressureWitoutVapor.y, deadVolume.P1) annotation (Line(
          points={{-45,-10},{-28,-10},{-28,-68},{-10.6,-68}},
          color={0,0,127},
          smooth=Smooth.None));

      connect(Constant.y, dilution.u1) annotation (Line(
          points={{-39,10},{-28,10}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(vaporPart.y, dilution.u2) annotation (Line(
          points={{-20,27.4},{-20,18}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(dilution.y, BronchiDilution) annotation (Line(
          points={{-11,10},{12,10}},
          color={0,0,127},
          smooth=Smooth.None));
    connect(vaporPressure1.VaporPressure_, air_pH2O.u2) annotation (Line(
        points={{-44.6,64},{-40,64},{-40,70},{-37,70}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(vaporPressure.VaporPressure_, added_pH2O.u1) annotation (Line(
        points={{2.6,90},{-15,90},{-15,66.6}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(alveolarVentilation.y, AlveolarVentilation) annotation (Line(
        points={{54,41},{54,29},{77,29}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(added_pH2O.y, airPressureWitoutVapor.u2) annotation (Line(
        points={{-15,54.7},{-54,54.7},{-54,-2}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(EnvironmentPressure, vaporPart.u2) annotation (Line(
        points={{-84,-10},{-70,-10},{-70,41.2},{-23.6,41.2}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(EnvironmentPressure, tidalVolume.P2) annotation (Line(
        points={{-84,-10},{-70,-10},{-70,-22},{30,-22},{30,-42},{6.6,-42}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(EnvironmentPressure, deadVolume.P2) annotation (Line(
        points={{-84,-10},{-70,-10},{-70,-22},{30,-22},{30,-68},{6.6,-68}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(AmbientTemperature, tidalVolume.T2) annotation (Line(
        points={{-84,64},{-94,64},{-94,-98},{38,-98},{38,-48},{6.6,-48}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(AmbientTemperature, deadVolume.T2) annotation (Line(
        points={{-84,64},{-94,64},{-94,-98},{38,-98},{38,-74},{6.6,-74}},
        color={0,0,127},
        smooth=Smooth.None));
     annotation (
        Icon(coordinateSystem(preserveAspectRatio=false,extent={{-100,-100},{
                100,100}}), graphics={Text(
              extent={{-100,-100},{76,-70}},
              textString="%name",
              lineColor={0,0,255})}));
    end AlveolarVentilation_BTPS;

    model GasEquation

      Physiolibrary.Types.RealIO.VolumeInput
                                         V1(
                                       displayUnit="ml") annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(extent={{-100,66},{-72,94}})));
      Physiolibrary.Types.RealIO.PressureInput
                                         P1(
                                       displayUnit="mmHg") annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(extent={{-100,6},{-72,34}})));
      Physiolibrary.Types.RealIO.TemperatureInput
                                         T1(
                                       displayUnit="degC") annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(extent={{-100,-54},{-72,
                -26}})));
      Physiolibrary.Types.RealIO.PressureInput
                                         P2(
                                      displayUnit="mmHg") annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(
            extent={{-14,-14},{14,14}},
            rotation=180,
            origin={86,20})));
      Physiolibrary.Types.RealIO.TemperatureInput
                                         T2(
                                       displayUnit="degC") annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(
            extent={{-14,-14},{14,14}},
            rotation=180,
            origin={86,-40})));
      Physiolibrary.Types.RealIO.VolumeOutput
                                          V2(
                                        displayUnit="ml") annotation (Placement(transformation(extent=
                {{56,54},{96,94}}), iconTransformation(extent={{72,66},{100,94}})));
    equation
      (P1*V1)/(T1)=(P2*V2)/(T2);
      annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                -100},{100,100}}), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={170,213,255},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{0,100},{0,-100}},
              lineColor={0,0,0},
              fillColor={170,213,255},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-98,136},{100,100}},
              lineColor={0,0,0},
              fillColor={170,213,255},
              fillPattern=FillPattern.Solid,
              textString="%name")}));
    end GasEquation;

    model VaporPressure

      Physiolibrary.Types.RealIO.TemperatureInput
                                         T(
                                      displayUnit="degC")   annotation (Placement(transformation(extent={
                {-118,42},{-78,82}}), iconTransformation(extent={{-100,-14},{-72,14}})));
      Physiolibrary.Types.RealIO.PressureOutput
                                          VaporPressure_(
                                                  displayUnit="mmHg")
                                                        annotation (Placement(transformation(extent=
                {{56,54},{96,94}}), iconTransformation(extent={{100,-14},{128,14}})));
    equation
     VaporPressure_ =  if T<273.15 then 0 else if T>373.15 then 101325 else
                        (101325/760)*exp(18.6686-(4030.183/(T-273.15+235)));
      annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                -100},{100,100}}), graphics={Rectangle(
              extent={{-100,40},{100,-40}},
              lineColor={0,0,0},
              fillColor={170,213,255},
              fillPattern=FillPattern.Solid)}));
    end VaporPressure;

    model bloodO2CO2

      Physiolibrary.Types.RealIO.FractionOutput sO2
                                          annotation (Placement(
            transformation(extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-4,-50}),                           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-60})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                            displayUnit="mmol/l")
        "outgoing concentration of HCO3"                                                           annotation (Placement(
            transformation(extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-26,-60}),                          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-84})));
      Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=90,
            origin={5,19}),           iconTransformation(extent={{-118,76},{-98,
                96}})));
      Physiolibrary.Types.RealIO.pHInput pH annotation (Placement(transformation(
              extent={{-122,60},{-96,86}}), iconTransformation(extent={{-120,18},
                {-100,38}})));
      Physiolibrary.Types.RealIO.pHInput pHery annotation (Placement(
            transformation(extent={{-118,32},{-96,54}}), iconTransformation(
              extent={{-120,-28},{-100,-8}})));
       Physiolibrary.Types.RealIO.FractionInput Hct(start=0.4)
        "outgoing hematocrit (erytrocytes volume/blood volume)"
                                       annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=180,
            origin={-4,42}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-110,-64})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{110,72},
                {98,84}}),            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-110,-90})));
      Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={91,49}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,30})));
      Physiolibrary.Types.RealIO.FractionInput FMetHb
                                       annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={92,36}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,10})));
      Physiolibrary.Types.RealIO.FractionInput FHbF
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={91,25}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,-10})));
      Physiolibrary.Types.RealIO.PressureInput pCO
                                       annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=180,
            origin={92,12}),          iconTransformation(extent={{-10,-10},{
                10,10}},
            rotation=180,
            origin={110,-30})));
      TotalCO2 tCO2
        annotation (Placement(transformation(extent={{-80,0},{-20,60}})));
      TotalO2 tO2
        annotation (Placement(transformation(extent={{20,0},{80,60}})));
      Physiolibrary.Types.RealIO.PressureInput pO2 annotation (Placement(
            transformation(extent={{-8,-6},{16,18}}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={26,-102})));
      Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
            transformation(extent={{-118,20},{-94,44}}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={54,-100})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-64,-28}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-18,-102})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={36,-26}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-46,-102})));
    equation
      connect(cHCO3, cHCO3) annotation (Line(
          points={{-26,-60},{-26,-60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.pH, pH) annotation (Line(
          points={{-77,54},{-86,54},{-86,73},{-109,73}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pHery, tCO2.pH_ery) annotation (Line(
          points={{-107,43},{-92.5,43},{-92.5,42},{-77,42}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.T, T) annotation (Line(
          points={{-23,54},{5,54},{5,19}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(Hct, tCO2.Hct) annotation (Line(
          points={{-4,42},{-23,42}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(sO2, tCO2.sO2) annotation (Line(
          points={{-4,-50},{-4,30},{-23,30}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.cHCO3, cHCO3) annotation (Line(
          points={{-26,-6},{-26,-60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(cDPG, tO2.cDPG) annotation (Line(
          points={{91,49},{84.5,49},{84.5,48},{77,48}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FMetHb, tO2.FMetHb) annotation (Line(
          points={{92,36},{77,36}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FHbF, tO2.FHbF) annotation (Line(
          points={{91,25},{83.5,25},{83.5,24},{77,24}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO, tO2.pCO) annotation (Line(
          points={{92,12},{77,12}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.pH, pH) annotation (Line(
          points={{23,60},{0,60},{0,73},{-109,73}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.T, T) annotation (Line(
          points={{23,36},{5,36},{5,19}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.ctHb, ctHb) annotation (Line(
          points={{77,60},{88,60},{88,78},{104,78}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.sO2, tCO2.sO2) annotation (Line(
          points={{50,-6},{50,-34},{-4,-34},{-4,30},{-23,30}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.pCO2inp, pCO2) annotation (Line(
          points={{-77.3,28.5},{-88.65,28.5},{-88.65,32},{-106,32}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.pO2inp, pO2) annotation (Line(
          points={{22.7,28.5},{18,28.5},{18,6},{4,6}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.totalO2, ctO2) annotation (Line(
          points={{38.3,-5.7},{38.3,-11.5},{36,-11.5},{36,-26}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.totalCO2, ctCO2) annotation (Line(
          points={{-62,-6},{-62,-12.5},{-64,-12.5},{-64,-28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctCO2, ctCO2) annotation (Line(
          points={{-64,-28},{-64,-28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.pCO2, pCO2) annotation (Line(
          points={{23,48},{6,48},{6,58},{-20,58},{-20,62},{-90,62},{-90,32},{-106,
              32}},
          color={0,0,127},
          smooth=Smooth.None));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{74,-56},{92,-66}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="sO2"),
            Text(
              extent={{76,-76},{98,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cHCO3"),
            Text(
              extent={{-98,92},{-80,82}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="T"),
            Text(
              extent={{-98,34},{-80,24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pH"),
            Text(
              extent={{-96,-14},{-78,-24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pHery"),
            Text(
              extent={{-96,-58},{-78,-68}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="Hct"),
            Text(
              extent={{-96,-82},{-78,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctHb"),
            Text(
              extent={{-56,-82},{-38,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2"),
            Text(
              extent={{-24,-82},{-6,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2"),
            Text(
              extent={{-72,114},{72,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name"),
            Text(
              extent={{18,-80},{36,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pO2"),
            Text(
              extent={{44,-80},{62,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO2"),
            Text(
              extent={{74,-26},{92,-36}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO"),
            Text(
              extent={{74,-6},{92,-16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FHbF"),
            Text(
              extent={{72,16},{94,4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FMetHb"),
            Text(
              extent={{72,36},{92,26}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cDPG")}), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-100,-100},{100,100}}), graphics));
    end bloodO2CO2;

    model TotalCO2
      extends BloodCO2Base;

      Physiolibrary.Types.RealIO.PressureInput pCO2inp annotation (Placement(
            transformation(extent={{-102,-22},{-62,18}}), iconTransformation(extent=
               {{-100,-14},{-82,4}})));

      Physiolibrary.Types.RealIO.ConcentrationOutput totalCO2 annotation (Placement(
            transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-40,-120})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2p
        "dissolved CO2 concentration" annotation (Placement(transformation(extent={{
                -80,-100},{-60,-80}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-80,-120})));
    equation
      cdCO2p = cdCO2;
      pCO2inp=pCO2;
      totalCO2=tCO2;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})),           Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics));
    end TotalCO2;

    model TotalO2
      extends BloodO2Base;

      Physiolibrary.Types.RealIO.PressureInput pO2inp annotation (Placement(
            transformation(extent={{-132,-54},{-92,-14}}),iconTransformation(extent=
               {{-100,-14},{-82,4}})));

      Physiolibrary.Types.RealIO.ConcentrationOutput totalO2 annotation (Placement(
            transformation(extent={{-80,-100},{-60,-80}}), iconTransformation(
            extent={{-19,-19},{19,19}},
            rotation=270,
            origin={-39,-119})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdO2p
        "dissolved O2 concentration in plasma" annotation (Placement(transformation(
              extent={{-80,-100},{-60,-80}}), iconTransformation(
            extent={{-19,-19},{19,19}},
            rotation=270,
            origin={-79,-119})));
    equation
      cdO2p = cdO2;
      pO2inp=pO2;
      totalO2=tO2;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})),           Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
            graphics));
    end TotalO2;

    model bloodPO2PCO2

      Physiolibrary.Types.RealIO.FractionOutput sO2
                                          annotation (Placement(
            transformation(extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-4,-28}),                           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-60})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                            displayUnit="mmol/l")
        "outgoing concentration of HCO3"                                                           annotation (Placement(
            transformation(extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-26,-38}),                          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-84})));
      Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=90,
            origin={5,41}),           iconTransformation(extent={{-118,68},{-98,
                88}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{110,94},
                {98,106}}),           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-110,-60})));
      Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={91,71}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,40})));
      Physiolibrary.Types.RealIO.FractionInput FMetHb
                                       annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={92,58}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,20})));
      Physiolibrary.Types.RealIO.FractionInput FHbF
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={91,47}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,0})));
      Physiolibrary.Types.RealIO.PressureInput pCO
                                       annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=180,
            origin={92,34}),          iconTransformation(extent={{-10,-10},{
                10,10}},
            rotation=180,
            origin={110,-20})));
      TotalCO2 totalCO2(pCO2(start=5332.8954966))
        annotation (Placement(transformation(extent={{-80,22},{-20,82}})));
      TotalO2 totalO2(
        cO2Hb(start=5),
        a(start=0.5),
        FCOHb(start=0),
        sO2CO(start=0.0075),
        T(start=583.3),
        pCO2(start=710994.35944141),
        pO2(start=1777485.8986035))
        annotation (Placement(transformation(extent={{20,22},{80,82}})));
      Physiolibrary.Types.RealIO.PressureInput pO2 annotation (Placement(
            transformation(extent={{-8,16},{16,40}}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={36,-100})));
      Physiolibrary.Types.RealIO.PressureInput pCO2 annotation (Placement(
            transformation(extent={{-124,42},{-100,66}}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={62,-100})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2 annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-62,-6}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-16,-108})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={38,-4}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-38,-108})));
      BloodPhMeassure bloodPhMeassure
        annotation (Placement(transformation(extent={{26,-84},{80,-30}})));
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         BEox
                                      annotation (Placement(transformation(extent={{-12,-68},
                {12,-44}}),           iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=90,
            origin={15,-101})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{102,-60},
                {90,-48}}),           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,80})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)" annotation (
          Placement(transformation(extent={{102,-84},{90,-72}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,60})));
      Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                           displayUnit="g/l")
        "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={96,-64}),         iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={110,-40})));
      Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
            extent={{-8,-8},{8,8}},
            rotation=180,
            origin={-108,76}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-110,24})));
      ctHb_to_Htc ctHb_to_Htc1
        annotation (Placement(transformation(extent={{40,84},{14,100}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={26,-2}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-92,-108})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2 annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-74,-10}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=270,
            origin={-66,-108})));
    equation
      connect(cHCO3, cHCO3) annotation (Line(
          points={{-26,-38},{-26,-38}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalCO2.T, T) annotation (Line(
          points={{-23,76},{5,76},{5,41}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(sO2, totalCO2.sO2) annotation (Line(
          points={{-4,-28},{-4,52},{-23,52}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalCO2.cHCO3, cHCO3) annotation (Line(
          points={{-26,16},{-26,-38}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(cDPG, totalO2.cDPG) annotation (Line(
          points={{91,71},{84.5,71},{84.5,70},{77,70}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FMetHb, totalO2.FMetHb) annotation (Line(
          points={{92,58},{77,58}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FHbF, totalO2.FHbF) annotation (Line(
          points={{91,47},{83.5,47},{83.5,46},{77,46}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO, totalO2.pCO) annotation (Line(
          points={{92,34},{77,34}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.T, T) annotation (Line(
          points={{23,58},{5,58},{5,41}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.ctHb, ctHb) annotation (Line(
          points={{77,82},{88,82},{88,100},{104,100}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.sO2, totalCO2.sO2) annotation (Line(
          points={{50,16},{50,-12},{-4,-12},{-4,52},{-23,52}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalCO2.pCO2inp, pCO2) annotation (Line(
          points={{-77.3,50.5},{-84,50.5},{-84,50},{-90,50},{-90,54},{-112,54}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.pO2inp, pO2) annotation (Line(
          points={{22.7,50.5},{18,50.5},{18,28},{4,28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.totalO2, ctO2) annotation (Line(
          points={{38.3,16.3},{38.3,10.5},{38,10.5},{38,-4}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalCO2.totalCO2, ctCO2) annotation (Line(
          points={{-62,16},{-62,-6}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctCO2, ctCO2) annotation (Line(
          points={{-62,-6},{-62,-6}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.pCO2, pCO2) annotation (Line(
          points={{23,70},{16,70},{16,78},{-14,78},{-14,84},{-90,84},{-90,54},{-112,
              54}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.sO2, totalCO2.sO2) annotation (Line(
          points={{69.2,-27.3},{69.2,-12},{-4,-12},{-4,52},{-23,52}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.cHCO3, cHCO3) annotation (Line(
          points={{77.3,-35.4},{92,-35.4},{92,-16},{-26,-16},{-26,-38}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctHb, bloodPhMeassure.ctHb) annotation (Line(
          points={{104,100},{96,100},{96,-46.2},{77.3,-46.2}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.pH, totalCO2.pH) annotation (Line(
          points={{47.6,-89.4},{47.6,-100},{-96,-100},{-96,76},{-77,76}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.pH_ery, totalCO2.pH_ery) annotation (Line(
          points={{58.4,-89.4},{58.4,-98},{-84,-98},{-84,64},{-77,64}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(totalO2.pH, totalCO2.pH) annotation (Line(
          points={{23,82},{-10,82},{-10,92},{-96,92},{-96,76},{-77,76}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.ctPO4, ctPO4) annotation (Line(
          points={{77.3,-78.6},{84.65,-78.6},{84.65,-78},{96,-78}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.ctGlb, ctGlb) annotation (Line(
          points={{77.3,-67.8},{83.65,-67.8},{83.65,-64},{96,-64}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPhMeassure.ctAlb, ctAlb) annotation (Line(
          points={{77.3,-57},{83.65,-57},{83.65,-54},{96,-54}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pH, totalCO2.pH) annotation (Line(
          points={{-108,76},{-77,76}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctHb_to_Htc1.ctHb, ctHb) annotation (Line(
          points={{43.64,92},{88,92},{88,100},{104,100}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctHb_to_Htc1.Htc, totalCO2.Hct) annotation (Line(
          points={{10.36,92},{-6,92},{-6,64},{-23,64}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(BEox, bloodPhMeassure.BEox) annotation (Line(points={{0,-56},{16,
              -56},{16,-20},{28.7,-20},{28.7,-27.3}}, color={0,0,127}));
      connect(totalO2.cdO2p, cdO2) annotation (Line(points={{26.3,16.3},{26.3,
              11.15},{26,11.15},{26,-2}}, color={0,0,127}));
      connect(totalCO2.cdCO2p, cdCO2) annotation (Line(points={{-74,16},{-74,16},
              {-74,-10},{-74,-10}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}),       graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{74,-56},{92,-66}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="sO2"),
            Text(
              extent={{76,-76},{98,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cHCO3"),
            Text(
              extent={{-98,84},{-80,74}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="T"),
            Text(
              extent={{-96,34},{-78,24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pH"),
            Text(
              extent={{2,-80},{20,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="BEox"),
            Text(
              extent={{-96,-52},{-78,-62}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctHb"),
            Text(
              extent={{-48,-90},{-30,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2"),
            Text(
              extent={{-28,-88},{-6,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2"),
            Text(
              extent={{-74,114},{70,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name"),
            Text(
              extent={{24,-80},{42,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pO2"),
            Text(
              extent={{50,-78},{70,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO2"),
            Text(
              extent={{76,-34},{94,-44}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctGlb"),
            Text(
              extent={{76,-16},{94,-24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO"),
            Text(
              extent={{76,4},{94,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FHbF"),
            Text(
              extent={{74,26},{94,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FMetHb"),
            Text(
              extent={{76,42},{94,34}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cDPG"),
            Text(
              extent={{78,62},{96,54}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctPO4"),
            Text(
              extent={{78,82},{96,74}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctAlb"),
            Text(
              extent={{-100,-90},{-82,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdO2"),
            Text(
              extent={{-78,-84},{-56,-106}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdCO2")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                       extent={{-100,-100},{100,100}})));
    end bloodPO2PCO2;

    model bloodCO2O2BEox

      Physiolibrary.Types.RealIO.FractionOutput sO2
                                          annotation (Placement(
            transformation(extent={{-8,-8},{8,8}},
            rotation=0,
            origin={92,-4}),                            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-58})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                            displayUnit="mmol/l")
        "outgoing concentration of HCO3"                                                           annotation (Placement(
            transformation(extent={{-10,-10},{10,10}},
            rotation=0,
            origin={94,-18}),                           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={110,-84})));
      Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)  annotation (Placement(transformation(extent={{-10,-10},
                {10,10}},
            rotation=0,
            origin={-96,88}),         iconTransformation(extent={{-118,76},{-98,
                96}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{11,-11},
                {-11,11}},
            rotation=180,
            origin={-95,-1}),         iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-110,-54})));
      Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={95,69}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,42})));
      Physiolibrary.Types.RealIO.FractionInput FMetHb
                                       annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={94,56}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,22})));
      Physiolibrary.Types.RealIO.FractionInput FHbF
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={93,43}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,2})));
      Physiolibrary.Types.RealIO.PressureInput pCO
                                       annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=180,
            origin={94,28}),          iconTransformation(extent={{-10,-10},{
                10,10}},
            rotation=180,
            origin={112,-18})));
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         BEox
                                      annotation (Placement(transformation(extent={{-12,-12},
                {12,12}},
            rotation=90,
            origin={-2,-94}),         iconTransformation(
            extent={{-6,-6},{6,6}},
            rotation=90,
            origin={-2,-100})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{98,82},
                {86,94}}),            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,82})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)" annotation (
          Placement(transformation(extent={{96,72},{84,84}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,62})));
      Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                           displayUnit="g/l")
        "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={94,12}),          iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={112,-38})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctO2 annotation (Placement(
            transformation(
            extent={{-13,-13},{13,13}},
            rotation=90,
            origin={-88,-93}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-58,-102})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctCO2 annotation (Placement(
            transformation(
            extent={{-12,-12},{12,12}},
            rotation=90,
            origin={-28,-90}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-32,-102})));
      Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
            extent={{-8,-8},{8,8}},
            rotation=180,
            origin={-96,52}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-110,28})));
      Physiolibrary.Types.RealIO.PressureOutput pO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={16,-94}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=270,
            origin={27,-101})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2 annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={34,-96}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=270,
            origin={55,-101})));
      bloodPO2PCO2 bloodPO2PCO2_
        annotation (Placement(transformation(extent={{-64,-30},{64,102}})));
      Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints
        annotation (Placement(transformation(extent={{-74,-72},{-34,-48}})));
      Modelica.Blocks.Math.InverseBlockConstraints inverseBlockConstraints1
        annotation (Placement(transformation(extent={{10,-72},{50,-48}})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2(
                                            displayUnit="mmol/l")
        "outgoing concentration of HCO3"                                                           annotation (Placement(
            transformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-88,-44}),                          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-110,-24})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cdO2(displayUnit="mmol/l")
        "outgoing concentration of HCO3" annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-88,-30}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={-110,0})));
    equation
      connect(bloodPO2PCO2_.pH, pH) annotation (Line(
          points={{-70.4,51.84},{-85.25,51.84},{-85.25,52},{-96,52}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(BEox, bloodPO2PCO2_.BEox) annotation (Line(
          points={{-2,-94},{-2,-38},{10,-38},{10,-30.66},{9.6,-30.66}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(T, bloodPO2PCO2_.T) annotation (Line(
          points={{-96,88},{-84,88},{-84,87.48},{-69.12,87.48}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.cHCO3, cHCO3) annotation (Line(
          points={{70.4,-19.44},{77.25,-19.44},{77.25,-18},{94,-18}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.ctAlb, ctAlb) annotation (Line(
          points={{70.4,88.8},{79.25,88.8},{79.25,88},{92,88}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctPO4, bloodPO2PCO2_.ctPO4) annotation (Line(
          points={{90,78},{80,78},{80,75.6},{70.4,75.6}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.cDPG, cDPG) annotation (Line(
          points={{70.4,62.4},{82.25,62.4},{82.25,69},{95,69}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.FMetHb, FMetHb) annotation (Line(
          points={{70.4,49.2},{79.25,49.2},{79.25,56},{94,56}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.FHbF, FHbF) annotation (Line(
          points={{70.4,36},{82,36},{82,43},{93,43}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.pCO, pCO) annotation (Line(
          points={{70.4,22.8},{81.25,22.8},{81.25,28},{94,28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.ctGlb, ctGlb) annotation (Line(
          points={{70.4,9.6},{81.25,9.6},{81.25,12},{94,12}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.ctHb, ctHb) annotation (Line(
          points={{-70.4,-3.6},{-82.25,-3.6},{-82.25,-1},{-95,-1}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.sO2, sO2) annotation (Line(
          points={{70.4,-3.6},{79.2,-3.6},{79.2,-4},{92,-4}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(inverseBlockConstraints.y1, pO2) annotation (Line(
          points={{-33,-60},{-14,-60},{-14,-78},{16,-78},{16,-94}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO2, inverseBlockConstraints1.y1) annotation (Line(
          points={{34,-96},{34,-78},{58,-78},{58,-60},{51,-60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(inverseBlockConstraints1.y2, bloodPO2PCO2_.pCO2) annotation (Line(
          points={{47,-60},{39.68,-60},{39.68,-30}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctCO2, inverseBlockConstraints1.u1) annotation (Line(
          points={{-28,-90},{-28,-64},{-8,-64},{-8,-60},{8,-60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctO2, inverseBlockConstraints.u1) annotation (Line(
          points={{-88,-93},{-88,-60},{-76,-60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(inverseBlockConstraints.u2, bloodPO2PCO2_.ctO2) annotation (Line(
          points={{-70,-60},{-24.32,-60},{-24.32,-35.28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(inverseBlockConstraints1.u2, bloodPO2PCO2_.ctCO2) annotation (Line(
          points={{14,-60},{20,-60},{20,-50},{-10.24,-50},{-10.24,-35.28}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(inverseBlockConstraints.y2, bloodPO2PCO2_.pO2) annotation (Line(
            points={{-37,-60},{-50,-60},{-50,-54},{2,-54},{2,-42},{23.04,-42},{
              23.04,-30}}, color={0,0,127}));
      connect(bloodPO2PCO2_.cdO2, cdO2) annotation (Line(points={{-58.88,-35.28},
              {-58.88,-42},{-70,-42},{-70,-30},{-88,-30}}, color={0,0,127}));
      connect(bloodPO2PCO2_.cdCO2, cdCO2) annotation (Line(points={{-42.24,
              -35.28},{-42.24,-44},{-88,-44}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Rectangle(
              extent={{-100,100},{102,-102}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{74,-56},{92,-66}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="sO2"),
            Text(
              extent={{76,-76},{98,-92}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cHCO3"),
            Text(
              extent={{-98,92},{-80,82}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="T"),
            Text(
              extent={{-98,34},{-80,24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pH"),
            Text(
              extent={{-12,-80},{6,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="BEox"),
            Text(
              extent={{-96,-46},{-78,-56}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctHb"),
            Text(
              extent={{-68,-80},{-50,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2"),
            Text(
              extent={{-42,-80},{-24,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2"),
            Text(
              extent={{-86,114},{58,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name"),
            Text(
              extent={{18,-80},{36,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pO2"),
            Text(
              extent={{44,-80},{62,-90}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO2"),
            Text(
              extent={{82,88},{100,78}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctAlb"),
            Text(
              extent={{82,66},{100,56}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctPO4"),
            Text(
              extent={{82,48},{100,38}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cDPG"),
            Text(
              extent={{78,28},{98,16}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FMetHb"),
            Text(
              extent={{82,6},{98,-2}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FHbF"),
            Text(
              extent={{80,-14},{96,-22}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO"),
            Text(
              extent={{80,-34},{96,-42}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctGlb"),
            Text(
              extent={{-96,6},{-76,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdO2"),
            Text(
              extent={{-96,-14},{-70,-30}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdCO2")}),Diagram(coordinateSystem(preserveAspectRatio=false,
                       extent={{-100,-100},{100,100}})));
    end bloodCO2O2BEox;

    partial model HendersonHasselbach
      import Modelica.Math;

      Real pK;
      Real aCO2(final displayUnit="mmol/(l.kPa)");
       Physiolibrary.Types.Concentration cdCO2(displayUnit="mmol/l");
    // start=3,
    //  Physiolibrary.Types.Pressure pCO2(start=6000,            displayUnit="kPa");
    //  start=6,
     // constant Real MiniliterPerLiter(final displayUnit="ml/l")=1000;

       Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3(
                                            displayUnit="mmol/l")
        "outgoing concentration of HCO3"                                                           annotation (Placement(
            transformation(extent={{20,-70},{60,-30}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={80,-120})));
       Physiolibrary.Types.RealIO.TemperatureInput T(      displayUnit="degC")
        "outgoing temperature"                                                            annotation (Placement(transformation(extent={{70,-26},
                {110,14}}),           iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,80})));        /*start=37,*/

       Physiolibrary.Types.RealIO.pHInput pH "outgoing plasma pH"
                                                            annotation (Placement(transformation(extent={{-120,50},
                {-80,90}}),           iconTransformation(extent={{-100,70},{-80,90}})));
     Physiolibrary.Types.RealIO.PressureOutput pCO2(start=6000,       displayUnit="mmHg")
        "alveolar partial pressure of pCO2"
                                        annotation (Placement(transformation(
              extent={{20,-70},{60,-30}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={40,-120})));               /*start=40,*/
    equation
      //Henderson-Hasselbalch equation:
      pK = 6.1 + (-0.0026)*(T-310.15);
      aCO2 = 0.00023 * 10^(-0.0092*(T-310.15)); //solubility depends on temperature
      cdCO2 = aCO2*pCO2;
     // pH = if ( cdCO2 > 1e-8) then  pK + log10(max(1e-15,cHCO3/cdCO2)) else pK;
      cdCO2 * 10^(pH-pK) = cHCO3;

      annotation ( Documentation(revisions="<html>

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
<td><p>2009</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"));
    end HendersonHasselbach;

    partial model BloodCO2Base
      extends HendersonHasselbach;

      import Modelica.Math;

      Physiolibrary.Types.Concentration tCO2_P(start=24, displayUnit="mmol/l");
      //start=24,

      Real pK_ery;
      Physiolibrary.Types.GasSolubility aCO2_ery( displayUnit="mmol/l/mmHg");
      Physiolibrary.Types.Concentration tCO2_ery( displayUnit="mmol/l");

       Physiolibrary.Types.Concentration tCO2( displayUnit="mmol/l");

    //  constant Real MiniliterPerLiter(final displayUnit="ml/l")=1000;

       Physiolibrary.Types.RealIO.pHInput pH_ery
        "outgoing intracellular erytrocytes pH"
                                      annotation (Placement(transformation(extent={{-120,10},
                {-80,50}}),           iconTransformation(extent={{-100,30},{-80,50}})));
       Physiolibrary.Types.RealIO.FractionInput Hct
        "outgoing hematocrit (erytrocytes volume/blood volume)"
                                       annotation (Placement(transformation(extent={{60,60},
                {100,100}}),          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,40})));
       Physiolibrary.Types.RealIO.FractionInput sO2
        "outgoing oxygen saturation"   annotation (Placement(transformation(extent={{60,20},
                {100,60}}),           iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,0})));

    equation
      //total plasma CO2 from SimpleCO2Solution
      tCO2_P = cHCO3 + cdCO2;

      //erythrocytes:
      pK_ery = 6.125 - log10(1+10^(pH_ery-7.84-0.06*sO2));
      tCO2_ery=aCO2_ery*pCO2*(1+10^(pH_ery-pK_ery));
      aCO2_ery=0.000195; //solubility 0.23 (mmol/l)/kPa at 25degC

      //plasma+erythrocyte
      tCO2 = tCO2_ery*Hct + tCO2_P*(1-Hct);

      annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                -100},{100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid), Text(
              extent={{-74,-26},{74,-58}},
              lineColor={0,0,255},
              textString="%name")}),        Documentation(revisions="<html>

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
<td><p>2009</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"));
    end BloodCO2Base;

  partial model BloodO2Base
  //start values is for tissues veins blood

    parameter Boolean isSaturated = false;

    Physiolibrary.Types.Concentration tO2(start=0.75*8.14);
    Real aO2;
  //  Real pO2(start=5.33,           unit="kPa");
    // start=13,
    Physiolibrary.Types.Fraction sO2CO(start=0.75);
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
    ceHb = ctHb * (1-FCOHb-FMetHb); //effective haemoglobin

    assert(tO2 <= ceHb*(1.06), "Model does not support this high level of oxygen in blood. Maximum of oxygen concentration should be connected with efective hemoglobin concentration!");
      //pO2,pCO,pCO2 .. Pa
    //TODO: check units of solubility
    aO2 = exp(log(0.0105)+(-0.0115*(T-T0))+0.5*0.00042*(T-T0)^2)/1000; //solubility
    cdO2 = aO2*pO2;
  /*  if (isSaturated) then
    cdO2 = homotopy( tO2 - sO2*ceHb, tO2 - 0.9999*ceHb);
  else
    sO2 = homotopy( (tO2-cdO2)/ceHb,  tO2/ceHb);  // ctO2 = aO2*pO2 + ceHb*sO2;  initially sufficient to have all the oxygen bound to hemoglobin, and then add only a small amount of dissolved oxygen..
  end if; */
   //TODO: why not sO2 = homotopy( (tO2-cdO2)/ceHb,  tO2/ceHb);
    tO2 = aO2*pO2 + ceHb*sO2;
  //  cO2Hb = tO2 - cdO2;
    sO2 = cO2Hb/ceHb;
    //TODO: check this: a=-0.88*(pH-7.4)+0.048*log(pCO2/5.33)-0.7*FMetHb+(0.3-0.25*FHbF)*cDPG/(5-1);
    //TANH
    a=dadpH*(pH-pH0)+dadlnpCO2*log(max(1e-15+1e-22*pCO2,pCO2/pCO20)) +dadxMetHb*FMetHb+(dadcDPG0 + dadcDPGxHbF*FHbF)*(cDPG/cDPG0 - 1); //log(pCO2/5330)

    //orginal:
    x=log(pO2CO/7000) - a - 0.055*(T-T0); //instead of:  x=log(pO2CO/7) - a - 0.055*(T-37);
    y-1.8747=x+h*tanh(k*x);
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

      {pCO,FCOHb,pO2CO,sO2CO}=homotopy({sCO*pO2CO/ 218*sO2CO,sCO*(1-FMetHb),pO2 + 218*pCO,(cO2Hb + ctHb*FCOHb)/(ctHb*(1-FMetHb))},
      {0,0,pO2,sO2});
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

    partial model BloodPhBase
      import Modelica.Math;

      Physiolibrary.Types.Concentration betaX "buffer value of blood";
                                             //(unit = "mEq/l")
      Physiolibrary.Types.Concentration betaP "buffer value of plasma";
                                             //(unit = "mEq/l")

      Physiolibrary.Types.Concentration _cTH
        "total concentration of tiratable hydrogen ions";
                                           //( displayUnit="mEq/l")
      Physiolibrary.Types.Concentration _BE "base excess";
                                          //( displayUnit="mEq/l")

      Physiolibrary.Types.Concentration _BEox
        "base excess in fully oxygenated blood";
                                            //( displayUnit="mEq/l")
      Physiolibrary.Types.Concentration _cTHox
        "total concentration of tiratable hydrogen ions in fully oxygenated blood";
                                             //( displayUnit="mEq/l")

       Physiolibrary.Types.RealIO.pHOutput pH( start=7.4) "plasma pH"    annotation (Placement(transformation(
              extent={{30,-98},{70,-58}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-20,-120})));
      Physiolibrary.Types.RealIO.pHOutput pH_ery "intracellular erytrocytes pH"
                                                                                  annotation (Placement(
            transformation(extent={{-14,-98},{26,-58}}),iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={20,-120})));

      Physiolibrary.Types.RealIO.ConcentrationInput cHCO3(
                                           displayUnit="mmol/l")
        "concentration of plasma HCO3 ions (default=24.5mmol/l)"
                                       annotation (Placement(transformation(extent={{50,18},
                {90,58}}),            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,80})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{50,58},
                {90,98}}),            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,40})));
      parameter Physiolibrary.Types.Concentration  cHb(displayUnit="mmol/l")=43
        "an empirical parameter accounting for erythrocyte plasma distributions = concentration of Hb inside erythrocytes divided by (1-0.57)";

      Physiolibrary.Types.RealIO.FractionInput sO2 "oxygen saturation"
                                       annotation (Placement(transformation(extent={{-100,60},
                {-60,100}}),          iconTransformation(extent={{-10,-10},{10,10}},
            rotation=270,
            origin={60,110})));

      Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                           displayUnit="mmol/l")
        "concentration of total plasma albumins(dofault=0.65mmol/l)"                 annotation (Placement(transformation(extent={{52,-26},
                {92,14}}),            iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,0})));

      Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                           displayUnit="g/l")
        "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{52,-60},
                {92,-20}}),           iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,-40})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(
                                           displayUnit="mmol/l")
        "concentration of total inorganic phosphate in plasma"                       annotation (Placement(transformation(extent={{54,-92},
                {94,-52}}),           iconTransformation(extent={{-10,-10},{10,10}},
            rotation=180,
            origin={90,-80})));

    equation
      //Van Slyke equation:  - T=37
      _cTH = -(1-ctHb/cHb)*((cHCO3-24.5)+betaX*(pH-7.4));
    //  _cTH = -(1-(1-0.57)*(0.44))*((cHCO3-24.5)+betaX*(pH-7.4));

      betaX = 2.3*ctHb + betaP;
      betaP =  8*ctAlb + 0.075*ctGlb + 0.309*ctPO4;

    //  _betaX = 0.11 * plasmaProteinConc(displayUnit="g/l"); //mmol/l

    //Haldane effect:
      _cTH = homotopy(_cTHox - 0.3 * (1-sO2),_cTHox);

    //base excess
      _BEox = - _cTHox;
      _BE = - _cTH;

      //erythrocytes:
      pH_ery = homotopy(7.19 + 0.77*(pH-7.4) + 0.035*(1-sO2),7.19 + 0.77*(pH-7.4));

      annotation (
        preferredView = text,
        Documentation(info="<html>
<pre>Blood pH calculation by
<i><b>Van Slyke equation</b></i>,
<i><b>Haldame</b></i> effect
and plasma-<i><b>erythrocytes</b></i> acidity distribution.</pre>
</html>",
     revisions="<html>

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
<td><p>dec 2009</p></td>
</tr>
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"),
        Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                100,100}}), graphics={
            Text(
              extent={{-72,-56},{76,-92}},
              lineColor={0,0,255},
              textString="%name"),
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-96,-62},{98,-94}},
              lineColor={0,0,255},
              textString="%name")}),
        Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})));
    end BloodPhBase;

    model BloodPhMeassure
      extends BloodPhBase;
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         BEox
                                      annotation (Placement(transformation(extent={{
                -102,90},{-62,130}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-90,110})));
    equation
      _BEox = BEox / Modelica.Constants.F;

    //  cTHox.conc*1000 = _cTHox;

      annotation (          Documentation(revisions="<html>

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
<tr>
<td><p>References:</p></td>
<td>Siggaard Andersen: OSA (2005), University of Copenhagen</td>
</tr>
</table>
<br/><p>Copyright &copy; 2014 Marek Matejak, Charles University in Prague.</p><br/>

</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})));
    end BloodPhMeassure;

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

</html>"),     Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}})));
    end NormalSID;

    model MeassureBloodO2
      extends BloodO2Base;
                          //_withoutCO_;
    Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in annotation (
        Placement(transformation(extent={{-28,-116},{12,-76}}),
          iconTransformation(extent={{-20,-100},{20,-60}})));
    equation
       q_in.q = 0;  //flows: mmol/min
       tO2 = q_in.conc; //mmol/l
    end MeassureBloodO2;

    model BloodO2_Siggaard

    extends BloodO2Base;
                        //_withoutCO_;

    //Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in;
    //Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out;
    //Physiolibrary.Chemical.Interfaces.ChemicalPort_b alveolar;
    //Modelica.Blocks.Interfaces.RealInput

      Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in
        annotation (Placement(transformation(extent={{-100,-100},{-80,-80}}),
            iconTransformation(extent={{-100,-100},{-80,-80}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b q_out
        annotation (Placement(transformation(extent={{80,-100},{100,-80}}),
            iconTransformation(extent={{80,-100},{100,-80}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b alveolar
        annotation (Placement(transformation(extent={{-14,72},{6,92}}),
            iconTransformation(extent={{-14,72},{6,92}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput BloodFlow
        annotation (Placement(transformation(extent={{-120,-54},{-80,-14}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ceHb_(
                                           displayUnit="mmol/l")
        "effective haemoglobin"           annotation (Placement(
            transformation(extent={{38,-102},{78,-62}}),iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={-40,-120})));
    equation
    q_in.q + q_out.q + alveolar.q = 0;  //flows: mmol/min

    alveolar.conc =cdO2;

    q_in.conc = q_in.q/ BloodFlow; //mmol/l

    //tO2 = MiniliterPerLiter * (-q_out.q/ BloodFlow); //mmol/l
    tO2 =  (-q_out.q/ BloodFlow); //mmol/l

    ceHb_ = ceHb;

    annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
              -100,-100},{100,100}}), graphics));
    end BloodO2_Siggaard;

    model MeassureBloodCO2
      extends BloodCO2Base;

    Physiolibrary.Chemical.Interfaces.ChemicalPort_a q_in annotation (
        Placement(transformation(extent={{80,-20},{120,20}}),
          iconTransformation(extent={{-20,-100},{20,-60}})));
    equation
      q_in.q=0;
      tCO2 = q_in.conc;// * MiniliterPerLiter;  //mmol/l

      annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                -100},{100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={215,215,215},
              fillPattern=FillPattern.Solid), Text(
              extent={{-74,-26},{74,-58}},
              lineColor={0,0,255},
              textString="%name")}));
    end MeassureBloodCO2;

    model ctHb_to_Htc
      "\"Conversion blood hemoglobin concentration (ctHb in mmol/l) to hematocrit (Htc, expressed as a fraction)"

      Physiolibrary.Types.RealIO.FractionOutput Htc
        "Hematocrit (expressed as a fraction)" annotation (Placement(
            transformation(extent={{92,-12},{112,8}}), iconTransformation(extent=
                {{100,-28},{156,28}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb
        "Total concentration of hemoglobin in blood (mmol/l)" annotation (
          Placement(transformation(extent={{-124,-8},{-84,32}}),
            iconTransformation(extent={{-156,-28},{-100,28}})));
    equation
        // by:
        // http://noblood.org/forum/threads/5533-Hemoglobin-relationship-to-Hematocrit
        // Htc = 0.0485 x ctHb (mmol/L) + 0.0083;
        // ctHb = (Htc-0.0083)/0.0485 = 20.61856 *Ht - 0.171134;
        // in Physimodel is hemoglobin concetration calculated higher in given hematocrit:
        // ctHb = Htc*8.4/norm Htc = ctHb 8.4/0.44 = Htc * 19.09091;
        // in hematocrit  0.44 in Physiomodel Hb concentration is 8.4 mmol/l while
        // in other caculation is only 7.36

        // See - different results of different equations:
        // Hb=15g/dL: Hct (%) = (0.0485 *ctHb (mmol/L) + 0.0083) * 100 result is Hct of 45.98
        // Hb=15g/dL: Hct (%) = 2.8 * ctHb (g/dL) + 0.8 result is Hct of 42.80
        // Hb=15g/dL: Hct (%) = ctHb (g/dL) / 0.34 result is Hct of 44.12
        // Hb=15g/dL: Hct (%) = 2.941 * ctHb (g/dL) result is Hct of 44.12
        // * Conversion factor: g/dL * 0.62058 = mmol/L

        // Notice that all of the results for the same Hgb level are not identical.
        // The conclusion to all of this is, that while it is generally assumed that
        // the conversion from hemoglobin to hematocrit is pretty straightforward,
        // since most methods measuring ctHb are considered to be fairly accurate,
        // when looking at Hct levels, the healthcare professional needs to remember
        // that different analyzers use different conversion factors, which may
        // compromise the reliability of the hematocrit result.

        // In this calculation we use Siggaard-Andersen calculation from OSA programm
        // see http:http://www.siggaard-andersen.dk/Unit_Calcul.pas
        // in FUNCTION ctCO2Bof(pH, pCO2, T, ctHb, sO2: Double): Double;
        // ctHBE=21;
        // phiEB=ctHb/ctHBE; (phiEB=Htc);
        // Htc = ctHb/21;
        // This calculation is based on the assumption that concentration in hemoglobin
        // in erythrocytes ctHBE = 21 mmol/l if erythrocytes = 33.9 g/dl of erythrocytes
        // Htc = ctHb/(33.9*0.62058)=ctHb/21.037662

        Htc=ctHb/21;

      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics),   Icon(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
            Rectangle(
              extent={{-100,48},{100,-46}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{20,24},{92,-22}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="Hct"),
            Text(
              extent={{-92,32},{-20,-32}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctHb")}));
    end ctHb_to_Htc;

    model VenousO2CO2
      import NewBloodyMary;

      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2
        "oxygen comsumption in mmol/sec" annotation (Placement(transformation(
              extent={{-96,-24},{-80,-8}}), iconTransformation(extent={{-112,74},
                {-98,88}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2
        "CO2 production (mmol/sec)" annotation (Placement(transformation(extent={
                {64,-20},{78,-6}}), iconTransformation(extent={{100,84},{114,98}})));
      Physiolibrary.Types.RealIO.FractionInput RQ "respiration quotient"
        annotation (Placement(transformation(extent={{-98,-34},{-82,-18}}),
            iconTransformation(extent={{-112,58},{-98,72}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q
        "Blood flow rate in m3/sec" annotation (Placement(transformation(extent={{-100,
                -44},{-84,-28}}),     iconTransformation(extent={{-112,42},{-98,
                56}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctO2a
        "total concentration of O2 in arterial blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-8.5,-9},{8.5,9}},
            rotation=0,
            origin={-92.5,-53}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={-105,17})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctCO2a
        "total concentration of CO2 in arterial blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-7.5,-7},{7.5,7}},
            rotation=0,
            origin={-92.5,-83}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={-105,-1})));
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         BEox
        "BE in (virtully) fully oxygenated blood"
                                      annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=0,
            origin={-18,10}),         iconTransformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={-104,-20})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctHb(
                                              displayUnit="mmol/l")
        "Concentration of total haemoglobin in whole blood (mmol/l)"
                                       annotation (Placement(transformation(extent={{11,-11},
                {-11,11}},
            rotation=180,
            origin={-95,29}),         iconTransformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={-104,-36})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctAlb(
                                              displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)"
                                       annotation (Placement(transformation(extent={{82,88},
                {70,100}}),           iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=90,
            origin={-79,-99})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctPO4(displayUnit="mmol/l")
        "concentration of total haemoglobin in whole blood (8.4)" annotation (
          Placement(transformation(extent={{96,80},{84,92}}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={-54,-100})));
      Physiolibrary.Types.RealIO.ConcentrationInput cDPG
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={77,77}),          iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={-28,-100})));
      Physiolibrary.Types.RealIO.FractionInput FMetHb
                                       annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={92,70}),          iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={-6,-100})));
      Physiolibrary.Types.RealIO.FractionInput FHbF
                                       annotation (Placement(transformation(extent={{-7,-7},
                {7,7}},
            rotation=180,
            origin={77,63}),          iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=90,
            origin={20,-100})));
      Physiolibrary.Types.RealIO.PressureInput pCO
                                       annotation (Placement(transformation(extent={{-8,-8},
                {8,8}},
            rotation=180,
            origin={90,54}),          iconTransformation(extent={{-8,-8},{8,8}},
            rotation=90,
            origin={44,-98})));
      Physiolibrary.Types.RealIO.MassConcentrationInput ctGlb(
                                           displayUnit="g/l")
        "concentration of total plasma globulins"                                    annotation (Placement(transformation(extent={{-6,-6},
                {6,6}},
            rotation=180,
            origin={76,48}),          iconTransformation(extent={{-8,-8},{8,8}},
            rotation=90,
            origin={72,-100})));
      Physiolibrary.Types.RealIO.FractionOutput sO2v
        "Oxygen hemohlobin saturation in venous blood (fraction)" annotation (
          Placement(transformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={94,36}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={108,-48})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cHCO3v(displayUnit="mmol/l")
        "venous  concentration of HCO3 in mmol/l" annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={93,23}),  iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={108,-68})));
      Physiolibrary.Types.RealIO.PressureOutput pCO2v
        "pCO2 in venous blood (Pa)"
        annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={40,12}),  iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,-5})));
      Physiolibrary.Types.RealIO.PressureOutput pO2v "pO2 in venous blood (Pa)"
        annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={18,10}),  iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,11})));
      Physiolibrary.Types.RealIO.pHOutput pHv "pH in venous blood" annotation (
          Placement(transformation(
            extent={{-8,-8},{8,8}},
            rotation=180,
            origin={-92,72}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={108,-28})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2v
        "total concentration of O2 in venous blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-6,-6},{6,6}},
            rotation=0,
            origin={88,-26}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,77})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2v
        "total concentration of CO2 in venous blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={89,-39}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,63})));
      Physiolibrary.Types.RealIO.TemperatureInput T(start=310.15)
        "temperature (in K)"                                       annotation (Placement(transformation(extent={{-9,-9},
                {9,9}},
            rotation=0,
            origin={-95,91}),         iconTransformation(extent={{-110,-64},{-96,
                -50}})));
      VenousFick venousFick
        annotation (Placement(transformation(extent={{-72,-96},{50,0}})));
      NewBloodyMary.Parts.bloodCO2O2BEox bloodCO2O2BEox
        annotation (Placement(transformation(extent={{-68,24},{52,100}})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cdO2v(displayUnit=
            "mmol/l") "venous O2 dissolved concentration" annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=180,
            origin={-93,61}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={108,48})));
       Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2v(displayUnit=
            "mmol/l") "venous O2 dissolved concentration" annotation (Placement(
            transformation(
            extent={{-7,-7},{7,7}},
            rotation=180,
            origin={-91,49}), iconTransformation(
            extent={{-8,-8},{8,8}},
            rotation=0,
            origin={108,32})));
    equation
      connect(venousFick.Q, Q) annotation (Line(
          points={{-73.83,-36},{-92,-36}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.RQ, RQ) annotation (Line(
          points={{-73.83,-25.44},{-79.915,-25.44},{-79.915,-26},{-90,-26}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.VO2, VO2) annotation (Line(
          points={{-73.83,-15.84},{-79.915,-15.84},{-79.915,-16},{-88,-16}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.ctCO2v, bloodCO2O2BEox.ctCO2) annotation (Line(
          points={{54.27,-31.2},{96,-31.2},{96,4},{-27.2,4},{-27.2,23.24}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(BEox, bloodCO2O2BEox.BEox) annotation (Line(
          points={{-18,10},{-9.2,10},{-9.2,24}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.pO2, pO2v) annotation (Line(
          points={{8.2,23.62},{8.2,10},{18,10}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.pCO2, pCO2v) annotation (Line(
          points={{25,23.62},{25,12},{40,12}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.VCO2, VCO2) annotation (Line(
          points={{54.27,-12.96},{60.135,-12.96},{60.135,-13},{71,-13}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.sO2, sO2v) annotation (Line(
          points={{58,39.96},{76,39.96},{76,36},{94,36}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.cHCO3, cHCO3v) annotation (Line(
          points={{58,30.08},{76,30.08},{76,23},{93,23}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctGlb, bloodCO2O2BEox.ctGlb) annotation (Line(
          points={{76,48},{68,48},{68,47.56},{59.2,47.56}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO, bloodCO2O2BEox.pCO) annotation (Line(
          points={{90,54},{74,54},{74,55.16},{59.2,55.16}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FHbF, bloodCO2O2BEox.FHbF) annotation (Line(
          points={{77,63},{69.5,63},{69.5,62.76},{59.2,62.76}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(FMetHb, bloodCO2O2BEox.FMetHb) annotation (Line(
          points={{92,70},{76,70},{76,70.36},{59.2,70.36}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(cDPG, bloodCO2O2BEox.cDPG) annotation (Line(
          points={{77,77},{65.5,77},{65.5,77.96},{59.2,77.96}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctPO4, bloodCO2O2BEox.ctPO4) annotation (Line(
          points={{90,86},{74,86},{74,85.56},{59.2,85.56}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctAlb, bloodCO2O2BEox.ctAlb) annotation (Line(
          points={{76,94},{68,94},{68,93.16},{59.2,93.16}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.ctO2v, bloodCO2O2BEox.ctO2) annotation (Line(
          points={{54.27,-22.56},{78,-22.56},{78,0},{-42.8,0},{-42.8,23.24}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctO2v, venousFick.ctO2v) annotation (Line(
          points={{88,-26},{78,-26},{78,-22.56},{54.27,-22.56}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(venousFick.ctCO2v, ctCO2v) annotation (Line(
          points={{54.27,-31.2},{76,-31.2},{76,-39},{89,-39}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.ctHb, ctHb) annotation (Line(
          points={{-74,41.48},{-81,41.48},{-81,29},{-95,29}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.pH, pHv) annotation (Line(
          points={{-74,72.64},{-82,72.64},{-82,72},{-92,72}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodCO2O2BEox.T, T) annotation (Line(
          points={{-72.8,94.68},{-82,94.68},{-82,91},{-95,91}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctCO2a, venousFick.ctCO2a) annotation (Line(points={{-92.5,-83},{
              -80.25,-83},{-80.25,-57.12},{-72.61,-57.12}}, color={0,0,127}));
      connect(venousFick.ctO2a, ctO2a) annotation (Line(points={{-72.61,-46.56},{
              -78.305,-46.56},{-78.305,-53},{-92.5,-53}}, color={0,0,127}));
      connect(bloodCO2O2BEox.cdCO2, cdCO2v) annotation (Line(points={{-74,52.88},
              {-80,52.88},{-80,49},{-91,49}}, color={0,0,127}));
      connect(bloodCO2O2BEox.cdO2, cdO2v) annotation (Line(points={{-74,62},{
              -80,62},{-80,61},{-93,61}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})),                Icon(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
            graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-94,84},{-74,76}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="VO2"),
            Text(
              extent={{74,96},{94,88}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="VCO2"),
            Text(
              extent={{-94,68},{-74,60}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="RQ"),
            Text(
              extent={{-96,52},{-76,44}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="Q"),
            Text(
              extent={{-96,20},{-76,12}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2a"),
            Text(
              extent={{-94,2},{-74,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2a"),
            Text(
              extent={{-92,-16},{-72,-24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="BEox"),
            Text(
              extent={{-92,-34},{-72,-42}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctHb"),
            Text(
              extent={{-8,4},{8,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctGlb",
              origin={70,-84},
              rotation=180),
            Text(
              extent={{-8,4},{8,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO",
              origin={42,-84},
              rotation=180),
            Text(
              extent={{-8,4},{8,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={22,-84},
              rotation=180,
              textString="FHbF"),
            Text(
              extent={{-10,6},{10,-6}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-4,-84},
              rotation=180,
              textString="FMetHb"),
            Text(
              extent={{-9,5},{9,-5}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cDPG",
              origin={-29,-83},
              rotation=180),
            Text(
              extent={{-9,5},{9,-5}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-53,-85},
              rotation=180,
              textString="ctPO4"),
            Text(
              extent={{-9,5},{9,-5}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={-79,-85},
              rotation=180,
              textString="ctAlb"),
            Text(
              extent={{-8,4},{8,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              origin={82,14},
              rotation=180,
              textString="pO2v"),
            Text(
              extent={{70,2},{90,-8}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pCO2v"),
            Text(
              extent={{74,-60},{96,-76}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cHCO3v"),
            Text(
              extent={{76,-42},{92,-50}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="sO2v"),
            Text(
              extent={{78,-20},{94,-28}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="pHv"),
            Text(
              extent={{74,70},{96,56}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2v"),
            Text(
              extent={{76,82},{94,72}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2v"),
            Text(
              extent={{-96,-54},{-78,-64}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="T"),
            Text(
              extent={{-68,92},{58,68}},
              lineColor={28,108,200},
              textString="%name"),
            Text(
              extent={{78,52},{96,42}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdO2v"),
            Text(
              extent={{74,40},{96,26}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="cdCO2v")}));
    end VenousO2CO2;

    model VenousFick

      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2
        "oxygen comsumption in mmol/sec" annotation (Placement(transformation(
              extent={{-130,62},{-90,102}}),iconTransformation(extent={{-110,60},
                {-96,74}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{-136,70},{-116,90}}), iconTransformation(extent=
               {{100,66},{114,80}})));
      Physiolibrary.Types.RealIO.FractionInput RQ "respiration quotient"
        annotation (Placement(transformation(extent={{-136,30},{-96,70}}),
            iconTransformation(extent={{-110,40},{-96,54}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput Q
        "Blood flow rate in m3/sec" annotation (Placement(transformation(extent={{-132,-6},
                {-92,34}}),           iconTransformation(extent={{-110,18},{-96,
                32}})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctO2a
        "total concentration of O2 in arterial blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-13,-13},{13,13}},
            rotation=90,
            origin={-88,-93}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={-101,3})));
      Physiolibrary.Types.RealIO.ConcentrationInput ctCO2a
        "total concentration of CO2 in arterial blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-13,-13},{13,13}},
            rotation=90,
            origin={-42,-89}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={-101,-19})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctO2v
        "total concentration of O2 in venous blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={36,-4}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,53})));
      Physiolibrary.Types.RealIO.ConcentrationOutput ctCO2v
        "total concentration of CO2 in venous blood (in mmol/l)" annotation (
          Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-64,-6}), iconTransformation(
            extent={{-7,-7},{7,7}},
            rotation=0,
            origin={107,35})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DO2
        "delivery of O2 (mol/sec)" annotation (Placement(transformation(extent={{
                70,-28},{90,-8}}), iconTransformation(extent={{100,10},{112,22}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput DCO2
        "delivery of CO2 (mol/sec)" annotation (Placement(transformation(extent={{72,-6},
                {92,14}}),          iconTransformation(extent={{100,-6},{112,6}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput RO2
        "removal of O2 (mol/sec)" annotation (Placement(transformation(extent={{76,-52},
                {96,-32}}),        iconTransformation(extent={{100,-22},{112,-10}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput RCO2
        "removal of CO2 (mol/sec)" annotation (Placement(transformation(extent={{64,14},
                {84,34}}),         iconTransformation(extent={{100,-38},{112,-26}})));
      Physiolibrary.Types.RealIO.FractionOutput FextrO2 "O2 extraction ratio"
        annotation (Placement(transformation(extent={{36,-70},{56,-50}}),
            iconTransformation(extent={{100,-58},{112,-46}})));
      Physiolibrary.Types.RealIO.FractionOutput FaddCO2 "CO2 addition ratio"
        annotation (Placement(transformation(extent={{54,-84},{74,-64}}),
            iconTransformation(extent={{100,-78},{112,-66}})));

    equation
      //Reapiration quatient
      RQ=VCO2/VO2;
      //Fick equations
      VO2=Q*(ctO2a-ctO2v);
      VCO2=Q*(ctCO2v-ctCO2a);
      //Delivery of O2 and CO2
      DO2=Q*ctO2a;
      DCO2=Q*ctCO2a;
      //Removal of O2 and CO2
      RO2=Q*ctO2v;
      RCO2=Q*ctCO2v;
      //O2 extraction ratio
      FextrO2=(ctO2a-ctO2v)/ctO2a;
      //CO2 addition ratio
      FaddCO2=(ctCO2v-ctCO2a)/ctCO2v;

      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),      graphics), Icon(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
            graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-92,70},{-72,62}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="VO2"),
            Text(
              extent={{74,76},{94,68}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="VCO2"),
            Text(
              extent={{-92,50},{-72,42}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="RQ"),
            Text(
              extent={{-94,28},{-74,20}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="Q"),
            Text(
              extent={{-90,6},{-70,-2}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2a"),
            Text(
              extent={{-90,-16},{-70,-24}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2a"),
            Text(
              extent={{72,40},{90,30}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctCO2v"),
            Text(
              extent={{74,58},{90,48}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="ctO2v"),
            Text(
              extent={{74,20},{92,12}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="DO2"),
            Text(
              extent={{74,4},{92,-4}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="DCO2"),
            Text(
              extent={{74,-12},{92,-20}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="RO2"),
            Text(
              extent={{74,-28},{92,-36}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="RCO2"),
            Text(
              extent={{72,-48},{94,-56}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FextrO2"),
            Text(
              extent={{70,-66},{94,-78}},
              lineColor={0,0,255},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="FaddCO2"),
            Text(
              extent={{-44,86},{34,48}},
              lineColor={0,0,255},
              textString="%name")}));
    end VenousFick;

    model Albumin
        extends BufferInterface;
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         tAlb(displayUnit="mmol/l")
        annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));

      Physiolibrary.Types.MassConcentration tAlb_mass;
      parameter Physiolibrary.Types.MolarMass Alb_MolarMass(displayUnit="g/mol") = 66.463;
    equation
      tAlb_mass=tAlb*Alb_MolarMass;  //kg/m3 = g/l
      y = - tAlb_mass * ( 0.123 * pH - 0.631) * Modelica.Constants.F;

    //where [ Albx- ] is in mEq / L and [ Albumin ] is in g / dL. Therefore, at pH 7.40, the charge contributed by 4.40 g / dL of albumin is approximately -12.3 mEq / L.

      annotation (Documentation(info="<html>
<p>http://www.figge-fencl.org/titrationcurve.html</p>
<p>:</p>
<p><br/>A least-squares linear regression fit to the Figge-Fencl quantitative physicochemical model (version 3.0) over the pH range of 6.90 to 7.90 yields the following equation for the charge displayed by albumin:</p>
<p><br/> [ Albx- ] = -10 x [ Albumin ] x ( 0.123 x pH - 0.631 );</p>
<p><br/> where [ Albx- ] is in mEq / L and [ Albumin ] is in g / dL. Therefore, at pH 7.40, the charge contributed by 4.40 g / dL of albumin is approximately -12.3 mEq / L.</p>
</html>"),
       Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={73,19},
              rotation=90,
              textString="Alb")}));
    end Albumin;

    model Globulins
        extends BufferInterface;
      Physiolibrary.Types.RealIO.MassConcentrationInput
                                         ctGlb
        annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
    equation
    //  y=-ctGlb*(0.075/0.81)*(pH-3.6);  //sklon -0.075/0.81 so siggaarda, pri 7.4 chcem -10 aby to pokrilo nastavene SID u Colemana
        y=-ctGlb*((0.075/0.77)*(pH-7.4) + 2.5/28)* Modelica.Constants.F; //chcem naboj -2.5 mEq/l pre normalnu koncentraciu 28 mg/l a pH=7.4
    //  y=-ctGlb*((0.075/0.77)*(pH-7.4) + 15.6/28)* Modelica.Constants.F; //chcem naboj -15.6 mEq/l pre normalnu koncentraciu 28 mg/l a pH=7.4
      annotation (Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={73,19},
              rotation=90,
              textString="Glb")}));
    end Globulins;

    model Phosphates
      extends BufferInterface;
      Physiolibrary.Types.RealIO.ConcentrationInput
                                         tPO4
        annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));

        parameter Real pKa1=2.1;
      parameter Real pKa2=6.8;
      parameter Real pKa3=12.7;

    equation
       y = - tPO4*(10^(pKa2-pH)+2+3*10^(pH-pKa3))/(10^(pKa1+pKa2-2*pH)+10^(pKa2-pH)+1+10^(pH-pKa3))* Modelica.Constants.F;

      annotation ( Documentation(info="<html>
<p><b><font style=\"font-size: 12pt; \"><a name=\"internal-source-marker_0.47659245471196454\">C</a>harge for phosphates:</b></p>
<p><br/>pKa1=2.1, pKa2=6.8, pKa3=12.7 &nbsp;&nbsp;(wiki: &nbsp;2.12, 7.21, 12.67 at 25&deg;C)</p>
<p><br/>tPO4 = [H3PO4] + [H2PO4] + [HPO4] + [PO4]</p>
<p><br/>charge(tPO4,pH) = [H2PO4] + 2[HPO4] + 3[PO4]</p>
<p><br/>[H2PO4] / [H3PO4] = 10^(pH-pKa1) </p>
<p><br/>[HPO4] / [H2PO4] = 10^(pH-pKa2) </p>
<p><br/>[PO4] / [HPO4] = 10^(pH-pKa3) </p>
</html>"),
        Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={73,19},
              rotation=90,
              textString="PO4")}));
    end Phosphates;

    model Bicarbonate
      extends BufferInterface;
      Physiolibrary.Types.RealIO.PressureInput
                                         pCO2(displayUnit="mmHg") annotation (Placement(transformation(extent=
               {{-120,-20},{-80,20}}), iconTransformation(extent={{-120,-20},{-80,20}})));
      Physiolibrary.Types.RealIO.TemperatureInput
                                         T(displayUnit="degC") annotation (Placement(transformation(extent={{-120,
                -20},{-80,20}}), iconTransformation(extent={{-120,-60},{-80,-20}})));

        Real pK;
      Real aCO2;
      Physiolibrary.Types.Concentration cdCO2;

      Physiolibrary.Types.VolumeDensityOfCharge y2;
    equation

      //Henderson-Hasselbalch equation:
      pK = 6.1 + (-0.0026)*(T-310.15);
      aCO2 = 0.00023 * 10^(-0.0092*(T-310.15)); //solubility depends on temperature
      cdCO2 = aCO2*pCO2;
      y = -cdCO2*10^(pH-pK)* Modelica.Constants.F;  //bicarbonate

      y2 = -cdCO2*10^(pH-6.35)* Modelica.Constants.F;  //bicarbonate

      annotation (Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={75,19},
              rotation=90,
              textString="HCO3")}));
    end Bicarbonate;

    model Haemoglobin
      extends BufferInterface;
     Physiolibrary.Types.RealIO.ConcentrationInput
                                         tHb_E
        "total concentration of haemoglobin in erythrocytes"
        annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
      Physiolibrary.Types.RealIO.FractionInput
                                         sO2 "saturation of haemoglobin by O2"
        annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
      Physiolibrary.Types.RealIO.PressureInput
                                         pCO2 "partial pressure of CO2"
        annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
      parameter Real betaOxyHb = 3.1
        "buffer value for oxygenated Hb without CO2";
      parameter Real betaDeoxyHb = 3.3 "buffer value for Hb without O2 and CO2";
      parameter Real pIo=7.13 "isoelectric pH for oxygenated Hb without CO2";
      parameter Real pIr=7.32 "isoelectric pH for Hb without O2 and CO2";

      parameter Real pKzO=8.08
        "pKa for NH3+ end of oxygenated haemoglobin chain";
      parameter Real pKzR=7.14
        "pKa for NH3+ end of deoxygenated haemoglobin chain";
      parameter Real pKcO=4.62
        "10^(pH-pKcO) is the dissociation constatnt for O2HbNH2 + CO2 <-> O2HbNHCOO- + H+ ";
      parameter Real pKcR=4.62
        "10^(pH-pKcR) is the dissociation constatnt for HbNH2 + CO2 <-> HbNHCOO- + H+ ";

      parameter Real KcR=10^(-pKcR);
      parameter Real KzR=10^(-pKzR);
      parameter Real KcO=10^(-pKcO);
      parameter Real KzO=10^(-pKzO);

      Real carbaminohaemoglobin;
      Real sCO2;
      Real zOxyHb;
      Real zDeoxyHb;
      Real zOxyCarbaminoHb;
      Real zDeoxyCarbaminoHb;
      Real H=10^(-pH);
      Real aCO2;
      Real cdCO2;
      Physiolibrary.Types.RealIO.TemperatureInput
                                         T
        annotation (Placement(transformation(extent={{-120,-120},{-80,-80}})));
    equation
    aCO2 = 0.23 * 10^(-0.0092*(T-37)); //solubility depends on temperature
    cdCO2 = aCO2*pCO2*0.001; //from mmol to mol

    carbaminohaemoglobin = tHb_E*cdCO2*( ( H*H*((1-sO2)/(KzO*KcO)+sO2/(KzR*KcR)) + H*((1-sO2)/KcO + sO2/KcR) + cdCO2) / ((H*H/(KzR*KcR) + H/KcR + cdCO2)*(H*H/(KzO*KcO) + H/KcO + cdCO2))); //, where cdCO2=free disolved CO2 concentration in erythrocytes in mol/l
    sCO2 = carbaminohaemoglobin/ tHb_E;

    y = -tHb_E*(sO2*(1-sCO2)*zOxyHb + (1-sO2)*(1-sCO2)*zDeoxyHb + sO2*sCO2*zOxyCarbaminoHb + (1-sO2)*sCO2*zDeoxyCarbaminoHb)* Modelica.Constants.F;

    zOxyHb = betaOxyHb * (pH-pIo);
    zDeoxyHb = betaDeoxyHb * (pH-pIr);
    zOxyCarbaminoHb = zOxyHb + (1+2*10^(pKzO-pH))/(1+10^(pKzO-pH)); //= zOxyHb + -[O2HbNH2]/([O2HbNH2]+[O2HbNH3+]) + -2[O2HbNH3+]/([O2HbNH2]+[O2HbNH3+]), where pKZO=8.08
    zDeoxyCarbaminoHb = zDeoxyHb + (1+2*10^(pKzR-pH))/(1+10^(pKzR-pH)); //betaOxyHb(pH) * (pH-pIO) + -[HbNH2]/([HbNH2]+[HbNH3+]) + -2[HbNH3+]/([HbNH2]+[HbNH3+]), where pKZR=7.14
      annotation (Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={73,19},
              rotation=90,
              textString="Hb")}));
    end Haemoglobin;

    model OtherRBCBuffers
      extends BufferInterface;

      parameter Physiolibrary.Types.Concentration NCharge=9 "charge at pH=7.4";

    equation
       y = - NCharge * Modelica.Constants.F;

      annotation ( Documentation(info="<html>
<p><b><font style=\"font-size: 12pt; \"><a name=\"internal-source-marker_0.47659245471196454\">C</a>harge for phosphates:</b></p>
<p><br/>pKa1=2.1, pKa2=6.8, pKa3=12.7 &nbsp;&nbsp;(wiki: &nbsp;2.12, 7.21, 12.67 at 25&deg;C)</p>
<p><br/>tPO4 = [H3PO4] + [H2PO4] + [HPO4] + [PO4]</p>
<p><br/>charge(tPO4,pH) = [H2PO4] + 2[HPO4] + 3[PO4]</p>
<p><br/>[H2PO4] / [H3PO4] = 10^(pH-pKa1) </p>
<p><br/>[HPO4] / [H2PO4] = 10^(pH-pKa2) </p>
<p><br/>[PO4] / [HPO4] = 10^(pH-pKa3) </p>
</html>"),
        Icon(graphics={Text(
              extent={{-79,-27},{79,27}},
              lineColor={0,0,255},
              origin={73,19},
              rotation=90,
              textString="Others")}));
    end OtherRBCBuffers;

    partial model BufferInterface

      Physiolibrary.Types.RealIO.pHInput pH
        annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
      Physiolibrary.Types.RealIO.VolumeDensityOfChargeOutput
                                          y(displayUnit="mEq/l")
        "charge of buffer"                                                      annotation (Placement(
            transformation(extent={{80,-100},{120,-60}}), iconTransformation(extent=
               {{80,-100},{120,-60}})));
      annotation ( Icon(graphics={Rectangle(extent={{-100,
                  100},{100,-100}}, lineColor={0,0,255})}));
    end BufferInterface;

    model TestToolVenousBlood

      VenousO2CO2 VenousBlood
        annotation (Placement(transformation(extent={{-36,-68},{38,10}})));
      bloodPO2PCO2 ArterialBlood
        annotation (Placement(transformation(extent={{-60,34},{2,94}})));
      Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
              "kg/m3") = 2.93)
        annotation (Placement(transformation(extent={{44,26},{34,34}})));
      Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
        annotation (Placement(transformation(extent={{64,34},{54,44}})));
    Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
      annotation (Placement(transformation(extent={{72,46},{60,54}})));
    Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
      annotation (Placement(transformation(extent={{50,60},{38,68}})));
    Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
      annotation (Placement(transformation(extent={{76,66},{66,74}})));
      Physiolibrary.Types.RealIO.PressureInput PaO2 annotation (Placement(
            transformation(
            extent={{-5,-5},{5,5}},
            rotation=90,
            origin={-21,19}), iconTransformation(extent={{-120,80},{-100,100}})));
      Physiolibrary.Types.RealIO.PressureInput PaCO2 annotation (Placement(
            transformation(
            extent={{-5,-5},{5,5}},
            rotation=90,
            origin={-9,19}), iconTransformation(extent={{-120,60},{-100,80}})));
      Physiolibrary.Types.RealIO.ConcentrationInput BEox annotation (Placement(
            transformation(extent={{-92,18},{-76,34}}), iconTransformation(extent={{
                -120,40},{-100,60}})));
      Physiolibrary.Types.RealIO.ConcentrationInput cHb annotation (Placement(
            transformation(extent={{-92,36},{-72,56}}), iconTransformation(extent={{
                -120,-60},{-100,-40}})));
      Physiolibrary.Types.RealIO.ConcentrationInput cAlb annotation (Placement(
            transformation(extent={{-64,-102},{-48,-86}}), iconTransformation(
              extent={{-120,-80},{-100,-60}})));
      Physiolibrary.Types.RealIO.ConcentrationInput cPi annotation (Placement(
            transformation(extent={{-38,-96},{-22,-80}}), iconTransformation(extent=
               {{-120,-100},{-100,-80}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput QCO annotation (Placement(
            transformation(extent={{-88,-20},{-72,-4}}), iconTransformation(extent={
                {-120,20},{-100,40}})));
      Physiolibrary.Types.RealIO.MolarFlowRateInput VO2 annotation (Placement(
            transformation(extent={{-92,-6},{-76,10}}), iconTransformation(extent={{
                -120,0},{-100,20}})));
      Physiolibrary.Types.RealIO.FractionInput RQ annotation (Placement(
            transformation(extent={{-102,-12},{-84,6}}), iconTransformation(extent={
                {-120,-20},{-100,0}})));
      Physiolibrary.Types.RealIO.TemperatureInput bloodTemp annotation (Placement(
            transformation(extent={{-124,78},{-102,100}}), iconTransformation(
              extent={{-120,-40},{-100,-20}})));
      Physiolibrary.Types.RealIO.MolarFlowRateOutput VCO2 annotation (Placement(
            transformation(extent={{100,8},{120,28}}),  iconTransformation(extent={{100,8},
                {120,28}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b O2 annotation (Placement(
            transformation(extent={{-70,-82},{-50,-62}}), iconTransformation(extent=
               {{-70,-82},{-50,-62}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b CO2 annotation (Placement(
            transformation(extent={{-98,-82},{-78,-62}}), iconTransformation(extent=
               {{50,-82},{70,-62}})));
      Physiolibrary.Types.RealIO.pHOutput pH annotation (Placement(transformation(
              extent={{100,-68},{120,-48}}),
                                           iconTransformation(extent={{100,-68},
                {120,-48}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdO2
        "concentration of dissolved O2 in plasma" annotation (Placement(
            transformation(
            extent={{-6,-6},{6,6}},
            rotation=270,
            origin={-58,18}), iconTransformation(extent={{100,-20},{120,0}})));
      Physiolibrary.Types.RealIO.ConcentrationOutput cdCO2
        "concentration of dissolved CO2 in plasma" annotation (Placement(
            transformation(
            extent={{-5,-5},{5,5}},
            rotation=270,
            origin={-49,19}), iconTransformation(extent={{100,-44},{120,-24}})));
    equation
      O2.conc = VenousBlood.ctO2v;
      CO2.conc = VenousBlood.ctCO2v;

      connect(DPG.y, ArterialBlood.cDPG) annotation (Line(points={{64.75,70},{
              30,70},{30,76},{5.1,76}}, color={0,0,127}));
      connect(DPG.y, VenousBlood.cDPG) annotation (Line(points={{64.75,70},{64,
              70},{64,72},{64,76},{84,76},{84,-90},{-9.36,-90},{-9.36,-68}},
            color={0,0,127}));
      connect(FMetHb.y, ArterialBlood.FMetHb) annotation (Line(points={{36.5,64},
              {22,64},{22,70},{5.1,70}}, color={0,0,127}));
      connect(FMetHb.y, VenousBlood.FMetHb) annotation (Line(points={{36.5,64},
              {36.5,56},{82,56},{82,48},{82,-102},{-1.22,-102},{-1.22,-68}},
                                                                         color=
              {0,0,127}));
      connect(FHbF.y, ArterialBlood.FHbF) annotation (Line(points={{58.5,50},{
              32,50},{32,60},{10,60},{10,64},{5.1,64}}, color={0,0,127}));
      connect(FHbF.y, VenousBlood.FHbF) annotation (Line(points={{58.5,50},{54,
              50},{54,54},{80,54},{80,-94},{8.4,-94},{8.4,-68}}, color={0,0,127}));
      connect(pCO.y, ArterialBlood.pCO) annotation (Line(points={{52.75,39},{
              26.375,39},{26.375,58},{5.1,58}}, color={0,0,127}));
      connect(pCO.y, VenousBlood.pCO) annotation (Line(points={{52.75,39},{
              52.75,32},{78,32},{78,-84},{17.28,-84},{17.28,-67.22}}, color={0,
              0,127}));
      connect(ctGlb.y, ArterialBlood.ctGlb) annotation (Line(points={{32.75,30},
              {20,30},{20,52},{5.1,52}}, color={0,0,127}));
      connect(ctGlb.y, VenousBlood.ctGlb) annotation (Line(points={{32.75,30},{
              32,30},{32,24},{32,22},{76,22},{76,-82},{27.64,-82},{27.64,-68}},
            color={0,0,127}));
      connect(ArterialBlood.ctO2, VenousBlood.ctO2a) annotation (Line(points={{-40.78,
              31.6},{-40.78,-22.37},{-37.85,-22.37}},        color={0,0,127}));
      connect(ArterialBlood.ctCO2, VenousBlood.ctCO2a) annotation (Line(points={{-33.96,
              31.6},{-33.96,10},{-56,10},{-56,-29.39},{-37.85,-29.39}},
            color={0,0,127}));
      connect(VenousBlood.T, bloodTemp) annotation (Line(points={{-37.11,-51.23},{-98.555,
              -51.23},{-98.555,89},{-113,89}}, color={0,0,127}));
      connect(ArterialBlood.T, bloodTemp) annotation (Line(points={{-62.48,87.4},{-98,
              87.4},{-98,89},{-113,89}}, color={0,0,127}));
      connect(ArterialBlood.ctHb, cHb)
        annotation (Line(points={{-63.1,46},{-82,46}}, color={0,0,127}));
      connect(VenousBlood.ctHb, cHb) annotation (Line(points={{-37.48,-43.04},{-68,-43.04},
              {-68,46},{-82,46}}, color={0,0,127}));
      connect(RQ, VenousBlood.RQ) annotation (Line(points={{-93,-3},{-38.5,-3},{-38.5,
              -3.65},{-37.85,-3.65}}, color={0,0,127}));
      connect(VenousBlood.VO2, VO2) annotation (Line(points={{-37.85,2.59},{-57.925,
              2.59},{-57.925,2},{-84,2}}, color={0,0,127}));
      connect(BEox, ArterialBlood.BEox) annotation (Line(points={{-84,26},{
              -24.35,26},{-24.35,33.7}},
                            color={0,0,127}));
      connect(VenousBlood.BEox, ArterialBlood.BEox) annotation (Line(points={{-37.48,
              -36.8},{-64,-36.8},{-64,26},{-24.35,26},{-24.35,33.7}},
                                                                    color={0,0,127}));
      connect(VenousBlood.Q, QCO) annotation (Line(points={{-37.85,-9.89},{-52.925,-9.89},
              {-52.925,-12},{-80,-12}}, color={0,0,127}));
      connect(ArterialBlood.pCO2, PaCO2) annotation (Line(points={{-9.78,34},{
              -9.78,30},{-9,30},{-9,19}},
                                    color={0,0,127}));
      connect(PaO2, ArterialBlood.pO2) annotation (Line(points={{-21,19},{-21,
              25.5},{-17.84,25.5},{-17.84,34}},
                                            color={0,0,127}));
      connect(cPi, VenousBlood.ctPO4) annotation (Line(points={{-30,-88},{-24,-88},{
              -18.98,-88},{-18.98,-68}}, color={0,0,127}));
      connect(cPi, ArterialBlood.ctPO4) annotation (Line(points={{-30,-88},{-26,-88},
              {-14,-88},{-14,-92},{86,-92},{86,82},{5.1,82}}, color={0,0,127}));
      connect(cAlb, VenousBlood.ctAlb) annotation (Line(points={{-56,-94},{-36,-94},
              {-36,-74},{-28.23,-74},{-28.23,-67.61}}, color={0,0,127}));
      connect(ArterialBlood.ctAlb, VenousBlood.ctAlb) annotation (Line(points={{5.1,
              88},{5.1,90},{88,90},{88,-98},{-36,-98},{-36,-74},{-28.23,-74},{-28.23,
              -67.61}}, color={0,0,127}));
      connect(VenousBlood.pHv, pH) annotation (Line(points={{40.96,-39.92},{
              49.48,-39.92},{49.48,-58},{110,-58}},
                                    color={0,0,127}));
      connect(VenousBlood.VCO2, VCO2) annotation (Line(points={{40.59,6.49},{
              47.295,6.49},{47.295,18},{110,18}},
                                           color={0,0,127}));
      connect(ArterialBlood.cdCO2, cdCO2) annotation (Line(points={{-49.46,31.6},
              {-49.46,27.8},{-49,27.8},{-49,19}}, color={0,0,127}));
      connect(ArterialBlood.cdO2, cdO2) annotation (Line(points={{-57.52,31.6},
              {-57.52,26.8},{-58,26.8},{-58,18}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})), Icon(coordinateSystem(preserveAspectRatio=false,
              extent={{-100,-100},{100,100}}), graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={128,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-68,78},{84,34}},
              lineColor={28,108,200},
              textString="Venous Blood 
Test Tool")}));
    end TestToolVenousBlood;

    model AlveolarVentilation
      extends Physiolibrary.Icons.Lungs;
    //  parameter Real EnvironmentPressure(final displayUnit="mmHg");
    //  parameter Real EnvironmentTemperature(final displayUnit="degC");
    Physiolibrary.Chemical.Interfaces.ChemicalPort_b expired annotation (
        extent=[-10,-110; 10,-90], Placement(transformation(extent={{68,18},{
              88,38}}), iconTransformation(extent={{90,70},{110,90}})));

    Physiolibrary.Chemical.Interfaces.ChemicalPort_a inspired annotation (
        Placement(transformation(extent={{-82,18},{-62,38}}),
          iconTransformation(extent={{-110,70},{-90,90}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput AlveolarVentilation_Env
      annotation (Placement(transformation(extent={{-14,44},{0,58}}),
          iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=180,
          origin={80,20})));
    Physiolibrary.Chemical.Components.Stream solventFlowPump(q_out(conc(start=
             0.13686)), useSolutionFlowInput=true)
      annotation (Placement(transformation(extent={{-2,18},{18,38}})));
    Physiolibrary.Chemical.Components.Dilution dilution(useDilutionInput=true)
                                                        annotation (Placement(
          transformation(
          extent={{-8,8},{12,-12}},
          origin={-26,30})));
    Physiolibrary.Chemical.Components.Stream solventFlowPump1(
        useSolutionFlowInput=true)
      annotation (Placement(transformation(extent={{44,18},{64,38}})));
    Physiolibrary.Chemical.Interfaces.ChemicalPort_b   alveolar annotation (
        extent=[-10,-110; 10,-90], Placement(transformation(extent={{20,-14},
              {40,6}}), iconTransformation(extent={{-8,-110},{12,-90}})));
      Physiolibrary.Types.RealIO.FractionInput BronchiDilution
                                             annotation (Placement(
            transformation(
            extent={{-10.0004,-10.0004},{4.00021,4.00021}},
            origin={-70.0002,9.9998}),
                               iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=180,
            origin={80,-40})));
    equation

      connect(solventFlowPump1.q_out, expired) annotation (Line(
          points={{64,28},{78,28}},
          color={200,0,0},
          smooth=Smooth.None,
          thickness=1));
      connect(solventFlowPump.q_out, solventFlowPump1.q_in) annotation (Line(
          points={{18,28},{44,28}},
          color={200,0,0},
          smooth=Smooth.None,
          thickness=1));

    connect(AlveolarVentilation_Env, solventFlowPump.solutionFlow)
      annotation (Line(
        points={{-7,51},{8,51},{8,35}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(AlveolarVentilation_Env, solventFlowPump1.solutionFlow)
      annotation (Line(
        points={{-7,51},{54,51},{54,35}},
        color={0,0,127},
        smooth=Smooth.None));
      connect(BronchiDilution, dilution.dilution) annotation (Line(
          points={{-73.0003,6.9997},{-46,6.9997},{-46,20},{-34,20}},
          color={0,0,127},
          smooth=Smooth.None));
    connect(dilution.q_out, solventFlowPump.q_in) annotation (Line(
        points={{-14,28},{-2,28}},
        color={200,0,0},
        thickness=1,
        smooth=Smooth.None));
    connect(inspired, dilution.q_in) annotation (Line(
        points={{-72,28},{-34,28}},
        color={200,0,0},
        thickness=1,
        smooth=Smooth.None));
    connect(solventFlowPump.q_out, alveolar) annotation (Line(
        points={{18,28},{36,28},{36,-4},{30,-4}},
        color={107,45,134},
        thickness=1,
        smooth=Smooth.None));
     annotation (
        Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                100,100}}), graphics={Polygon(
              points={{-38,93},{40,80},{-38,66},{-38,93}},
              lineColor={0,0,127},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{-92,-90},{84,-60}},
              textString="%name",
              lineColor={0,0,255})}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end AlveolarVentilation;

    model fractToPressure

      Physiolibrary.Types.RealIO.FractionInput fraction annotation (Placement(
            transformation(extent={{-140,-20},{-100,20}}), iconTransformation(
              extent={{-140,-20},{-100,20}})));
      Physiolibrary.Types.RealIO.PressureInput pressure annotation (Placement(
            transformation(extent={{-56,42},{-16,82}}), iconTransformation(
            extent={{-20,-20},{20,20}},
            rotation=270,
            origin={0,60})));
      Physiolibrary.Types.RealIO.PressureOutput partialPressure annotation (
          Placement(transformation(extent={{46,-72},{66,-52}}), iconTransformation(
              extent={{100,-20},{142,22}})));
    equation
       partialPressure = pressure * fraction;

        annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),
                             graphics={Rectangle(
              extent={{-100,40},{100,-40}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-100,30},{98,-28}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}));
    end fractToPressure;

    model GasPartialPressure

      Physiolibrary.Types.RealIO.PressureInput pressure annotation (Placement(
            transformation(extent={{-140,42},{-100,82}}),   iconTransformation(
              extent={{-140,42},{-100,82}})));
      Physiolibrary.Types.RealIO.PressureOutput partialPressure annotation (
          Placement(transformation(extent={{94,-2},{114,18}}), iconTransformation(
              extent={{100,-15},{130,15}})));
      Physiolibrary.Types.RealIO.FractionInput gasFractionConcentration annotation (
         Placement(transformation(extent={{-140,-70},{-100,-30}}),
                                                                 iconTransformation(
              extent={{-140,-70},{-100,-30}})));
    equation
      partialPressure = pressure * gasFractionConcentration;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),
                             graphics={Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid), Text(
              extent={{-102,42},{102,-30}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end GasPartialPressure;

    model Ventilation
        extends Physiolibrary.Icons.Lungs;

      Physiolibrary.Types.RealIO.VolumeInput tidalVolume annotation (Placement(
            transformation(extent={{38,80},{22,96}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-50,90})));
      Physiolibrary.Types.RealIO.VolumeInput deadSpace annotation (Placement(
            transformation(extent={{48,72},{32,87}}), iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={-10,90})));
      Physiolibrary.Types.RealIO.FrequencyInput respiratoryRate annotation (
          Placement(transformation(extent={{58,62},{42,78}}),
            iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=270,
            origin={30,90})));
      Physiolibrary.Types.RealIO.PressureInput barometricPressure annotation (
          Placement(transformation(extent={{-100,66},{-84,82}}),
            iconTransformation(extent={{-100,80},{-80,100}})));
      Physiolibrary.Types.RealIO.TemperatureInput atmosphericTemperature
        annotation (Placement(transformation(extent={{-48,80},{-32,96}}),
            iconTransformation(extent={{-100,-18},{-80,2}})));
      Physiolibrary.Types.RealIO.TemperatureInput bodyTemperature annotation (
          Placement(transformation(extent={{90,52},{74,68}}),
            iconTransformation(extent={{-100,-44},{-80,-24}})));
      Physiolibrary.Types.RealIO.FractionInput airHumidity annotation (
          Placement(transformation(extent={{-44,52},{-28,68}}),
            iconTransformation(extent={{-100,58},{-80,78}})));
      Physiolibrary.Types.RealIO.FractionInput FiO2 annotation (Placement(
            transformation(extent={{-104,48},{-86,66}}), iconTransformation(
              extent={{-100,36},{-80,56}})));
      Physiolibrary.Types.RealIO.FractionInput FiCO2 annotation (Placement(
            transformation(extent={{-56,23},{-36,43}}), iconTransformation(
              extent={{-100,10},{-80,30}})));
      Parts.AlveolarVentilation_BTPS alveolarVentilation_BTPS
        annotation (Placement(transformation(extent={{-24,42},{18,88}})));
      Physiolibrary.Chemical.Components.GasSolubility O2gasSolubility(
        useHeatPort=true,
        kH_T0(displayUnit="(mmol/l)/kPa at 37degC") = 0.02707666941329,
        C=1700,
        solubilityRateCoef(displayUnit="ml/min") = 0.01,
        T0=310.15,
        solventFraction=1)
        annotation (Placement(transformation(extent={{-70,-60},{-50,-40}})));
      Physiolibrary.Chemical.Components.GasSolubility gasSolubility1(
        useHeatPort=true,
        kH_T0(displayUnit="(mmol/l)/(mmol/l)") = 0.604,
        C=2400,
        solubilityRateCoef(displayUnit="ml/min") = 0.1,
        solventFraction=1)
        annotation (Placement(transformation(extent={{50,-60},{70,-40}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2 annotation (Placement(
            transformation(extent={{-70,-94},{-50,-74}}), iconTransformation(
              extent={{-70,-94},{-50,-74}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a CO2 annotation (
          Placement(transformation(extent={{50,-94},{70,-74}}),
            iconTransformation(extent={{20,-100},{40,-80}})));
      Physiolibrary.Chemical.Sources.UnlimitedGasStorage airO2(useHeatPort=true,
          usePartialPressureInput=true)
        annotation (Placement(transformation(extent={{-92,16},{-78,30}})));
      Parts.AlveolarVentilation O2alveolarVentilation
        annotation (Placement(transformation(extent={{-78,-22},{-44,12}})));
      Parts.AlveolarVentilation CO2alveolarVentilation
        annotation (Placement(transformation(extent={{42,-22},{76,12}})));
      Physiolibrary.Thermal.Sources.UnlimitedHeat alveolusHeat(
          useTemperatureInput=true)
        annotation (Placement(transformation(extent={{-4,-56},{8,-44}})));
      Parts.GasPartialPressure PiO2 annotation (Placement(
            transformation(
            extent={{-7,-6},{7,6}},
            rotation=0,
            origin={-69,60})));
      Parts.GasPartialPressure PiCO2
        annotation (Placement(transformation(extent={{-30,30},{-16,42}})));
      Physiolibrary.Chemical.Sources.UnlimitedGasStorage airCO2(useHeatPort=
            true, usePartialPressureInput=true)
        annotation (Placement(transformation(extent={{18,14},{32,28}})));
    equation
      connect(alveolarVentilation_BTPS.TidalVolume, tidalVolume)
        annotation (Line(points={{13.8,88},{30,88},{30,88}}, color={0,0,127}));
      connect(respiratoryRate, alveolarVentilation_BTPS.RespRate) annotation (
          Line(points={{50,70},{13.8,70},{13.8,69.6}}, color={0,0,127}));
      connect(bodyTemperature, alveolarVentilation_BTPS.core_T) annotation (
          Line(points={{82,60},{13.8,60},{13.8,60.4}}, color={0,0,127}));
      connect(alveolarVentilation_BTPS.DeadSpace, deadSpace) annotation (Line(
            points={{13.8,78.8},{17.9,78.8},{17.9,79.5},{40,79.5}}, color={0,0,
              127}));
      connect(atmosphericTemperature, alveolarVentilation_BTPS.AmbientTemperature)
        annotation (Line(points={{-40,88},{-19.8,88}}, color={0,0,127}));
      connect(barometricPressure, alveolarVentilation_BTPS.EnvironmentPressure)
        annotation (Line(points={{-92,74},{-19.8,74},{-19.8,74.2}}, color={0,0,
              127}));
      connect(alveolarVentilation_BTPS.EnvironmentRelativeHumidity, airHumidity)
        annotation (Line(points={{-19.8,60.4},{-23.9,60.4},{-23.9,60},{-36,60}},
            color={0,0,127}));
      connect(O2gasSolubility.q_in, O2) annotation (Line(
          points={{-60,-58},{-60,-58},{-60,-84}},
          color={107,45,134},
          thickness=1));
      connect(gasSolubility1.q_in, CO2) annotation (Line(
          points={{60,-58},{60,-58},{60,-84}},
          color={107,45,134},
          thickness=1));
      connect(alveolusHeat.temperature, bodyTemperature) annotation (Line(
            points={{-4,-50},{-10,-50},{-10,32},{50,32},{50,60},{82,60}}, color=
             {0,0,127}));
      connect(alveolusHeat.port, gasSolubility1.heatPort) annotation (Line(
          points={{8,-50},{34,-50},{60,-50}},
          color={191,0,0},
          thickness=1));
      connect(O2alveolarVentilation.inspired, airO2.q_out) annotation (Line(
          points={{-78,8.6},{-78,8.6},{-78,23}},
          color={107,45,134},
          thickness=1));
      connect(O2alveolarVentilation.expired, airO2.q_out) annotation (Line(
          points={{-44,8.6},{-44,23},{-78,23}},
          color={107,45,134},
          thickness=1));
      connect(O2gasSolubility.q_out, O2alveolarVentilation.alveolar)
        annotation (Line(
          points={{-60,-40},{-60,-40},{-60,-22},{-60.66,-22}},
          color={107,45,134},
          thickness=1));
      connect(airCO2.q_out, CO2alveolarVentilation.expired) annotation (Line(
          points={{32,21},{76,21},{76,8.6}},
          color={107,45,134},
          thickness=1));
      connect(CO2alveolarVentilation.inspired, airCO2.q_out) annotation (Line(
          points={{42,8.6},{32,8.6},{32,21}},
          color={107,45,134},
          thickness=1));
      connect(gasSolubility1.q_out, CO2alveolarVentilation.alveolar)
        annotation (Line(
          points={{60,-40},{60,-40},{60,-22},{59.34,-22}},
          color={107,45,134},
          thickness=1));
      connect(FiO2, PiO2.gasFractionConcentration) annotation (Line(points={{
              -95,57},{-86.5,57},{-77.4,57}}, color={0,0,127}));
      connect(PiCO2.gasFractionConcentration, FiCO2) annotation (Line(points={{
              -31.4,33},{-34.7,33},{-34.7,33},{-46,33}}, color={0,0,127}));
      connect(PiCO2.pressure, alveolarVentilation_BTPS.EnvironmentPressure)
        annotation (Line(points={{-31.4,39.72},{-44,39.72},{-44,74},{-19.8,74},
              {-19.8,74.2}}, color={0,0,127}));
      connect(alveolusHeat.port, O2gasSolubility.heatPort) annotation (Line(
          points={{8,-50},{8,-62},{-28,-62},{-28,-50},{-60,-50}},
          color={191,0,0},
          thickness=1));
      connect(alveolusHeat.port, airO2.heatPort) annotation (Line(
          points={{8,-50},{8,-50},{8,28},{-85,28},{-85,23}},
          color={191,0,0},
          thickness=1));
      connect(alveolusHeat.port, airCO2.heatPort) annotation (Line(
          points={{8,-50},{12,-50},{12,14},{25,14},{25,21}},
          color={191,0,0},
          thickness=1));
      connect(PiCO2.partialPressure, airCO2.partialPressure) annotation (Line(
            points={{-14.95,36},{-2,36},{14,36},{14,21},{18,21}}, color={0,0,
              127}));
      connect(airO2.partialPressure, PiO2.partialPressure) annotation (Line(
            points={{-92,23},{-94,23},{-94,24},{-94,44},{-94,50},{-58,50},{-58,
              60},{-60.95,60}}, color={0,0,127}));
      connect(PiO2.pressure, alveolarVentilation_BTPS.EnvironmentPressure)
        annotation (Line(points={{-77.4,63.72},{-82,63.72},{-82,74},{-19.8,74},
              {-19.8,74.2}}, color={0,0,127}));
      connect(CO2alveolarVentilation.AlveolarVentilation_Env,
        alveolarVentilation_BTPS.AlveolarVentilation) annotation (Line(points={
              {72.6,-1.6},{90,-1.6},{90,51.2},{18,51.2}}, color={0,0,127}));
      connect(alveolarVentilation_BTPS.BronchiDilution, CO2alveolarVentilation.BronchiDilution)
        annotation (Line(points={{18,42},{48,42},{82,42},{82,-11.8},{72.6,-11.8}},
            color={0,0,127}));
      connect(O2alveolarVentilation.BronchiDilution, CO2alveolarVentilation.BronchiDilution)
        annotation (Line(points={{-47.4,-11.8},{32,-11.8},{32,-30},{82,-30},{82,
              -11.8},{72.6,-11.8}}, color={0,0,127}));
      connect(O2alveolarVentilation.AlveolarVentilation_Env,
        alveolarVentilation_BTPS.AlveolarVentilation) annotation (Line(points={
              {-47.4,-1.6},{38,-1.6},{38,-26},{90,-26},{90,51.2},{18,51.2}},
            color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}})), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end Ventilation;

    model BloodO2CO2Equilibrium

      Physiolibrary.Chemical.Interfaces.ChemicalPort_a BloodO2in annotation (
          Placement(transformation(extent={{-94,8},{-74,28}}),
            iconTransformation(extent={{-94,8},{-74,28}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a BloodCO2in annotation (
          Placement(transformation(extent={{-92,-38},{-72,-18}}),
            iconTransformation(extent={{-92,-38},{-72,-18}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b BloodO2out annotation (
          Placement(transformation(extent={{74,6},{94,26}}), iconTransformation(
              extent={{74,6},{94,26}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b BloodCO2out annotation (
          Placement(transformation(extent={{74,-34},{94,-14}}),
            iconTransformation(extent={{74,-34},{94,-14}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_a O2alv annotation (
          Placement(transformation(extent={{-38,70},{-18,90}}),
            iconTransformation(extent={{-38,70},{-18,90}})));
      Physiolibrary.Chemical.Interfaces.ChemicalPort_b CO2alv annotation (
          Placement(transformation(extent={{10,72},{30,92}}),
            iconTransformation(extent={{10,72},{30,92}})));
      bloodCO2O2BEox cO2O2BEox
        annotation (Placement(transformation(extent={{-52,-54},{12,16}})));
      Physiolibrary.Types.RealIO.VolumeFlowRateInput bloodFlowRate annotation (
          Placement(transformation(extent={{-116,38},{-76,78}}),
            iconTransformation(extent={{-124,58},{-102,80}})));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}}), graphics={
            Rectangle(
              extent={{-102,100},{98,-100}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-70,26},{-48,8}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="O2"),
            Text(
              extent={{-38,66},{-16,48}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="O2"),
            Text(
              extent={{50,26},{72,8}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="O2"),
            Text(
              extent={{-68,-16},{-36,-44}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="CO2"),
            Text(
              extent={{36,-10},{68,-38}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="CO2"),
            Text(
              extent={{10,68},{42,40}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="CO2"),
            Text(
              extent={{-100,-50},{100,-94}},
              lineColor={28,108,200},
              fillColor={255,255,0},
              fillPattern=FillPattern.Solid,
              textString="%name")}), Diagram(coordinateSystem(
              preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
    end BloodO2CO2Equilibrium;
  end Parts;

  package tests

    model test_ISF_CO2

      Physiolibrary.Types.Constants.TemperatureConst temperature(k=310.15)
        annotation (Placement(transformation(extent={{-64,30},{-56,38}})));
      Physiolibrary.Types.Constants.VolumeConst volume(k=0.012)
        annotation (Placement(transformation(extent={{-70,50},{-62,58}})));
      Parts.ISF_CO2 ISF_CO2(useNormalizedVolume=false, initMolarConcentration=
            25.2)
        annotation (Placement(transformation(extent={{24,26},{44,46}})));
      Physiolibrary.Types.Constants.ConcentrationConst dSID(k=0)
        annotation (Placement(transformation(extent={{-32,18},{-24,26}})));
    equation
      connect(temperature.y, ISF_CO2.T) annotation (Line(points={{-55,34},{-14,
              34},{-14,36.8},{25.8,36.8}}, color={0,0,127}));
      connect(volume.y, ISF_CO2.solutionVolume) annotation (Line(points={{-61,
              54},{-16,54},{-16,56},{30,56},{30,40}}, color={0,0,127}));
      connect(dSID.y, ISF_CO2.dSID) annotation (Line(points={{-23,22},{0,22},{0,
              31.8},{26,31.8}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})));
    end test_ISF_CO2;

    model test_alveoalrVentilation

      Parts.AlveolarVentilation_BTPS alveolarVentilation_STPD
        annotation (Placement(transformation(extent={{-56,-26},{26,56}})));
      Physiolibrary.Types.Constants.TemperatureConst teplotaOkoli(k=298.15)
        annotation (Placement(transformation(extent={{-94,52},{-78,62}})));
      Physiolibrary.Types.Constants.PressureConst okolniTlak(k=99991.79056125)
        annotation (Placement(transformation(extent={{-98,22},{-80,36}})));
      Physiolibrary.Types.Constants.FractionConst fraction(k=0.78)
        "vlhkostVzduchu"
        annotation (Placement(transformation(extent={{-96,-2},{-80,10}})));
      Physiolibrary.Types.Constants.VolumeConst TidelVolumeBTPS(k=0.0005)
        annotation (Placement(transformation(
            extent={{-4,-4},{4,4}},
            rotation=180,
            origin={64,64})));
      Physiolibrary.Types.Constants.VolumeConst DeadVolumeBTPS(k=0.00025)
        annotation (Placement(transformation(
            extent={{-4,-4},{4,4}},
            rotation=180,
            origin={58,42})));
      Physiolibrary.Types.Constants.FrequencyConst frequency(k=0.2) annotation (
         Placement(transformation(
            extent={{-4,-4},{4,4}},
            rotation=180,
            origin={60,18})));
      Physiolibrary.Types.Constants.TemperatureConst teplotaJadra(k=310.15)
        annotation (Placement(transformation(
            extent={{-8,-5},{8,5}},
            rotation=180,
            origin={60,5})));
    equation
      connect(teplotaOkoli.y, alveolarVentilation_STPD.AmbientTemperature)
        annotation (Line(points={{-76,57},{-66,57},{-66,56},{-47.8,56}}, color=
              {0,0,127}));
      connect(okolniTlak.y, alveolarVentilation_STPD.EnvironmentPressure)
        annotation (Line(points={{-77.75,29},{-62.875,29},{-62.875,31.4},{-47.8,
              31.4}}, color={0,0,127}));
      connect(fraction.y, alveolarVentilation_STPD.EnvironmentRelativeHumidity)
        annotation (Line(points={{-78,4},{-66,4},{-66,6.8},{-47.8,6.8}}, color=
              {0,0,127}));
      connect(TidelVolumeBTPS.y, alveolarVentilation_STPD.TidalVolume)
        annotation (Line(points={{59,64},{42,64},{42,56},{17.8,56}}, color={0,0,
              127}));
      connect(DeadVolumeBTPS.y, alveolarVentilation_STPD.DeadSpace) annotation (
         Line(points={{53,42},{36,42},{36,39.6},{17.8,39.6}}, color={0,0,127}));
      connect(frequency.y, alveolarVentilation_STPD.RespRate) annotation (Line(
            points={{55,18},{40,18},{40,23.2},{17.8,23.2}}, color={0,0,127}));
      connect(teplotaJadra.y, alveolarVentilation_STPD.core_T) annotation (Line(
            points={{50,5},{38,5},{38,6.8},{17.8,6.8}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}})));
    end test_alveoalrVentilation;

    model testBloodPO2PCO2

    Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
      annotation (Placement(transformation(extent={{60,42},{50,50}})));
    Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
      annotation (Placement(transformation(extent={{42,36},{30,44}})));
    Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
      annotation (Placement(transformation(extent={{60,28},{48,36}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctPO4(k=1.16)
        annotation (Placement(transformation(extent={{48,50},{36,58}})));
      Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
              "kg/l") = 2.93)
        annotation (Placement(transformation(extent={{36,10},{26,18}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
        annotation (Placement(transformation(extent={{36,60},{26,68}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
        annotation (Placement(transformation(extent={{5,-4},{-5,4}},
            rotation=180,
            origin={-87,-10})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-90,58},{-80,66}})));
      Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
        annotation (Placement(transformation(extent={{56,16},{46,26}})));
      Parts.bloodPO2PCO2 bloodPO2PCO2_
        annotation (Placement(transformation(extent={{-64,-12},{12,68}})));
      Physiolibrary.Types.Constants.VolumeDensityOfChargeConst
        volumeDensityOfCharge(k=0)
        annotation (Placement(transformation(extent={{-62,-38},{-48,-28}})));
      Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
        annotation (Placement(transformation(extent={{-34,-80},{-24,-70}})));
      Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
        annotation (Placement(transformation(extent={{-58,-58},{-48,-48}})));
    equation
      connect(ctAlb.y, bloodPO2PCO2_.ctAlb) annotation (Line(
          points={{24.75,64},{20,64},{20,60},{15.8,60}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctPO4.y, bloodPO2PCO2_.ctPO4) annotation (Line(
          points={{34.5,54},{22,54},{22,52},{15.8,52}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(DPG.y, bloodPO2PCO2_.cDPG) annotation (Line(
          points={{48.75,46},{22,46},{22,44},{15.8,44}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO.y, bloodPO2PCO2_.pCO) annotation (Line(
          points={{44.75,21},{44.75,21.5},{15.8,21.5},{15.8,20}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.FMetHb, FMetHb.y) annotation (Line(
          points={{15.8,36},{22.9,36},{22.9,40},{28.5,40}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.FHbF, FHbF.y) annotation (Line(
          points={{15.8,28},{31.9,28},{31.9,32},{46.5,32}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(bloodPO2PCO2_.ctGlb, ctGlb.y) annotation (Line(
          points={{15.8,12},{24.75,12},{24.75,14}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctHb.y, bloodPO2PCO2_.ctHb) annotation (Line(
          points={{-80.75,-10},{-74,-10},{-74,4},{-67.8,4}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(temp.y, bloodPO2PCO2_.T) annotation (Line(
          points={{-78.75,62},{-72,62},{-72,59.2},{-67.04,59.2}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(volumeDensityOfCharge.y, bloodPO2PCO2_.BEox) annotation (Line(
          points={{-46.25,-33},{-26.76,-33},{-26.76,-12}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pCO2.y, bloodPO2PCO2_.pCO2) annotation (Line(
          points={{-22.75,-75},{-5.48,-75},{-5.48,-12}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pO2.y, bloodPO2PCO2_.pO2) annotation (Line(points={{-46.75,-53},{
              -16.12,-53},{-16.12,-12.8}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})));
    end testBloodPO2PCO2;

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
          points={{-76.75,-90},{-11.24,-90},{-11.24,-30}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(ctHb.y,bloodCO2O2BEox_. ctHb) annotation (Line(
          points={{-92.75,-2},{-86,-2},{-86,-1.02},{-78.2,-1.02}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tO2.y, bloodCO2O2BEox_.ctO2) annotation (Line(
          points={{-76.5,-55},{-45.96,-55},{-45.96,-31.26}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(tCO2.y, bloodCO2O2BEox_.ctCO2) annotation (Line(
          points={{-76.5,-71},{-29.84,-71},{-29.84,-31.26}},
          color={0,0,127},
          smooth=Smooth.None));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}),      graphics));
    end testBloodO2CO2BEox;

    model VenousBlood

      Parts.VenousO2CO2 VenousBlood
        annotation (Placement(transformation(extent={{-36,-68},{38,10}})));
      Parts.bloodPO2PCO2 ArterialBlood
        annotation (Placement(transformation(extent={{-60,34},{2,94}})));
      Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
        annotation (Placement(transformation(extent={{-28,14},{-18,24}})));
      Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
        annotation (Placement(transformation(extent={{4,18},{14,28}})));
      Physiolibrary.Types.Constants.VolumeDensityOfChargeConst
        volumeDensityOfCharge(k=0)
        annotation (Placement(transformation(extent={{-90,14},{-76,24}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
        annotation (Placement(transformation(extent={{5,-4},{-5,4}},
            rotation=180,
            origin={-81,46})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-94,84},{-84,92}})));
      Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit=
              "kg/l") = 2.93)
        annotation (Placement(transformation(extent={{44,34},{34,42}})));
      Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
        annotation (Placement(transformation(extent={{64,40},{54,50}})));
    Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
      annotation (Placement(transformation(extent={{68,52},{56,60}})));
    Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
      annotation (Placement(transformation(extent={{50,60},{38,68}})));
    Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
      annotation (Placement(transformation(extent={{76,66},{66,74}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctPO4(k=1.16)
        annotation (Placement(transformation(extent={{64,76},{52,84}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
        annotation (Placement(transformation(extent={{44,84},{34,92}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst molarFlowRate(k=
            0.00023333333333333)
        annotation (Placement(transformation(extent={{-90,-2},{-82,6}})));
      Physiolibrary.Types.Constants.FractionConst fraction(k(displayUnit="1")=
             0.8)
        annotation (Placement(transformation(extent={{-86,-16},{-78,-8}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst volumeFlowRate(k=
            8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-84,-32},{-76,-24}})));
    equation
      connect(temp.y, ArterialBlood.T) annotation (Line(points={{-82.75,88},{-62.48,
              88},{-62.48,87.4}}, color={0,0,127}));
      connect(ctHb.y, ArterialBlood.ctHb)
        annotation (Line(points={{-74.75,46},{-63.1,46}}, color={0,0,127}));
      connect(volumeDensityOfCharge.y, ArterialBlood.BEox) annotation (Line(
            points={{-74.25,19},{-29.62,19},{-29.62,34}}, color={0,0,127}));
      connect(pO2.y, ArterialBlood.pO2) annotation (Line(points={{-16.75,19},{-6,
              19},{-6,26},{-20.94,26},{-20.94,33.4}}, color={0,0,127}));
      connect(pCO2.y, ArterialBlood.pCO2) annotation (Line(points={{15.25,23},{
              26,23},{26,30},{-12.26,30},{-12.26,34}}, color={0,0,127}));
      connect(ctAlb.y, ArterialBlood.ctAlb)
        annotation (Line(points={{32.75,88},{5.1,88}}, color={0,0,127}));
      connect(ctAlb.y, VenousBlood.ctAlb) annotation (Line(points={{32.75,88},{
              32,88},{32,94},{32,96},{90,96},{90,-94},{-28.23,-94},{-28.23,-67.61}},
            color={0,0,127}));
      connect(ctPO4.y, ArterialBlood.ctPO4) annotation (Line(points={{50.5,80},
              {24,80},{24,82},{5.1,82}}, color={0,0,127}));
      connect(ctPO4.y, VenousBlood.ctPO4) annotation (Line(points={{50.5,80},{
              48,80},{48,94},{86,94},{86,-92},{-18.98,-92},{-18.98,-68}}, color=
             {0,0,127}));
      connect(DPG.y, ArterialBlood.cDPG) annotation (Line(points={{64.75,70},{
              30,70},{30,76},{5.1,76}}, color={0,0,127}));
      connect(DPG.y, VenousBlood.cDPG) annotation (Line(points={{64.75,70},{64,
              70},{64,72},{64,76},{84,76},{84,-90},{-9.36,-90},{-9.36,-68}},
            color={0,0,127}));
      connect(FMetHb.y, ArterialBlood.FMetHb) annotation (Line(points={{36.5,64},
              {22,64},{22,70},{5.1,70}}, color={0,0,127}));
      connect(FMetHb.y, VenousBlood.FMetHb) annotation (Line(points={{36.5,64},
              {54,64},{82,64},{82,62},{82,-88},{-1.22,-88},{-1.22,-68}}, color=
              {0,0,127}));
      connect(FHbF.y, ArterialBlood.FHbF) annotation (Line(points={{54.5,56},{
              32,56},{32,60},{10,60},{10,64},{5.1,64}}, color={0,0,127}));
      connect(FHbF.y, VenousBlood.FHbF) annotation (Line(points={{54.5,56},{54,
              56},{54,62},{80,62},{80,-86},{8.4,-86},{8.4,-68}}, color={0,0,127}));
      connect(pCO.y, ArterialBlood.pCO) annotation (Line(points={{52.75,45},{
              26.375,45},{26.375,58},{5.1,58}}, color={0,0,127}));
      connect(pCO.y, VenousBlood.pCO) annotation (Line(points={{52.75,45},{
              52.75,32},{78,32},{78,-84},{17.28,-84},{17.28,-67.22}}, color={0,
              0,127}));
      connect(ctGlb.y, ArterialBlood.ctGlb) annotation (Line(points={{32.75,38},
              {20,38},{20,52},{5.1,52}}, color={0,0,127}));
      connect(ctGlb.y, VenousBlood.ctGlb) annotation (Line(points={{32.75,38},{
              32,38},{32,24},{32,22},{76,22},{76,-82},{27.64,-82},{27.64,-68}},
            color={0,0,127}));
      connect(ArterialBlood.ctO2, VenousBlood.ctO2a) annotation (Line(points={{
              -48.84,32.8},{-48.84,-22.37},{-37.85,-22.37}}, color={0,0,127}));
      connect(ArterialBlood.ctCO2, VenousBlood.ctCO2a) annotation (Line(points=
              {{-38.92,33.4},{-38.92,10},{-56,10},{-56,-29.39},{-37.85,-29.39}},
            color={0,0,127}));
      connect(volumeDensityOfCharge.y, VenousBlood.BEox) annotation (Line(
            points={{-74.25,19},{-62,19},{-62,-36.8},{-37.48,-36.8}}, color={0,
              0,127}));
      connect(ctHb.y, VenousBlood.ctHb) annotation (Line(points={{-74.75,46},{-64,
              46},{-64,-43.04},{-37.48,-43.04}}, color={0,0,127}));
      connect(temp.y, VenousBlood.T) annotation (Line(points={{-82.75,88},{-76,
              88},{-76,50},{-94,50},{-94,-46},{-94,-51.23},{-37.11,-51.23}},
            color={0,0,127}));
      connect(molarFlowRate.y, VenousBlood.VO2) annotation (Line(points={{-81,2},
              {-60,2},{-60,2.59},{-37.85,2.59}}, color={0,0,127}));
      connect(fraction.y, VenousBlood.RQ) annotation (Line(points={{-77,-12},{-68,
              -12},{-68,-3.65},{-37.85,-3.65}}, color={0,0,127}));
      connect(volumeFlowRate.y, VenousBlood.Q) annotation (Line(points={{-75,-28},
              {-58,-28},{-58,-9.89},{-37.85,-9.89}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})));
    end VenousBlood;

    model testVenousBlood
      Parts.TestToolVenousBlood testToolVenousBlood
        annotation (Placement(transformation(extent={{-44,-94},{8,-46}})));
      Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
        annotation (Placement(transformation(extent={{-82,-34},{-74,-26}})));
      Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
        annotation (Placement(transformation(extent={{-70,-42},{-62,-34}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
        annotation (Placement(transformation(extent={{4,-4},{-4,4}},
            rotation=180,
            origin={-84,-84})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-106,-28},{-98,-22}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctPi(k=1.16) annotation (
         Placement(transformation(
            extent={{-5,-3},{5,3}},
            rotation=0,
            origin={-79,-95})));
      Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
        annotation (Placement(transformation(extent={{-70,-92},{-60,-86}})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00023333333333333)
        annotation (Placement(transformation(extent={{-88,-68},{-80,-60}})));
      Physiolibrary.Types.Constants.FractionConst RQ(k(displayUnit="1") = 0.8)
        annotation (Placement(transformation(extent={{-78,-74},{-70,-66}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst QCO(k=
            8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-74,-60},{-66,-52}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-82,-50},{-74,-42}})));
      Parts.AlveolarVentilation alveolarVentilation
        annotation (Placement(transformation(extent={{-32,4},{8,44}})));
      Physiolibrary.Chemical.Sources.UnlimitedGasStorage air(useHeatPort=true,
          usePartialPressureInput=true)
        annotation (Placement(transformation(extent={{-52,48},{-32,66}})));
      Physiolibrary.Thermal.Sources.UnlimitedHeat environment(
          useTemperatureInput=true)
        annotation (Placement(transformation(extent={{-84,6},{-70,22}})));
      Physiolibrary.Types.Constants.TemperatureConst ambientTemp(k=298.15)
        annotation (Placement(transformation(extent={{-6,86},{2,92}})));
      Physiolibrary.Types.Constants.PressureConst PB(k=100658.40249833)
        annotation (Placement(transformation(extent={{-90,76},{-82,84}})));
      Physiolibrary.Types.Constants.FractionConst FiO2(k(displayUnit="1")=
          0.21)
        annotation (Placement(transformation(extent={{-102,52},{-94,60}})));
      Parts.fractToPressure PiO2
        annotation (Placement(transformation(extent={{-86,46},{-66,66}})));
      Physiolibrary.Chemical.Components.GasSolubility gasSolubility(useHeatPort=
           true,
        solubilityRateCoef(displayUnit="m3/s") = 0.01,
        kH_T0=0.026029047188736,
        T0=310.15,
        C=1700,
        solventFraction=1)
        annotation (Placement(transformation(extent={{-22,-26},{-2,-6}})));
      Physiolibrary.Thermal.Sources.UnlimitedHeat alveolus(useTemperatureInput=
            true)
        annotation (Placement(transformation(extent={{-82,-20},{-66,-4}})));
      Parts.AlveolarVentilation_BTPS alveolarVentilation_BTPS
        annotation (Placement(transformation(extent={{30,62},{68,86}})));
      Physiolibrary.Types.Constants.FractionConst FiH2O(k(displayUnit="%")=
          0.55) annotation (Placement(transformation(extent={{-4,68},{4,76}})));
      Physiolibrary.Types.Constants.VolumeConst tidalVolume(k=0.0005)
        annotation (Placement(transformation(
            extent={{4,-4},{-4,4}},
            rotation=0,
            origin={84,92})));
      Physiolibrary.Types.Constants.FrequencyConst respiratoryRate(k=
            0.26666666666667)
        annotation (Placement(transformation(extent={{88,72},{80,80}})));
      Physiolibrary.Types.Constants.VolumeConst deathVolume(k=0.00015)
        annotation (Placement(transformation(
            extent={{4,-4},{-4,4}},
            rotation=0,
            origin={94,82})));
    equation
      connect(pO2.y, testToolVenousBlood.PaO2) annotation (Line(points={{-73,
              -30},{-52,-30},{-52,-48.4},{-46.6,-48.4}}, color={0,0,127}));
      connect(pCO2.y, testToolVenousBlood.PaCO2) annotation (Line(points={{-61,
              -38},{-54,-38},{-54,-53.2},{-46.6,-53.2}}, color={0,0,127}));
      connect(BEox.y, testToolVenousBlood.BEox) annotation (Line(points={{-73,
              -46},{-60,-46},{-60,-58},{-46.6,-58}}, color={0,0,127}));
      connect(testToolVenousBlood.QCO, QCO.y) annotation (Line(points={{-46.6,
              -62.8},{-63.3,-62.8},{-63.3,-56},{-65,-56}}, color={0,0,127}));
      connect(RQ.y, testToolVenousBlood.RQ) annotation (Line(points={{-69,-70},
              {-52,-70},{-52,-72.4},{-46.6,-72.4}}, color={0,0,127}));
      connect(temp.y, testToolVenousBlood.bloodTemp) annotation (Line(points={{-97,-25},
              {-89.5,-25},{-89.5,-77.2},{-46.6,-77.2}},          color={0,0,127}));
      connect(testToolVenousBlood.VO2, VO2.y) annotation (Line(points={{-46.6,
              -67.6},{-66,-67.6},{-66,-64},{-79,-64}}, color={0,0,127}));
      connect(ctHb.y, testToolVenousBlood.cHb) annotation (Line(points={{-79,-84},
              {-62,-84},{-62,-82},{-46.6,-82}},
                                             color={0,0,127}));
      connect(ctAlb.y, testToolVenousBlood.cAlb) annotation (Line(points={{-58.75,
              -89},{-53.375,-89},{-53.375,-86.8},{-46.6,-86.8}},        color={
              0,0,127}));
      connect(ctPi.y, testToolVenousBlood.cPi) annotation (Line(points={{-72.75,
              -95},{-56,-95},{-56,-91.6},{-46.6,-91.6}}, color={0,0,127}));
      connect(environment.port, air.heatPort) annotation (Line(
          points={{-70,14},{-42,14},{-42,57}},
          color={191,0,0},
          thickness=1));
      connect(FiO2.y, PiO2.fraction) annotation (Line(points={{-93,56},{-88,56},
              {-88,56}}, color={0,0,127}));
      connect(PiO2.partialPressure, air.partialPressure) annotation (Line(
            points={{-63.9,56.1},{-59.95,56.1},{-59.95,57},{-52,57}}, color={0,
              0,127}));
      connect(PB.y, PiO2.pressure) annotation (Line(points={{-81,80},{-76,80},{
              -76,62}}, color={0,0,127}));
      connect(air.q_out, alveolarVentilation.inspired) annotation (Line(
          points={{-32,57},{-32,57},{-32,40}},
          color={107,45,134},
          thickness=1));
      connect(alveolarVentilation.expired, air.q_out) annotation (Line(
          points={{8,40},{8,40},{8,62},{-32,62},{-32,57}},
          color={107,45,134},
          thickness=1));
      connect(alveolus.temperature, temp.y) annotation (Line(points={{-82,-12},
              {-90,-12},{-90,-25},{-97,-25}}, color={0,0,127}));
      connect(alveolus.port, gasSolubility.heatPort) annotation (Line(
          points={{-66,-12},{-40,-12},{-40,-16},{-12,-16}},
          color={191,0,0},
          thickness=1));
      connect(alveolarVentilation.alveolar, gasSolubility.q_out) annotation (
          Line(
          points={{-11.6,4},{-11.6,-1},{-12,-1},{-12,-6}},
          color={107,45,134},
          thickness=1));
      connect(alveolarVentilation_BTPS.AmbientTemperature, ambientTemp.y)
        annotation (Line(points={{33.8,86},{20,86},{20,89},{3,89}}, color={0,0,
              127}));
      connect(environment.temperature, ambientTemp.y) annotation (Line(points={
              {-84,14},{-106,14},{-106,98},{20,98},{20,89},{3,89}}, color={0,0,
              127}));
      connect(alveolarVentilation_BTPS.EnvironmentPressure, PiO2.pressure)
        annotation (Line(points={{33.8,78.8},{-76,80},{-76,62}}, color={0,0,127}));
      connect(FiH2O.y, alveolarVentilation_BTPS.EnvironmentRelativeHumidity)
        annotation (Line(points={{5,72},{33.8,72},{33.8,71.6}}, color={0,0,127}));
      connect(alveolarVentilation_BTPS.core_T, testToolVenousBlood.bloodTemp)
        annotation (Line(points={{64.2,71.6},{94,71.6},{94,-102},{-90,-102},{
              -90,-104},{-90,-103},{-90,-77.2},{-46.6,-77.2}}, color={0,0,127}));
      connect(alveolarVentilation_BTPS.AlveolarVentilation, alveolarVentilation.AlveolarVentilation_Env)
        annotation (Line(points={{68,66.8},{88,66.8},{88,28},{4,28}}, color={0,
              0,127}));
      connect(alveolarVentilation_BTPS.BronchiDilution, alveolarVentilation.BronchiDilution)
        annotation (Line(points={{68,62},{84,62},{84,16},{4,16}}, color={0,0,
              127}));
      connect(alveolarVentilation_BTPS.DeadSpace, deathVolume.y) annotation (
          Line(points={{64.2,81.2},{77.1,81.2},{77.1,82},{89,82}}, color={0,0,
              127}));
      connect(alveolarVentilation_BTPS.TidalVolume, tidalVolume.y) annotation (
          Line(points={{64.2,86},{72,86},{72,92},{79,92}}, color={0,0,127}));
      connect(alveolarVentilation_BTPS.RespRate, respiratoryRate.y) annotation (
         Line(points={{64.2,76.4},{72.1,76.4},{72.1,76},{79,76}}, color={0,0,
              127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})));
    end testVenousBlood;

    model testVenousBloodEquilibration

      Parts.TestToolVenousBlood VenousBlood
        annotation (Placement(transformation(extent={{-44,-94},{8,-46}})));
      Physiolibrary.Types.Constants.PressureConst pO2(k=13332.2387415)
        annotation (Placement(transformation(extent={{-82,-34},{-74,-26}})));
      Physiolibrary.Types.Constants.PressureConst pCO2(k=5332.8954966)
        annotation (Placement(transformation(extent={{-70,-42},{-62,-34}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctHb(k=8.4)
        annotation (Placement(transformation(extent={{4,-4},{-4,4}},
            rotation=180,
            origin={-98,-80})));
      Physiolibrary.Types.Constants.TemperatureConst temp(k=310.15)
        annotation (Placement(transformation(extent={{-106,-28},{-98,-22}})));
      Physiolibrary.Types.Constants.ConcentrationConst ctPi(k=1.16) annotation (
         Placement(transformation(
            extent={{-5,-3},{5,3}},
            rotation=0,
            origin={-79,-95})));
      Physiolibrary.Types.Constants.ConcentrationConst ctAlb(k=11.8)
        annotation (Placement(transformation(extent={{-5,-3},{5,3}},
            rotation=180,
            origin={97,0})));
      Physiolibrary.Types.Constants.MolarFlowRateConst VO2(k=
            0.00023333333333333)
        annotation (Placement(transformation(extent={{-88,-68},{-80,-60}})));
      Physiolibrary.Types.Constants.FractionConst RQ(k(displayUnit="1") = 0.8)
        annotation (Placement(transformation(extent={{-78,-74},{-70,-66}})));
      Physiolibrary.Types.Constants.VolumeFlowRateConst QCO(k=
            8.3333333333333e-05)
        annotation (Placement(transformation(extent={{-74,-60},{-66,-52}})));
      Physiolibrary.Types.Constants.ConcentrationConst BEox(k=0)
        annotation (Placement(transformation(extent={{-82,-50},{-74,-42}})));
      Parts.Ventilation Ventilation
        annotation (Placement(transformation(extent={{-50,4},{76,90}})));
      Parts.bloodCO2O2BEox pulmVenousBlood
        annotation (Placement(transformation(extent={{24,-68},{76,-10}})));
      Physiolibrary.Types.Constants.MassConcentrationConst ctGlb(k(displayUnit="kg/m3")=
             2.93)
        annotation (Placement(transformation(extent={{106,-54},{96,-46}})));
      Physiolibrary.Types.Constants.PressureConst pCO(k=2.6664477483)
        annotation (Placement(transformation(extent={{118,-48},{108,-38}})));
    Physiolibrary.Types.Constants.FractionConst FHbF(k=0.005)
      annotation (Placement(transformation(extent={{114,-36},{102,-28}})));
    Physiolibrary.Types.Constants.FractionConst FMetHb(k=0.005)
      annotation (Placement(transformation(extent={{112,-24},{100,-16}})));
    Physiolibrary.Types.Constants.ConcentrationConst DPG(k=5.4)
      annotation (Placement(transformation(extent={{110,-12},{100,-4}})));
    equation

      connect(pO2.y, VenousBlood.PaO2) annotation (Line(points={{-73,-30},{-52,-30},
              {-52,-48.4},{-46.6,-48.4}}, color={0,0,127}));
      connect(pCO2.y, VenousBlood.PaCO2) annotation (Line(points={{-61,-38},{-54,-38},
              {-54,-53.2},{-46.6,-53.2}}, color={0,0,127}));
      connect(BEox.y, VenousBlood.BEox) annotation (Line(points={{-73,-46},{-60,-46},
              {-60,-58},{-46.6,-58}}, color={0,0,127}));
      connect(VenousBlood.QCO, QCO.y) annotation (Line(points={{-46.6,-62.8},{-63.3,
              -62.8},{-63.3,-56},{-65,-56}}, color={0,0,127}));
      connect(RQ.y, VenousBlood.RQ) annotation (Line(points={{-69,-70},{-52,-70},{-52,
              -72.4},{-46.6,-72.4}}, color={0,0,127}));
      connect(temp.y, VenousBlood.bloodTemp) annotation (Line(points={{-97,-25},{-89.5,
              -25},{-89.5,-77.2},{-46.6,-77.2}}, color={0,0,127}));
      connect(VenousBlood.VO2, VO2.y) annotation (Line(points={{-46.6,-67.6},{-66,-67.6},
              {-66,-64},{-79,-64}}, color={0,0,127}));
      connect(ctHb.y, VenousBlood.cHb) annotation (Line(points={{-93,-80},{-62,-80},
              {-62,-82},{-46.6,-82}}, color={0,0,127}));
      connect(ctAlb.y, VenousBlood.cAlb) annotation (Line(points={{90.75,7.77156e-016},
              {-109.375,7.77156e-016},{-109.375,-86.8},{-46.6,-86.8}}, color={0,0,127}));
      connect(ctPi.y, VenousBlood.cPi) annotation (Line(points={{-72.75,-95},{-56,-95},
              {-56,-91.6},{-46.6,-91.6}}, color={0,0,127}));
      connect(pulmVenousBlood.ctGlb, ctGlb.y) annotation (Line(points={{79.12,-50.02},
              {94.75,-50.02},{94.75,-50}}, color={0,0,127}));
      connect(pulmVenousBlood.pCO, pCO.y) annotation (Line(points={{79.12,-44.22},{93.56,
              -44.22},{93.56,-43},{106.75,-43}}, color={0,0,127}));
      connect(FHbF.y, pulmVenousBlood.FHbF) annotation (Line(points={{100.5,-32},{92,
              -32},{92,-38.42},{79.12,-38.42}}, color={0,0,127}));
      connect(pulmVenousBlood.FMetHb, FMetHb.y) annotation (Line(points={{79.12,-32.62},
              {90,-32.62},{90,-20},{98.5,-20}}, color={0,0,127}));
      connect(pulmVenousBlood.cDPG, DPG.y) annotation (Line(points={{79.12,-26.82},{
              88,-26.82},{88,-8},{98.75,-8}}, color={0,0,127}));
      connect(pulmVenousBlood.ctPO4, VenousBlood.cPi) annotation (Line(points={{79.12,
              -21.02},{86,-21.02},{86,-100},{-56,-100},{-56,-91.6},{-46.6,-91.6}},
            color={0,0,127}));
      connect(pulmVenousBlood.ctAlb, VenousBlood.cAlb) annotation (Line(points={{79.12,
              -15.22},{84,-15.22},{84,0},{-109.375,7.77156e-016},{-109.375,-86.8},{-46.6,
              -86.8}}, color={0,0,127}));
      connect(pulmVenousBlood.T, VenousBlood.bloodTemp) annotation (Line(points={{21.92,
              -14.06},{-90,-14.06},{-90,-26},{-89.5,-25},{-89.5,-77.2},{-46.6,-77.2}},
            color={0,0,127}));
      connect(ctHb.y, pulmVenousBlood.ctHb) annotation (Line(points={{-93,-80},{-92,
              -80},{-92,-8},{16,-8},{16,-54.66},{21.4,-54.66}}, color={0,0,127}));
      connect(BEox.y, pulmVenousBlood.BEox) annotation (Line(points={{-73,-46},{-58,
              -46},{-58,-40},{14,-40},{14,-78},{49.48,-78},{49.48,-68}}, color={0,0,
              127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}})));
    end testVenousBloodEquilibration;

    model testVentilation

      Parts.Ventilation ventilation
        annotation (Placement(transformation(extent={{-38,-2},{44,72}})));
      Physiolibrary.Types.Constants.PressureConst barometricPressure(k=
            99991.79056125)
        annotation (Placement(transformation(extent={{-86,72},{-78,80}})));
      Physiolibrary.Types.Constants.FractionConst airHumidity(k=0.58)
        annotation (Placement(transformation(extent={{-88,56},{-80,64}})));
      Physiolibrary.Types.Constants.FractionConst FiO2(k=0.21)
        annotation (Placement(transformation(extent={{-90,44},{-82,52}})));
      Physiolibrary.Types.Constants.FractionConst FiCO2(k=0.00038)
        annotation (Placement(transformation(extent={{-72,38},{-64,46}})));
      Physiolibrary.Types.Constants.TemperatureConst atmosphericTemperature(k=
            298.15)
        annotation (Placement(transformation(extent={{-62,28},{-54,36}})));
      Physiolibrary.Types.Constants.TemperatureConst bodyTemperature(k=310.15)
        annotation (Placement(transformation(extent={{-76,14},{-68,22}})));
      Physiolibrary.Types.Constants.VolumeConst inspiredTidalVolume(k=0.0005)
        annotation (Placement(transformation(extent={{-42,78},{-34,86}})));
      Physiolibrary.Types.Constants.VolumeConst deadVolume(k=0.00015)
        annotation (Placement(transformation(extent={{-24,86},{-16,94}})));
      Physiolibrary.Types.Constants.FrequencyConst breathingFrequency(k=
            0.29333333333333)
        annotation (Placement(transformation(extent={{0,88},{8,96}})));
    equation
      connect(barometricPressure.y, ventilation.barometricPressure) annotation (
         Line(points={{-77,76},{-56,76},{-56,68.3},{-33.9,68.3}}, color={0,0,
              127}));
      connect(airHumidity.y, ventilation.airHumidity) annotation (Line(points={
              {-79,60},{-33.9,60},{-33.9,60.16}}, color={0,0,127}));
      connect(FiO2.y, ventilation.FiO2) annotation (Line(points={{-81,48},{-60,
              48},{-60,52.02},{-33.9,52.02}}, color={0,0,127}));
      connect(FiCO2.y, ventilation.FiCO2) annotation (Line(points={{-63,42},{
              -33.9,42},{-33.9,42.4}}, color={0,0,127}));
      connect(atmosphericTemperature.y, ventilation.atmosphericTemperature)
        annotation (Line(points={{-53,32},{-33.9,32},{-33.9,32.04}}, color={0,0,
              127}));
      connect(bodyTemperature.y, ventilation.bodyTemperature) annotation (Line(
            points={{-67,18},{-52,18},{-52,22.42},{-33.9,22.42}}, color={0,0,
              127}));
      connect(inspiredTidalVolume.y, ventilation.tidalVolume) annotation (Line(
            points={{-33,82},{-17.5,82},{-17.5,68.3}}, color={0,0,127}));
      connect(deadVolume.y, ventilation.deadSpace) annotation (Line(points={{
              -15,90},{-1.1,90},{-1.1,68.3}}, color={0,0,127}));
      connect(breathingFrequency.y, ventilation.respiratoryRate) annotation (
          Line(points={{9,92},{15.3,92},{15.3,68.3}}, color={0,0,127}));
      annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{
                -100,-100},{100,100}})));
    end testVentilation;
  end tests;
  annotation (uses(Modelica(version="3.2.1"), Physiolibrary(version="2.3.1"),
      Physiomodel(version="1.0.0")));
end NewBloodyMary;
