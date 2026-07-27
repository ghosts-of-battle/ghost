#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_objectAADWatch

Description:
    Server-side auto-activation device for a dropped object. Waits for it to be
    lifted above its set altitude, then for it to fall back through it, and cuts
    the chutes in. Sized by mass -- see ghost_common_fnc_addMultipleParachutesToObject.

    MUST be spawned, not called: it suspends, and the handle is stored so a
    later altitude change can terminate and restart it.

Parameters:
    _object : OBJECT - the AAD-equipped object.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object"];

private _fnc_trigger = {
    parseNumber (_this getVariable [QGVAR(aadOpeningAlt), str GVAR(aadDefaultAltitude)])
};

// armed on the way up ...
waitUntil {((getPosASL _object) select 2) >= (_object call _fnc_trigger)};
// ... fires on the way back down
waitUntil {((getPosASL _object) select 2) < (_object call _fnc_trigger)};

[_object] call EFUNC(common,addMultipleParachutesToObject);
TRACE_2("object AAD fired",_object,round ((getPosASL _object) select 2));

waitUntil {isTouchingGround _object};
