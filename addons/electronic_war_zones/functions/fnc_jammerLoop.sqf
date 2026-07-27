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

private _jammers = GVAR(jammers);
private _ppos = getPosASL player;

private _bestRx = TFAR_RX_FALLOFF_FAR;   // 1 = no jam
private _bestTx = 1;
private _bestAcre = ACRE_JAM_FAR;        // 0 = no jam (fraction of ACRE signal removed)

{
    _x params ["_obj", "_rEff", "_rFall"];
    if (isNull _obj || {!alive _obj}) then { continue };

    private _d = _ppos distance (getPosASL _obj);
    if (_d > _rFall) then { continue };

    private _inCore = _d <= _rEff;
    private _p = if (_inCore) then { 0 } else { (_d - _rEff) / ((_rFall - _rEff) max 1) };

    if (GVAR(hasTFAR)) then {
        private _rx = if (_inCore) then {
            TFAR_RX_FULL
        } else {
            [TFAR_RX_FALLOFF_NEAR, TFAR_RX_FALLOFF_FAR, _p] call BIS_fnc_lerp
        };
        if (_rx > _bestRx) then {
            _bestRx = _rx;
            _bestTx = if (_inCore) then { TFAR_TX_FULL } else { 1 / (_rx max 0.0001) };
        };
    };

    if (GVAR(hasACRE)) then {
        private _jf = if (_inCore) then {
            ACRE_JAM_FULL
        } else {
            [ACRE_JAM_NEAR, ACRE_JAM_FAR, _p] call BIS_fnc_lerp
        };
        if (_jf > _bestAcre) then { _bestAcre = _jf };
    };
} forEach _jammers;

if (GVAR(hasTFAR)) then {
    player setVariable ["tf_receivingDistanceMultiplicator", _bestRx];
    player setVariable ["tf_sendingDistanceMultiplicator", _bestTx];
};
// ACRE2: the registered custom signal func (see clientInit) reads this live jam
// fraction (0 = clear .. ~0.98 = smothered) and scales received strength by it.
if (GVAR(hasACRE)) then {
    GVAR(acreJam) = _bestAcre;

    // ACRE2 raises no transmit event, so DF key-downs by polling on the rising edge.
    // Detection is POWER-based: only transmissions whose live channel power (mW) meets
    // the threshold are hunted, so low-power squad traffic (and manpacks dialled down)
    // stay safe. Channel power lives in the radio's current preset/channel config.
    private _tx = [player] call acre_api_fnc_isBroadcasting;
    if (_tx && {!GVAR(acreWasTx)}) then {
        private _cur = call acre_api_fnc_getCurrentRadio;
        if (_cur != "") then {
            private _i = _cur find "_ID_";
            private _base = if (_i > 0) then { _cur select [0, _i] } else { _cur };
            private _preset = [_cur] call acre_api_fnc_getPreset;
            private _chan = [_cur] call acre_api_fnc_getRadioChannel;
            private _power = [_base, _preset, _chan, "power"] call acre_api_fnc_getPresetChannelField;
            if (_power isEqualType 0 && {_power >= GVAR(acrePowerMin)}) then {
                [QGVAR(detection), [player, getPosASL player]] call CBA_fnc_serverEvent;
            };
        };
    };
    GVAR(acreWasTx) = _tx;
};
