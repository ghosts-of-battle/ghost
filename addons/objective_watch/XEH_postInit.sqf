#include "script_component.hpp"

// Countdown warnings, side-filtered on the receiving client so the side that did
// not take the objective learns nothing from them.
[QGVAR(warn), {
    params ["_text", "_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    ["Objective", _text, [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
}] call CBA_fnc_addEventHandler;

// --- admin test commands ----------------------------------------------------
// Nearest watched OBJECTIVE, not nearest module - one module can watch dozens.
GVAR(nearestWatch) = {
    params ["_caller"];
    private _pos = getPosATL _caller;
    private _bestL = objNull;
    private _bestW = nil;
    private _bestD = 1e9;
    {
        private _logic = _x;
        {
            private _d = _pos distance2D (_x get "pos");
            if (_d < _bestD) then { _bestD = _d; _bestL = _logic; _bestW = _x };
        } forEach (_logic getVariable [QGVAR(watches), []]);
    } forEach (missionNamespace getVariable [QGVAR(logics), []]);
    if (isNil "_bestW") then { [] } else { [_bestL, _bestW, _bestD] }
};

["obj.capture", "force a capture on the nearest watched objective", {
    params ["_args", "_caller"];
    private _hit = [_caller] call GVAR(nearestWatch);
    if (_hit isEqualTo []) exitWith { "no objectives being watched" };
    _hit params ["_logic", "_watch", "_dist"];
    _watch set ["held", true];
    [_logic, _watch, side group _caller] call FUNC(onCaptured);
    format ["forced capture of '%1' at %2 (%3m away)",
        _watch get "name", mapGridPosition (_watch get "pos"), round _dist]
}] call EFUNC(common,addDebugCommand);

["obj.barrage", "fire the barrage now on the nearest watched objective, skipping the countdown", {
    params ["_args", "_caller"];
    private _hit = [_caller] call GVAR(nearestWatch);
    if (_hit isEqualTo []) exitWith { "no objectives being watched" };
    _hit params ["_logic", "_watch"];
    private _cfg = _logic getVariable QGVAR(cfg);
    private _disp = [_cfg, _watch] call FUNC(dispersionFor);
    [_watch get "pos", _cfg get "barrageRounds", _disp,
     _cfg get "barrageShell", _cfg get "barrageWindow"] call EFUNC(common,fireBarrage);
    format ["%1 rnd over %2s, %3m dispersion on '%4'",
        _cfg get "barrageRounds", _cfg get "barrageWindow", round _disp, _watch get "name"]
}] call EFUNC(common,addDebugCommand);

["obj.list", "list every watched objective and where it came from", {
    private _logics = missionNamespace getVariable [QGVAR(logics), []];
    if (_logics isEqualTo []) exitWith { "no Objective Watch module placed" };
    private _out = [];
    {
        {
            _out pushBack format ["%1 @ %2 r%3 held=%4",
                _x get "name", mapGridPosition (_x get "pos"), round (_x get "radius"), _x get "held"];
        } forEach (_x getVariable [QGVAR(watches), []]);
    } forEach _logics;
    if (_out isEqualTo []) then { "no objectives resolved" } else { _out joinString "  |  " }
}] call EFUNC(common,addDebugCommand);
