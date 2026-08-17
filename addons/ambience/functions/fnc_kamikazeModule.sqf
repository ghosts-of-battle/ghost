#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads the Ambient Kamikaze module and runs the clock. PLACING THE MODULE
 * IS THE ENABLE - no module, no drones.
 *
 * Each run FUNC(kamikazeRun) flies a real aircraft at a building near a
 * player - audible, visible, killable. The module only decides how often
 * and with what airframe.
 *
 * Arguments (module standard):
 * 0: The module logic <OBJECT>
 * 1: Synchronised units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};
if (!isServer) exitWith {};

private _markers = ((_logic getVariable ["markers", ""]) splitString " ,")
    select { _x isNotEqualTo "" && {markerShape _x isNotEqualTo ""} };

// D59: whose drones is never asked - the side is whoever the players are at
// war with, read off the adapter's commanders the way fnc_major does. No
// commander answering, the default east keeps the vanilla OPFOR quadcopter.
//
// ASKED HERE, ANSWERED LATER. A module function runs BETWEEN preInit and
// postInit: EGVAR(common,playerSide) is declared in common's postInit and
// did not exist yet, so this threw "undefined variable" and took the whole
// module down with it. ALiVE is not up at module time either, so the
// commanders would have been empty even if it had not. The side is
// resolved on the first tick instead - see the scheduler below.
private _side = east;

// Named classes are honoured as given; an empty field takes the side's
// vanilla quadcopter, chosen on the first run once the side is known.
private _drones = ((_logic getVariable ["droneClasses", ""]) splitString " ,")
    select { _x isNotEqualTo "" && {isClass (configFile >> "CfgVehicles" >> _x)} };

private _intMin = (_logic getVariable ["intervalMin", 420]) max 60;
private _intMax = (_logic getVariable ["intervalMax", 900]) max _intMin;

private _cfg = createHashMapFromArray [
    ["markers", _markers],
    ["drones", _drones],
    ["side", _side],
    ["speed", (_logic getVariable ["diveSpeed", 40]) max 10],
    ["intMin", _intMin],
    ["intMax", _intMax],
    ["bandMin", (_logic getVariable ["bandMin", 150]) max 50],
    ["bandMax", (_logic getVariable ["bandMax", 500]) max 100],
    ["nextAt", CBA_missionTime + _intMin + random (_intMax - _intMin)]
];

INFO_3("ambient kamikaze up for %1: every %2-%3s",_side,_intMin,_intMax);

[{
    params ["_args", "_handle"];
    _args params ["_logic", "_cfg"];

    if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
    if (CBA_missionTime < (_cfg get "nextAt")) exitWith {};
    _cfg set ["nextAt", CBA_missionTime + (_cfg get "intMin") + random ((_cfg get "intMax") - (_cfg get "intMin"))];

    // WHOSE DRONES, decided on the first run rather than at module time -
    // neither ALiVE nor common's postInit exists when a module function
    // runs. A side hostile to the players, their vanilla quadcopter if the
    // field named no class of its own, and both settle once.
    if (!(_cfg getOrDefault ["sideKnown", false])) then {
        _cfg set ["sideKnown", true];

        private _pside = missionNamespace getVariable [QEGVAR(common,playerSide), west];
        if (!isNil "ghost_adapter_alive_fnc_commanders") then {
            {
                _x params ["_cside"];
                if (_cside getFriend _pside < 0.6) exitWith { _cfg set ["side", _cside] };
            } forEach (call ghost_adapter_alive_fnc_commanders);
        };

        if ((_cfg get "drones") isEqualTo []) then {
            _cfg set ["drones", [switch (_cfg get "side") do {
                case west: {"B_UAV_01_F"};
                case independent: {"I_UAV_01_F"};
                default {"O_UAV_01_F"};
            }]];
        };

        INFO_2("ambient kamikaze: %1 flies %2",_cfg get "side",_cfg get "drones");
    };

    private _at = [_cfg get "markers", _cfg get "bandMin", _cfg get "bandMax", "ambient kamikaze"] call FUNC(pickBuilding);
    if (_at isEqualTo []) exitWith {};

    [_at, selectRandom (_cfg get "drones"), _cfg get "speed", _cfg get "markers"] call FUNC(kamikazeRun);
}, AMB_TICK, [_logic, _cfg]] call CBA_fnc_addPerFrameHandler;
