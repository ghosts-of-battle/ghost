// AN ALiVE ORBAT CREATOR EXPORT FOR EVERY EAST, WEST AND INDEPENDENT FACTION.
//
// The same file work/blue.sqf is, one per faction.
//
// Paste into the debug console and Exec. Output goes to the RPT:
//   %LOCALAPPDATA%\Arma 3\Arma3_x64_*.rpt   (newest file)
// Then:  python tools/extract_orbat.py     -> work/orbat/<FACTION>.cpp
//
// IT SPAWNS EACH MAN AND READS HIS LOADOUT. ALiVE_orbatCreator_loadout is
// getUnitLoadout output - attachments, magazine counts, what is in which
// container. None of that can be reconstructed from the config arrays, which
// is why weapons[] alone was never enough. Each man is created on an empty
// group, read, and deleted straight away.
//
// RUN IT IN AN EMPTY MISSION. It creates and deletes thousands of units.
//
// THE FILTER: a unit is in if its FACTION is East, West or Independent and
// the unit is scope 2. Testing the faction rather than the unit is what keeps
// B_Slingload_01_Ammo_F - faction BLU_F, side 3 - which the reference carries.
// Faction "Default" has no side of its own, so every pier, ladder and wall
// falls out, and so does every Zeus and ZEN module (Logic, side 7).
//
// Set _only to one faction classname to do a single faction - the full run is
// ~6800 units across 88 factions and takes a while.

private _only = "";

