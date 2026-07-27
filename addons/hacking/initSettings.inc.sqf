// CBA Settings [ADDON: ghost_hacking]

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable Hacking", "Master toggle for the tower/drone hacking self-interaction."],
    ["Ghosts of Battle", "Hacking"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(requiredItems), "EDITBOX",
    ["Required Items (any one)", "Comma-separated item classnames; carrying ANY ONE of these in inventory unlocks the Hack menu. No mod dependency - unknown classes are simply never found."],
    ["Ghosts of Battle", "Hacking"],
    "ItemcTab,ItemAndroid,ItemAndroidMisc",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(condition), "EDITBOX",
    ["Hack Condition", "SQF condition that must also return true before anyone can hack. `_this` is the unit. Left as ""true"" it never blocks anything. Example: side group _this == west"],
    ["Ghosts of Battle", "Hacking"],
    "true",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(towerClasses), "EDITBOX",
    ["Hackable Tower Classes", "Comma-separated object classnames hackable as 'towers', in addition to Electronic War Zones emitters."],
    ["Ghosts of Battle", "Hacking"],
    "Land_TTowerBig_2_F,Land_TTowerBig_1_F,Land_Communication_F,Land_Antenna_01_F,Land_Antenna_02_F",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(droneClasses), "EDITBOX",
    ["Downable Drone Classes", "Comma-separated vehicle classnames that 'Down Drone' may target. Blank = any enemy UAV, which is the old behaviour. Listed classes still have to be enemy UAVs."],
    ["Ghosts of Battle", "Hacking"],
    "",
    true
] call CBA_fnc_addSetting;
