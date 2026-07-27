#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_checkForAllClear

Description:
    Validates every field of the insertion plan; returns [ok, reason].

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _positionSet = true;
if (getMarkerColor QGVAR(LZ_Marker) == "") then {_positionSet = false};

private _cargoSpaceClear = call FUNC(checkCargoSpace);

private _playersListClear = (count (ACE_player getVariable [QGVAR(playersToGo),[]])) >=1;


private _allClear = false;
if (_positionSet && _cargoSpaceClear && _playersListClear) then{_allClear = true};
private _return = [_allClear,_positionSet,_cargoSpaceClear,_playersListClear];
_return
