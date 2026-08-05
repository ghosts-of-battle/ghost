// CBA Settings [ADDON: ghost_common]

[
    QGVAR(isrVariable), "EDITBOX",
    ["ISR unit variable", "Name of the unit variable marking someone as an ISR operator. Gates the hacking tablet and Intel Hunt processing. Set it on a unit with: this setVariable ['isISR', true]"],
    ["Ghosts of Battle", "Common"],
    "isISR",
    true
] call CBA_fnc_addSetting;
