// CBA Settings [ADDON: ghost_equipment]

[
    QGVAR(markerEnabled), "CHECKBOX",
    ["Enable Vector Target Marker", "Allows placing a map marker on the point aimed at through a [Ghost] Vector Designator."],
    ["Ghosts of Battle", "Equipment"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(markerType), "LIST",
    ["Vector Marker Type", "Marker placed on the target position."],
    ["Ghosts of Battle", "Equipment"],
    [
        ["hd_dot", "hd_objective", "hd_destroy", "hd_warning", "hd_unknown", "mil_dot", "mil_objective", "mil_destroy", "mil_warning", "mil_triangle"],
        ["Dot", "Objective", "Destroy", "Warning", "Unknown", "Dot (Military)", "Objective (Military)", "Destroy (Military)", "Warning (Military)", "Triangle (Military)"],
        0
    ],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(markerColor), "LIST",
    ["Vector Marker Color", "Color of the marker placed on the target position."],
    ["Ghosts of Battle", "Equipment"],
    [
        ["Default", "ColorBlack", "ColorGrey", "ColorRed", "ColorGreen", "ColorBlue", "ColorOrange", "ColorYellow", "ColorWhite"],
        ["Default", "Black", "Grey", "Red", "Green", "Blue", "Orange", "Yellow", "White"],
        0
    ],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(marker3DDuration), "SLIDER",
    ["Vector 3D Marker Duration (s)", "Shows the marker name in-world (3D) at the target position for this many seconds. 0 = disabled."],
    ["Ghosts of Battle", "Equipment"],
    [0, 600, 120, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(markerDuration), "SLIDER",
    ["Vector Marker Lifetime (s)", "Marker is deleted after this many seconds. 0 = permanent."],
    ["Ghosts of Battle", "Equipment"],
    [0, 1800, 0, 0],
    true
] call CBA_fnc_addSetting;
