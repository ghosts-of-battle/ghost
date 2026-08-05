#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_zoneModel

Description:
    Builds the propagation model stamped onto a zone at spawn. Every field
    defaults to the behaviour the addon had before the model existed, so a
    mission that sets none of the new attributes jams exactly as it always did.

    Cone bearing is rolled here, once, per zone - a directional jammer that
    re-rolled its arc every tick would be unplayable.

Returns:
    HASHMAP - los, burnthrough, burnRef, curve, duty, coneFrom, coneArc, jamUavs

Author:
    Ghost
---------------------------------------------------------------------------- */
private _cone = GVAR(jamConeEnable);

createHashMapFromArray [
    ["los",         GVAR(jamLos)],
    ["burnthrough", GVAR(jamBurnthrough)],
    ["burnRef",     GVAR(jamBurnRef)],
    ["curve",       GVAR(jamCurve)],
    ["duty",        GVAR(jamDuty)],
    ["coneFrom",    if (_cone) then { random 360 } else { -1 }],
    ["coneArc",     if (_cone) then { 60 + random 120 } else { 360 }],
    ["jamUavs",     GVAR(jamUavs)]
]
