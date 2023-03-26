[
    QGVAR(maxAICount),
    "SLIDER",
    ["Maximum AI Count", "Maximum active AI allowed at one time."],
    ["GHOST - Mission Maker", "ZeusHC Spawning"],
    [1, 200, 90, 0],
    1
] call cba_settings_fnc_init;

[
    QGVAR(maxGroupCountPerSide),
    "SLIDER",
    ["Maximum Groups Per Side", "Maximum active groups allowed (per side)."],
    ["GHOST - Mission Maker", "ZeusHC Spawning"],
    [1, 280, 280, 0],
    1
] call cba_settings_fnc_init;

[
    QGVAR(delayBetweenUnitCreation),
    "SLIDER",
    ["Delay Between AI Creation", "Delay between creating AI units from ghost tools."],
    ["GHOST - Mission Maker", "ZeusHC Spawning"],
    [0, 10, 0.4, 1],
    1
] call cba_settings_fnc_init;

[
    QGVAR(delayBetweenGroupCreation),
    "SLIDER",
    ["Delay Between AI Group Creation", "Delay between creating AI groups from ghost tools."],
    ["GHOST - Mission Maker", "ZeusHC Spawning"],
    [0, 10, 1, 1],
    1
] call cba_settings_fnc_init;
