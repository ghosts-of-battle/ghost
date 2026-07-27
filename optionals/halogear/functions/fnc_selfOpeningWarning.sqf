#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_selfOpeningWarning

Description:
    AAD cockpit warnings. "warning" is the approach alert: four sets of beeps,
    plus red flashing text on the mask HUD that clears once the trigger altitude
    is passed. "triggered" is the deployment cue: a beep, the canopy report and
    a green banner for 5 s.

    Both banners only appear with the ESS mask on; the audio always plays.

Parameters:
    _type : STRING - "warning" or "triggered".

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_type", "warning", [""]]];

private _fnc_banner = {
    params ["_text"];
    private _display = uiNamespace getVariable ["ACE_Goggles_Display", displayNull];
    if (isNull _display) exitWith { controlNull };
    private _ctrl = _display ctrlCreate ["RscStructuredText", -1];
    _ctrl ctrlSetPosition [
        0.298906 * safeZoneW + safeZoneX,
        0.269 * safeZoneH + safeZoneY,
        0.397031 * safeZoneW,
        0.066 * safeZoneH
    ];
    _ctrl ctrlCommit 0;
    _ctrl ctrlSetStructuredText parseText _text;
    _ctrl
};

switch (toLower _type) do {
    case "warning": {
        if (goggles player == QGVAR(mask)) then {
            [_fnc_banner] spawn {
                params ["_fnc_banner"];
                private _trigger = parseNumber (player getVariable [QGVAR(aadOpeningAlt), str GVAR(aadDefaultAltitude)]);
                private _ctrl = [format [
                    "<t color='#ff0000'><t size='1.5'><t font='LucidaConsoleB'><t align='center'>%1</t>",
                    LLSTRING(aadWarning)
                ]] call _fnc_banner;
                if (isNull _ctrl) exitWith {};

                // flash until we drop through the trigger altitude
                while {((getPosASL player) select 2) > _trigger} do {
                    _ctrl ctrlSetFade 0; _ctrl ctrlCommit 0.1; sleep 0.1;
                    _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0.1; sleep 0.1;
                };
                ctrlDelete _ctrl;
            };
        };

        [] spawn {
            for "_i" from 0 to 3 do {
                playSound QGVAR(fiveBeeps);
                uiSleep 1;
            };
        };
    };

    case "triggered": {
        if (goggles player == QGVAR(mask)) then {
            private _ctrl = [format [
                "<t color='#008000'><t size='1.5'><t font='LucidaConsoleB'><t align='center'>%1</t>",
                LLSTRING(aadTriggered)
            ]] call _fnc_banner;
            if (!isNull _ctrl) then {
                [{ ctrlDelete (_this select 0) }, [_ctrl], 5] call CBA_fnc_waitAndExecute;
            };
        };

        playSound QGVAR(beep);
        playSound QGVAR(airBurst);
    };
};
