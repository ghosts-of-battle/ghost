#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_scanDevices

Description:
    Everything hackable within reach, as one list for the tablet: comm towers and
    EW emitters, live enemy drones, downed ones, and enemy soldiers. Each kind
    keeps its own range, so a wreck you must stand over and a soldier 800 m away
    can sit on the same screen without pretending they are the same thing.

    Sorted nearest first and capped at the number of cards the screen has - if
    there are more devices than slots, the far ones are the ones you cannot see,
    which is the right way round.

Parameters:
    _unit : OBJECT - the operator.

Returns:
    ARRAY - [[_object, _kind, _label, _distance, _range], ...]
            _kind is "tower" | "drone" | "wreck" | "unit".

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _out = [];

// --- towers and EW emitters ------------------------------------------------
private _towerRange = [QGVAR(cfg_hack_range)] call FUNC(hackSetting);
private _cd = [QGVAR(cfg_hack_cooldown)] call FUNC(hackSetting);
{
    private _t = _x;
    private _last = _t getVariable [QGVAR(lastHack), -1e9];
    private _spent = (_cd < 0 && {_last > -1e8}) || {_cd >= 0 && {(CBA_missionTime - _last) < _cd}};
    private _emitter = false;
    if (!isNil "ghost_electronic_war_zones_jammers") then {
        _emitter = (ghost_electronic_war_zones_jammers findIf { (_x param [0, objNull]) isEqualTo _t }) > -1;
    };
    _out pushBack [
        _t, "tower",
        [["COMM TOWER", "EW EMITTER"] select _emitter, "SPENT"] select _spent,
        _unit distance _t, _towerRange
    ];
} forEach ([_unit, _towerRange + TAB_SCAN_PAD] call FUNC(towersInRange));

// --- drones ---------------------------------------------------------------
private _drone = [_unit] call FUNC(nearestDrone);
if (!isNull _drone) then {
    _out pushBack [_drone, "drone", "HOSTILE UAV", _unit distance _drone, HACK_DRONE_RANGE];
};

// --- downed drones ---------------------------------------------------------
// A wreck is a separate kind, not a drone that happens to be dead: there is
// nothing left to take down, but there is still a data card to pull.
private _wreck = [_unit] call FUNC(nearestWreck);
if (!isNull _wreck) then {
    _out pushBack [_wreck, "wreck", "DOWNED UAV", _unit distance _wreck, HACK_WRECK_RANGE];
};

// --- enemy soldiers, only while a Remote Hack module exists ----------------
if (missionNamespace getVariable [QGVAR(remoteHackEnabled), false]) then {
    private _range = missionNamespace getVariable [QGVAR(rh_max_range), RH_RANGE_DEF];
    private _mySide = side group _unit;
    {
        if (
            alive _x && {isNull objectParent _x}
            && {(side group _x) getFriend _mySide < 0.6}
            && {side group _x isNotEqualTo civilian}
            && {!(_x getVariable [QGVAR(hacked), false])}
        ) then {
            _out pushBack [_x, "unit", "ENEMY COMMS", _unit distance _x, _range];
        };
    } forEach (_unit nearEntities ["Man", _range]);
};

private _ranked = _out apply { [_x select 3, _x] };
_ranked sort true;
_out = _ranked apply { _x select 1 };

if (count _out > TAB_CARDS) then { _out = _out select [0, TAB_CARDS] };
_out
