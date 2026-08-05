#include "script_component.hpp"
/*
 * Author: YonV
 * The message-template Send button (config-patched onto cTab's footer). Does
 * what cTab's own send does, plus this addon's routing:
 *   - "@GRP:" rows expand to that group's players
 *   - "@BOX:" rows file the report instead of mailing it
 *   - TIC broadcasts to the whole side and raises the alert
 *   - CONTACTREP / SITREP addressed to a group post into ALiVE
 *   - DEFREP / ACE auto-file to the status log and can copy the command group
 * Structured field values are captured before cTab resets them.
 *
 * Arguments:
 * 0: The send button <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_button] call ghost_ctab_groups_fnc_btnSend
 */

params ["_button"];

private _display = ctrlParent _button;
private _control = _display displayCtrl IDC_CTAB_RECIPIENTS;

private _selectedData = (lbSelection _control) apply {_control lbData _x};
private _hasGroupBox = _selectedData findIf {_x select [0, 5] == "@GRP:"} > -1;
private _fileBoxes = (_selectedData select {_x select [0, 5] == "@BOX:"}) apply {_x select [5]};

// individual players, resolved cTab's way (str match against playableUnits)
private _plrList = playableUnits;
if (_plrList isEqualTo []) then {
    _plrList pushBack cTab_player;
};
private _recipList = _plrList select {(str _x) in _selectedData};

// our group rows
{
    if (_x select [0, 5] == "@GRP:") then {
        _recipList append ([_x] call FUNC(resolveGroupToken));
    };
} forEach _selectedData;
_recipList = _recipList arrayIntersect _recipList;

private _uid = "";
if (!isNil "ctab_messaging_currentTemplateData") then {
    _uid = ctab_messaging_currentTemplateData param [0, ""];
};
private _isTic = _uid == "ghost#tic";
private _isStatus = _uid in ["ghost#defrep", "ghost#ace"];

// TIC ignores the selection - it always goes to everyone on your side
if (_isTic) then {
    private _validSides = call cTab_fnc_getPlayerSides;
    _recipList = playableUnits select {
        isPlayer _x && {alive _x} && {_x != cTab_player} && {side group _x in _validSides}
    };
};

if (_recipList isEqualTo [] && {!_hasGroupBox} && {!_isTic} && {!_isStatus} && {_fileBoxes isEqualTo []}) exitWith {};

private _templateData = ctab_messaging_currentTemplateData;
private _result = [_display] call ctab_messaging_fnc_generateTemplateText;
private _values = +ctab_messaging_currentTemplateValues;
ctab_messaging_currentTemplateValues = [];

// DEFREP/ACE: always filed to the status log, optionally copied to command
if (_isStatus) then {
    private _cmdIdx = (_templateData param [5, []]) findIf {(_x param [0, ""]) == "Command"};
    private _ticked = false;
    if (_cmdIdx > -1) then {
        _ticked = (_values param [_cmdIdx, []]) param [0, false];
    };
    private _cmdGroup = [GVAR(commandGroup)] call CBA_fnc_trim;
    if (_ticked isEqualTo true && {_cmdGroup != ""}) then {
        _recipList append (["@GRP:" + _cmdGroup] call FUNC(resolveGroupToken));
        _recipList = _recipList arrayIntersect _recipList;
    };
    private _log = [GVAR(statusLogBox)] call CBA_fnc_trim;
    if (_log != "" && {!(_log in _fileBoxes)}) then {
        _fileBoxes pushBack _log;
    };
};

if (_recipList isNotEqualTo []) then {
    [_result, _recipList] call ctab_messaging_fnc_sendMessage;
};

if (_hasGroupBox) then {
    [_templateData, _values, _result] call FUNC(postAliveReport);
};

if (_isTic) then {
    [_result] call FUNC(sendTicAlert);
};

// file boxes: archived server-side rather than mailed
{
    [QGVAR(fileReport), [
        str side group cTab_player,
        _x,
        format ["[%1] %2 - %3:%4 (%5)", toUpper _x, _result param [0, ""], groupId group cTab_player, name cTab_player, call cTab_fnc_currentTime],
        _result param [1, ""]
    ]] call CBA_fnc_serverEvent;
} forEach _fileBoxes;

if (_fileBoxes isNotEqualTo []) then {
    hintSilent format ["Filed to: %1", _fileBoxes joinString ", "];
};

[_button, true] call ctab_messaging_fnc_closeTemplateUI;
