#include "script_component.hpp"
/*
 * Author: Ghost
 * Server PFH: drop destroyed/deleted emitters from the jammer list, clean up their
 * debug markers, and re-broadcast. Lets players silence a zone by killing its emitter.
 *
 * Arguments (CBA PFH): unused
 *
 * Return Value: None
 *
 * Public: No
 */

if (isNil QGVAR(jammers)) exitWith {};

private _live = GVAR(jammers) select {
    (_x select 0) isKindOf "Object" && { !isNull (_x select 0) && {alive (_x select 0)} }
};

if (count _live == count GVAR(jammers)) exitWith {};   // nothing died

// Clean markers of the ones that died.
{
    private _obj = _x select 0;
    if (isNull _obj || {!alive _obj}) then {
        private _mkr = _obj getVariable [QGVAR(marker), ""];
        if (_mkr isNotEqualTo "") then { deleteMarker _mkr };
    };
} forEach GVAR(jammers);

GVAR(jammers) = _live;
missionNamespace setVariable [QGVAR(jammers), GVAR(jammers), true];
