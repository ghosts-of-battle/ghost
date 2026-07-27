#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_addToGearListAction

Description:
    Moves the selected crate from the available list onto the manifest.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _toAddStr= lbData [1502,(lbCurSel 1502)];
private _spaceLeft = call FUNC(checkCargoSpace);
if !(_spaceLeft) exitWith {};
if (_toAddStr == "") exitWith {systemChat (localize "STR_GHOST_Insertion_noGearSelectSC")};
private _toAdd = [_toAddStr,"Obj"] call EFUNC(common,objectFromString);
_toAdd setVariable [QGVAR(isLoaded),true,true];
call FUNC(fillGearToGoList);
call FUNC(fillGearLoadedList);
call FUNC(refreshCargoRoomIntel);
