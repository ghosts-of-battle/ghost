#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_antiship_fnc_moduleController

Description:
    Stands coastal batteries up. ONE module runs every side: each side has an
    on/off switch, its own TAOR markers and its own launcher classes, and an
    enabled side gets a battery SITED BY THE ADDON - open ground inside its
    markers, scored toward the waterline, because a coastal battery that
    cannot see the sea is a shed. With no side switched on, the module works
    the classic way: one battery for the module's own side, at the module.

    Every battery PLACES ITS OWN LAUNCHERS - nothing is synced. A battery
    whose launchers can be destroyed is a target, and one that fires from an
    invisible logic is weather; every launcher is crewed for the same reason.
    The shared knobs - interval, targets, search range, missile pool, rearm -
    apply to every battery this module stands up.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
if (hasInterface && !isServer) exitWith {};

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

// --- the shared knobs, read once -------------------------------------------
private _interval = (_logic getVariable ["interval", AS_INTERVAL_DEF]) max 1;
private _count = round ((_logic getVariable ["launcher_count", 2]) max 1);
private _rearm = (_logic getVariable ["rearm_interval", 600]) max 0;

private _fnc_classList = {
    params ["_csv", "_fallback"];
    private _list = (_csv splitString " ,") select { _x isNotEqualTo "" };
    _list = _list select { isClass (configFile >> "CfgVehicles" >> _x) };
    if (_list isEqualTo []) then { _list = _fallback };
    _list
};

private _fnc_markerList = {
    params ["_csv"];
    ((_csv splitString " ,") select { _x isNotEqualTo "" })
        select { markerShape _x isNotEqualTo "" }
};

private _sharedClasses = [_logic getVariable ["launcher_classes", ""], [QGVAR(launcher)]] call _fnc_classList;
private _missiles = [_logic getVariable ["missile_classes", ""], [QGVAR(missile)]] call _fnc_classList;
// Empty = fnc_launch's own side-matched decoy; a class here overrides it.
private _decoys = [_logic getVariable ["decoy_classes", ""], []] call _fnc_classList;

// --- one battery, stood up on a carrier logic ------------------------------
// The carrier owns the cfg and the fire clock, so several batteries run off
// one module without sharing state - the tick and the launch code read the
// carrier and know nothing about how many siblings it has.
private _fnc_standUp = {
    params ["_carrier", "_at", "_bSide", "_classes"];

    private _spots = [[], _count, createHashMapFromArray [
        ["centre", _at],
        ["minRange", 15],
        ["maxRange", 90],
        ["footprint", 8],
        ["clearRadius", 5],
        ["maxSlope", 0.15],
        ["separation", 30]
    ]] call EFUNC(common,findSite);
    // the battery's own doorstep beats losing tubes to bad ground
    while {count _spots < _count} do {
        _spots pushBack (_at getPos [15 + random 40, random 360]);
    };

    private _grp = createGroup [_bSide, true];
    private _placed = [];
    {
        private _l = createVehicle [selectRandom _classes, _x, [], 0, "CAN_COLLIDE"];
        if (!isNull _l) then {
            _l setDir (_at getDir _x);
            _l setVectorUp surfaceNormal (getPosATL _l);
            createVehicleCrew _l;
            _placed pushBack _l;
        };
    } forEach _spots;

    // A frame later, crews are queryable. The Burevestnik is a DRONE turret
    // (isUav): its own UAV AI is the only crew that runs it, and it must STAY
    // IN ITS OWN GROUP - a soldier in a UAV seat, or the AI joined to an
    // infantry group, is a launcher that never answers. A MANNED launcher
    // class gets a man instead.
    [{
        params ["_placed", "_grp", "_bSide"];
        private _man = switch (_bSide) do {
            case west: {"B_Soldier_F"};
            case independent: {"I_Soldier_F"};
            default {"O_Soldier_F"};
        };
        private _crewed = 0;
        {
            if (alive _x) then {
                private _isDrone = getNumber (configOf _x >> "isUav") > 0;
                if ((crew _x) isEqualTo []) then {
                    if (_isDrone) then {
                        createVehicleCrew _x;
                    } else {
                        private _g = _grp createUnit [_man, getPos _x, [], 0, "CAN_COLLIDE"];
                        _g moveInGunner _x;
                    };
                };
                if (!_isDrone) then { (crew _x) joinSilent _grp };
                if ((crew _x) isNotEqualTo []) then { _crewed = _crewed + 1 };
            };
        } forEach _placed;
        diag_log text format ["[ghost_antiship] %1 of %2 launchers crewed", _crewed, count _placed];
    }, [_placed, _grp, _bSide]] call CBA_fnc_execNextFrame;

    // The rearm loop: a coastal battery is a magazine with a roof - it does
    // not stop mattering after one salvo. Retires with its carrier.
    if (_rearm > 0) then {
        [{
            params ["_args", "_handle"];
            _args params ["_carrier"];
            if (isNull _carrier) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
            {
                if (!isNull _x && {alive _x}) then { _x setVehicleAmmo 1 };
            } forEach ((_carrier getVariable [QGVAR(cfg), createHashMap]) getOrDefault ["launchers", []]);
        }, _rearm, [_carrier]] call CBA_fnc_addPerFrameHandler;
    };

    // Radars SYNCED to the module in Eden feed the battery its picture -
    // fnc_pickTarget always read this key and nothing ever wrote it, so the
    // documented "kill the radars and the battery is blind" mode could
    // never trigger; every battery self-searched.
    private _syncedRadars = (synchronizedObjects _logic) select {_x isKindOf QGVAR(radar)};

    private _cfg = createHashMapFromArray [
        ["launchers", _placed],
        ["missiles", _missiles],
        ["decoys", _decoys],
        ["radars", _syncedRadars],
        ["pos", _at],
        ["side", _bSide],
        ["targets", ((_logic getVariable ["target_classes", AS_TARGETS_DEF]) splitString ", ")
            select { _x isNotEqualTo "" }],
        ["range", (_logic getVariable ["search_range", AS_SEARCH_DEF]) max 1],
        ["speed", (_logic getVariable ["missile_speed", AS_SPEED_DEF]) max 50],
        ["cruiseAlt", (_logic getVariable ["cruise_alt", AS_CRUISE_ALT_DEF]) max 5],
        ["terminal", (_logic getVariable ["terminal_range", AS_TERMINAL_DEF]) max 50],
        ["interceptable", _logic getVariable ["interceptable", true]],
        ["interval", _interval],
        ["debug", _logic getVariable ["debug", false]]
    ];

    _carrier setVariable [QGVAR(cfg), _cfg];
    _carrier setVariable [QGVAR(nextFire), CBA_missionTime + _interval];

    // THE HUNT HAS TO BE ABLE TO FIND THESE. A battery that nothing can locate
    // is scenery with a missile in it - see EFUNC(hacking,productLocateCoastal),
    // which offers LOCATE ANTI-SHIP off this list inside a conventional TAOR.
    // Position and side only: the ladder wants a place, and the carrier itself
    // is a logic nobody outside this addon should be handed.
    private _reg = missionNamespace getVariable [QGVAR(batteries), []];
    _reg pushBack [format ["as_%1", mapGridPosition _at], +_at, _bSide];
    missionNamespace setVariable [QGVAR(batteries), _reg, true];

    [FUNC(tick), AS_TICK, _carrier] call CBA_fnc_addPerFrameHandler;

    diag_log text format [
        "[ghost_antiship] battery online for %1 at %2: every %3s, %4 launcher(s), %5m search",
        _bSide, mapGridPosition _at, _interval, count _placed, _cfg get "range"
    ];
};

