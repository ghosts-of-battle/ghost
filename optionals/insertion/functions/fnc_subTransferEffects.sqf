#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_subTransferEffects

Description:
    Plays the submarine transfer audio and splash screen.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_unit"];
	if (_unit isNotEqualTo ACE_player) exitWith {}; // safety against multiple exec
	if !(hasInterface) exitWith {}; // double surfaceType
	playSound QGVAR(subAmbiant);
	[] spawn {[16] call FUNC(splashScreen);};
	sleep 16;
	hintC (localize "STR_GHOST_Insertion_SubTakeLocMess");
