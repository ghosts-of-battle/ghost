// CBA Settings [ADDON: ghost_ctab_devices]

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable Device App Menus", "ATAK-style app menus on the handheld and tablets: Map, UAV, Helmet Cam, Messages, Intel and the field apps, opened from each device's menu key."],
    ["Ghosts of Battle", "cTab Devices"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

// The grey-screen checkbox that used to sit here was read by nothing: a player
// could toggle it and watch no screen change. What it described - repainting
// cTab's flat blue backdrop - is the Screen Shade picker in the device's own
// settings app (S7_BGCOLOURS, per-profile, gunmetal by default), which has
// always done the job. One control, and it works.

[
    QGVAR(s23Case), "LIST",
    ["S23 Case", "Which case the handset wears. One handset, painted two ways - a second item that differed only in colour is the duplication this rework took out."],
    ["Ghosts of Battle", "cTab Devices"],
    [[0, 1], ["Black", "Tan"], 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(hideStockSignalIcons), "CHECKBOX",
    ["Hide cTab's Signal Icons", "Hides cTab's own signal-strength and satellite icons in the handset header, where this addon's jam and mesh state icons also sit. Off by default: cTab draws them, they are not in anybody's way, and a device that quietly loses its status icons a second after opening looks broken."],
    ["Ghosts of Battle", "cTab Devices"],
    false,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(mirrorNotifications), "CHECKBOX",
    ["Mirror cTab Notifications", "Puts cTab's notifications on your own screen as well as inside the device. cTab draws them into the interface that is open, which is unreadable on a handset held up in the corner - this is what makes a message arriving while you are moving something you actually notice."],
    ["Ghosts of Battle", "cTab Devices"],
    true,
    false
] call CBA_fnc_addSetting;

// Where the held-up S23 sits. Client settings, moved live while the phone is
// up; the CBA settings page's own per-setting reset is the way back to stock.
[
    QGVAR(dspRight), "SLIDER",
    ["Held-Up S23: Right", "How far right of cTab's stock corner the held-up handset sits, as a fraction of its own width. cTab pins it half off the left edge of the screen; the default brings the whole case on."],
    ["Ghosts of Battle", "cTab Devices"],
    [-0.5, 1.5, 0.18, 2],
    false,
    {call FUNC(dspNudge)}
] call CBA_fnc_addSetting;

[
    QGVAR(dspUp), "SLIDER",
    ["Held-Up S23: Up", "How far above cTab's stock corner the held-up handset sits, as a fraction of its own height - clear of the bottom edge and the chat lines."],
    ["Ghosts of Battle", "cTab Devices"],
    [-0.5, 1.5, 0.17, 2],
    false,
    {call FUNC(dspNudge)}
] call CBA_fnc_addSetting;

// Extra convoy names, ADDED TO the mission's own element callsigns.
// FUNC(convoyNames) reads description.ext's Dynamic_Groups first, so REAPER,
// NOMAD and the rest are offered without being re-typed here where they could
// drift out of step with the mission. This is for the generic columns that
// belong to no squad - and it is the whole list on a mission that defines no
// groups at all.
[
    QGVAR(convoyNames), "EDITBOX",
    ["Convoy / Callsign List", "Comma-separated EXTRA names a vehicle can be registered to on the FBCB4's convoy app. The mission's own group callsigns (description.ext, Dynamic_Groups) are offered first and do not need listing here - anything repeated is dropped. The handhelds pick from the same list to choose which group's vehicles to watch."],
    ["Ghosts of Battle", "cTab Devices"],
    "Convoy 1, Convoy 2, Convoy 3",
    true
] call CBA_fnc_addSetting;
