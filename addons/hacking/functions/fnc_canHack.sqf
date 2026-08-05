#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_canHack

Description:
    Full gate for hacking. Three things, in cheapest-first order:

      1. the feature is enabled;
      2. the unit CARRIES one of the required items - the Intrusion Tablet by
         default, so hacking is a piece of kit somebody has to bring;
      3. the unit IS flagged ISR - the same flag Intel Hunt processing uses, so
         a mission marks its operators once.

    The self-interaction entry is gated on FUNC(hasTablet), which is step 1 and 2
    only. This function is the one that decides whether the tablet will actually
    do anything, and FUNC(tabletOpen) calls it to produce the refusal message.

    Kit and training are separate on purpose: picking the tablet off a body does
    not make you an operator, and being an operator with no tablet gets you
    nothing.

    Pure inventory and variable checks, so no items mod is a dependency: an
    unknown classname is simply never found.

Parameters:
    _unit : OBJECT - the player.
    _skipKit : BOOL - skip the carried-kit check (optional, default false). The
        cTab rugged tablet runs the intrusion suite as one of its own apps, and
        a player on that page is already holding a tablet - demanding a second
        one reads as the device asking for a different device. Training and the
        mission condition still apply.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit", ["_skipKit", false, [false]]];

if !(GVAR(enabled)) exitWith { false };

if (!_skipKit && {!([_unit] call FUNC(hasTablet))}) exitWith { false };

if (GVAR(requireISR) && {!([_unit] call EFUNC(common,isISR))}) exitWith { false };

private _src = GVAR(condition);
if (_src isEqualTo "" || {_src isEqualTo "true"}) exitWith { true };

if (_src isNotEqualTo (missionNamespace getVariable [QGVAR(conditionSource), ""])) then {
    GVAR(conditionSource) = _src;
    GVAR(conditionCode) = compile _src;
};

(_unit call GVAR(conditionCode)) isEqualTo true
