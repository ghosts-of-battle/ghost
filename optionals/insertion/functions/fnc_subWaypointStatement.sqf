#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_subWaypointStatement

Description:
    Waypoint statement run when the submarine reaches the insertion point.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_sdvCtrlGrpLead"];
	if !(isServer) exitWith {}; //wiki says setWaypointStatements is AG/EL but I'm not sure, running it only on server
	private _sdvCTRL = vehicle _sdvCtrlGrpLead;
	private _proteus = _sdvCTRL getVariable [QGVAR(SDV_attachedProteus),objNull];
	private _bubbles = _proteus getVariable [QGVAR(BubblesOrigin),objNull];
	deleteVehicle _bubbles;
	private _playerSDVs = _sdvCTRL getVariable [QGVAR(SDV_playerSDVs),[objNull,objNull]];
		[
			{
				params ["_proteus","_sdvCTRL"];
				deleteVehicle _proteus;
				{deleteVehicle _x} forEach (crew _sdvCTRL);
				deleteVehicle _sdvCTRL;
			}, 
			[_proteus,_sdvCTRL], 
			240
		] call CBA_fnc_waitAndExecute; // this scope deletes the proteus and its 'guide' 4 minutes after arrival

	// make an array of all players in the 2 SDVs
	private _playerCrews = [];
	{
		if (isPlayer _x) then {_playerCrews pushBackUnique _x};
	}
	forEach(crew (_playerSDVs select 0));

	{
		if (isPlayer _x) then {_playerCrews pushBackUnique _x};
	}
	forEach(crew (_playerSDVs select 1));
	
	
	[[_playerCrews],
		{
			params ["_playerCrews"];
			if !(hasInterface) exitWith {};
			// the original tested _playersCrews, which is not the name declared
			// above -- so this threw and the arrival hint never showed
			if !(ACE_player in _playerCrews) exitWith {};
			hint (localize "STR_GHOST_Insertion_SubOnSIteMess");
			playSound QGVAR(USSProteusComArrived);

		
		}
	] remoteExec ["call",0]; //one call filtered on arrival is better than a for each
