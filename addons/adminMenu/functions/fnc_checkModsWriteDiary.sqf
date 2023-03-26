#include "script_component.hpp"

if ((!hasInterface) || {isNull player}) exitWith {};

params ["_profileName", "_diaryEntry"];

if (!(player diarySubjectExists "GHOST")) then {
    player createDiarySubject ["GHOST", "GHOST"];
};
player createDiaryRecord ["GHOST", [format ["Mod Check: %1", _profileName], _diaryEntry]];
