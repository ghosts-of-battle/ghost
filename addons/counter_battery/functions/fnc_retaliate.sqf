#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_retaliate

Description:
    The reply lands. Nothing here re-checks where the gun is now, on purpose -
    see FUNC(onFired): the fix is a snapshot, and a crew that moved has beaten
    it.

    Delivery is the shared barrage helper, so counter-battery, ambient shelling
    and objective reactions all put rounds on the ground the same way.

Parameters:
    _fix  : ARRAY    - where the radar thinks the gun is.
    _cfg  : HASHMAP  - the battery's settings.
    _side : SIDE     - who was fired on, for the impact warning.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_fix", "_cfg", "_side"];

// Do not shell our own. The fix is a snapshot taken up to a minute ago, and in
// that time the position may have been overrun by the people who called the
// mission - dropping the reply on them is the one outcome that makes the whole
// feature a liability rather than a threat.
private _safe = _cfg get "safeRadius";
if (_safe > 0) then {
    // Anything HOSTILE to the hunted side is, by definition, on the hunting
    // side - our own people standing on the target.
    private _blocked = ((allUnits + vehicles) findIf {
        alive _x
        && {(_x distance2D _fix) < _safe}
        && {((side _x) getFriend _side) < 0.6}
    }) > -1;

    if (_blocked) exitWith {
        if (_cfg get "debug") then {
            diag_log text format
                ["[ghost_counter_battery] HOLD at grid %1 - no hostiles left there, own troops likely",
                mapGridPosition _fix];
        };
        if (_cfg get "warn") then {
            [QGVAR(warn), ["Counter-Battery", "Counter-battery mission cancelled - friendlies on the grid.", [0.6, 1, 0.6, 1], _side]]
                call CBA_fnc_globalEvent;
        };
    };
};

[_fix, _cfg get "rounds", _cfg get "spread", _cfg get "shell", _cfg get "window"]
    call EFUNC(common,fireBarrage);

if (_cfg get "warn") then {
    [QGVAR(warn), ["Counter-Battery", "Rounds inbound on your last firing position.", [1, 0.5, 0.2, 1], _side]]
        call CBA_fnc_globalEvent;
};
