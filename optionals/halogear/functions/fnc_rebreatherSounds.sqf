#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_rebreatherSounds

Description:
    Loops muffled breathing audio for as long as the given class stays equipped
    in the slot it was found in. The GVAR(playRebreatherSounds) setting silences
    this for third-party gear, but never for this addon's own masks -- wearing
    one of those is meant to be audible.

Parameters:
    _class : STRING - the goggles or headgear class that was just equipped.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_class", "", [""]]];

private _alwaysAudible = [QGVAR(mask), QGVAR(maskNoESS)];
if (!GVAR(playRebreatherSounds) && {!(goggles player in _alwaysAudible)}) exitWith {
    TRACE_1("rebreather sounds disabled for class",_class);
};

// figure out which slot it went in, so the loop stops when it comes back off
private _isGoggles = (_class == goggles player);
if (!_isGoggles && {_class != headgear player}) exitWith {
    TRACE_1("class is neither facewear nor goggles, no sounds",_class);
};

private _condition = if (_isGoggles) then {
    { (goggles player) == _this }
} else {
    { (headgear player) == _this }
};

[_condition, _class] spawn {
    params ["_condition", "_class"];
    while {_class call _condition} do {
        playSound (selectRandom [
            QGVAR(breathing1), QGVAR(breathing2), QGVAR(breathing3), QGVAR(breathing4),
            QGVAR(breathing5), QGVAR(breathing6), QGVAR(breathing7)
        ]);
        uiSleep (random [6, 8, 10]);
    };
};
