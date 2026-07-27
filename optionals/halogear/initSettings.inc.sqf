// CBA Settings [ADDON: ghost_halogear]

[
    QGVAR(hypoxiaAltitude), "SLIDER",
    ["Hypoxia altitude", "Altitude ASL above which a jumper with no air supply starts to suffocate."],
    ["Ghosts of Battle", "HALO Gear"],
    [1000, 10000, 4000, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(missionConfiguredGear), "EDITBOX",
    ["Extra protective gear", "Comma-separated classnames to treat as an air supply, on top of anything whose config sets ghost_halogear_rebreather = 1. For gear from mods this addon does not know about."],
    ["Ghosts of Battle", "HALO Gear"],
    "",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(playRebreatherSounds), "CHECKBOX",
    ["Rebreather sounds", "Play muffled breathing while any protective gear is worn. This addon's own HALO masks always play regardless."],
    ["Ghosts of Battle", "HALO Gear"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(breakingChancePerc), "SLIDER",
    ["Mask breaking chance (%)", "Chance per jump that the ESS mask fails in freefall. 0 disables it."],
    ["Ghosts of Battle", "HALO Gear"],
    [0, 100, 5, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(aadDefaultAltitude), "EDITBOX",
    ["AAD default altitude", "Altitude ASL an auto-activation device deploys at until it is set on the individual rig or object."],
    ["Ghosts of Battle", "HALO Gear"],
    "300",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(allowManualAADSetting), "CHECKBOX",
    ["Allow manual AAD setting", "Let players change their own AAD altitude from the ACE self-interaction menu."],
    ["Ghosts of Battle", "HALO Gear"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(disableHud), "CHECKBOX",
    ["Disable mask HUD", "Hide the whole ESS mask HUD."],
    ["Ghosts of Battle", "HALO Gear"],
    false,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(disableHudCompass), "CHECKBOX",
    ["Disable HUD compass", "Hide the floating N/S/E/W compass."],
    ["Ghosts of Battle", "HALO Gear"],
    false,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(disableHudAltimeter), "CHECKBOX",
    ["Disable HUD altimeter", "Hide the altitude readout."],
    ["Ghosts of Battle", "HALO Gear"],
    false,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(disableHudVelocity), "CHECKBOX",
    ["Disable HUD vertical speed", "Hide the vertical air speed readout."],
    ["Ghosts of Battle", "HALO Gear"],
    false,
    true
] call CBA_fnc_addSetting;
