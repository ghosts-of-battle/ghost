// CBA Settings [ADDON: ghost_ctab_groups]

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable Group Target Boxes", "Adds [GROUP] recipients to the cTab message recipient list. A message sent to a group box is delivered to every player in that group."],
    ["Ghosts of Battle", "cTab Messaging"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;



[
    QGVAR(defaultGroupMedical), "EDITBOX",
    ["Default Medical Group", "Group name (as shown on its [GROUP] row, e.g. 'Alpha 1-2') preselected as recipient when opening CASEVAC or MIST. Empty = no preselection."],
    ["Ghosts of Battle", "cTab Messaging"],
    "",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(defaultGroupFires), "EDITBOX",
    ["Default Fires/Air Group", "Group name preselected as recipient when opening CALL FOR FIRE, CAS request, Airframe Check-In, HLZ or Airdrop brief. Empty = no preselection."],
    ["Ghosts of Battle", "cTab Messaging"],
    "",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(statusLogBox), "EDITBOX",
    ["Status Report Log", "File box that DEFREP and ACE reports are always filed to, on top of whatever recipients are selected. Must match a name in Shared Message Boxes. Empty disables auto-filing."],
    ["Ghosts of Battle", "cTab Messaging"],
    "HQ Log",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(commandGroup), "EDITBOX",
    ["Command Group", "Group mailed when a DEFREP/ACE report has its 'send to command group' box ticked."],
    ["Ghosts of Battle", "cTab Messaging"],
    "",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(fileBoxes), "EDITBOX",
    ["Shared Message Boxes", "Comma-separated names of shared file boxes shown as [FILE] recipients in the message send list. A report sent to a box is not mailed to anyone - it is filed side-wide (max 50 per box). Read them in the LOG app on any device; ACE Self-Interact > Report Archive also pulls a box into your own cTab inbox. Empty disables."],
    ["Ghosts of Battle", "cTab Messaging"],
    "HQ Log, Air Log, Intel",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(ticAlarm), "CHECKBOX",
    ["TIC Rings Scanner Phones", "A CONTACT REPORT (TIC) template rings the hacking scanner phone of everyone carrying one - blink, notification and warning beeps."],
    ["Ghosts of Battle", "cTab Messaging"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(ticMarkerType), "LIST",
    ["TIC Marker Type", "Map marker placed at the reported contact position when a TIC is sent."],
    ["Ghosts of Battle", "cTab Messaging"],
    [
        ["mil_warning", "mil_triangle", "mil_destroy", "hd_warning", "hd_destroy", "o_unknown"],
        ["Warning (Military)", "Triangle (Military)", "Destroy (Military)", "Warning", "Destroy", "Unknown (OPFOR)"],
        0
    ],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(ticMarkerColor), "LIST",
    ["TIC Marker Color", "Color of the TIC contact marker."],
    ["Ghosts of Battle", "cTab Messaging"],
    [
        ["ColorRed", "ColorOrange", "ColorYellow", "Default", "ColorBlack"],
        ["Red", "Orange", "Yellow", "Default", "Black"],
        0
    ],
    true
] call CBA_fnc_addSetting;

