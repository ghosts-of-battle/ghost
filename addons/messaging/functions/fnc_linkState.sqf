#include "script_component.hpp"
/*
 * Author: Ghost
 * The data link's state at this player's position: ONLINE, DEGRADED or DENIED,
 * read off the jamming registry's own field strength.
 *
 * ONE CALCULATOR, THE SCANNER'S BANDS. The number is EFUNC(jamming,jamFactor)'s
 * - the same read the radios, the jamming HUD and the EW scanner take - and the
 * bands are the scanner's NET STATE bands (0.75 is where USABLE-DEGRADED-
 * SMOTHERED turns over), so the handset, the JAM tile and the reader can never
 * disagree about whether the net is up.
 *
 * Without the jamming addon, or with the EW link setting off, the link is
 * simply ONLINE - messaging keeps working on a mission that loads neither.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: State - 0 online, 1 degraded, 2 denied <NUMBER>
 * 1: Jamming factor 0..1 at this position <NUMBER>
 *
 * Example:
 * ([] call ghost_messaging_fnc_linkState) params ["_link", "_factor"]
 *
 * Public: Yes
 */

if (!hasInterface
    || {isNull player}
    || {!GVAR(ewLink)}
    || {isNil QEFUNC(jamming,jamFactor)}) exitWith {[0, 0]};

private _factor = ([getPosASL player] call EFUNC(jamming,jamFactor)) select 0;

switch (true) do {
    case (_factor <= 0): {[0, 0]};
    case (_factor >= 0.75): {[2, _factor]};
    default {[1, _factor]};
}
