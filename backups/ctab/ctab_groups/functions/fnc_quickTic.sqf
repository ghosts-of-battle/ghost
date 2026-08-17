#include "script_component.hpp"
/*
 * Author: YonV
 * Keybind handler: instant TROOPS IN CONTACT. The smart card's simplified
 * report - "Troops In Contact, {callsign} in contact" - sent as cTab mail to
 * every player on your side with your current grid, plus the same map marker
 * and scanner-phone alert as the full template. 10 second cooldown so a held
 * key cannot flood the net.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Handled <BOOL>
 *
 * Example:
 * call ghost_ctab_groups_fnc_quickTic
 */

if (isNil "ctab_core_fnc_sendMessage") exitWith {false};
if (isNull cTab_player || {!alive cTab_player}) exitWith {false};

if (time < GVAR(quickTicNext)) exitWith {true};
GVAR(quickTicNext) = time + 10;

private _callsign = format ["%1:%2", groupId group cTab_player, name cTab_player];
private _grid = mapGridPosition cTab_player;
private _msg = format ["TROOPS IN CONTACT%1%2 in contact at grid %3", endl, _callsign, _grid];

private _validSides = call cTab_fnc_getPlayerSides;
private _recipList = playableUnits select {
    isPlayer _x && {alive _x} && {_x != cTab_player} && {side group _x in _validSides}
};
if (_recipList isNotEqualTo []) then {
    [_msg, _recipList] call ctab_core_fnc_sendMessage;
};

// no attachments in the fake result - sendTicAlert falls back to own position
[["", "", 0, []]] call FUNC(sendTicAlert);

["TIC", format ["TIC sent - grid %1.", _grid], [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);

true
