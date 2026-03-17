#include "..\script_component.hpp"

/*
 * Author: PDT
 * Gets the player's selected NVG effect and checks if ACE is running.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * <ARRAY> - Color correction array
 *
 * Example:
 * call Pghost_EnhancedNVG_fnc_getNvgEffect;
 */

private _effectSelection = ghost_nvg_Effect;
private _rawBlacklist = ghost_nvg_Blacklist; // comma-separated classnames
private _effect = [];

private _blacklist = [];
if (_rawBlacklist isEqualType []) then {
    _blacklist = _rawBlacklist;
} else {
    if (_rawBlacklist isNotEqualTo "") then {
        _blacklist = _rawBlacklist splitString ",";
        _blacklist = _blacklist apply {[_x] call BIS_fnc_trimString};
    };
};

if !((hmd player) in _blacklist) then {
    if (_effectSelection isNotEqualTo "") then {
        _effect = (
            configFile >> "CfgEffects" >> format [
                "%1%2",
                _effectSelection,
                ["", "Ace"] select ghost_nvg_ACE
            ]
        ) call BIS_fnc_returnConfigEntry; // selected effect
    };
};

_effect
