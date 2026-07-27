#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_canHack

Description:
    Gate for the Hack self-interaction: the feature is enabled, the unit carries
    at least ONE of the required items (GVAR(requiredItems) CBA setting, a
    comma-separated list) in normal inventory or an assigned slot, and the
    GVAR(condition) setting evaluates true. Pure inventory check - no dependency
    on any items mod.

    The condition is an SQF string typed into the setting, run with the unit as
    `_this`. It is compiled once and only recompiled when the text changes, since
    this runs on every ACE self-interaction menu build.

Parameters:
    _unit : OBJECT - the player.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

if !(GVAR(enabled)) exitWith { false };

private _required = (GVAR(requiredItems) splitString ", ") select { _x != "" };
if (_required isEqualTo []) exitWith { false };

private _carried = (items _unit) + (assignedItems _unit);
if ((_required arrayIntersect _carried) isEqualTo []) exitWith { false };

private _src = GVAR(condition);
if (_src isEqualTo "" || {_src isEqualTo "true"}) exitWith { true };

if (_src isNotEqualTo (missionNamespace getVariable [QGVAR(conditionSource), ""])) then {
    GVAR(conditionSource) = _src;
    GVAR(conditionCode) = compile _src;
};

(_unit call GVAR(conditionCode)) isEqualTo true
