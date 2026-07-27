[
    QGVAR(enableAddon),
    "CHECKBOX",
    [LSTRING(enableAddon), LSTRING(enableAddon_Description)],
    ["Ghosts of Battle", LSTRING(DisplayName)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(teleportToLeader),
    "CHECKBOX",
    [LSTRING(TeleportToLeader), LSTRING(TeleportToLeader_Description)],
    ["Ghosts of Battle", LSTRING(DisplayName)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(teleportToVehicle),
    "CHECKBOX",
    [LSTRING(TeleportToVehicle), LSTRING(TeleportToVehicle_Description)],
    ["Ghosts of Battle", LSTRING(DisplayName)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(removeBody),
    "CHECKBOX",
    [LSTRING(RemoveBody), LSTRING(RemoveBody_Description)],
    ["Ghosts of Battle", LSTRING(DisplayName)],
    true,
    true
] call CBA_fnc_addSetting;
