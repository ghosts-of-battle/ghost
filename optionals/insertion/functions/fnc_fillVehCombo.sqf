#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillVehCombo

Description:
    Populates the aircraft selector for the player's side.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _combo = ((findDisplay INSERTION_IDD) displayCtrl 2100);
private _allVehs = missionNamespace getVariable [QGVAR(AvailVehs)+(str side ACE_player),["C_Heli_Light_01_civil_F"]];
{
	private _name = ([_x] call FUNC(readVehicleCfg)) select 0;
	private _index = _combo lbAdd _name;
	_combo lbSetData [_index,_x];
}forEach _allVehs;
_combo lbSetCurSel 0;
