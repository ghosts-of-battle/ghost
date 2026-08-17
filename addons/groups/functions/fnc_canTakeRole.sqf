#include "script_component.hpp"
/*
	File: fn_canTakeRole.sqf
	Author: Dom -- Tinkered with by YonV
	Description: Rank gate for roles. A role listed in Role_Access (config_ranks.hpp)
		requires its minRank (from Dynamic_Ranks); an optional uids[] whitelist allows
		those players regardless of rank. Unlisted roles are open to everyone.
		Admin role-access grants (YMF_roleGrants) bypass the check.
*/
params [
	["_unit",objNull,[objNull]],
	["_roleClass","",[""]]
];

private _uid = getPlayerUID _unit;
if (_uid in (missionNamespace getVariable ["YMF_roleGrants",[]])) exitWith {true};

private _accessConfig = missionConfigFile >> "Role_Access" >> _roleClass;
if (!isClass _accessConfig) exitWith {true}; //role is unrestricted

if (_uid in getArray (_accessConfig >> "uids")) exitWith {true};

private _minRank = getText (_accessConfig >> "minRank");
if (_minRank isEqualTo "") exitWith {false}; //uids-only restriction and not whitelisted

private _rankOrder = ["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"];
private _required = _rankOrder find toUpper _minRank;
if (_required isEqualTo -1) exitWith {true}; //bad minRank in config - don't lock the role

(_rankOrder find toUpper ([_unit] call EFUNC(players,getRank))) >= _required
