within NewBloodyMary_testing.Parts;
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
