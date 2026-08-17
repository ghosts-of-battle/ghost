#include "script_component.hpp"

private _display = findDisplay 9702;
private _tree = _display displayCtrl 1500;
private _selectionPath = tvCurSel _tree;

_selectionPath params ["_groupIndex","_unitIndex"];

(parseSimpleArray (_tree tvData _selectionPath)) params ["_unitNetID","_desiredRole"];
private _unit = objectFromNetId _unitNetID;
if !(isNull _unit) exitWith {_tree tvSetCurSel _selectionPath}; //role selected already

if !([player,_desiredRole] call FUNC(canTakeRole)) exitWith {
    [
        "Role Access",
        format ["Role %1 is restricted - ask an admin for a role access grant.",_desiredRole],
        NOTE_BAD
    ] call GHOSTFUNC(notify,notify);
    playSound "addItemFailed";
};

[player,_selectionPath,_desiredRole] remoteExecCall ["ghost_groups_fnc_assignPlayer",2];
closeDialog 0;
