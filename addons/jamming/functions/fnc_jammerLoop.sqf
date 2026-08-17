#include "script_component.hpp"
/*
 * Author: Ghost
 * Client-local jam evaluation (CBA PFH). Finds the strongest in-range emitter and
 * applies graduated interference to THIS player's own radio - jamming is inherently
 * client-local (the server cannot set another client's radio vars). Resets to clear
 * when no emitter is in range. Levers + falloff adapted from Crows-EW (APL-SA).
 *
 * The band selectivity ("LR jammed, SR safe") is emergent: these are distance
 * multipliers applied to all bands, but SR's short base range survives the multiplier
 * while LR does not. Tune emitter radius in-game to balance this.
 *
 * Arguments (CBA PFH): unused
 *
 * Return Value: None
 *
 * Public: No
 */

if (isNil QGVAR(jammers)) exitWith {};

private _ppos = getPosASL player;

// Everything about WHERE a jammer reaches now lives in FUNC(jamFactor); this
// loop only decides what to do with the answer. With the model attributes at
// their defaults the factor is the old inline maths exactly, so TFAR and ACRE
// see the values they always saw.
private _radioPower = 0;
if (GVAR(hasACRE) && GVAR(jamBurnthrough)) then {
    private _cur = call acre_api_fnc_getCurrentRadio;
    if (_cur != "") then {
        private _i = _cur find "_ID_";
        private _base = if (_i > 0) then { _cur select [0, _i] } else { _cur };
        private _p = [_base, [_cur] call acre_api_fnc_getPreset, [_cur] call acre_api_fnc_getRadioChannel, "power"] call acre_api_fnc_getPresetChannelField;
        if (_p isEqualType 0) then { _radioPower = _p };
    };
};

private _factor = ([_ppos, _radioPower] call FUNC(jamFactor)) select 0;

private _bestRx = TFAR_RX_FALLOFF_FAR;   // 1 = no jam
private _bestTx = 1;
private _bestAcre = ACRE_JAM_FAR;        // 0 = no jam (fraction of ACRE signal removed)

if (_factor > 0) then {
    // factor 1 == inside the core; anything less is the falloff band, where
    // _p is the old 0..1 position across it.
    private _inCore = _factor >= 1;
    private _p = 1 - _factor;

    if (GVAR(hasTFAR)) then {
        _bestRx = if (_inCore) then {
            TFAR_RX_FULL
        } else {
            [TFAR_RX_FALLOFF_NEAR, TFAR_RX_FALLOFF_FAR, _p] call BIS_fnc_lerp
        };
        _bestTx = if (_inCore) then { TFAR_TX_FULL } else { 1 / (_bestRx max 0.0001) };
    };

    if (GVAR(hasACRE)) then {
        _bestAcre = if (_inCore) then {
            ACRE_JAM_FULL
        } else {
            [ACRE_JAM_NEAR, ACRE_JAM_FAR, _p] call BIS_fnc_lerp
        };
    };
};

// Published for the jamming HUD (Part 3 Â§3) - no second evaluation there.
GVAR(localJamFactor) = _factor;

if (GVAR(hasTFAR)) then {
    player setVariable ["tf_receivingDistanceMultiplicator", _bestRx];
    player setVariable ["tf_sendingDistanceMultiplicator", _bestTx];
};
// ACRE2: the registered custom signal func (see clientInit) reads this live jam
// fraction (0 = clear .. ~0.98 = smothered) and scales received strength by it.
if (GVAR(hasACRE)) then {
    GVAR(acreJam) = _bestAcre;
};

// The ACRE DF hunt that used to live here is gone, for two verified
// reasons: its QGVAR(detection) serverEvent had no listener anywhere - a
// dead raise - and the reaction addon already polls the same rising edge
// with the SATCOM exemption and the watts threshold this raw raise skipped.
// One transmission watch, in one addon, on one gate.
