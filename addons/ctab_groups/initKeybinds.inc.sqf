[
    "Ghosts of Battle",
    QGVAR(quickTic),
    ["Send TIC (Troops In Contact)", "Instantly broadcasts a Troops In Contact report to every player on your side: cTab mail with your callsign and grid, contact map marker, and scanner-phone alert."],
    {
        call FUNC(quickTic) // return
    },
    {},
    [20, [true, true, false]]   // Ctrl+Shift+T
] call CBA_fnc_addKeybind;
