// EVERY FACTION, AS THE CONFIG DECLARES THEM.
// Paste into the debug console and Exec. Output goes to the RPT:
//   %LOCALAPPDATA%\Arma 3\Arma3_x64_*.rpt   (newest file)
// Set _only to a faction classname for just one - that also goes to clipboard.

private _only = "";

[_only] spawn {
    params ["_only"];

    // Config arrays are braces, not brackets - {"a","b"} where str gives
    // ["a","b"]. Built element by element so a stray quote cannot slip in.
    private _fnc_arr = {
        private _p = [];
        {
            _p pushBack ([str _x, format ["""%1""", _x]] select (_x isEqualType ""));
        } forEach _this;
        "{" + (_p joinString ",") + "}"
    };

    // --- every scope-2 unit, bucketed by faction, in one pass ---------------
    private _byFac = createHashMap;
    {
        if (getNumber (_x >> "scope") == 2) then {
            private _f = getText (_x >> "faction");
            if (_f != "") then {
                private _l = _byFac getOrDefault [_f, []];
                _l pushBack _x;
                _byFac set [_f, _l];
            };
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));

    private _facs = keys _byFac;
    if (_only != "") then {_facs = _facs select {toLower _x == toLower _only}};
    _facs sort true;

    if (_facs isEqualTo []) exitWith {
        hint format ["no faction matching '%1' fields any scope-2 units", _only];
    };

    // The faction display name, for the header - CfgFactionClasses spells the
    // classname in its own case, so the match is case-insensitive.
    private _facNames = createHashMap;
    {
        _facNames set [toLower (configName _x), getText (_x >> "displayName")];
    } forEach ("true" configClasses (configFile >> "CfgFactionClasses"));

    private _lines = [];
    private _n = 0;

    {
        private _fac = _x;

        // Sorted by classname so two dumps of the same faction diff cleanly.
        private _keyed = (_byFac get _fac) apply {[configName _x, _x]};
        _keyed sort true;
        private _units = _keyed apply {_x select 1};

        // MARKERS THE EXTRACTOR CUTS ON. The RPT is full of everything else
        // the game had to say; these are what tell a script where one
        // faction's config starts and stops.
        _lines pushBack format ["// >>>> ORBAT DUMP BEGIN %1 <<<<", _fac];
        _lines pushBack "//////////////////////////////////////////////////////////////////////////////////";
        _lines pushBack format ["// %1 - %2", _fac, _facNames getOrDefault [toLower _fac, "(no CfgFactionClasses entry)"]];
        _lines pushBack format ["// %1 unit(s), read from the running config", count _units];
        _lines pushBack "//////////////////////////////////////////////////////////////////////////////////";
        _lines pushBack "";
        _lines pushBack "class CBA_Extended_EventHandlers_base;";
        _lines pushBack "";
        _lines pushBack "class CfgVehicles {";
        _lines pushBack "";

        // THE IMPORT STUB LAYER, exactly as the ORBAT Creator writes it. A unit
        // class cannot say `class EventHandlers : EventHandlers` unless its
        // parent declares one, so each parent gets a scope-0 stub that does.
        private _parents = [];
        {_parents pushBackUnique (configName (inheritsFrom _x))} forEach _units;
        _parents sort true;

        {
            _lines pushBack format ["    class %1;", _x];
            _lines pushBack format ["    class %1_OCimport_01 : %1 { scope = 0; class EventHandlers; };", _x];
        } forEach _parents;
        _lines pushBack "";

        {
            private _u = _x;
            _lines pushBack format ["    class %1 : %2_OCimport_01 {", configName _u, configName (inheritsFrom _u)];

            // AS THEY ARE: every one of these is the unit's own value.
            private _auth = getText (_u >> "author");
            if (_auth != "") then {_lines pushBack format ["        author = ""%1"";", _auth]};

            _lines pushBack format ["        scope = %1;", getNumber (_u >> "scope")];
            _lines pushBack format ["        scopeCurator = %1;", getNumber (_u >> "scopeCurator")];
            _lines pushBack format ["        displayName = ""%1"";", getText (_u >> "displayName")];
            _lines pushBack format ["        side = %1;", getNumber (_u >> "side")];
            _lines pushBack format ["        faction = ""%1"";", _fac];

            {
                _x params ["_prop", "_val"];
                if (_val != "") then {_lines pushBack format ["        %1 = ""%2"";", _prop, _val]};
            } forEach [
                ["vehicleClass", getText (_u >> "vehicleClass")],
                ["editorSubcategory", getText (_u >> "editorSubcategory")],
                ["crew", getText (_u >> "crew")],
                ["uniformClass", getText (_u >> "uniformClass")],
                ["backpack", getText (_u >> "backpack")]
            ];

            // The loadout half. respawn* mirrors the live list, which is what
            // the ORBAT Creator writes and what makes a respawned man come
            // back carrying what he died with.
            {
                _x params ["_prop", "_val"];
                if (count _val > 0) then {
                    _lines pushBack format ["        %1[] = %2;", _prop, _val call _fnc_arr];
                };
            } forEach [
                ["identityTypes", getArray (_u >> "identityTypes")],
                ["linkedItems", getArray (_u >> "linkedItems")],
                ["respawnLinkedItems", getArray (_u >> "linkedItems")],
                ["weapons", getArray (_u >> "weapons")],
                ["respawnWeapons", getArray (_u >> "weapons")],
                ["magazines", getArray (_u >> "magazines")],
                ["respawnMagazines", getArray (_u >> "magazines")]
            ];

            _lines pushBack "";
            _lines pushBack "        class EventHandlers : EventHandlers {";
            _lines pushBack "            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};";
            _lines pushBack "        };";
            _lines pushBack "    };";
            _lines pushBack "";
            _n = _n + 1;
        } forEach _units;

        _lines pushBack "};";
        _lines pushBack format ["// >>>> ORBAT DUMP END %1 <<<<", _fac];
        _lines pushBack "";
    } forEach _facs;

    {diag_log text _x} forEach _lines;

    // One faction fits; every faction does not, and a clipboard silently
    // truncated is worse than one left alone.
    if (count _facs isEqualTo 1) then {copyToClipboard (_lines joinString endl)};

    hint format ["%1 faction(s), %2 unit(s), %3 line(s) in the RPT%4run: python tools/extract_orbat.py",
        count _facs, _n, count _lines, endl];
};