// --- per-side coastal batteries --------------------------------------------
// The site is open ground inside the side's own markers, scored by how close
// the waterline is: eight bearings probed outward, the nearest water wins.
// A spot with no water inside a kilometre scores nothing - a coastal battery
// belongs on the coast, and inland ground should lose to shoreline every time.
private _coastProfile = createHashMapFromArray [
    ["footprint", 10],
    ["clearRadius", 6],
    ["maxSlope", 0.15],
    ["separation", 200],
    ["score", {
        params ["_p"];
        private _sea = 1000;
        for "_a" from 0 to 315 step 45 do {
            private _r = 100;
            while {_r < _sea} do {
                if (surfaceIsWater (_p getPos [_r, _a])) then { _sea = _r };
                _r = _r + 100;
            };
        };
        1000 - _sea
    }]
];

private _any = false;
{
    _x params ["_bSide", "_enableAttr", "_taorAttr", "_clsAttr"];
    if !(_logic getVariable [_enableAttr, false]) then {continue};
    _any = true;

    private _markers = [_logic getVariable [_taorAttr, ""]] call _fnc_markerList;
    if (_markers isEqualTo []) then {
        diag_log text format ["[ghost_antiship] %1 is switched on but names no TAOR markers - no battery", _bSide];
        continue;
    };

    private _spots = [_markers, 1, _coastProfile] call EFUNC(common,findSite);
    if (_spots isEqualTo []) then {
        diag_log text format ["[ghost_antiship] no coastal ground inside %1's markers %2 - no battery", _bSide, _markers];
        continue;
    };

    private _classes = [_logic getVariable [_clsAttr, ""], _sharedClasses] call _fnc_classList;
    private _carrier = (createGroup [sideLogic, true]) createUnit ["Logic", _spots select 0, [], 0, "NONE"];
    [_carrier, _spots select 0, _bSide, _classes] call _fnc_standUp;
} forEach [
    [west, "enableWest", "taorWest", "launcherWest"],
    [east, "enableEast", "taorEast", "launcherEast"],
    [independent, "enableGuer", "taorGuer", "launcherGuer"]
];

// The classic single battery: the module's own side, at the module. This is
// THE anti-ship system - the old ghost_coastal auto-placer said the same
// things a different way and was purged for it; do not bring it back.
if (!_any) then {
    [_logic, getPosATL _logic, side _logic, _sharedClasses] call _fnc_standUp;
};
