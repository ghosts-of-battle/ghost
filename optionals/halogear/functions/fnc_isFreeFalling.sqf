#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_isFreeFalling

Description:
    Is the unit in freefall? Requires them to be out of any vehicle, off the
    ground, above sea level and more than 50 m above the terrain -- the last
    check keeps a jump or a fall off a building from counting.

Parameters:
    _unit : OBJECT

Returns:
    BOOL

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

!(isTouchingGround _unit)
    && {isNull (objectParent _unit)}
    && {((getPosASL _unit) select 2) > 0.1}
    && {((getPosATL _unit) select 2) > 50}
