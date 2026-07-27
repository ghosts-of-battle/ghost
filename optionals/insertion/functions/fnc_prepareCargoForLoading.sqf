#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_prepareCargoForLoading

Description:
    Opens the cargo preparation interface for an object.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object"];

ACE_player setVariable [QGVAR(currentAdressedLoadingObj),_object,false];
if (!(createDialog QGVAR(cargoPrep))) exitWith {
    TRACE_1("cargo prep interface failed to open",_object);
};

private _ctrlPic = ((findDisplay CARGO_IDD) displayCtrl 1200);
private _ctrlEdit = ((findDisplay CARGO_IDD) displayCtrl 1400);
private _ctrlInfoText = ((findDisplay CARGO_IDD) displayCtrl 1100);
private _ctrlActionButton = ((findDisplay CARGO_IDD) displayCtrl 1600);
private _pic = getText (configOf _object>>"editorpreview");
_ctrlPic ctrlSetText _pic;
//---
_ctrlActionButton buttonSetAction "_prettyname = ctrlText 1400; ACE_player setVariable ['ghost_insertion_setPrettyName',_prettyname];call FUNC(prepObject);";
//-----
private _isAlreadyCargo = _object getVariable [QGVAR(isAirDropSupply_)+ (str side ACE_player),false];
if (_isAlreadyCargo) then 
{
	private _nameDefined = _object getVariable QGVAR(supplyDropName);
	_ctrlEdit ctrlSetText _nameDefined;
	_ctrlInfoText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_objectAlreadyPreparedQuestion");
	_ctrlActionButton ctrlSetText (localize "STR_GHOST_Insertion_RemoveButtTextChg");
	_ctrlActionButton ctrlSetTextColor [1,0,0,1];
	_ctrlActionButton buttonSetAction "call FUNC(unprepObject);";
};
