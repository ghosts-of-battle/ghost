#include "script_component.hpp"

if (!hasInterface) exitWith {};

// Full-size apps a tile or a reader hand-off opens. Anything not registered is
// a no-op rather than an error, so a tile for an app that does not exist yet
// sits there inert instead of throwing.
["comms", FUNC(appComms)] call EFUNC(tacpad,registerApp);

["squad", FUNC(appSquad)] call EFUNC(tacpad,registerApp);
["weather", FUNC(appWeather)] call EFUNC(tacpad,registerApp);

// The other three tiles. Every tile on the band now opens something - a tile
// that logs "no app registered" and does nothing is the exact failure this
// suite has spent the week chasing.

// The whole sweep on one page - the tile band's sixth tile opens it.
["scanner", FUNC(appScanner)] call EFUNC(tacpad,registerApp);

// Drones and jamming are two different things with a page each - the DRONES
// tile opens one, the JAM tile the other. The scanner stays the whole-sweep
// view.
["drones", FUNC(appDrones)] call EFUNC(tacpad,registerApp);
["jam", FUNC(appJamming)] call EFUNC(tacpad,registerApp);

// TAC//SUPPORT - ALiVE combat support fronted through the adapter, gated by
// a messaging tag rather than a role tree.
["support", FUNC(appSupport)] call EFUNC(tacpad,registerApp);

// The player's own clock, off the band.
["timer", FUNC(appTimer)] call EFUNC(tacpad,registerApp);
["radio", FUNC(appRadio)] call EFUNC(tacpad,registerApp);

// A message arriving while the map is open should show up in the docked reader.
//
// BOTH EVENTS. This listened to `received` only, which is traffic addressed to
// this player - and a message filed to a shared channel reaches its own sender
// on the QUIET path, as `indexRefreshed`. So sending to a channel updated
// nothing on screen until something else forced a redraw.
{
    [_x, {
        if (!isNull (findDisplay IDD_MAP)) then {
            ["reader"] call EFUNC(tacpad,rebuild);
        };
    }] call CBA_fnc_addEventHandler;
} forEach [QEGVAR(messaging,received), QEGVAR(messaging,indexRefreshed)];

// The map closing drops the reader back to the list. A thread left open across
// two map opens is a panel showing something the player has forgotten they
// asked for.
addMissionEventHandler ["Map", {
    params ["_opened"];
    if (!_opened) then {
        GVAR(readerThread) = "";

        // THE SHELL'S VARIABLE, not this addon's. The line below it already had
        // it right; this one was clearing ghost_tacpad_apps_appGroup, which
        // nothing reads, and leaving the shell still holding a deleted control.
        uiNamespace setVariable [QEGVAR(tacpad,appGroup), controlNull];

        // And nothing is the open app, so no refresh loop comes back with the
        // map next time - see EFUNC(tacpad,openApp).
        uiNamespace setVariable [QEGVAR(tacpad,appCurrent), ""];

        // The map control goes with the display and takes any tool's Draw
        // handler with it, so the strip must not come back still claiming one
        // is running - the id it held is meaningless against a new control.
        GVAR(activeTool) = "";
        uiNamespace setVariable [QGVAR(toolEH), nil];
    };
}];

// THE DELIVERY RECEIPT from the adapter: the combat-support FSM consumed the
// order (or never did, after 20s). Lands in the support screen's verdict row
// and the notify rail, and forces a redraw so it shows the moment it arrives
// rather than on the next poll tick.
[QEGVAR(adapter_alive,supportAck), {
    params [["_assetId", ""], ["_ok", true], ["_said", ""]];
    missionNamespace setVariable [QGVAR(supportFlash), [_said, _ok, CBA_missionTime]];
    ["SUPPORT", _said, ["high", "normal"] select _ok] call EFUNC(messaging,notify);
    if (!isNull (uiNamespace getVariable [QGVAR(supportDlg), displayNull])) then {
        {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
    };
}] call CBA_fnc_addEventHandler;

// The intrusion suite reached from its own tile, and repainted to match
// everything around it. hacking announces its dialog rather than styling it, so
// the suite still works with no tacpad loaded - see fnc_themeTablet.
["hack", FUNC(appHack)] call EFUNC(tacpad,registerApp);
["settings", FUNC(appSettings)] call EFUNC(tacpad,registerApp);

[QEGVAR(hacking,tabletOpened), LINKFUNC(themeTablet)] call CBA_fnc_addEventHandler;

// Each client publishes its own radio channel, because neither ACRE nor TFAR
// will answer for anybody but the caller - see FUNC(radioState). Five seconds is
// slower than a man can retune and far slower than it matters.
[LINKFUNC(radioPublish), 5, []] call CBA_fnc_addPerFrameHandler;
