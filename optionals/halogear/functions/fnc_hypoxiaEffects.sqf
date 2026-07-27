#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_hypoxiaEffects

Description:
    Runs the suffocation sequence on the local player: blur, desaturation and
    cam shake ramping up over ~50 s with damage ticks and gasping audio, then
    unconsciousness. If they are still above the hypoxia altitude with no air
    supply when they come round, it repeats with _coef reduced by 0.1 -- so each
    cycle is faster and harsher until _coef drops below 0.1, which kills them.

    Bails out at every step (and clears the effects) the moment the player gets
    an air supply or drops below the hypoxia altitude.

Parameters:
    _coef : NUMBER - severity/time scale, 1 = first exposure. (default: 1)

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_coef", 1, [0]]];

if (!hasInterface) exitWith {};
if (_coef < 0.1) exitWith { player setDamage 1 };

// stop condition, re-tested between every stage
private _fnc_safe = {
    (call FUNC(hasProtectiveGear)) || {((getPosASL player) select 2) < GVAR(hypoxiaAltitude)}
};

if (call _fnc_safe) exitWith { player setVariable [QGVAR(suffocationEnded), true] };
player setVariable [QGVAR(suffocationEnded), false];

// --- post-process effects, each torn down when suffocation ends -------------
{
    _x params ["_name", "_priority", "_effect"];
    [_name, _priority, _effect, _coef] spawn {
        params ["_name", "_priority", "_effect", "_coef"];
        private _handle = ppEffectCreate [_name, _priority];
        _handle ppEffectEnable true;
        _handle ppEffectForceInNVG true;
        _handle ppEffectAdjust _effect;
        _handle ppEffectCommit (50 * _coef);
        waitUntil {player getVariable [QGVAR(suffocationEnded), false]};
        _handle ppEffectEnable false;
        ppEffectDestroy _handle;
    };
} forEach [
    ["RadialBlur", 1001, [0.5, 0.5, 0.5, 0.5]],
    ["DynamicBlur", 100, [0.5]],
    ["ColorCorrections", 1500, [0, 0.4, 0, [0, 0, 0, 0], [1, 1, 1, 0], [1, 1, 1, 0]]]
];

enableCamShake true;

// --- the sequence itself ---------------------------------------------------
[_coef, _fnc_safe] spawn {
    params ["_coef", "_fnc_safe"];

    private _fnc_hurt = {
        [player, "body", 0.1, objNull, "unknown", 0.1, objNull] call ace_medical_fnc_handleDamage;
    };

    // [cam shake params, sound, seconds to hold, damage first?]
    private _stages = [
        [[1, 2, 1], QGVAR(suffocating1), 10, false],
        [[3, 4, 3], QGVAR(suffocating2), 15, true],
        [[5, 10, 3], QGVAR(suffocating3), 10, true],
        [[2, 5, 3], QGVAR(suffocating4), 10, true],
        [[5, 5, 5], QGVAR(suffocating5), 5, true]
    ];

    {
        if (call _fnc_safe) exitWith {};
        _x params ["_shake", "_sound", "_hold", "_hurt"];
        if (_hurt) then { call _fnc_hurt };
        addCamShake _shake;
        playSound _sound;
        sleep (_hold * _coef);
    } forEach _stages;

    if (call _fnc_safe) exitWith { player setVariable [QGVAR(suffocationEnded), true] };
    call _fnc_hurt;

    // clear the effects before going under, then try again on waking
    player setVariable [QGVAR(suffocationEnded), true];
    [player, true, (70 * _coef), false] call ace_medical_fnc_setUnconscious;
    sleep (70 * _coef);

    if (call _fnc_safe) exitWith {};
    [_coef - 0.1] call FUNC(hypoxiaEffects);
};
