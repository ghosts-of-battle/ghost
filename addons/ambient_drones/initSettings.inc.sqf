// CBA Settings [ADDON: ghost_ambient_drones]

[
    QGVAR(qrfEnabled), "CHECKBOX",
    ["Post-Contact QRF", "A squad that stops moving where it just had a fight gets answered: enemy QRF - infantry and drones - spawns out at the QRF distance and moves in on the contact. Only fires for players outside the mission's staging zone (asked via the mission's YMF_fnc_isInStagingZone). Needs an Ambient Drones module in the mission."],
    ["Ghosts of Battle", "Ambient Drones"],
    true,   // default
    true    // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(qrfLoiterMinutes), "SLIDER",
    ["Loiter Minutes", "Minutes a player must sit within 25 m of the contact before the QRF is dispatched. Doubles as the cooldown before another QRF answers the same loiterer."],
    ["Ghosts of Battle", "Ambient Drones"],
    [1, 60, 10, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfContactWindow), "SLIDER",
    ["Contact Memory (min)", "How long a fight stays 'recent'. A loitering player is only answered if shots were fired near them within this window."],
    ["Ghosts of Battle", "Ambient Drones"],
    [1, 120, 20, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfDistance), "SLIDER",
    ["QRF Spawn Distance (m)", "How far from the contact the QRF spawns before moving in."],
    ["Ghosts of Battle", "Ambient Drones"],
    [500, 6000, 3000, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfSquads), "SLIDER",
    ["QRF Squads", "Infantry squads sent per QRF. 0 = drones only."],
    ["Ghosts of Battle", "Ambient Drones"],
    [0, 4, 1, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfUnits), "EDITBOX",
    ["QRF Squad Units", "Comma-separated unit classnames making up one QRF squad. Must belong to the Ambient Drones module's side."],
    ["Ghosts of Battle", "Ambient Drones"],
    "O_Soldier_TL_F,O_Soldier_AR_F,O_Soldier_GL_F,O_Soldier_LAT_F,O_Soldier_F,O_Soldier_F",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfDronesMin), "SLIDER",
    ["QRF Drones Min", "Fewest drones sent with a QRF, spawned at the QRF distance and hunting the contact. 0 disables QRF drones."],
    ["Ghosts of Battle", "Ambient Drones"],
    [0, 10, 2, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfDronesMax), "SLIDER",
    ["QRF Drones Max", "Most drones sent with a QRF. The count is rolled per QRF between min and max; per-type caps and the global airframe ceiling still apply."],
    ["Ghosts of Battle", "Ambient Drones"],
    [0, 10, 5, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(qrfProfile), "CHECKBOX",
    ["Virtualise QRF Squads (ALiVE)", "Hands QRF squads to ALiVE's profile system so they run virtual until they reach the players. Ignored when ALiVE's profile system is not loaded."],
    ["Ghosts of Battle", "Ambient Drones"],
    true,
    true
] call CBA_fnc_addSetting;
