#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn N destructible EW emitters at random points in the given TAOR marker(s),
 * each with a random jam radius, and add them to the broadcast jammer list.
 * Jamming/interference math is adapted from Crows-Electronic-Warfare (APL-SA).
 *
 * Arguments:
 * 0: Marker names <ARRAY>
 * 1: Emitter count <NUMBER>
 * 2: Emitter object class(es) - one picked at random per emitter <ARRAY>
 * 3: Radius min <NUMBER>
 * 4: Radius max <NUMBER>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_markers", "_count", "_classes", "_rMin", "_rMax"];

if (isNil QGVAR(nextZoneId)) then { GVAR(nextZoneId) = 1 };

if (_classes isEqualTo []) exitWith {
    WARNING("Electronic War Zones: no emitter class set - no emitters spawned.");
};

for "_i" from 1 to _count do {
    private _marker = selectRandom _markers;
    private _pos = [[_marker]] call BIS_fnc_randomPos;
    if (_pos isEqualTo [0,0,0]) then { continue };

    private _class = selectRandom _classes;
    private _obj = createVehicle [_class, _pos, [], 0, "CAN_COLLIDE"];
    if (isNull _obj) then {
        WARNING_1("Electronic War Zones: failed to create emitter '%1'.",_class);
        continue;
    };
    _obj setVectorUp surfaceNormal (getPosATL _obj);

    private _radius = _rMin + random (_rMax - _rMin);
    private _rEff = _radius * JAMMER_EFFECTIVE_FRAC;

    // Registry entry - see script_component.hpp for the index contract. The
    // propagation model is stamped per zone at spawn so a later change to the
    // module attributes never silently rewrites zones already in the field.
    GVAR(jammers) pushBack [
        _obj, _rEff, _radius,
        format [QGVAR(z%1), GVAR(nextZoneId)],
        "jam", false, getPosASL _obj,
        [] call FUNC(zoneModel)
    ];
    GVAR(nextZoneId) = GVAR(nextZoneId) + 1;

    if (GVAR(debug)) then {
        private _mkr = format [QGVAR(jam_%1), count GVAR(jammers)];
        createMarker [_mkr, _pos];
        _mkr setMarkerShapeLocal "ELLIPSE";
        _mkr setMarkerSizeLocal [_radius, _radius];
        _mkr setMarkerBrushLocal "Border";
        _mkr setMarkerColor "ColorRed";
        _obj setVariable [QGVAR(marker), _mkr];
    };
};

// Publish (JIP-persistent) so every client's jam loop sees the current field.
missionNamespace setVariable [QGVAR(jammers), GVAR(jammers), true];
