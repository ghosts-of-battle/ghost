#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_checkListUpdate

Description:
    Refreshes the interface when the underlying lists have changed.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _allClearParams = call FUNC(checkForAllClear);
private _go = _allClearParams select 0;
private _posSet = _allClearParams select 1;


private _cargoSpaceClear = _allClearParams select 2;
private _passengersClear = _allClearParams select 3;
private _okPic = QPATHTOF(data\ok.paa);
_okPic = "<img image =" +str _okPic + "/>";
private _notOkPic =QPATHTOF(data\pasok.paa);
_notOkPic = "<img image =" + str _notOkPic + "/>";
private _inside_fnc_decideColor =
{
	params ["_bool","_text"];
	
private _false = "<t color = '#ff0707'>";
private _true = "<t color= '#06d609'>";
private _end = "</t>";
private _textFinal = ([_false,_true] select _bool) + _text + _end;

_textFinal
};

private _ctrl = ((findDisplay INSERTION_IDD) displayCtrl 1104);
//--------check position is set
private _posSetText = (localize "STR_GHOST_Insertion_YouHaventSetDest") + _notOkPic +"<br/>";
if(_posSet) then {
private _pos = getMarkerPos QGVAR(LZ_Marker);
private _realisticPos = [_pos] call EFUNC(common,realisticGrid);
_posSetText = (localize "STR_GHOST_Insertion_DestSetForGrid") +" " + _realisticPos +" " + _okPic + "<br/>";
};
_posSetText = [_posSet,_posSetText] call _inside_fnc_decideColor;
//-----------check cargo space is clear
private _cargoSpaceText = (localize "STR_GHOST_Insertion_ExcededCGSpace")+ _notOkPic +"<br/>";

if (_cargoSpaceClear) then { _cargoSpaceText = (localize "STR_GHOST_Insertion_ThereIsEnoughCGSpace")+ _okPic + "<br/>";};
_cargoSpaceText = [_cargoSpaceClear,_cargoSpaceText] call _inside_fnc_decideColor;
//---- text for passengers
private _passengersText = (localize "STR_GHOST_Insertion_NoPassengersAdded") + _notOkPic +"<br/>";
if(_passengersClear) then {_passengersText = (localize "STR_GHOST_Insertion_YouHaveAddedPass") + _okPic + "<br/>";};
_passengersText = [_passengersClear,_passengersText] call _inside_fnc_decideColor;
//----- ready to launch 
private _goText = (localize "STR_GHOST_Insertion_YouHaventRequiredParams")+ _notOkPic +"<br/>";
if (_go) then {_goText = (localize "STR_GHOST_Insertion_allParamsAreOk") + _okPic + "<br/>"};
_goText = [_go,_goText] call _inside_fnc_decideColor;

private _finaText = _posSetText + _cargoSpaceText + _passengersText + _gotext;
_ctrl ctrlSetStructuredText parseText _finaText;

private _goButton = ((findDisplay INSERTION_IDD) displayCtrl 1600);
_goButton ctrlSetTextColor ([[1,0,0,1],[0,1,0,1]] select _go);
