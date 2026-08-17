// cTab message templates - aligned to the Ghost smart cards deck (plus SITREP
// and CALL FOR FIRE which are not in the deck). Registering any custom template
// disables cTab's builtin templates, so one template with messageType 1
// (MEDEVAC type - here the 6-line CASEVAC) must always be present: the tablet's
// MEDEVAC button opens it.
//
// messageType: 0 generic, 1 MEDEVAC, 2 artillery, 3 air support
// field types: 0 text, 1 number, 2 datetime, 3 call sign, 4 frequency,
//              5 marker, 6 checkbox, 7 grid, 8 multiline text
//
// Contracts with ghost_ctab_groups:
//  - uid "ghost#tic" is special-cased: broadcast to all side players + scanner
//    alert + map marker
//  - uids "ghost#contactrep"/"ghost#sitrep": the field mapping is keyed by
//    the LINE TITLES - keep them stable when renaming

// 6-LINE CASEVAC (deck) - the MEDEVAC-type template
[
    "ghost#casevac",
    1,
    "6-LINE CASEVAC",
    "CASEVAC",
    "",
    [
        ["CASEVAC", "", []],
        ["Line 1", "PICK-UP SITE LOCATION", [
            ["", "Grid / map position of the pick-up site", 5]
        ]],
        ["Line 2", "NUMBER OF PATIENTS", [
            ["", "Number of patients", 1]
        ]],
        ["Line 3", "PRIORITY OF PATIENTS", [
            ["URGENT ", "Urgent", 1],
            ["PRIORITY ", "Priority", 1],
            ["ROUTINE ", "Routine", 1]
        ]],
        ["Line 4", "LZ SECURITY", [
            ["GREEN", "LZ secure, no threat", 6],
            ["YELLOW", "LZ secure but threatened", 6],
            ["RED", "LZ under fire", 6]
        ]],
        ["Line 5", "MARKING METHOD", [
            ["", "Marking method + location from LZ", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// MIST (deck) - medical handover, pairs with a CASEVAC
[
    "ghost#mist",
    0,
    "MIST",
    "MIST",
    "",
    [
        ["MIST", "", []],
        ["M", "MECHANISM OF INJURY & TIME", [
            ["", "What caused it and when", 0]
        ]],
        ["I", "INJURIES SUSTAINED", [
            ["", "Injuries sustained", 8]
        ]],
        ["S", "SYMPTOMS AND VITALS", [
            ["", "A-Airway B-Breathing C-Pulse D-Responsive E-Everything else", 8]
        ]],
        ["T", "TREATMENT GIVEN", [
            ["", "Treatment given", 8]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// CONTACT REPORT (TIC) (deck) - broadcast template: ghost_ctab_groups overrides
// the recipient selection and sends it to every player on your side, rings the
// hacking scanner phones, and drops a map marker at the Location line
[
    "ghost#tic",
    0,
    "CONTACT REPORT (TIC)",
    "TIC",
    "",
    [
        ["TROOPS IN CONTACT", "", []],
        ["Location", "LOCATION", [
            ["", "Grid / map position of the contact", 5]
        ]],
        ["Enemy", "ENEMY", [
            ["", "What is shooting at you", 0]
        ]],
        ["Casualties", "FRIENDLY CASUALTIES", [
            ["", "Friendly casualties", 0]
        ]],
        ["Intentions", "INTENTIONS", [
            ["", "What you intend to do", 0]
        ]],
        ["Assistance", "ASSISTANCE REQUIRED", [
            ["", "Any assistance required", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// SALUTE / CONTACTREP (deck, 7 lines incl. Remarks) - line titles S/A/L/U/T/E/R
// are the report's field keys
[
    "ghost#contactrep",
    0,
    "CONTACTREP",
    "CONTACT",
    "",
    [
        ["CONTACTREP", "", []],
        ["S", "SIZE", [
            ["", "Size of the element", 0]
        ]],
        ["A", "ACTIVITY", [
            ["", "Activity the element is performing", 0]
        ]],
        ["L", "LOCATION", [
            ["", "Grid of contact", 5]
        ]],
        ["U", "UNIT", [
            ["", "Type of unit you believe the element to be", 0]
        ]],
        ["T", "TIME", [
            ["", "Time the unit was at this location", 2]
        ]],
        ["E", "EQUIPMENT", [
            ["", "Equipment the unit has", 8]
        ]],
        ["R", "REMARKS", [
            ["", "Remarks", 8]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// SITREP (not in deck) - line titles are the report's field keys
[
    "ghost#sitrep",
    0,
    "SITREP",
    "SITREP",
    "",
    [
        ["SITREP", "", []],
        ["Callsign", "CALL SIGN", [
            ["", "Call sign", 3]
        ]],
        ["Location", "LOCATION", [
            ["", "Grid", 5]
        ]],
        ["Enemy", "ENEMY SITUATION", [
            ["", "Enemy strength / activity", 0],
            ["EKIA ", "Enemy KIA", 1]
        ]],
        ["Friendly", "FRIENDLY SITUATION", [
            ["", "Friendly forces / posture", 0],
            ["FKIA ", "Friendly KIA", 1],
            ["FWIA ", "Friendly WIA", 1]
        ]],
        ["Civ", "CIVILIAN SITUATION", [
            ["", "Civilian presence / casualties", 0]
        ]],
        ["Status", "STATUS (GREEN/AMBER/RED/BLACK)", [
            ["AMMO ", "Ammo state", 0],
            ["CAS ", "Medical / casevac state", 0],
            ["VEH ", "Vehicle state", 0],
            ["CE ", "Combat effectiveness", 0]
        ]],
        ["Remarks", "REMARKS", [
            ["", "Remarks", 8]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// CALL FOR FIRE (RE Factor card, not in deck; artillery counterpart of the
// 6-line CAS request)
[
    "ghost#callforfire",
    2,
    "CALL FOR FIRE",
    "CFF",
    "",
    [
        ["CALL FOR FIRE", "", []],
        ["Observer", "OBSERVER ID/CALL SIGN", [
            ["", "Observer call sign", 3]
        ]],
        ["Warno 1", "TYPE OF MISSION", [
            ["A", "Adjust fire", 6],
            ["B", "Fire for effect", 6],
            ["C", "Suppress", 6],
            ["D", "Immediate suppression", 6]
        ]],
        ["Warno 2", "SIZE OF ELEMENT TO FIRE", [
            ["", "Size of element", 0]
        ]],
        ["Warno 3A", "TARGET LOCATION: GRID", [
            ["", "Target grid (6-digit) or map position", 5]
        ]],
        ["Warno 3B", "TARGET LOCATION: POLAR", [
            ["Polar", "Tick if using polar - fill Target 2", 6]
        ]],
        ["Warno 3C", "TARGET LOCATION: SHIFT", [
            ["Shift", "Tick if shifting - fill Target 3", 6]
        ]],
        ["Target 2", "POLAR (FROM OBSERVER)", [
            ["", "Direction to TGT (deg)", 1],
            ["", "Distance to TGT (m)", 1]
        ]],
        ["Target 3", "SHIFT FROM A KNOWN POINT", [
            ["A", "Lateral shift", 0],
            ["B", "Range shift", 0],
            ["C", "Vertical shift", 0]
        ]],
        ["", "TARGET DESCRIPTION", [
            ["", "Target description", 8]
        ]],
        ["", "METHOD OF ENGAGEMENT", [
            ["A", "HE", 6],
            ["B", "Smoke", 6],
            ["C", "Illumination", 6],
            ["D", "Cluster", 6],
            ["E", "Laser-guided", 6],
            ["F", "Airburst", 6],
            ["", "Number of rounds", 1]
        ]],
        ["", "DANGER CLOSE", [
            ["DC", "Danger close", 6],
            ["", "Distance to friendlies (m)", 1]
        ]],
        ["", "METHOD OF FIRE CONTROL", [
            ["A", "Fire when ready", 6],
            ["B", "At my command", 6],
            ["C", "Time on target", 6],
            ["D", "Cannot observe", 6],
            ["E", "Check fire", 6],
            ["F", "Fire again", 6]
        ]],
        ["", "TIME ON TARGET (IF C)", [
            ["", "TOT", 2]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// 6-LINE CAS REQUEST (deck)
[
    "ghost#cas",
    3,
    "6-LINE CAS REQUEST",
    "CAS",
    "",
    [
        ["CAS REQUEST", "", []],
        ["Line 1", "GRID REFERENCE", [
            ["", "Target grid / map position", 5]
        ]],
        ["Line 2", "MAP REFERENCE", [
            ["", "Map marker / reference point", 0]
        ]],
        ["Line 3", "STRIKE APPROACH", [
            ["", "Approach heading for the strike", 0]
        ]],
        ["Line 4", "TARGET DESCRIPTION", [
            ["", "Target description", 8]
        ]],
        ["Line 5", "RANGE FROM FRIENDLIES", [
            ["", "Meters - under 300m is DANGER CLOSE!", 1],
            ["DANGER CLOSE", "Under 300 m", 6]
        ]],
        ["Line 6", "MARKED BY", [
            ["", "Smoke / laser / IR / none", 0]
        ]],
        ["Optional", "PREFERRED MUNITIONS", [
            ["", "Preferred munitions", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// AIRFRAME CHECK-IN (deck)
[
    "ghost#checkin",
    3,
    "AIRFRAME CHECK-IN",
    "CHECK-IN",
    "",
    [
        ["AIRFRAME CHECK-IN", "", []],
        ["Line 1", "AIRFRAME CALL SIGN", [
            ["", "Call sign", 3]
        ]],
        ["Line 2", "NUMBER AND TYPE OF AIRCRAFT", [
            ["", "e.g. 2x AH-99", 0]
        ]],
        ["Line 3", "POSITION AND ALTITUDE", [
            ["", "Grid / marker / battle position", 5],
            ["ALT ", "Altitude (m)", 1]
        ]],
        ["Line 4", "ORDNANCE", [
            ["", "Quantity of each munition", 8]
        ]],
        ["Line 5", "TIME ON STATION", [
            ["", "Time available for tasking", 0]
        ]],
        ["Line 6", "ABORT CODE", [
            ["", "Provided by flight lead", 0]
        ]],
        ["Line 7", "REMARKS", [
            ["", "Optional", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// HELICOPTER LANDING ZONE BRIEF (deck)
[
    "ghost#hlz",
    3,
    "HLZ BRIEF",
    "HLZ",
    "",
    [
        ["HELICOPTER LANDING ZONE", "", []],
        ["Line 1", "HLZ LOCATION", [
            ["", "Grid / map position", 5]
        ]],
        ["Line 2", "LZ/DZ NAME / MAP MARKING", [
            ["", "Name or map marking", 0]
        ]],
        ["Line 3", "EXTRACT CONTENTS", [
            ["", "Who / what is being extracted", 0]
        ]],
        ["Line 4", "SECURITY", [
            ["GREEN", "Secure, no threat", 6],
            ["YELLOW", "Secure but threatened", 6],
            ["RED", "Under fire", 6]
        ]],
        ["Line 5", "MARKING METHOD", [
            ["", "Method + location from HLZ", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// AIRDROP BRIEF (deck)
[
    "ghost#airdrop",
    3,
    "AIRDROP BRIEF",
    "AIRDROP",
    "",
    [
        ["AIRDROP BRIEF", "", []],
        ["Line 1", "POINT OF IMPACT LOCATION", [
            ["", "Grid / map position", 5]
        ]],
        ["Line 2", "POINT OF IMPACT ALTITUDE", [
            ["", "Altitude (m)", 1]
        ]],
        ["Line 3", "RUN-IN HEADING", [
            ["", "Heading (deg)", 1]
        ]],
        ["Line 4", "DZ DESCRIPTION / MARK", [
            ["", "DZ description or mark", 0]
        ]],
        ["Line 5", "FRIENDLIES LOCATION / MARK", [
            ["", "Location of friendlies / mark", 0]
        ]],
        ["Line 6", "SURFACE WINDS", [
            ["", "Surface winds", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// VEHICLE REPORT / DEFREP (deck) - state per line: pick ONE color
[
    "ghost#defrep",
    0,
    "VEHICLE REPORT (DEFREP)",
    "DEFREP",
    "",
    [
        ["DEFREP", "", []],
        ["Vehicle", "VEHICLE", [
            ["", "Vehicle callsign / type", 0]
        ]],
        ["Line 1", "DAMAGE", [
            ["GREEN", "No damage", 6],
            ["YELLOW", "Slight damage, still combat effective", 6],
            ["RED", "Not combat effective", 6],
            ["BLACK", "Destroyed", 6]
        ]],
        ["Line 2", "EQUIPMENT", [
            ["GREEN", "No damage", 6],
            ["YELLOW", "Slight damage, can carry on with mission", 6],
            ["RED", "Major damage to equipment", 6],
            ["BLACK", "No longer mission capable", 6]
        ]],
        ["Line 3", "FUEL", [
            ["GREEN", "More than 1/2", 6],
            ["YELLOW", "Less than 1/2", 6],
            ["RED", "Less than 1/4", 6],
            ["BLACK", "EMPTY!", 6]
        ]],
        // read by ghost_ctab_groups: ticked = also mailed to the command group
        ["Command", "ROUTING", [
            ["CMD", "Also send to the command group", 6]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// ACE REPORT (deck) - Ammunition / Casualties / Equipment, pick ONE color per line
[
    "ghost#ace",
    0,
    "ACE REPORT",
    "ACE",
    "",
    [
        ["ACE REPORT", "", []],
        ["A", "AMMUNITION", [
            ["GREEN", "Good", 6],
            ["YELLOW", "Running low", 6],
            ["RED", "Critical", 6],
            ["BLACK", "Out", 6]
        ]],
        ["C", "CASUALTIES", [
            ["GREEN", "None", 6],
            ["YELLOW", "Walking wounded", 6],
            ["RED", "Urgent casualties", 6],
            ["BLACK", "KIA", 6]
        ]],
        ["E", "EQUIPMENT", [
            ["GREEN", "No damage", 6],
            ["YELLOW", "Slight damage, mission capable", 6],
            ["RED", "Major damage", 6],
            ["BLACK", "No longer mission capable", 6]
        ]],
        // read by ghost_ctab_groups: ticked = also mailed to the command group
        ["Command", "ROUTING", [
            ["CMD", "Also send to the command group", 6]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;

// REACT/QRF LINK-UP PLAN (deck)
[
    "ghost#qrf",
    0,
    "REACT/QRF LINK-UP",
    "QRF",
    "",
    [
        ["QRF LINK-UP PLAN", "", []],
        ["Line 1", "WHO LINKS WITH WHO", [
            ["", "Elements linking up", 0]
        ]],
        ["Line 2", "LINK-UP LOCATION", [
            ["", "Grid or map marker", 5]
        ]],
        ["Line 3", "SUGGESTED ROUTE", [
            ["", "Route to the link-up site", 0]
        ]],
        ["Line 4", "SPECIAL ATTACHMENTS NEEDED", [
            ["", "Any special attachments needed", 0]
        ]],
        ["Line 5", "ACTION ON ARRIVAL", [
            ["", "Cordon area, block route, set up CCP, etc.", 0]
        ]]
    ]
] call ctab_fnc_registerMessageTemplate;
