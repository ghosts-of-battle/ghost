#include "script_component.hpp"
/*
	File: fn_dumpClassnames.sqf
	Author: YonV
	Description: Dumps every scope-2 (public) classname from the loaded mods to the RPT,
		grouped by gear type. Each category is logged as a single paste-friendly array
		line, ready to drop into an arsenal config.

	Example:
	[] call ghost_systems_fnc_dumpClassnames;   //or chat command #dumpclasses (admin only)
*/

private _byType = createHashMap;
private _push = {
	params ["_type","_class"];
	private _list = _byType getOrDefault [_type,[]];
	_list pushBack _class;
	_byType set [_type,_list];
};

//CfgWeapons: weapons, attachments, wearables, inventory items
{
	private _cfg = _x;
	private _class = configName _cfg;
	private _type = getNumber (_cfg >> "type");
	private _itemInfoType = getNumber (_cfg >> "ItemInfo" >> "type");
	private _simulation = toLower getText (_cfg >> "simulation");

	switch (true) do {
		case (_simulation isEqualTo "nvgoggles"): {["nvgs",_class] call _push};
		case (_itemInfoType isEqualTo 605): {["headgear",_class] call _push};
		case (_itemInfoType isEqualTo 701): {["vests",_class] call _push};
		case (_itemInfoType isEqualTo 801): {["uniforms",_class] call _push};
		case (_itemInfoType isEqualTo 101): {["muzzle_attachments",_class] call _push};
		case (_itemInfoType isEqualTo 201): {["optics",_class] call _push};
		case (_itemInfoType isEqualTo 301): {["pointers_lights",_class] call _push};
		case (_itemInfoType isEqualTo 302): {["bipods",_class] call _push};
		case (_type isEqualTo 1): {["primary_weapons",_class] call _push};
		case (_type isEqualTo 2): {["handguns",_class] call _push};
		case (_type isEqualTo 4): {["launchers",_class] call _push};
		case (_type isEqualTo 4096): {["binoculars",_class] call _push};
		case (_type isEqualTo 131072): {["items",_class] call _push};
		default {["other_cfgweapons",_class] call _push};
	};
} forEach ("(getNumber (_x >> 'scope')) == 2" configClasses (configFile >> "CfgWeapons"));

//CfgMagazines
{
	["magazines",configName _x] call _push;
} forEach ("(getNumber (_x >> 'scope')) == 2" configClasses (configFile >> "CfgMagazines"));

//CfgGlasses (facewear)
{
	["facewear",configName _x] call _push;
} forEach ("(getNumber (_x >> 'scope')) == 2" configClasses (configFile >> "CfgGlasses"));

//CfgVehicles: backpacks only
{
	private _class = configName _x;
	if (_class isKindOf ["Bag_Base", configFile >> "CfgVehicles"]) then {
		["backpacks",_class] call _push;
	};
} forEach ("(getNumber (_x >> 'scope')) == 2" configClasses (configFile >> "CfgVehicles"));

//dump - one array line per category, easy to copy out of the RPT
diag_log "======================================================================";
diag_log "==================== CLASSNAME DUMP (by gear type) ===================";
{
	private _list = _y;
	_list sort true;
	diag_log "======================================================================";
	diag_log format ["===== %1 (%2 classes) =====", toUpper _x, count _list];
	diag_log str _list;
} forEach _byType;
diag_log "========================== END CLASSNAME DUMP =======================";

private _total = 0;
{_total = _total + count _y} forEach _byType;
[
    "Classname Dump",
    format ["Written to RPT - %1 categories, %2 classes total.", count _byType, _total],
    NOTE_INFO
] call GHOSTFUNC(notify,notify);
