#include "script_component.hpp"
/*
 * Author: Ghost
 * Server side of contact tracking: remembers where and when a fight happened,
 * so the QRF watcher can tell a squad resting on a battlefield from one that
 * simply stopped. Raised by clients (throttled) when a player opens fire or is
 * hit. Marks near an existing one just refresh its timestamp - a firefight is
 * one contact, not two hundred.
 *
 * Arguments:
 * 0: Position <ARRAY>
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_pos"];

private _idx = GVAR(contactMarks) findIf {(_x select 0) distance2D _pos < QRF_CONTACT_RANGE};

if (_idx == -1) then {
    GVAR(contactMarks) pushBack [_pos, time];
} else {
    (GVAR(contactMarks) select _idx) set [1, time];
};
