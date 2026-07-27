#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_canDetachSDV

Description:
    Can this SDV cast off from the parent submarine? Driver-only, near-stationary.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_sdv"];
	private _isAttached = _sdv getVariable [QGVAR(isAttachedToSub),false];
	private _protPilot = _sdv getVariable [QGVAR(leadSDV),objNull];
	(((driver _sdv) isEqualTo ACE_player) && ((speed _protPilot) < 2) && _isAttached)
