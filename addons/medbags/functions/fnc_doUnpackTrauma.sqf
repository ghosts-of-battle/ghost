#include "..\script_component.hpp"
/*

 * \ghost_medical\supplies\functions\fn_doUnpackMedicKit.sqf
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
 * [player] call ghost_medical_supplies_fnc_doUnpackMedicKit;
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
        [], { ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        locHintalize "Unpacking Trauma Kit....",
 {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (ghost_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "ghost_medbags_Trauma";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACE_fieldDressing", 28, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_elasticBandage", 24, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_packingBandage", 24, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_quikClot", 24, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_salineIV", 12, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_tourniquet", 12, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_splint", 12, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_fieldDressing", 24, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_tourniquet", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_EarPlugs", 02, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_plasmaIV", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_tourniquet", 12, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_AED", 01, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_clamp", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_plate", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_retractor", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_scalpel", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_vacuum", 01, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_IV_16", 24, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_IO_FAST", 12, _order, _overflow] call EFUNC(common,addItem);
        _unit playActionNow "Stand";

    };

    if (ghost_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {

        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);

        _unit playActionNow "Stand";

    };

};
