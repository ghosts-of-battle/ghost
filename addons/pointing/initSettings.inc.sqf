
if (EGVAR(common,aceFinger)) then {
    [
        QGVAR(vehicleEnabled),
        "CHECKBOX",
        [LSTRING(Vehicle_Enabled), LSTRING(Vehicle_Enabled_Description)],
        ["Ghosts of Battle", LSTRING(DisplayName)],
        true,
        true
    ] call CBA_fnc_addSetting;
};
