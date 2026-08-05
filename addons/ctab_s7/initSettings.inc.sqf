// CBA Settings [ADDON: ghost_ctab_s7]

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable S7 App Drawer", "ATAK-style app drawer on the S7 Android: Map, UAV, Helmet Cam, Messages and Intel, toggled with the third bezel key. The same apps the tablet's desktop offers."],
    ["Ghosts of Battle", "cTab S7"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(greyScreen), "CHECKBOX",
    ["Grey Device Screens", "Replaces cTab's flat blue screen backdrop with a gunmetal grey one, so the devices read as field kit rather than a desktop window."],
    ["Ghosts of Battle", "cTab S7"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(hideStockSignalIcons), "CHECKBOX",
    ["Hide cTab's Signal Icons", "Hides cTab's own signal-strength and satellite icons in the handset header, where this addon's jam and mesh state icons already sit. Two sets of bars in one corner is noise. Handsets only - the tablets keep theirs."],
    ["Ghosts of Battle", "cTab S7"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(mirrorNotifications), "CHECKBOX",
    ["Mirror cTab Notifications", "Puts cTab's notifications on your own screen as well as inside the device. cTab draws them into the interface that is open, which is unreadable on a handset held up in the corner - this is what makes a message arriving while you are moving something you actually notice."],
    ["Ghosts of Battle", "cTab S7"],
    true,
    false
] call CBA_fnc_addSetting;