[_only] spawn {
    params ["_only"];

    // FIRST LINE OUT, BEFORE ANY CONFIG WORK. If this appears in the RPT and
    // nothing else does, the script started and died and the lines after this
    // point are where to look. If it does not appear at all, the script never
    // executed - which is a different problem entirely, and worth knowing
    // rather than guessing at.
    diag_log text "// >>>> ORBAT SCRIPT STARTED <<<<";
    systemChat "ORBAT: started";

    private _lc = toLower _only;
    private _sides = [0, 1, 2];

    // ---- config array syntax: braces, not brackets ------------------------
    private _fnc_arr = {
        private _p = [];
        {
            private _v = _x;
            _p pushBack (
                if (_v isEqualType "") then {
                    format ["""%1""", _v]
                } else {
                    if (_v isEqualType []) then {_v call _fnc_arr} else {str _v}
                }
            );
        } forEach _this;
        "{" + (_p joinString ",") + "}"
    };

    private _MANINIT = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
    private _VEHINIT = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";

    // ---- which factions are East, West or Independent ---------------------
    // THE SIDE THAT MATTERS IS THE FACTION'S, NOT THE UNIT'S. B_Slingload_01_Ammo_F
    // is faction BLU_F and side 3; testing the unit dropped it and thirteen of
    // its kind, all of which the reference export carries. A unit belongs to
    // its faction, and the faction is what has a side.
    private _facSide = createHashMap;
    {
        private _s = getNumber (_x >> "side");
        if (_s in _sides) then {_facSide set [toLower (configName _x), _s]};
    } forEach ("true" configClasses (configFile >> "CfgFactionClasses"));

    // A mod is free to ship units whose faction declares no class at all. Those
    // factions have no declared side, so it is taken from the units that name
    // them - dropping them instead is how a whole mod faction goes missing.
    {
        private _fl = toLower (getText (_x >> "faction"));
        if (_fl isNotEqualTo "" && {_fl isNotEqualTo "default"} && {!(_fl in (keys _facSide))}) then {
            private _s = getNumber (_x >> "side");
            if (_s in _sides) then {_facSide set [_fl, _s]};
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));

    // ---- bucket every wanted unit by faction ------------------------------
    // SCOPE 2 ONLY, which is what the reference export carries. Scope 1 men are
    // real - squads are built out of them - but they are not what this file is.
    private _byFac = createHashMap;
    {
        private _u = _x;
        private _fl = toLower (getText (_u >> "faction"));

        if (_fl in (keys _facSide)
            && {getNumber (_u >> "scope") isEqualTo 2}
            && {_only isEqualTo "" || {_fl isEqualTo _lc}}) then {
            private _l = _byFac getOrDefault [_fl, []];
            _l pushBack _u;
            _byFac set [_fl, _l];
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));

    private _facs = keys _byFac;
    _facs sort true;
    diag_log text format ["// >>>> ORBAT SCAN DONE - %1 faction(s) <<<<", count _facs];

    if (_facs isEqualTo []) exitWith {
        hint format ["no faction matching '%1'", _only];
    };

    systemChat format ["ORBAT export: %1 faction(s)", count _facs];

    private _aliveVer = "unknown - ALiVE not loaded";
    {
        private _c = configFile >> "CfgPatches" >> _x;
        if (isClass _c) exitWith {
            _aliveVer = getText (_c >> "version");
            if (_aliveVer isEqualTo "") then {_aliveVer = str (getNumber (_c >> "version"))};
        };
    } forEach ["ALiVE_main", "alive_main", "ALiVE_sys_profile", "ALIVE_main"];

    // A GROUP ON THE MAN'S OWN SIDE. A CAManBase created into a sideLogic
    // group is not reliably a soldier - the loadout read off it is not worth
    // trusting. One group per side, made on demand and reused.
    private _grps = createHashMap;
    private _fnc_grp = {
        params ["_s"];
        // Anything outside 0-3 goes to civilian rather than indexing off the
        // end of the array - B_Slingload_01_Ammo_F is faction BLU_F on side 3,
        // so odd sides on a faction unit are real, not a reason to crash.
        if (_s < 0 || {_s > 3}) then {_s = 3};
        private _g = _grps getOrDefault [_s, grpNull];
        if (isNull _g) then {
            _g = createGroup [([east, west, resistance, civilian] select _s), true];
            _grps set [_s, _g];
        };
        _g
    };

    private _done = 0;

    {
        private _fac = _x;
        private _units = _byFac get _fac;

        // Sorted by classname so two runs of the same faction diff cleanly.
        private _keyed = _units apply {[configName _x, _x]};
        _keyed sort true;
        _units = _keyed apply {_x select 1};

        // ---- pass 1: what each unit is, and the parents it needs ---------
        // Built first because the import stub layer has to be written above
        // the classes that inherit from it.
        private _parents = [];          // parent name, in first-use order
        private _pTur = createHashMap;  // parent -> turret names it must expose
        private _rows = [];             // [cls, parent, isMan, turrets, cfg]

        {
            private _u = _x;
            private _cls = configName _u;
            private _par = configName (inheritsFrom _u);
            // THE CLASSNAME, NOT THE CONFIG. isKindOf takes a String or an
            // Object; a Config on the left is a type error, and this line runs
            // before the first diag_log - so it took the whole run with it and
            // wrote nothing at all.
            private _isMan = _cls isKindOf "CAManBase";

            private _tur = [];
            if (!_isMan) then {
                {_tur pushBack (configName _x)}
                    forEach ("true" configClasses (_u >> "Turrets"));
            };

            if !(_par in _parents) then {
                _parents pushBack _par;
                _pTur set [_par, []];
            };
            private _pt = _pTur get _par;
            {_pt pushBackUnique _x} forEach _tur;
            _pTur set [_par, _pt];

            _rows pushBack [_cls, _par, _isMan, _tur, _u];
        } forEach _units;

        // ---- header ------------------------------------------------------
        diag_log text format ["// >>>> ORBAT BEGIN %1 <<<<", _fac];
        diag_log text "//////////////////////////////////////////////////////////////////////////////////";
        diag_log text "// Config Automatically Generated by ALiVE ORBAT Creator";
        diag_log text format ["// Generated with Arma 3 version %1 on %2 branch",
            productVersion select 2, productVersion select 4];
        diag_log text format ["// Generated with ALiVE version %1", _aliveVer];
        diag_log text "//////////////////////////////////////////////////////////////////////////////////";
        diag_log text "";
        diag_log text "";
        diag_log text "class CBA_Extended_EventHandlers_base;";
        diag_log text "";
        diag_log text "class CfgVehicles {";
        diag_log text "";

        // ---- the import stub layer ---------------------------------------
        // A unit class cannot say `class EventHandlers : EventHandlers` unless
        // its parent declares one, so every parent gets a scope-0 stub that
        // does. Vehicles need the same for Turrets.
        {
            private _p = _x;
            private _t = _pTur get _p;

            diag_log text format ["    class %1;", _p];
            if (_t isEqualTo []) then {
                diag_log text format ["    class %1_OCimport_01 : %1 { scope = 0; class EventHandlers; };", _p];
                diag_log text format ["    class %1_OCimport_02 : %1_OCimport_01 { class EventHandlers; };", _p];
            } else {
                diag_log text format ["    class %1_OCimport_01 : %1 { scope = 0; class EventHandlers; class Turrets; };", _p];
                diag_log text format ["    class %1_OCimport_02 : %1_OCimport_01 { ", _p];
                diag_log text "        class EventHandlers; ";
                diag_log text "        class Turrets : Turrets {";
                {diag_log text format ["            class %1;", _x]} forEach _t;
                diag_log text "        };";
                diag_log text "    };";
            };
            diag_log text "";
        } forEach _parents;

        // ---- the classes -------------------------------------------------
        {
            _x params ["_cls", "_par", "_isMan", "_tur", "_u"];

            diag_log text format ["    class %1 : %2_OCimport_02 {", _cls, _par];
            diag_log text "        author = ""YonV"";";
            diag_log text format ["        scope = %1;", getNumber (_u >> "scope")];
            diag_log text format ["        scopeCurator = %1;", getNumber (_u >> "scopeCurator")];
            diag_log text format ["        displayName = ""%1"";", getText (_u >> "displayName")];
            diag_log text format ["        side = %1;", getNumber (_u >> "side")];
            diag_log text format ["        faction = ""%1"";", _fac];

            private _crew = getText (_u >> "crew");
            if (!_isMan && {_crew isNotEqualTo ""}) then {
                diag_log text format ["        crew = ""%1"";", _crew];
            };

            if (_isMan) then {
                diag_log text "";
                private _idt = getArray (_u >> "identityTypes");
                if (count _idt > 0) then {
                    diag_log text format ["        identityTypes[] = %1;", _idt call _fnc_arr];
                    diag_log text "";
                };

                private _uni = getText (_u >> "uniformClass");
                if (_uni isNotEqualTo "") then {
                    diag_log text format ["        uniformClass = ""%1"";", _uni];
                    diag_log text "";
                };

                private _bp = getText (_u >> "backpack");
                if (_bp isNotEqualTo "") then {
                    diag_log text format ["        backpack = ""%1"";", _bp];
                    diag_log text "";
                };

                {
                    _x params ["_a", "_b", "_arr"];
                    if (count _arr > 0) then {
                        private _s = _arr call _fnc_arr;
                        diag_log text format ["        %1[] = %2;", _a, _s];
                        diag_log text format ["        %1[] = %2;", _b, _s];
                        diag_log text "";
                    };
                } forEach [
                    ["linkedItems", "respawnlinkedItems", getArray (_u >> "linkedItems")],
                    ["weapons", "respawnWeapons", getArray (_u >> "weapons")],
                    ["magazines", "respawnMagazines", getArray (_u >> "magazines")]
                ];

                // THE LIVE LOADOUT. Spawned, read, deleted - see the header.
                private _g = ([getNumber (_u >> "side")] call _fnc_grp);
                private _man = _g createUnit [_cls, [0, 0, 0], [], 0, "CAN_COLLIDE"];
                if (!isNull _man) then {
                    private _lo = getUnitLoadout _man;
                    deleteVehicle _man;
                    diag_log text format ["        ALiVE_orbatCreator_loadout[] = %1;", _lo call _fnc_arr];
                } else {
                    // SAID OUT LOUD. A man who will not spawn has no loadout to
                    // read, and writing an empty one would hand back a naked
                    // soldier that looked deliberate.
                    diag_log text format ["        // !! %1 would not spawn - no loadout read", _cls];
                };
                diag_log text "";
                diag_log text "";
            } else {
                if (count _tur > 0) then {
                    diag_log text "";
                    diag_log text "        class Turrets : Turrets {";
                    {
                        diag_log text format ["            class %1 : %1 { gunnerType = """"; };", _x];
                    } forEach _tur;
                    diag_log text "        };";
                };
                diag_log text "";
                diag_log text "";
                diag_log text "";
            };

            diag_log text "        class EventHandlers : EventHandlers {";
            diag_log text "            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};";
            diag_log text "";
            diag_log text "            class ALiVE_orbatCreator {";
            diag_log text format ["                init = ""%1"";",
                [_VEHINIT, _MANINIT] select _isMan];
            diag_log text "            };";
            diag_log text "";
            diag_log text "        };";
            diag_log text "";
            diag_log text "        // custom attributes (do not delete)";
            diag_log text "        ALiVE_orbatCreator_owned = 1;";
            diag_log text "";
            diag_log text "    };";
            diag_log text "";

            _done = _done + 1;
            // Yield now and then so a 6800-unit run does not lock the frame.
            if (_done % 100 isEqualTo 0) then {
                systemChat format ["ORBAT: %1 units", _done];
                uiSleep 0.01;
            };
        } forEach _rows;

        diag_log text "};";
        diag_log text format ["// >>>> ORBAT END %1 <<<<", _fac];
    } forEach _facs;

    {deleteGroup _y} forEach _grps;

    private _msg = format ["ORBAT EXPORT DONE: %1 faction(s), %2 unit(s) - run: python tools/extract_orbat.py",
        count _facs, _done];
    diag_log text format ["// %1", _msg];
    systemChat _msg;
    hint _msg;
};
