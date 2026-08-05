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
    ["Required Items (any one)", "Comma-separated item classnames; carrying ANY ONE unlocks the hacking tablet. Defaults to the Intrusion Tablet item - add ItemcTab,ItemAndroid etc if you would rather any terminal worked."],
    ["Ghosts of Battle", "Hacking"],
    "ghost_hacking_tabletItem",
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

[
    QGVAR(requireISR), "CHECKBOX",
    ["Require ISR operator", "On: only a unit flagged as ISR can use the tablet, on top of carrying it. The flag and its variable name are shared with Intel Hunt - see Common."],
    ["Ghosts of Battle", "Hacking"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(scannerItems), "EDITBOX",
    ["Scanner Items (any one)", "Comma-separated item classnames that count as a signal scanner. Reading warning lamps needs no ISR flag - only the tablet does."],
    ["Ghosts of Battle", "Hacking"],
    "ghost_hacking_scannerItem",
    true
] call CBA_fnc_addSetting;

// Per-client, not global: an alarm ring is the one sound in the addon that
// goes off in everyone's ears at once, so how loud it is belongs to the ears.
[
    QGVAR(alarmVolume), "SLIDER",
    ["Scanner Alarm Volume", "How loud YOUR scanner's alarm beeps. 0 silences the beep entirely - the screen still blinks and the notification still shows."],
    ["Ghosts of Battle", "Hacking"],
    [0, 2, 1, 1],   // min, max, default, decimals shown
    false           // per-client
] call CBA_fnc_addSetting;
