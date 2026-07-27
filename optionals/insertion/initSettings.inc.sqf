// CBA Settings [ADDON: ghost_insertion]

[
    QGVAR(allowStatic), "CHECKBOX",
    ["Allow static-line insertion", "Offer the static-line parachute drop in the insertion planner."],
    ["Ghosts of Battle", "Insertion Handler"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(allowHALO), "CHECKBOX",
    ["Allow HALO insertion", "Offer the HALO jump in the insertion planner. Uses the Ghost HALO Gear AAD settings."],
    ["Ghosts of Battle", "Insertion Handler"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(allowSub), "CHECKBOX",
    ["Allow submarine insertion", "Offer the submarine/SDV insertion in the planner."],
    ["Ghosts of Battle", "Insertion Handler"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(SupplyPlanesBluFor), "EDITBOX",
    ["BLUFOR drop aircraft", "Comma-separated aircraft classnames offered to BLUFOR in the planner."],
    ["Ghosts of Battle", "Insertion Handler"],
    "B_Heli_Transport_01_F,B_T_VTOL_01_infantry_F,B_Plane_Fighter_01_F",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(SupplyPlanesOpFor), "EDITBOX",
    ["OPFOR drop aircraft", "Comma-separated aircraft classnames offered to OPFOR in the planner."],
    ["Ghosts of Battle", "Insertion Handler"],
    "O_Heli_Light_02_unarmed_F,O_T_VTOL_02_infantry_F",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(SupplyPlanesInde), "EDITBOX",
    ["INDFOR drop aircraft", "Comma-separated aircraft classnames offered to INDFOR in the planner."],
    ["Ghosts of Battle", "Insertion Handler"],
    "I_Heli_Transport_02_F,I_C_Plane_Civil_01_F",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(objectsToExclude), "EDITBOX",
    ["Never loadable", "Comma-separated classnames the cargo loader always refuses, on top of the built-in list."],
    ["Ghosts of Battle", "Insertion Handler"],
    "",
    true
] call CBA_fnc_addSetting;
