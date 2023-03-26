[
    QGVAR(groupAndUnitEnabled), "CHECKBOX",
    ["groupAndUnit"],
    ["GHOST - Mission Maker", "Markers"],
    false, // default value
    true, // isGlobal
    {},
    true // Needs mission restart
] call CBA_fnc_addSetting;

[
    QGVAR(intraFireteamEnabled), "CHECKBOX",
    ["intraFireteam"], 
    ["GHOST - Mission Maker", "Markers"],
    false, // default value
    true, // isGlobal
    {},
    true // Needs mission restart
] call CBA_fnc_addSetting;

[
    QGVAR(groupAndUnitUpdateDelay), "SLIDER",
    ["Update Delay"],
    ["GHOST - Mission Maker", "Markers"],
    [0,60,3,1], // [min, max, default value, trailing decimals (-1 for whole numbers only)]
    true, // isGlobal
    {},
    true // Needs mission restart
] call CBA_fnc_addSetting;
