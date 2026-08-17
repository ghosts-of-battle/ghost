// CBA Settings [ADDON: ghost_adminpanel]
//
// DELIBERATELY ALMOST EMPTY. The console is drawn from the tacpad's settings -
// scheme, opacity, UI size - because a suite with two colour pickers has two
// colour pickers to keep in step. What is here is the one thing the tacpad has
// no opinion about: whether this addon is switched on at all.

[
    QGVAR(enabled), "CHECKBOX",
    ["Enable admin console", "Registers the admin console keybinds and the #ghost admin commands. Off leaves the addon loaded and inert - it does not grant or revoke anybody's admin access either way."],
    ["Ghosts of Battle", "Admin Console"],
    true,
    true
] call CBA_fnc_addSetting;

// WHO CAN OPEN IT, beyond the mission's own list. Ghost's admin flag is what
// #login and the server host set, and honouring it means a host who is already
// an admin does not have to edit a mission file to use the console on it.
[
    QGVAR(honourGhostAdmin), "CHECKBOX",
    ["Ghost admins may open it", "Lets anyone carrying ghost's own admin flag open the console, as well as the uids in the mission's list. Off means the mission's list is the only way in."],
    ["Ghosts of Battle", "Admin Console"],
    true,
    true
] call CBA_fnc_addSetting;
