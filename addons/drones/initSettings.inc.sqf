// CBA Settings [ADDON: ghost_drones]

// Off is for missions that want drones to be eyes only. It is a real difference
// in difficulty: with the datalink on, one recon drone that spots you has told
// every armed airframe and AA site on its side where you are, and they can
// engage without ever seeing you themselves.
[
    QGVAR(datalink), "CHECKBOX",
    ["Drone datalink", "On: every drone this mod spawns joins its side's sensor network - it reports the contacts it sees and receives everyone else's, so recon cues the shooters. Off: drones only know what they can see themselves."],
    ["Ghosts of Battle", "Drones"],
    true,
    true    // isGlobal - the server decides, so every machine spawns alike
] call CBA_fnc_addSetting;
