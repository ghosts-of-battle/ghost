// CBA Settings [ADDON: ghost_ctab_groups]

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable Group Target Boxes", "Adds [GROUP] recipients to the cTab message recipient list. A message sent to a group box is delivered to every player in that group."],
    ["Ghosts of Battle", "cTab Messaging"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(aliveReports), "CHECKBOX",
    ["Post Group Reports to ALiVE", "CONTACTREP and SITREP templates sent to a group box are also posted into ALiVE as SPOTREP/SITREP (map diary + marker). Requires ALiVE; SITREP additionally requires a C2ISTAR module."],
    ["Ghosts of Battle", "cTab Messaging"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(sitrepMarkerType), "LIST",
    ["SITREP Marker Type", "Map marker placed at the reported position when a SITREP is posted to ALiVE. Labeled with group name and time."],
    ["Ghosts of Battle", "cTab Messaging"],
    [
        ["b_unknown", "o_unknown", "n_unknown", "b_inf", "b_hq", "mil_objective"],
        ["Unknown (BLUFOR)", "Unknown (OPFOR)", "Unknown (Independent)", "Infantry (BLUFOR)", "HQ (BLUFOR)", "Objective"],
        0
    ],
    true
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
    ["Shared Message Boxes", "Comma-separated names of shared file boxes shown as [FILE] recipients in the message send list. A report sent to a box is not mailed to anyone - it is filed side-wide (max 50 per box) and pulled from ACE Self-Interact > cTab Archive into your own inbox. Empty disables."],
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

[
    QGVAR(aliveLocality), "LIST",
    ["ALiVE Report Visibility", "Who the posted ALiVE report is shared with."],
    ["Ghosts of Battle", "cTab Messaging"],
    [
        ["GLOBAL", "SIDE", "GROUP"],
        ["Everyone", "Own side", "Own group"],
        1
    ],
    true
] call CBA_fnc_addSetting;
