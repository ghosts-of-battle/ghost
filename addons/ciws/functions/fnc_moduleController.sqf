#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_moduleController

Description:
    Registers one defended site. Several can run at once; a round is offered to
    every site and engaged by the first one that wants it.

    The guns are whatever is synchronised to the module. Nothing is synchronised,
    nothing defends the site - there is no automatic search, because "every AA
    vehicle that happens to be nearby" is not a decision a mission maker can see
    or control.

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

private _guns = (synchronizedObjects _logic) select { !(_x isKindOf "Logic") };
if (_guns isEqualTo []) exitWith {
    diag_log text "[ghost_ciws] module placed with no guns synchronised - nothing will defend it";
};

private _marker = _logic getVariable ["protect_marker", ""];
private _pos = if (_marker isNotEqualTo "" && {markerType _marker isNotEqualTo ""}) then {
    getMarkerPos _marker
} else {
    getPosATL _logic
};

// AUTO reads the side off the guns rather than making the mission maker state
// something the map already knows.
private _sideStr = toUpper (_logic getVariable ["defend_side", "AUTO"]);
private _side = switch (_sideStr) do {
    case "WEST": { west };
    case "EAST": { east };
    case "GUER": { resistance };
    default { side (_guns select 0) };
};

private _types = ((_logic getVariable ["intercept_types", CIWS_TYPES_DEF]) splitString ", ")
    select { _x isNotEqualTo "" };

private _site = createHashMapFromArray [
    ["pos", _pos],
    ["side", _side],
    ["guns", _guns],
    ["range", (_logic getVariable ["ad_range", CIWS_AD_RANGE_DEF]) max 1],
    ["minRange", (_logic getVariable ["min_range", CIWS_MIN_RANGE_DEF]) max 0],
    ["types", _types],
    ["mode", toUpper (_logic getVariable ["mode", "GUNS"])],
    ["intAmmo", _logic getVariable ["interceptor_ammo", CIWS_INT_AMMO_DEF]],
    ["intSpeed", (_logic getVariable ["interceptor_speed", CIWS_INT_SPEED_DEF]) max 50],
    ["limit", round ((_logic getVariable ["interceptor_limit", CIWS_INT_LIMIT_DEF]) max 1)],
    ["pnGain", (_logic getVariable ["pn_gain", CIWS_PN_GAIN_DEF]) max 1],
    ["debug", _logic getVariable ["debug", false]],

    // Confirmed-inbound rounds waiting to be dealt with, and the ones already
    // being dealt with. The site picks from the first by urgency; see
    // FUNC(siteTick).
    ["threats", []],
    ["busy", []]
];

GVAR(sites) pushBack _site;

[FUNC(siteTick), CIWS_TICK, [_site]] call CBA_fnc_addPerFrameHandler;

diag_log text format [
    "[ghost_ciws] site online: %1 mode, %2 gun(s), %3 side, %4m range, types %5",
    _site get "mode", count _guns, _side, _site get "range", _types
];
