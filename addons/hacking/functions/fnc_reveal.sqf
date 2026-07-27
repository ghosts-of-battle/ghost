#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_reveal

Description:
    Triggers the "show active units" reveal on every machine via a CBA global
    event (see XEH_postInit) - each machine sets the GVAR(active) CBA variable and
    runs ALIVE_fnc_markUnits, so all players see the active + profiled unit markers.

Parameters:
    _unit : OBJECT - the hacker (for hint feedback only).

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_unit", objNull]];

[QGVAR(reveal)] call CBA_fnc_globalEvent;

if (!isNull _unit && {_unit isEqualTo ACE_player}) then {
    hint "Hack successful - active units revealed.";
};
