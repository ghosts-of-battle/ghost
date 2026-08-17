#include "script_component.hpp"
/*
	File: fn_vehicleSpawner.sqf
	Author: JoramD (TrainingGrounds), ported to YMF by YonV/Ghost
	Description: ACE self-interaction vehicle spawner on a controller object.
		Spawn Vehicle lists the classes the mission config declares for this
		pad's type; Remove Vehicle lists what was spawned here and deletes it
		when empty. The vehicle lists live in config\config_vehicleSpawner.hpp
		(missionConfigFile >> "VehicleSpawner"), NOT in this file - edit them
		there. Classes not present in the loaded modset are skipped rather than
		offered.

		Spawned-vehicle bookkeeping rides on the controller object itself,
		globally, so every client's Remove menu agrees.

	Arguments:
	0: Controller <OBJECT> - the object carrying the ACE actions
	1: Spawn Position <OBJECT> - pad/helper the vehicle appears on
	2: Type <STRING> - a class name under VehicleSpawner: ground/air/sea/
	   engineer_destroy/engineer_repair

	Example:
	[this, spawnPad, "ground"] call ghost_vehicle_fnc_vehicleSpawner
*/

params ["_controller", "_spawnPos", ["_type", "ground", [""]]];

private _cfg = missionConfigFile >> "VehicleSpawner" >> _type;
if (!isArray _cfg) then {_cfg = missionConfigFile >> "VehicleSpawner" >> "ground"};

// [classname, specialType] rows; unknown classes are dropped here, once,
// rather than erroring at spawn time.
private _allowedVehicles = (getArray _cfg) select {
    isClass (configFile >> "CfgVehicles" >> (_x param [0, ""]))
};

private _spawnAction = [
    "YMF_vehicleSpawner_spawn",
    "Spawn Vehicle",
    "a3\ui_f\data\gui\rsc\rscdisplayarsenal\spacegarage_ca.paa",
    {},
    {true},
    {
        (_this select 2) params ["_controller", "_spawnPos", "_allowedVehicles"];

        private _actions = [];
        {
            _x params ["_classname", ["_specialType", ""]];
            private _vehicleName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

            private _one = [
                format ["YMF_vehicleSpawner_spawn_%1", _classname],
                format ["Spawn %1", _vehicleName],
                "",
                {
                    (_this select 2) params ["_controller", "_spawnPos", "_classname", "_specialType"];

                    if (count (_spawnPos nearEntities 5) == 0) then {
                        private _veh = createVehicle [_classname, getPosATL _spawnPos, [], 0, "CAN_COLLIDE"];
                        _veh setDir (getDir _spawnPos);

                        clearItemCargoGlobal _veh;
                        clearBackpackCargoGlobal _veh;
                        clearWeaponCargoGlobal _veh;
                        clearMagazineCargoGlobal _veh;
                        _veh addItemCargoGlobal ["ToolKit", 1];
                        if (_veh isKindOf "LandVehicle") then {
                            ["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
                            ["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
                        };

                        private _course = "";
                        switch (_specialType) do {
                            case "engineer_destroy": {
                                _course = "Engineer";
                                _veh setVehicleLock "LOCKED";
                                _veh setVehicleAmmo 0;
                            };
                            case "engineer_repair": {
                                _course = "Engineer";
                                _veh setDamage 0.6;
                            };
                            default {};
                        };

                        private _spawned = _controller getVariable ["YMF_spawnedVehicles", []];
                        _spawned pushBack [_veh, name player, _course];
                        _controller setVariable ["YMF_spawnedVehicles", _spawned, true];
                    } else {
                        ["Could not spawn vehicle, there is already a vehicle on the spawn position"] call CBA_fnc_notify;
                    };
                },
                {true},
                {},
                [_controller, _spawnPos, _classname, _specialType]
            ] call ace_interact_menu_fnc_createAction;

            _actions pushBack [_one, [], _controller];
        } forEach _allowedVehicles;

        _actions
    },
    [_controller, _spawnPos, _allowedVehicles]
] call ace_interact_menu_fnc_createAction;

[_controller, 0, ["ACE_MainActions"], _spawnAction] call ace_interact_menu_fnc_addActionToObject;

private _removeAction = [
    "YMF_vehicleSpawner_remove",
    "Remove Vehicle",
    "z\ace\addons\arsenal\data\iconclearcontainer.paa",
    {},
    {
        (_this select 2) params ["_controller"];

        private _spawned = (_controller getVariable ["YMF_spawnedVehicles", []]) select {!isNull (_x select 0)};
        _controller setVariable ["YMF_spawnedVehicles", _spawned, true];

        _spawned isNotEqualTo []
    },
    {
        (_this select 2) params ["_controller"];

        private _actions = [];
        {
            _x params ["_vehicle", "_playerName", "_course"];
            private _vehicleName = getText (configOf _vehicle >> "displayName");

            private _actionName = if (_course isEqualTo "") then {
                format ["Remove %1 (%2)", _vehicleName, _playerName]
            } else {
                format ["[%1] Remove %2 (%3)", _course, _vehicleName, _playerName]
            };

            private _one = [
                format ["YMF_vehicleSpawner_remove_%1", _vehicle],
                _actionName,
                "",
                {
                    (_this select 2) params ["_controller", "_vehicle"];

                    if (((fullCrew _vehicle) select {alive (_x select 0)}) isEqualTo []) then {
                        private _spawned = _controller getVariable ["YMF_spawnedVehicles", []];
                        _spawned = _spawned select {(_x select 0) isNotEqualTo _vehicle};
                        _controller setVariable ["YMF_spawnedVehicles", _spawned, true];
                        deleteVehicle _vehicle;
                    } else {
                        ["Could not delete vehicle, there are still people in the vehicle"] call CBA_fnc_notify;
                    };
                },
                {true},
                {},
                [_controller, _vehicle]
            ] call ace_interact_menu_fnc_createAction;

            _actions pushBack [_one, [], _controller];
        } forEach (_controller getVariable ["YMF_spawnedVehicles", []]);

        _actions
    },
    [_controller]
] call ace_interact_menu_fnc_createAction;

[_controller, 0, ["ACE_MainActions"], _removeAction] call ace_interact_menu_fnc_addActionToObject;
