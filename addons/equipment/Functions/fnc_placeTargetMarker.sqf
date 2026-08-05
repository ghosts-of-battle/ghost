#include "script_component.hpp"
/*
 * Author: YonV
 * Places a map marker at the point the player is aiming at through one of the
 * [Ghost] Vector Designators. Marker type, colour and lifetime come from CBA settings.
 * Called from the CBA keybind added in initKeybinds.inc.sqf.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Handled <BOOL>
 *
 * Example:
 * call ghost_equipment_fnc_placeTargetMarker
 */

if (!GVAR(markerEnabled)) exitWith {false};
if (isNull ACE_player || {!alive ACE_player}) exitWith {false};
if !(currentWeapon ACE_player in [QGVAR(Vector_Designator), QGVAR(Vector_Designator_NVG)]) exitWith {false};

private _begin = AGLToASL positionCameraToWorld [0, 0, 0];
private _end = AGLToASL positionCameraToWorld [0, 0, 5000]; // matches maxRange of the Vector

// Nearest object/building surface on the line of sight
private _posASL = [];
private _intersections = lineIntersectsSurfaces [_begin, _end, ACE_player, objNull, true, 1, "VIEW", "GEOM"];
if (_intersections isNotEqualTo []) then {
    _posASL = (_intersections select 0) select 0;
};

// Terrain hit - take it if it is closer than any object hit (or the only hit)
private _terrain = terrainIntersectAtASL [_begin, _end];
if (count _terrain == 3) then {
    if (_posASL isEqualTo [] || {_begin vectorDistance _terrain < _begin vectorDistance _posASL}) then {
        _posASL = _terrain;
    };
};

if (_posASL isEqualTo []) exitWith {
    hintSilent "Vector: no target";
    true
};

private _distance = round (_begin vectorDistance _posASL);

GVAR(markerIndex) = GVAR(markerIndex) + 1;
private _markerName = format [QGVAR(marker_%1_%2), clientOwner, GVAR(markerIndex)];

private _marker = createMarker [_markerName, ASLToAGL _posASL];
_marker setMarkerTypeLocal GVAR(markerType);
_marker setMarkerColorLocal GVAR(markerColor);
_marker setMarkerText format ["%1 (%2m)", name ACE_player, _distance]; // last update global to broadcast the full marker

if (GVAR(markerDuration) > 0) then {
    [{deleteMarker _this}, _marker, GVAR(markerDuration)] call CBA_fnc_waitAndExecute;
};

// In-world 3D marker name on every client (each client checks its own setting)
if (GVAR(marker3DDuration) > 0) then {
    [QGVAR(marker3D), [_posASL, format ["%1 (%2m)", name ACE_player, _distance], GVAR(markerColor)]] call CBA_fnc_globalEvent;
};

hintSilent format ["Marker placed: %1m", _distance];

true
