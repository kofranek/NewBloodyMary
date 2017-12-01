within NewBloodyMary_testing.Parts;
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
