#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_removeFromPlayerListAction

Description:
    Takes the selected player back off the manifest.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _toRemoveStr= lbData [1501,(lbCurSel 1501)];

if (_toRemoveStr == "") exitWith {systemChat (localize "STR_GHOST_Insertion_noPlayerSelectedSC")};
private _toRmv = [_toRemoveStr,"AllUnits"] call EFUNC(common,objectFromString);
[_toRmv,"playersToGo"] call FUNC(removeFromVarList);
call FUNC(fillPlayersToGoList);
call FUNC(fillPlayersToAddList);
