// THE COMPLETE FACTION DUMP - every faction, its groups, its units, their kit.
//
// Paste into the debug console and Exec. Output goes to the RPT:
//   %LOCALAPPDATA%\Arma 3\Arma3_x64_*.rpt   (newest file)
//
// EVERY faction. Not every faction with a CfgFactionClasses entry, not every
// faction on a side this script happens to know the name of, and not every unit
// the editor is willing to show you. The faction list is the UNION of three
// sources, because each one on its own is incomplete:
//
//   1. CfgFactionClasses  - the faction entry, all of its properties
//   2. CfgVehicles        - every unit and vehicle, and the kit it carries
//   3. CfgGroups          - every group, and every man in it
//
// A faction can appear in any of those and be absent from the others. Mod
// factions in particular ship groups without a faction class, and units whose
// faction string matches nothing at all. Walking CfgFactionClasses alone - which
// every earlier version of this script did - drops them silently.
//
// SCOPE 1 UNITS ARE INCLUDED. B_Soldier_AR_F is scope 1: you cannot place it in
// the editor, but BLU_F's squads are built out of it. A scope-2-only dump
// answers "what can I place" and cannot answer "what is in this group", which
// is usually the actual question.
//
// Set _only to a faction classname for one faction. Leave it "" for all of them.
// _sides filters by side; leave it [] for every side including ones this script
// has no name for.
//
// _deep = true additionally expands each unit's FULL recursive config. That is
// enormous - a full-depth run made 2.4 million lines for nine factions - so it
// is off. Everything describing what a unit IS and what it CARRIES is dumped
// either way.

private _only  = "";
private _sides = [];        // [] = all. Or e.g. ["West"], [0,1], ["West",2]
private _deep  = false;

