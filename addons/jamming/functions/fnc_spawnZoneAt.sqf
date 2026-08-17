#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_jamming_fnc_spawnZoneAt

Description:
    Registers one EW zone at a known point, with or without a destructible
    emitter to hold it up.

    FUNC(spawnJammers) scatters emitters at random inside a TAOR, which is right
    for atmosphere and wrong for anything that has to sit on a particular thing -
    a base, a convoy, an objective. This is the same registry entry placed
    deliberately, so another addon can put a zone somewhere without learning the
    index contract or duplicating the propagation model.

    With an emitter class, the zone dies when the object does, via the usual
    prune loop - so players can silence it by destroying it, which is the whole
    reason EW zones have objects at all. With no class it is abstract and
    permanent: nothing to find, nothing to kill.

    The propagation model is stamped at spawn, exactly as it is for the module's
    own emitters, so a later attribute change never rewrites a zone already in
    the field.

Parameters:
    _pos    : ARRAY  - centre, in WORLD (AGL) coordinates - what getPosATL and
                       getMarkerPos hand you. Converted internally; the registry
                       stores ASL.
    _radius : NUMBER - outer radius. The full-strength core is the usual fraction.
    _class  : STRING - emitter object class. "" = abstract zone, no object.
    _type   : STRING - "jam" or "detect". Optional, default "jam".

Returns:
    ARRAY - [_id, _object]. _object is objNull for an abstract zone; _id is ""
            on failure.

Example:
    [_basePos, 900, "Land_TTowerBig_2_F"] call ghost_jamming_fnc_spawnZoneAt

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith { ["", objNull] };

params [["_pos", [0,0,0], [[]]], ["_radius", 800, [0]], ["_class", "", [""]],
        ["_type", "jam", [""]]];

if (_radius <= 0) exitWith { ["", objNull] };

if (isNil QGVAR(jammers)) then { GVAR(jammers) = [] };
if (isNil QGVAR(nextZoneId)) then { GVAR(nextZoneId) = 1 };

private _obj = objNull;
if (_class isNotEqualTo "" && {isClass (configFile >> "CfgVehicles" >> _class)}) then {
    _obj = createVehicle [_class, _pos, [], 0, "CAN_COLLIDE"];
    if (!isNull _obj) then {
        _obj setPosATL _pos;
        _obj setVectorUp surfaceNormal (getPosATL _obj);
    };
};

// A class was asked for and did not appear. That is a mission error, not a
// reason to quietly register an indestructible zone nobody can ever turn off -
// the emitter IS the off switch.
if (_class isNotEqualTo "" && {isNull _obj}) exitWith {
    WARNING_1("Jamming: emitter '%1' missing or failed to create - no zone registered.",_class);
    ["", objNull]
};

private _id = format [QGVAR(z%1), GVAR(nextZoneId)];
GVAR(nextZoneId) = GVAR(nextZoneId) + 1;

// An emitter answers for its own position; an abstract zone keeps the one it
// was given. The registry is ASL throughout - see the index contract in
// script_component.hpp.
private _zpos = if (isNull _obj) then { AGLToASL _pos } else { getPosASL _obj };

GVAR(jammers) pushBack [
    _obj, _radius * JAMMER_EFFECTIVE_FRAC, _radius,
    _id, _type, isNull _obj, _zpos,
    [] call FUNC(zoneModel)
];
// NOT PUBLISHED HERE. This used to broadcast the whole registry on every
// single zone, so placing n zones sent 1+2+...+n entries - 156 zones in one
// frame published over twelve thousand of them, all on the server's main
// thread. The caller publishes ONCE when its batch is done.
TRACE_3("zone placed",_id,mapGridPosition _pos,round _radius);

[_id, _obj]
