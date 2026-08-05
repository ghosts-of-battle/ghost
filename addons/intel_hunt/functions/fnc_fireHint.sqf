#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_fireHint

Description:
    Draws the hint for the current target. The circle is deliberately off-centre:
    it is placed at a random bearing from the target, offset by up to 60% of the
    radius, which guarantees the target is inside it but never at the middle. You
    get a search area, not a pin.

    Radius comes from the tier list; past the end of the list the last radius
    repeats (D15), so a hunt cannot narrow to nothing through sheer persistence.

Returns:
    BOOL - true if a hint was drawn.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith { false };

private _target = GVAR(targets) param [GVAR(index), objNull];
if (isNull _target || {!alive _target}) exitWith { false };

private _radii = GVAR(radii);
private _radius = _radii select ((GVAR(tier)) min (count _radii - 1));

private _tpos = getPosATL _target;
private _bearing = random 360;
private _offset = random (_radius * IH_OFFSET_FRAC);
private _centre = _tpos getPos [_offset, _bearing];

[QGVAR(hint), [
    format [QGVAR(h%1_%2), GVAR(index), GVAR(tier)],
    _centre, _radius, GVAR(markerAlpha), GVAR(markerDuration), GVAR(fade), GVAR(side)
]] call CBA_fnc_globalEvent;

INFO_3("Intel Hunt: hint tier %1 for target %2, radius %3",GVAR(tier),GVAR(index),_radius);
true