[_only, _sides, _deep] spawn {
    params ["_only", "_sides", "_deep"];

    private _sideName = {
        switch (_this) do {
            case 0: {"East"};
            case 1: {"West"};
            case 2: {"Guerrilla"};
            case 3: {"Civilian"};
            case 4: {"Empty"};
            case 7: {"Logic"};
            default {format ["side%1", _this]};
        };
    };

    // Accept either names or numbers in _sides, and treat [] as "everything".
    private _wantSide = {
        params ["_n"];
        if (_sides isEqualTo []) exitWith {true};
        if (_n in _sides) exitWith {true};
        (_n call _sideName) in _sides
    };

    // ---- full recursive config of one class ---------------------------------
    private _fnc_dump = {
        params ["_cfg", "_ind"];
        {
            private _e = _x;
            private _n = configName _e;
            if (isClass _e) then {
                diag_log text format ["%1class %2 {", _ind, _n];
                [_e, _ind + "    "] call _fnc_dump;
                diag_log text format ["%1};", _ind];
            };
            if (isArray _e) then {
                diag_log text format ["%1%2[] = %3;", _ind, _n, getArray _e];
            };
            if (isNumber _e) then {
                diag_log text format ["%1%2 = %3;", _ind, _n, getNumber _e];
            };
            if (isText _e) then {
                diag_log text format ["%1%2 = %3;", _ind, _n, getText _e];
            };
        } forEach configProperties [_cfg, "true", true];
    };

    // ---- 1. every faction class, keyed by lowercase name --------------------
    private _facCfg = createHashMap;
    {
        _facCfg set [toLower (configName _x), _x];
    } forEach ("true" configClasses (configFile >> "CfgFactionClasses"));

    // ---- 2. every unit, bucketed by the faction IT claims --------------------
    // Scope is recorded, not used to exclude. A group made of scope-1 men is
    // still a group, and "every unit has a backpack" is a question about all of
    // them.
    private _byFac = createHashMap;
    {
        private _f = getText (_x >> "faction");
        if (_f != "") then {
            private _k = toLower _f;
            private _l = _byFac getOrDefault [_k, []];
            _l pushBack _x;
            _byFac set [_k, _l];
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));

    // ---- 3. every group, bucketed by the faction IT claims -------------------
    // Every side class under CfgGroups is walked, not a hardcoded list of four:
    // a mod is free to add its own, and naming the four vanilla ones is how a
    // whole side goes missing.
    private _grpFac = createHashMap;
    {
        private _sideCfg = _x;
        private _sName = configName _sideCfg;
        {
            private _fCfg = _x;
            {
                private _catCfg = _x;
                {
                    private _grp = _x;
                    // Read the property, not the path: a group can sit under one
                    // faction class and declare itself part of another.
                    private _f = toLower (getText (_grp >> "faction"));
                    if (_f isEqualTo "") then {_f = toLower (configName _fCfg)};
                    private _l = _grpFac getOrDefault [_f, []];
                    _l pushBack [_sName, configName _catCfg, _grp];
                    _grpFac set [_f, _l];
                } forEach ("true" configClasses _catCfg);
            } forEach ("true" configClasses _fCfg);
        } forEach ("true" configClasses _sideCfg);
    } forEach ("true" configClasses (configFile >> "CfgGroups"));

    // ---- THE UNION. This is the part that was missing. -----------------------
    private _keys = [];
    {
        if !(_x in _keys) then {_keys pushBack _x};
    } forEach ((keys _facCfg) + (keys _byFac) + (keys _grpFac));
    _keys sort true;

    private _kFac = keys _facCfg;
    private _kUnit = keys _byFac;
    private _kGrp = keys _grpFac;

    // ---- filter -------------------------------------------------------------
    private _wanted = [];
    {
        private _k = _x;
        private _cfg = _facCfg getOrDefault [_k, configNull];

        // MEMBERSHIP, NOT isNull. `isNull` documents no Config overload - it
        // takes Object, Group, Control, Display and the rest. It appears to work
        // on configs and is used that way all over the community, but "appears
        // to work" is not something to build a dump on. The hash map already
        // knows whether the key is there.
        private _hasFac = _k in _kFac;

        // A faction with no faction class still has a side - take it from the
        // first unit or group that claims it rather than dropping the faction.
        private _side = -1;
        if (_hasFac) then {
            _side = getNumber (_cfg >> "side");
        } else {
            private _u = _byFac getOrDefault [_k, []];
            if (count _u > 0) then {
                _side = getNumber ((_u select 0) >> "side");
            } else {
                private _g = _grpFac getOrDefault [_k, []];
                if (count _g > 0) then {
                    _side = switch (((_g select 0) select 0)) do {
                        case "East": {0};
                        case "West": {1};
                        case "Guerrilla": {2};
                        case "Indep": {2};
                        case "Civilian": {3};
                        default {-1};
                    };
                };
            };
        };

        if ([_side] call _wantSide) then {
            if (_only isEqualTo "" || {_k isEqualTo toLower _only}) then {
                _wanted pushBack [_k, _cfg, _side, _hasFac];
            };
        };
    } forEach _keys;

    if (_wanted isEqualTo []) exitWith {
        hint format ["no faction matching '%1'", _only];
    };

    // WHERE THE FACTION LIST CAME FROM, counted out loud. Three sources, and no
    // faction in any of them is dropped - the total below is the UNION, not the
    // CfgFactionClasses count. Every earlier version of this script walked
    // CfgFactionClasses alone and silently lost every faction that declares
    // units or groups without declaring itself.
    diag_log text "";
    diag_log text "// ================= FACTION DUMP =================";
    diag_log text format ["// CfgFactionClasses declares : %1", count (keys _facCfg)];
    diag_log text format ["// CfgVehicles units name     : %1", count (keys _byFac)];
    diag_log text format ["// CfgGroups groups name      : %1", count (keys _grpFac)];
    diag_log text format ["// UNION - every one of them  : %1", count _keys];
    diag_log text format ["// dumping                    : %1", count _wanted];
    diag_log text "// ===============================================";

    {
        private _src = "";
        if (_x in _kFac) then {_src = _src + "F"};
        if (_x in _kUnit) then {_src = _src + "U"};
        if (_x in _kGrp) then {_src = _src + "G"};
        diag_log text format ["FACTIONLIST;%1;%2", _x, _src];
    } forEach _keys;
    diag_log text "// (F = declares a faction class, U = has units, G = has groups)";

    systemChat format ["%1 faction(s) found, dumping %2", count _keys, count _wanted];

    private _nGrp = 0;
    private _nUnit = 0;
    private _summary = [];

    {
        _x params ["_key", "_cfg", "_side", "_hasFac"];
        private _fac = if (_hasFac) then {configName _cfg} else {_key};
        private _disp = if (_hasFac) then {getText (_cfg >> "displayName")} else {""};

        private _groups = _grpFac getOrDefault [_key, []];
        private _units  = _byFac  getOrDefault [_key, []];

        systemChat format ["%1: %2 group(s), %3 unit(s)", _fac, count _groups, count _units];

        diag_log text "";
        diag_log text format ["// >>>> FACTION BEGIN %1 <<<<", _fac];
        diag_log text format ["// %1 - %2 - side %3 (%4)", _fac, _disp, _side, _side call _sideName];

        // --- 1. the faction class --------------------------------------------
        diag_log text "// ---------- CfgFactionClasses ----------";
        if (!_hasFac) then {
            diag_log text format
                ["// NO CfgFactionClasses ENTRY. %1 is named by its units and groups", _fac];
            diag_log text "// but declares no faction class. It will not appear in the editor's";
            diag_log text "// faction list, and anything walking CfgFactionClasses will miss it.";
        } else {
            diag_log text format ["class %1 {", _fac];
            [_cfg, "    "] call _fnc_dump;
            diag_log text "};";
        };

        // --- 2. the order of battle -------------------------------------------
        diag_log text "";
        diag_log text format ["// ---------- CfgGroups (%1) ----------", count _groups];
        {
            _x params ["_sName", "_cat", "_grp"];
            private _men = [];
            {
                private _v = getText (_x >> "vehicle");
                if (_v isNotEqualTo "") then {
                    _men pushBack format ["%1|%2|%3",
                        _v, getText (_x >> "rank"), getArray (_x >> "position")];
                };
            } forEach ("true" configClasses _grp);

            diag_log text format ["GROUP;%1;%2;%3;%4;%5;%6;%7",
                _sName, _fac, _cat, configName _grp,
                getText (_grp >> "name"), count _men, _men joinString ","];
            _nGrp = _nGrp + 1;
        } forEach _groups;

        // --- 3. the units and vehicles, and what they carry --------------------
        diag_log text "";
        diag_log text format ["// ---------- CfgVehicles (%1) ----------", count _units];
        {
            private _u = _x;
            // One line saying what it is and what it carries. A roster of
            // classnames cannot answer "does every unit have a backpack" or
            // "what rifle is that man holding".
            diag_log text format ["UNIT;%1;%2;%3;%4;%5;%6;%7;%8;%9;%10",
                configName _u,
                getNumber (_u >> "scope"),
                getText (_u >> "displayName"),
                getText (_u >> "vehicleClass"),
                getText (_u >> "editorSubcategory"),
                getText (_u >> "uniformClass"),
                getText (_u >> "backpack"),
                (getArray (_u >> "weapons")) joinString ",",
                (getArray (_u >> "magazines")) joinString ",",
                (getArray (_u >> "linkedItems")) joinString ","];

            if (_deep) then {
                diag_log text format ["class %1 {", configName _u];
                [_u, "    "] call _fnc_dump;
                diag_log text "};";
            };
            _nUnit = _nUnit + 1;
        } forEach _units;

        diag_log text format ["// >>>> FACTION END %1 <<<<", _fac];

        _summary pushBack format ["SUMMARY;%1;%2;%3;%4;%5;%6",
            _side call _sideName, _fac, _disp,
            count _groups, count _units,
            if (_hasFac) then {"ok"} else {"no-faction-class"}];
    } forEach _wanted;

    // ---- the table, so the shape is readable without grepping ---------------
    diag_log text "";
    diag_log text "// ==== SUMMARY: side;faction;displayName;groups;units;note ====";
    {diag_log text _x} forEach _summary;

    private _msg = format ["DUMP DONE: %1 faction(s), %2 group(s), %3 unit(s) - all in the RPT",
        count _wanted, _nGrp, _nUnit];
    diag_log text format ["// %1", _msg];
    systemChat _msg;
    hint _msg;
};
