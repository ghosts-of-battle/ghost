#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_isProtectiveGear

Description:
    Is this classname one of the supplied-oxygen sources found at mission start
    by FUNC(parseProtectiveGear)?

Parameters:
    _className : STRING - goggles, headgear or vehicle classname.

Returns:
    BOOL

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_className", "", [""]]];

_className in (missionNamespace getVariable [QGVAR(protectiveGear), []])
