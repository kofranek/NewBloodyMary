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
      AlveolarVentilation_BTPS alveolarVentilation_BTPS
        annotation (Placement(transformation(extent={{-24,42},{18,88}})));
      Physiolibrary.Chemical.Components.GasSolubility O2gasSolubility(
        useHeatPort=true,
        solubilityRateCoef(displayUnit="ml/min") = 0.1,
        kH_T0(displayUnit="(mmol/l)/kPa at 37degC") = 0.02707666941329,
        solventFraction=1)
        annotation (Placement(transformation(extent={{-70,-60},{-50,-40}})));
      Physiolibrary.Chemical.Components.GasSolubility gasSolubility1(
        useHeatPort=true,
        solubilityRateCoef(displayUnit="m3/s"),
        kH_T0(displayUnit="(mmol/l)/(mmol/l)") = 0.604)
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
      AlveolarVentilation O2alveolarVentilation
        annotation (Placement(transformation(extent={{-78,-22},{-44,12}})));
      AlveolarVentilation CO2alveolarVentilation
        annotation (Placement(transformation(extent={{42,-22},{76,12}})));
      Physiolibrary.Thermal.Sources.UnlimitedHeat alveolusHeat(
          useTemperatureInput=true)
        annotation (Placement(transformation(extent={{-4,-56},{8,-44}})));
      GasPartialPressure PiO2 annotation (Placement(transformation(
            extent={{-7,-6},{7,6}},
            rotation=0,
            origin={-69,60})));
      GasPartialPressure PiCO2
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

    model AlveolarVentilation
      extends Physiolibrary.Icons.Lungs;
    //  parameter Real EnvironmentPressure(final displayUnit="mmHg");
    //  parameter Real EnvironmentTemperature(final displayUnit="degC");
    Physiolibrary.Chemical.Interfaces.ChemicalPort_b expired annotation (
        extent=[-10,-110; 10,-90], Placement(transformation(extent={{68,18},{
              88,38}}), iconTransformation(extent={{90,70},{110,90}})));

    Physiolibrary.Chemical.Interfaces.ChemicalPort_a inspired annotation (
        Placement(transformation(extent={{-120,8},{-80,48}}),
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
            origin={-78.0002,73.9998}),
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
          points={{-81.0003,70.9997},{-46,70.9997},{-46,20},{-34,20}},
          color={0,0,127},
          smooth=Smooth.None));
    connect(dilution.q_out, solventFlowPump.q_in) annotation (Line(
        points={{-14,28},{-2,28}},
        color={200,0,0},
        thickness=1,
        smooth=Smooth.None));
    connect(inspired, dilution.q_in) annotation (Line(
        points={{-100,28},{-34,28}},
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
              lineColor={0,0,255})}));
    end AlveolarVentilation;

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
