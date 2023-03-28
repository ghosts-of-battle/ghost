#include "..\script_component.hpp"
/*

 * \ghost_medical\supplies\functions\fn_doUnpackDrugKit.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call ghost_medical_supplies_fnc_doUnpackDrugKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\ghost\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], 
        { ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, 
        { ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        Hint "Unpack Drug Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "ghost_medbags_DrugKit";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "kat_IV_16", 16, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_IO_FAST", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_etomidate", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_flumazenil", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_lidocaine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_lorazepam", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_naloxone", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_nitroglycerin", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_norepinephrine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_phenylephrine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_TXA", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_EACA", 6, _order, _overflow] call EFUNC(common,addItem);
    };
};

