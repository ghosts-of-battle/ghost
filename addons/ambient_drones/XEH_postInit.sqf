#include "script_component.hpp"

if (isServer) then {
    GVAR(contactMarks) = [];
    [QGVAR(contact), {_this call FUNC(markContact)}] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

// Contact reporting: a player firing or taking a hit stamps the spot as a
// fight. Throttled hard - the QRF watcher only needs to know a fight happened
// here recently, not how many rounds went into it. Registered through CBA's
// player event handlers so it follows respawns and unit switches.
GVAR(lastContactSend) = -1000;

GVAR(reportContact) = {
    if (time - GVAR(lastContactSend) < QRF_CONTACT_THROTTLE) exitWith {};
    GVAR(lastContactSend) = time;
    [QGVAR(contact), [position player]] call CBA_fnc_serverEvent;
};

["unit", {
    params ["_unit", "_oldUnit"];

    if (!isNull _oldUnit) then {
        _oldUnit removeEventHandler ["FiredMan", _oldUnit getVariable [QGVAR(firedEH), -1]];
        _oldUnit removeEventHandler ["Hit", _oldUnit getVariable [QGVAR(hitEH), -1]];
    };

    if (isNull _unit) exitWith {};
    _unit setVariable [QGVAR(firedEH), _unit addEventHandler ["FiredMan", {call GVAR(reportContact)}]];
    _unit setVariable [QGVAR(hitEH), _unit addEventHandler ["Hit", {call GVAR(reportContact)}]];
}, true] call CBA_fnc_addPlayerEventHandler;
