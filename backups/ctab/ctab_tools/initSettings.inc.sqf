// CBA Settings [ADDON: ghost_ctab_tools]

[
    QGVAR(mainMap), "CHECKBOX",
    ["Tool Picker on the Main Map", "Puts the map-tool picker down the left edge of the main map. Off leaves the tools reachable only from a cTab device, which is the right setting for a mission where the map itself is meant to be spare."],
    ["Ghosts of Battle", "Map Tools"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(markerColour), "LIST",
    ["Tool Marker Colour", "What colour the building and grid tools draw in. BCE read this off a colour list box beside its map; a tool used from a handheld has no such control, so it is a setting here."],
    ["Ghosts of Battle", "Map Tools"],
    [[0, 1, 2, 3, 4, 5, 6, 7], ["Yellow", "Red", "Green", "Blue", "Orange", "Pink", "White", "Black"], 0],
    false
] call CBA_fnc_addSetting;
