
if (EGVAR(common,aceTowing)) then {
    [
        QGVAR(addToHeavyDutyVehicles),
        "CHECKBOX",
        [LSTRING(AddToHeavyDutyVehicles), LSTRING(AddToHeavyDutyVehicles_Description)],
        ["Ghosts of Battle", LSTRING(DisplayName)],
        true,
        1,
        {},
        true
    ] call CBA_fnc_addSetting;

    [
        QGVAR(addToCars),
        "CHECKBOX",
        [LSTRING(AddToCars), LSTRING(AddToCars_Description)],
        ["Ghosts of Battle", LSTRING(DisplayName)],
        false,
        1,
        {},
        true
    ] call CBA_fnc_addSetting;
};
