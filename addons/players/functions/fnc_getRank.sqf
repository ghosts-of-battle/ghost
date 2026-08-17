#include "script_component.hpp"
/*
	File: fn_player_getRank.sqf
	Author: YonV
	Description: Returns a player's rank from the Steam ID rank config (config_ranks.hpp).
		Replaces the old profile-name rank system.

	Arguments:
	0: Unit or Steam UID <OBJECT|STRING>
	1: Style <STRING> (Default: "BIS") - "BIS" returns the engine rank name ("Sergeant"),
		"USA" returns the short US style ("SGT")

	Example:
	[player, 'BIS'] call ghost_players_fnc_getRank;
*/

params [
	["_unit", objNull, [objNull,""]],
	["_style", "BIS", [""]]
];

private _uid = if (_unit isEqualType "") then {_unit} else {getPlayerUID _unit};
private _rank = (missionNamespace getVariable ["YMF_playerRanks",createHashMap]) getOrDefault [
	_uid,
	getText(missionConfigFile >> "Dynamic_Ranks" >> "default_rank")
];

if (toUpper _style isEqualTo "USA") exitWith {
	switch (toUpper _rank) do {
		case "PRIVATE": {"PVT"};
		case "CORPORAL": {"CPL"};
		case "SERGEANT": {"SGT"};
		case "LIEUTENANT": {"LT"};
		case "CAPTAIN": {"CPT"};
		case "MAJOR": {"MAJ"};
		case "COLONEL": {"COL"};
		default {_rank};
	}
};

_rank
