#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_initPlayerEvents

Description:
    Wires up everything client-side, once, at postInit:

      - arms the hypoxia and freefall watchers in whichever direction matches
        the state the player starts in, so a mission that begins mid-jump behaves;
      - hooks the resulting CBA events to the suffocation, AAD and ACE-attach
        handlers;
      - re-tests for air whenever the player leaves a vehicle or their inventory
        changes, and starts the breathing loop when a mask goes on;
      - reacts to ACE glasses events: swaps a cracked mask for the broken class,
        redraws the HUD, restarts the audio.

Parameters:
    None.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if (!hasInterface) exitWith {};

// --- arm the watchers to match the state we start in -----------------------
if (((getPosASL player) select 2) < GVAR(hypoxiaAltitude)) then {
    [true] call FUNC(watchHypoxia);
} else {
    [false] call FUNC(watchHypoxia);
    [] call FUNC(hypoxiaEffects);
};

[!([player] call FUNC(isFreeFalling))] call FUNC(watchFreefall);

// --- our own events --------------------------------------------------------
[QGVAR(aboveHypoxia), { [] call FUNC(hypoxiaEffects) }] call CBA_fnc_addEventHandler;

[QGVAR(freefallStarted), {
    TRACE_1("freefall started",player);
    call FUNC(aadOpening);
    call FUNC(randomBreakingChance);
}] call CBA_fnc_addEventHandler;

[QGVAR(freefallEnded), {
    TRACE_1("freefall ended",player);
    call FUNC(attachAceAttachable);
}] call CBA_fnc_addEventHandler;

// --- re-test air supply on the events that can change it -------------------
player addEventHandler ["GetOutMan", {
    params ["_unit"];
    if (_unit isEqualTo player) then { [] call FUNC(hypoxiaEffects) };
}];

player addEventHandler ["Take", {
    params ["_unit", "", "_item"];
    if (_unit isNotEqualTo player) exitWith {};
    [] call FUNC(hypoxiaEffects);
    if ([_item] call FUNC(isProtectiveGear)) then { [_item] call FUNC(rebreatherSounds) };
}];

player addEventHandler ["Put", {
    params ["_unit"];
    if (_unit isEqualTo player) then { [] call FUNC(hypoxiaEffects) };
}];

// --- ACE goggles ------------------------------------------------------------
["ace_glassesChanged", {
    params ["", "_goggles"];
    if ([_goggles] call FUNC(isProtectiveGear)) then { [_goggles] call FUNC(rebreatherSounds) };
    [] call FUNC(hypoxiaEffects);   // in case the mask changed mid-air
    call FUNC(maskHud);
}] call CBA_fnc_addEventHandler;

["ace_glassesCracked", {
    if (goggles player == QGVAR(mask)) then {
        removeGoggles player;
        player addGoggles QGVAR(maskBroken);
    };
    [] call FUNC(hypoxiaEffects);
}] call CBA_fnc_addEventHandler;

// --- already wearing something when the mission starts ---------------------
if ([goggles player] call FUNC(isProtectiveGear)) then { [goggles player] call FUNC(rebreatherSounds) };
if ([headgear player] call FUNC(isProtectiveGear)) then { [headgear player] call FUNC(rebreatherSounds) };

TRACE_1("halo gear event handlers initialised",player);
