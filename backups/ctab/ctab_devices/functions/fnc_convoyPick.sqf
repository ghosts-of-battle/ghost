#include "script_component.hpp"
/*
 * Author: YonV
 * A convoy button on the CONVOY app. What it does depends on the device, and
 * deliberately so: the FBCB4 is bolted into a vehicle and is the only screen
 * that knows which one, so it is the only one that can register. The
 * handhelds only choose whose column to watch.
 *
 * Pressing the button that is already picked steps back to the list, which is
 * how you change convoy without a second control.
 *
 * Arguments:
 * 0: Index into the convoy name list <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ghost_ctab_devices_fnc_convoyPick
 */

params ["_index"];

private _names = call FUNC(convoyNames);
// -1 is the dropdown's "-- none --" row: step back to no convoy
if (_index < 0) exitWith {
    uiNamespace setVariable [QGVAR(convoyView), ""];
};

private _name = _names param [_index, ""];
if (_name == "") exitWith {};

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};
private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

uiNamespace setVariable [QGVAR(convoyView), _name];

// The vehicle screen also puts the vehicle it is in on the board. Registering
// is server-side so every device sees the same column.
if ((ctrlIDD _display) == IDD_FBCB4) then {
    private _veh = vehicle cTab_player;
    if (_veh isEqualTo cTab_player) exitWith {
        ["Convoy", "You are not in a vehicle.", [1, 0.3, 0.3, 1]] call ghost_notify_fnc_notify;
    };
    [QGVAR(convoyRegister), [_veh, _name]] call CBA_fnc_serverEvent;
    ["Convoy", format ["Registered to %1.", _name], [0.35, 0.85, 0.42, 1]] call ghost_notify_fnc_notify;
};
