#include "script_component.hpp"
/*
 * Author: BaerMitUmlaut, CPL.Brostrom.A
 * This function setup radios and apply radio channel to them on server and player.
 * Needs to be in init.sqf
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * call ymf_fnc_gear_setupRadios
 *
 * Public: No
 */

if (!EGVAR(Patches,usesACRE) && !EGVAR(Patches,usesTFAR)) exitWith {};
if (!EGVAR(Settings,enableRadios)) exitWith {};

// ACRE
if (EGVAR(patches,usesACRE)) exitWith {
    if (count allMissionObjects "acre_api_basicMissionSetup" > 0)  exitWith {};
    if (count allMissionObjects "acre_api_nameChannels" > 0)       exitWith {};

    SHOW_INFO("GearRadio","Setting up ACRE preset...");

    private _noProgram = ghost_radio_acreNoProgram; // config: radios that work differently and don't need programming
    // NB: the PRC-343 IS programmed (frequencyTX/RX per block channel) - it just has no label field (handled below)

    // remove non-programmable radios from the programming list
    private _srradios = []; private _mrradios = []; private _lrradios = [];
    {
        if (!(_x in _noProgram)) then {_srradios pushBackUnique _x};
    } forEach ghost_radio_srRadios;
    {
        if (!(_x in _noProgram)) then {_mrradios pushBackUnique _x};
    } forEach ghost_radio_mrRadios;
    {
        if (!(_x in _noProgram)) then {_lrradios pushBackUnique _x};
    } forEach ghost_radio_lrRadios;

    // define unused channels
    private _usedSRchannels = []; private _usedMRchannels = []; private _usedLRchannels = [];
    {_usedSRchannels pushBackUnique (_x#0);} forEach ghost_radio_srChannels;
    {_usedMRchannels pushBackUnique (_x#0);} forEach ghost_radio_mrChannels;
    {_usedLRchannels pushBackUnique (_x#0);} forEach ghost_radio_lrChannels;

    // SETUP CONFIG ///////////////////////////////////////////////////////////////////////////////////

    private _labelField = ghost_radio_acreLabelField; // config: which preset field holds the channel label, per radio

    {
        private _radioClass = _x;
        private _chanList = [];
        private _usedList = [];
        private _power = -1;
        if (_radioClass in _srradios) then {
            _chanList = ghost_radio_srChannels;
            _usedList = _usedSRchannels;
            _power = ghost_radio_srPower;
        };
        if (_radioClass in _mrradios) then {
            _chanList = ghost_radio_mrChannels;
            _usedList = _usedMRchannels;
            _power = ghost_radio_mrPower;
        };
        if (_radioClass in _lrradios) then {
            _chanList = ghost_radio_lrChannels;
            _usedList = _usedLRchannels;
            _power = ghost_radio_lrPower;
        };
        // get the field property relevant to the radio
        private _field = "";
        {
            if (_radioClass == _x#0) then {_field = _x#1};
        } forEach _labelField;

        {
            private _channel = _x#0;
            private _freq = _x#1;
            private _label = toUpper (_x#2); 

            // set frequencies
            [_radioClass, "default", _channel, "frequencyTX", _freq] call acre_api_fnc_setPresetChannelField;
            [_radioClass, "default", _channel, "frequencyRX", _freq] call acre_api_fnc_setPresetChannelField;

            // set transmit power (mW); -1 = leave ACRE stock
            if (_power > 0) then {
                [_radioClass, "default", _channel, "power", _power] call acre_api_fnc_setPresetChannelField;
            };

            if (_field != "") then { // radios with no label field (343, SEM52) are freq-only

                // // if the radio is a 148, append channel num to label (isn't on display)
                // if (_radioClass == "ACRE_PRC148") then {
                //     _label = format ["0%2-%1", _label, _channel];
                // };

                // set label
                [_radioClass, "default", _channel, _field, _label] call acre_api_fnc_setPresetChannelField;

            };
        } forEach _chanList;

        // label unused channels (skipped for freq-only radios like the 343)
        if (_field != "") then {
            private _numChannels = 100;
            { if (_radioClass == _x#0) exitWith {_numChannels = _x#1}; } forEach ghost_radio_acreChannelCount;
            
            for "_i" from 1 to _numChannels do {
                if (!(_i in _usedList)) then {
                    private _label = "";
                    if (_radioClass == "ACRE_PRC148") then {
                        _label = format ["UNUSED-%1", _i];
                    } else {
                        _label = "UNUSED";
                    };
                    [_radioClass, "default", _i, _field, _label] call acre_api_fnc_setPresetChannelField;
                };
            };
        };

    } forEach (_srradios + _mrradios + _lrradios);
};

// TFAR - push the SW/LR channel plans as the side defaults so issued radios inherit them.
// (Per-radio tuning to the player's own net happens in fn_setRadioChannel.)
if (EGVAR(patches,usesTFAR)) exitWith {
    ["west", "sr", ghost_radio_tfarSrFreqs] call TFAR_fnc_setSideRadioSettings;
    ["west", "lr", ghost_radio_tfarLrFreqs] call TFAR_fnc_setSideRadioSettings;
    SHOW_INFO("GearRadio","TFAR side radio frequencies set.");
};

SHOW_CHAT_ERROR("GearRadio","Fatal");
