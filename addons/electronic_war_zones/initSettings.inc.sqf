// CBA Settings [ADDON: ghost_electronic_war_zones]

[
    QGVAR(jamHudEnabled), "CHECKBOX",
    ["Show jamming meter", "On-screen meter while you are inside a jamming field. Off hides it - the jamming still happens, you just get no warning."],
    ["Ghosts of Battle", "Electronic Warfare"],
    true,
    false   // per-client display preference
] call CBA_fnc_addSetting;

[
    QGVAR(rdfItems), "EDITBOX",
    ["RDF Items (any one)", "Comma-separated item classnames; carrying ANY ONE means you are sweeping for emitters - it runs by itself and reports when the picture changes, there is nothing to activate. Defaults to the same cTab family the hacking addon uses - narrow it to a dedicated device if you have one. No mod dependency: unknown classes are simply never found."],
    ["Ghosts of Battle", "Electronic Warfare"],
    "ItemcTab,ItemAndroid,ItemAndroidMisc",
    true
] call CBA_fnc_addSetting;
