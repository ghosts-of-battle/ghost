#include "\z\ghost\addons\adminmenu\script_component.hpp"

params [["_langsToAdd", []], ["_langsToRemove", []]];

private _spokenLangs = (call acre_sys_core_fnc_getSpokenLanguages) - _langsToRemove;
_spokenLangs append _langsToAdd;

if (count _spokenLangs == 0) exitWith {
    systemChat "[Ghosts of Battle Admin Menu] Failed to assign ACRE2 languages";
};

private _spokenLangsIds = _spokenLangs apply {[_x] call acre_sys_core_fnc_getLanguageId};
ACRE_SPOKEN_LANGUAGES = _spokenLangsIds;
[_spokenLangs select 0] call acre_sys_core_fnc_setSpeakingLanguage;

systemChat "[Ghosts of Battle Admin Menu] New ACRE2 babel language(s) assigned";
