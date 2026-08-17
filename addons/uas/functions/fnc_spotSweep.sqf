#include "script_component.hpp"
/*
 * Author: Ghost
 * A drone that has actually SEEN somebody says so, down the same path a
 * failed hack takes (new.md section 1.3 - one reaction path, no special
 * case). The listener is the reaction ladder; until that exists this raise is
 * a no-op, which is why it is written as an event rather than a call.
 *
 * knowsAbout rather than distance: a drone that flew over without noticing
 * anything reports nothing, and a section that stayed still and cold is not
 * punished for being overflown.
 *
 * Only REAL drones can see - a profiled one is a record and has no sensors -
 * so this walks live aircraft rather than any registry, which also means it
 * covers drones ALiVE put up as well as ghost's own.
 *
 * Parameters (CBA PFH): 0: args, 1: handle
 *
 * Public: No
 */

private _players = allPlayers select {alive _x && {!isObjectHidden _x}};
if (_players isEqualTo []) exitWith {};

{
    private _veh = _x;
    if (!alive _veh) then {continue};
    if (CBA_missionTime < (_veh getVariable [QGVAR(spotCd), -1e9])) then {continue};

    private _vside = side _veh;
    private _seen = objNull;
    {
        if ((_vside getFriend (side group _x)) < 0.6
            && {_x distance2D _veh < UAS_SPOT_RANGE}
            && {(_veh knowsAbout _x) >= UAS_SPOT_KNOWS}) exitWith { _seen = _x };
    } forEach _players;

    if (isNull _seen) then {continue};

    _veh setVariable [QGVAR(spotCd), CBA_missionTime + UAS_SPOT_COOLDOWN];
    [QEGVAR(reaction,event), [_seen, "drone"]] call CBA_fnc_localEvent;

    INFO_2("drone %1 has eyes on %2",typeOf _veh,name _seen);
} forEach (vehicles select {_x isKindOf "UAV" && {alive _x}});
