#include "script_component.hpp"

// Fired on EVERY machine by a successful hack (via CBA_fnc_globalEvent). Sets the
// networked-style CBA state variable and runs the ALiVE "show active units" reveal
// locally, so all players see the active + profiled unit markers (as ALIVE_fnc_markUnits
// does). No-op where ALiVE isn't loaded or there's no interface (dedicated server).
[QGVAR(reveal), {
    GVAR(active) = true;   // ghost_hacking_active - the CBA variable the reveal is exposed as
    if (hasInterface && {!isNil "ALIVE_fnc_markUnits"}) then {
        call ALIVE_fnc_markUnits;
    };
}] call CBA_fnc_addEventHandler;

// Intel marker from a successful hack. The server picks the target and sends one
// event; each machine builds the marker locally, rather than the server issuing
// four global marker commands.
[QGVAR(intelMarker), {
    params ["_name", "_pos", "_type", "_colour", "_text"];
    private _marker = createMarkerLocal [_name, _pos];
    _marker setMarkerTypeLocal _type;
    _marker setMarkerColorLocal _colour;
    if (_text isNotEqualTo "") then { _marker setMarkerTextLocal _text };
}] call CBA_fnc_addEventHandler;

// A revealed target has been destroyed: drop its marker and say so. Targets are
// always destroy objectives, so this is unconditional.
[QGVAR(intelDestroyed), {
    params ["_name"];
    deleteMarkerLocal _name;
    if (hasInterface) then { systemChat "Target destroyed." };
}] call CBA_fnc_addEventHandler;

[QGVAR(intelAllDown), {
    if (hasInterface) then { hint "All intel targets destroyed." };
}] call CBA_fnc_addEventHandler;

// Server-authoritative silent removal of a hacked drone (+ its virtual crew).
if (isServer) then {
    [QGVAR(deleteDrone), {
        private _drone = _this;
        if (isNull _drone) exitWith {};
        { deleteVehicle _x } forEach (crew _drone);
        deleteVehicle _drone;
    }] call CBA_fnc_addEventHandler;
};
