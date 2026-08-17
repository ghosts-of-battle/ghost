#include "script_component.hpp"
/*
 * Author: YonV
 * Registers a vehicle to a convoy or callsign, or clears it. Runs on the
 * server through the QGVAR(convoyRegister) event; the store is broadcast so
 * every device on every machine lists the same convoy.
 *
 * A plain array of [vehicle, name] pairs rather than a hashMap, for the same
 * reason the report log is one: this goes out over publicVariable, and an
 * array is beyond argument as network data.
 *
 * A vehicle belongs to one convoy at a time - registering it again moves it,
 * which is what the FBCB4's buttons do.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Convoy or callsign, "" to unregister <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle player, "REAPER"] call ghost_ctab_devices_fnc_convoyRegister
 */

params ["_vehicle", ["_name", "", [""]]];
if (isNull _vehicle) exitWith {};

if (isNil QGVAR(convoyStore)) then {
    GVAR(convoyStore) = [];
};

// drop any earlier registration for this vehicle, and any for a vehicle that
// has since been destroyed or deleted
GVAR(convoyStore) = GVAR(convoyStore) select {
    ((_x select 0) isNotEqualTo _vehicle) && {!isNull (_x select 0)} && {alive (_x select 0)}
};

if (_name != "") then {
    GVAR(convoyStore) pushBack [_vehicle, _name];
};

publicVariable QGVAR(convoyStore);
