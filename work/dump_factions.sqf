// EAST, WEST AND INDEPENDENT FACTIONS - the roster and the order of battle.
//
// Paste into the debug console and Exec. Output goes to the RPT:
//   %LOCALAPPDATA%\Arma 3\Arma3_x64_*.rpt   (newest file)
// Then:  python tools/extract_factions.py
//
// ONE LINE PER THING. No property dumps - a faction, a unit and a group each
// get a single line carrying what identifies them. Everything else is noise.
//
// THREE FILTERS, AND EVERY ONE OF THEM MATTERS:
//
//   side 0/1/2 only      East, West, Independent. Civilian and Empty are out,
//                        and so is Logic side 7 - which is what every Zeus and
//                        ZEN module is, so the modules fall out here.
//
//   faction != Default   THE ONE THAT WAS MISSING. Practically every object in
//                        CfgVehicles inherits faction = "Default" - piers,
//                        ladders, walls, bushes. Filtering on "has a faction
//                        string" keeps all 15000 of them; filtering on "has a
//                        faction that is not Default" keeps the soldiers.
//
//   scope >= 1           Scope 0 is a base class nobody fields. Scope 1 IS
//                        kept: B_soldier_AR_F cannot be placed in the editor
//                        but BLU_F's squads are built out of it, so a
//                        scope-2-only dump cannot answer what is in a group.
//
// DISPLAY NAME GOES LAST on every line - it is the only field free to contain
// a semicolon, and the extractor splits a fixed number of times from the left.
//
// Set _only to one faction classname to dump just that faction.

private _only = "";

[_only] spawn {
    params ["_only"];

    private _lc = toLower _only;
    private _want = [0, 1, 2];          // East, West, Independent

    diag_log text "";
    diag_log text "// >>>> FACTION DUMP BEGIN <<<<";

    // ---- the faction classes, by lowercase name --------------------------
    private _facCfg = createHashMap;
    {
        _facCfg set [toLower (configName _x), _x];
    } forEach ("true" configClasses (configFile >> "CfgFactionClasses"));

    // ---- 1. the roster ----------------------------------------------------
    private _seen = [];                 // factions that actually field something
    private _nUnit = 0;

    {
        private _u = _x;
        private _fac = getText (_u >> "faction");
        private _fl = toLower _fac;

        if (_fl isNotEqualTo "" && {_fl isNotEqualTo "default"}) then {
            private _side = getNumber (_u >> "side");
            private _scope = getNumber (_u >> "scope");

            if (_side in _want && {_scope > 0} && {_only isEqualTo "" || {_fl isEqualTo _lc}}) then {
                _seen pushBackUnique _fl;

                diag_log text format ["UNIT;%1;%2;%3;%4;%5;%6;%7",
                    configName _u, _fac, _side, _scope,
                    configName (inheritsFrom _u),
                    getText (_u >> "vehicleClass"),
                    getText (_u >> "displayName")];
                _nUnit = _nUnit + 1;
            };
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));

    // ---- 2. the order of battle -------------------------------------------
    // EVERY SIDE CLASS IS WALKED, not a hardcoded list. A mod is free to add
    // its own, and the vanilla spelling of the Independent class is not worth
    // guessing at - civilian is excluded by name, everything else is kept.
    private _nGrp = 0;

    {
        private _sideCfg = _x;
        private _sName = configName _sideCfg;
        private _sl = toLower _sName;

        // ALLOWLIST, NOT A DENYLIST. Excluding "civ" let CfgGroups' "Empty"
        // side through, which is 1325 building compositions - Altis Terminal
        // and friends - dumped as if they were infantry squads. Naming what
        // is wanted cannot let an unnamed side in.
        if (_sl in ["west", "east", "indep", "guer", "guerrilla", "independent"]) then {
            {
                private _fCfg = _x;
                private _fName = configName _fCfg;
                {
                    private _cat = _x;
                    private _cName = configName _cat;
                    {
                        private _grp = _x;

                        // Read the property, not the path: a group can sit
                        // under one faction class and declare itself another.
                        private _gFac = getText (_grp >> "faction");
                        if (_gFac isEqualTo "") then {_gFac = _fName};
                        private _gl = toLower _gFac;

                        if (_only isEqualTo "" || {_gl isEqualTo _lc}) then {
                            _seen pushBackUnique _gl;

                            diag_log text format ["GROUP;%1;%2;%3;%4;%5;%6",
                                _nGrp, _sName, _gFac, _cName, configName _grp,
                                getText (_grp >> "name")];

                            private _i = 0;
                            {
                                private _v = getText (_x >> "vehicle");
                                if (_v isNotEqualTo "") then {
                                    diag_log text format ["GMAN;%1;%2;%3;%4",
                                        _nGrp, _i, _v, getText (_x >> "rank")];
                                    _i = _i + 1;
                                };
                            } forEach ("true" configClasses _grp);

                            _nGrp = _nGrp + 1;
                        };
                    } forEach ("true" configClasses _cat);
                } forEach ("true" configClasses _fCfg);
            } forEach ("true" configClasses _sideCfg);
        };
    } forEach ("true" configClasses (configFile >> "CfgGroups"));

    // ---- 3. the factions themselves ---------------------------------------
    // Only the ones that actually fielded a unit or a group above. A faction
    // class on the right side that fields nothing is not a faction anybody can
    // use, and it is flagged rather than listed as if it were.
    _seen sort true;
    private _nFac = 0;

    {
        private _k = _x;
        private _cfg = _facCfg getOrDefault [_k, configNull];

        // MEMBERSHIP, NOT isNull. isNull documents no Config overload - it
        // takes Object, Group, Control and the rest. The hash map already
        // knows whether the key is there.
        if (_k in (keys _facCfg)) then {
            diag_log text format ["FACTION;%1;%2;%3",
                configName _cfg, getNumber (_cfg >> "side"),
                getText (_cfg >> "displayName")];
        } else {
            // Named by its units or groups, declares no class of its own -
            // it will not appear in the editor's faction list.
            diag_log text format ["FACTION;%1;-1;", _k];
            diag_log text format ["FNOCLASS;%1", _k];
        };
        _nFac = _nFac + 1;
    } forEach _seen;

    diag_log text "// >>>> FACTION DUMP END <<<<";

    private _msg = format ["DUMP DONE: %1 faction(s), %2 unit(s), %3 group(s) - run: python tools/extract_factions.py",
        _nFac, _nUnit, _nGrp];
    diag_log text format ["// %1", _msg];
    systemChat _msg;
    hint _msg;
};
