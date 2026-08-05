#include "script_component.hpp"

// Server only. ProjectileCreated fires on the machine that created the round,
// and the decoy has to be attached where the round exists - which for AI and
// virtual artillery, the things a C-RAM is for, is the server.
//
// A round fired from a player's own weapon is local to that player and is not
// intercepted. That is a real limit and an acceptable one: nobody builds point
// defence against the rifle in their own hands.
if (!isServer) exitWith {};

addMissionEventHandler ["ProjectileCreated", {
    _this call FUNC(onProjectile);
}];

["ciws.status", "list defended sites and their guns", {
    if (GVAR(sites) isEqualTo []) exitWith { "no CIWS module placed" };
    (GVAR(sites) apply {
        private _live = (_x get "guns") select { !isNull _x && {alive _x} };
        format ["%1 %2m: %3/%4 gun(s) alive",
            _x get "side", _x get "range", count _live, count (_x get "guns")]
    }) joinString "  |  "
}, true] call EFUNC(common,addDebugCommand);
