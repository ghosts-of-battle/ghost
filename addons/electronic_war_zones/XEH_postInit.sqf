#include "script_component.hpp"

// --- Phase 1 admin test commands (see docs/DESIGN_INTEL_SYSTEM_PLAN.md §2) ---
["ew.zones", "dump the live EW zone registry", {
    private _z = ["all", [], true] call FUNC(getZones);
    if (_z isEqualTo []) exitWith { "no live zones" };
    (_z apply {
        _x params ["_id", "_type", "_pos", "_r", "_temp"];
        format ["%1 %2 r%3 @ %4%5", _id, _type, round _r, mapGridPosition _pos,
                ["", " TEMP"] select _temp]
    }) joinString "  |  "
}] call EFUNC(common,addDebugCommand);

["ew.temp", "spawn a temp jam zone on me: ew.temp [radius] [seconds]", {
    params ["_args", "_caller"];
    private _r = parseNumber (_args param [0, "800"]);
    private _d = parseNumber (_args param [1, "600"]);
    if (_r <= 0) then { _r = 800 };
    if (_d <= 0) then { _d = 600 };
    private _id = [getPosASL _caller, _r, _d] call FUNC(spawnTempZone);
    format ["temp zone %1: r%2 for %3s at %4", _id, round _r, round _d, mapGridPosition (getPosASL _caller)]
}] call EFUNC(common,addDebugCommand);

["ew.factor", "print the jamming factor at my position", {
    private _power = 0;
    if (GVAR(hasACRE)) then {
        private _cur = call acre_api_fnc_getCurrentRadio;
        if (_cur != "") then {
            private _i = _cur find "_ID_";
            private _base = if (_i > 0) then { _cur select [0, _i] } else { _cur };
            private _p = [_base, [_cur] call acre_api_fnc_getPreset, [_cur] call acre_api_fnc_getRadioChannel, "power"] call acre_api_fnc_getPresetChannelField;
            if (_p isEqualType 0) then { _power = _p };
        };
    };
    ([getPosASL player, _power] call FUNC(jamFactor)) params ["_f", "_zone"];
    format ["jamFactor %1 (power %2 mW) from zone %3", _f toFixed 3, _power,
            [_zone param [ZONE_ID, "-"], "none"] select (_zone isEqualTo [])]
}, true] call EFUNC(common,addDebugCommand);

["ew.hud", "force the jam meter to a value: ew.hud [0-1]", {
    params ["_args"];
    private _v = parseNumber (_args param [0, "0.6"]);
    GVAR(localJamFactor) = 0 max (_v min 1);
    format ["jam meter forced to %1 (next real tick overwrites it)", _v]
}, true] call EFUNC(common,addDebugCommand);

["ew.movehud", "reposition the jamming meter", {
    [JAM_HUD_ID, [JAM_HUD_W, JAM_HUD_H], [JAM_HUD_DEF_X, JAM_HUD_DEF_Y], "JAM"] call EFUNC(common,hudMove);
    "drag it, then Save"
}, true] call EFUNC(common,addDebugCommand);

// --- Phase 5 admin test commands -------------------------------------------
["ew.rdf", "print an RDF sweep from my position, ignoring the item gate", {
    params ["_args", "_caller"];
    private _r = [_caller] call FUNC(rdfScan);
    if (_r isEqualTo []) exitWith { "no emissions in scan range" };
    _r params ["", "_label", "_bearing", "_band", "_strength"];
    format ["%1 - bearing %2, approx %3 m, signal %4%5", _label, _bearing, _band, _strength, "%"]
}, true] call EFUNC(common,addDebugCommand);

["ew.uav", "toggle UAV jamming on the nearest zone: ew.uav [on|off]", {
    params ["_args", "_caller"];
    private _reg = missionNamespace getVariable [QGVAR(jammers), []];
    if (_reg isEqualTo []) exitWith { "no zones registered" };

    private _pos = getPosASL _caller;
    private _best = _reg select 0;
    private _bestD = 1e9;
    {
        private _o = _x param [ZONE_OBJ, objNull];
        private _zp = if (isNull _o) then { _x param [ZONE_POS, [0,0,0]] } else { getPosASL _o };
        private _d = _pos distance2D _zp;
        if (_d < _bestD) then { _bestD = _d; _best = _x };
    } forEach _reg;

    private _arg = toLower (_args param [0, "on"]);
    private _on = _arg isNotEqualTo "off";
    (_best param [ZONE_MODEL, createHashMap]) set ["jamUavs", _on];
    missionNamespace setVariable [QGVAR(jammers), _reg, true];
    format ["zone %1 jam_uavs = %2 (%3m away)", _best param [ZONE_ID, "?"], _on, round _bestD]
}] call EFUNC(common,addDebugCommand);

// --- Phase 7 admin test command --------------------------------------------
["ew.chatter", "force an AI transmission near me, ignoring the module toggle", {
    params ["_args", "_caller"];
    if (isNil QGVAR(huntedSide)) exitWith { "no Electronic War Zones module placed" };

    private _pos = getPosASL _caller;
    private _cands = allUnits select {
        alive _x && {!isPlayer _x}
        && {side (group _x) isEqualTo GVAR(huntedSide)}
        && {(getPosASL _x) distance2D _pos <= AI_CHATTER_RANGE}
    };
    if (_cands isEqualTo []) exitWith { "no hunted-side AI within range" };

    private _talker = selectRandom _cands;
    [_talker, getPosASL _talker] call FUNC(onDetection);
    format ["%1 transmitted at %2 - detector in range: %3",
        typeOf _talker, mapGridPosition (getPosASL _talker),
        [getPosASL _talker] call FUNC(hasDetector)]
}] call EFUNC(common,addDebugCommand);
