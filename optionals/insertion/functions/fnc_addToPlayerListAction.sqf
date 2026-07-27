#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_addToPlayerListAction

Description:
    Moves the selected player from the available list onto the manifest.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _toAddStr= lbData [1500,(lbCurSel 1500)];
private _spaceLeft = call FUNC(checkCargoSpace);
if !(_spaceLeft) exitWith {call FUNC(fillPlayersToGoList);};
if (_toAddStr == "") exitWith {systemChat (localize "STR_GHOST_Insertion_noPlayerSelectedSC")};
private _toAdd = [_toAddStr,"AllUnits"] call EFUNC(common,objectFromString);
[_toAdd,"playersToGo"] call FUNC(addToVarList);
call FUNC(fillPlayersToGoList);
call FUNC(fillPlayersToAddList);
