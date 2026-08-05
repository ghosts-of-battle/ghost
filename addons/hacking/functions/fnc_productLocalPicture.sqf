#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_productLocalPicture

Description:
    Product 1a. Enemy contacts within the picture radius of the hack point, one
    icon per GROUP rather than per man - a hacked uplink gives you dispositions,
    not a headcount.

    Framework-agnostic: the entity scan always runs. If ALiVE happens to be
    loaded it also folds in VIRTUALIZED profiles, which the entity scan cannot
    see, so a despawned garrison still shows. Active profiles are skipped because
    the entity scan already has them.

    Server side; the render is broadcast to the hacking side only.

Parameters:
    _pos  : ARRAY - centre of the picture.
    _side : SIDE  - the side that earned it.

Returns:
    NUMBER - contacts plotted.

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_pos", [0,0,0], [[]]], ["_side", west, [west]]];

private _radius = [QGVAR(cfg_local_picture_radius)] call FUNC(hackSetting);
private _rows = [];
private _seen = [];

{
    private _leader = leader _x;
    if (isNull _leader || {!alive _leader}) then { continue };
    if (side _x isEqualTo _side || {side _x isEqualTo civilian}) then { continue };
    if ((getPosASL _leader) distance2D _pos > _radius) then { continue };
    if (({alive _x} count units _x) == 0) then { continue };

    private _veh = vehicle _leader;
    _rows pushBack [getPosASL _leader, _veh isNotEqualTo _leader];
    _seen pushBack (getPosASL _leader);
} forEach allGroups;

// Optional ALiVE enrichment - never required, never a hard call.
if (!isNil "ALIVE_fnc_getNearProfiles") then {
    private _sideStr = switch (_side) do {
        case west: {"EAST"}; case east: {"WEST"}; default {"GUER"};
    };
    private _profiles = [_pos, _radius, [_sideStr]] call ALIVE_fnc_getNearProfiles;
    if (_profiles isEqualType []) then {
        {
            private _p = _x;
            if !(_p isEqualType []) then { continue };
            private _ppos = _p param [1, []];
            if !(_ppos isEqualType [] && {count _ppos >= 2}) then { continue };
            // Skip anything the entity scan already plotted.
            if (_seen findIf { _x distance2D _ppos < 50 } > -1) then { continue };
            _rows pushBack [_ppos, (_p param [2, ""]) isEqualTo "vehicle"];
        } forEach _profiles;
    };
};

if (_rows isEqualTo []) exitWith { 0 };

private _prefix = switch (_side) do {
    case west: {"o"}; case east: {"b"}; default {"n"};
};
private _icons = _rows apply {
    [_x select 0, format ["%1_%2", _prefix, ["inf", "armor"] select (_x select 1)]]
};

[QGVAR(render), [
    "icons",
    ["pic"] call FUNC(intelId),
    _icons,
    "ColorRed",
    _side
]] call CBA_fnc_globalEvent;

count _rows
