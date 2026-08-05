[
    "Ghosts of Battle",
    QGVAR(placeTargetMarker),
    ["Vector: Place Target Marker", "Places a map marker on the point aimed at through a [Ghost] Vector Designator."],
    {
        call FUNC(placeTargetMarker) // return
    },
    {},
    [50, [true, true, false]]   // Ctrl+Shift+M
] call CBA_fnc_addKeybind;
