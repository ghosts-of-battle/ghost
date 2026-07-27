#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_removeFromGearListAction

Description:
    Takes the selected crate back off the manifest.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _toAddStr= lbData [1503,(lbCurSel 1503)];
if (_toAddStr == "") exitWith {systemChat (localize "STR_GHOST_Insertion_noGearSelectSC")};
private _toAdd = [_toAddStr,"Obj"] call EFUNC(common,objectFromString);
_toAdd setVariable [QGVAR(isLoaded),false,true];
call FUNC(fillGearToGoList);
call FUNC(fillGearLoadedList);
call FUNC(refreshCargoRoomIntel);
