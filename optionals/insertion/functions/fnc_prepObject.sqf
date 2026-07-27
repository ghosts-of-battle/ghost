#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_prepObject

Description:
    Marks an object as prepared cargo and gives it a display name.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
closeDialog 0;

private _object =ACE_player getVariable QGVAR(currentAdressedLoadingObj);
private _mass = getMass _object;
private _time = _mass/50;
playSound QGVAR(Strapping);
private _move ="AinvPknlMstpSnonWnonDnon_medicUp1";
//"InBaseMoves_repairVehicleKnl"


[ACE_player,_move] call ace_common_fnc_doAnimation;
[_time,[],
			{
				private _object =ACE_player getVariable QGVAR(currentAdressedLoadingObj);
				private _prettyName = ACE_player getVariable QGVAR(setPrettyName);
				[_object, side ACE_player,true,_prettyName] call FUNC(isAirDropSupply);
				ACE_player setVariable [QGVAR(currentAdressedLoadingObj),nil,false];
				ACE_player setVariable [QGVAR(setPrettyName),nil,false];
				hintC (localize "STR_GHOST_Insertion_CargoReadyHC");
				[ACE_player, ""] call ace_common_fnc_doAnimation;
			},
			{
					
				
				ACE_player setVariable [QGVAR(currentAdressedLoadingObj),nil,false];
				ACE_player setVariable [QGVAR(setPrettyName),nil,false];
				hintC (localize "STR_GHOST_Insertion_preppingCancelledHC");	
				[ACE_player, ""] call ace_common_fnc_doAnimation;
					
			},
				(localize "STR_GHOST_Insertion_preppingCargoProgressBar")


				] call ace_common_fnc_progressBar;

